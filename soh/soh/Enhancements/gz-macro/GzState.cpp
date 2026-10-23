#include "GzState.h"
#include "GzStateFile.h"

#include <filesystem>

#include <spdlog/spdlog.h>
#include <ship/Context.h>
#include <ship/window/Window.h>
#include <libultraship/bridge/consolevariablebridge.h>

#include "soh/cvar_prefixes.h"
#include "soh/OTRGlobals.h"
#include "soh/ResourceManagerHelpers.h"
#include "soh/Enhancements/game-interactor/GameInteractor.h"
#include "soh/SohGui/SohGui.hpp"
#include "soh/SohGui/UIWidgets.hpp"
#include "soh/WebFiles.h"

extern "C" {
#include "z64.h"
#include "macros.h"
#include "variables.h"
#include "functions.h"
extern PlayState* gPlayState;
void Sram_InitDebugSave(void);
// Ends whatever Link is doing and leaves him standing, or treading water
void func_8083C148(Player* player, PlayState* play);
}

#define CVAR_STATE_PATH_NAME CVAR_DEVELOPER_TOOLS("GzMacro.StatePath")

namespace {

GzMacro::StateFile sState;
std::string sStatePath;
bool sStateLoaded = false;

bool sNotifications = true;

// Reads fields out of the N64 SaveContext by their retail offsets.
class SaveReader {
  public:
    explicit SaveReader(const std::vector<uint8_t>& data) : mData(data.data()) {
    }

    u8 GetU8(size_t off) const {
        return mData[off];
    }
    s8 GetS8(size_t off) const {
        return (s8)mData[off];
    }
    u16 GetU16(size_t off) const {
        return GzMacro::ReadU16(mData + off);
    }
    s16 GetS16(size_t off) const {
        return (s16)GzMacro::ReadU16(mData + off);
    }
    u32 GetU32(size_t off) const {
        return GzMacro::ReadU32(mData + off);
    }
    s32 GetS32(size_t off) const {
        return (s32)GzMacro::ReadU32(mData + off);
    }
    f32 GetF32(size_t off) const {
        return GzMacro::ReadF32(mData + off);
    }
    Vec3f GetVec3f(size_t off) const {
        return { GetF32(off), GetF32(off + 4), GetF32(off + 8) };
    }

  private:
    const uint8_t* mData;
};

void ReadEquips(const SaveReader& r, size_t off, ItemEquips& equips) {
    // SoH's extra D-pad slots are left alone, gz has none.
    for (int i = 0; i < 4; i++) {
        equips.buttonItems[i] = r.GetU8(off + i);
    }
    for (int i = 0; i < 3; i++) {
        equips.cButtonSlots[i] = r.GetU8(off + 4 + i);
    }
    equips.equipment = r.GetU16(off + 8);
}

void ReadRespawn(const SaveReader& r, size_t off, RespawnData& respawn) {
    respawn.pos = r.GetVec3f(off);
    respawn.yaw = r.GetS16(off + 0x0C);
    respawn.playerParams = r.GetS16(off + 0x0E);
    respawn.entranceIndex = r.GetS16(off + 0x10);
    respawn.roomIndex = r.GetU8(off + 0x12);
    respawn.data = r.GetS8(off + 0x13);
    respawn.tempSwchFlags = r.GetU32(off + 0x14);
    respawn.tempCollectFlags = r.GetU32(off + 0x18);
}

void ReadOcarinaNotes(const SaveReader& r, size_t off, OcarinaNote* notes, size_t count) {
    for (size_t i = 0; i < count; i++) {
        size_t n = off + i * 8;
        notes[i].pitch = r.GetU8(n);
        notes[i].length = r.GetU16(n + 2);
        notes[i].volume = r.GetU8(n + 4);
        notes[i].vibrato = r.GetU8(n + 5);
        notes[i].bend = r.GetS8(n + 6);
        notes[i].bFlat4Flag = r.GetU8(n + 7);
    }
}

// Copies the gameplay parts of gz's SaveContext. Settings (language, sound, targeting), the file name and SoH's
// own data are kept.
void ApplySaveContext(const SaveReader& r) {
    SaveContext& s = gSaveContext;

    s.entranceIndex = r.GetS32(0x0000);
    s.linkAge = r.GetS32(0x0004);
    s.cutsceneIndex = r.GetS32(0x0008);
    s.dayTime = r.GetU16(0x000C);
    s.nightFlag = r.GetS32(0x0010);
    s.totalDays = r.GetS32(0x0014);
    s.bgsDayCount = r.GetS32(0x0018);
    s.deaths = r.GetU16(0x0022);
    s.healthCapacity = r.GetS16(0x002E);
    s.health = r.GetS16(0x0030);
    s.magicLevel = r.GetS8(0x0032);
    s.magic = r.GetS8(0x0033);
    s.rupees = r.GetS16(0x0034);
    s.swordHealth = r.GetU16(0x0036);
    s.naviTimer = r.GetU16(0x0038);
    s.isMagicAcquired = r.GetU8(0x003A);
    s.isDoubleMagicAcquired = r.GetU8(0x003C);
    s.isDoubleDefenseAcquired = r.GetU8(0x003D);
    s.bgsFlag = r.GetU8(0x003E);
    s.ocarinaGameRoundNum = r.GetU8(0x003F);
    ReadEquips(r, 0x0040, s.childEquips);
    ReadEquips(r, 0x004A, s.adultEquips);
    s.savedSceneNum = r.GetS16(0x0066);
    ReadEquips(r, 0x0068, s.equips);

    Inventory& inv = s.inventory;
    for (int i = 0; i < 24; i++) {
        inv.items[i] = r.GetU8(0x0074 + i);
    }
    for (int i = 0; i < 16; i++) {
        inv.ammo[i] = r.GetS8(0x008C + i);
    }
    inv.equipment = r.GetU16(0x009C);
    inv.upgrades = r.GetU32(0x00A0);
    inv.questItems = r.GetU32(0x00A4);
    for (int i = 0; i < 20; i++) {
        inv.dungeonItems[i] = r.GetU8(0x00A8 + i);
    }
    for (int i = 0; i < 19; i++) {
        inv.dungeonKeys[i] = r.GetS8(0x00BC + i);
    }
    inv.defenseHearts = r.GetS8(0x00CF);
    inv.gsTokens = r.GetS16(0x00D0);

    for (int i = 0; i < ARRAY_COUNT(s.sceneFlags); i++) {
        size_t off = 0x00D4 + i * 0x1C;
        s.sceneFlags[i].chest = r.GetU32(off + 0x00);
        s.sceneFlags[i].swch = r.GetU32(off + 0x04);
        s.sceneFlags[i].clear = r.GetU32(off + 0x08);
        s.sceneFlags[i].collect = r.GetU32(off + 0x0C);
        s.sceneFlags[i].unk = r.GetU32(off + 0x10);
        s.sceneFlags[i].rooms = r.GetU32(off + 0x14);
        s.sceneFlags[i].floors = r.GetU32(off + 0x18);
    }

    s.fw.pos.x = r.GetS32(0x0E64);
    s.fw.pos.y = r.GetS32(0x0E68);
    s.fw.pos.z = r.GetS32(0x0E6C);
    s.fw.yaw = r.GetS32(0x0E70);
    s.fw.playerParams = r.GetS32(0x0E74);
    s.fw.entranceIndex = r.GetS32(0x0E78);
    s.fw.roomIndex = r.GetS32(0x0E7C);
    s.fw.set = r.GetS32(0x0E80);
    s.fw.tempSwchFlags = r.GetS32(0x0E84);
    s.fw.tempCollectFlags = r.GetS32(0x0E88);

    for (int i = 0; i < 6; i++) {
        s.gsFlags[i] = r.GetS32(0x0E9C + i * 4);
    }
    for (int i = 0; i < 7; i++) {
        s.highScores[i] = r.GetS32(0x0EB8 + i * 4);
    }
    for (int i = 0; i < 14; i++) {
        s.eventChkInf[i] = r.GetU16(0x0ED4 + i * 2);
    }
    for (int i = 0; i < 4; i++) {
        s.itemGetInf[i] = r.GetU16(0x0EF0 + i * 2);
    }
    for (int i = 0; i < 30; i++) {
        s.infTable[i] = r.GetU16(0x0EF8 + i * 2);
    }
    s.worldMapAreaData = r.GetU32(0x0F38);
    s.scarecrowLongSongSet = r.GetU8(0x0F40);
    ReadOcarinaNotes(r, 0x0F41, s.scarecrowLongSong, ARRAY_COUNT(s.scarecrowLongSong));
    s.scarecrowSpawnSongSet = r.GetU8(0x12C5);
    ReadOcarinaNotes(r, 0x12C6, s.scarecrowSpawnSong, ARRAY_COUNT(s.scarecrowSpawnSong));
    s.horseData.scene = r.GetS16(0x1348);
    s.horseData.pos.x = r.GetS16(0x134A);
    s.horseData.pos.y = r.GetS16(0x134C);
    s.horseData.pos.z = r.GetS16(0x134E);
    s.horseData.angle = r.GetS16(0x1350);

    for (int i = 0; i < RESPAWN_MODE_MAX; i++) {
        ReadRespawn(r, 0x1368 + i * 0x1C, s.respawn[i]);
    }
    s.dogParams = r.GetS16(0x13C4);
    s.nayrusLoveTimer = r.GetS16(0x13C8);
    s.rupeeAccumulator = r.GetS16(0x13CC);
    s.timerState = r.GetS16(0x13CE);
    s.timerSeconds = r.GetS16(0x13D0);
    s.subTimerState = r.GetS16(0x13D2);
    s.subTimerSeconds = r.GetS16(0x13D4);
    for (int i = 0; i < TIMER_ID_MAX; i++) {
        s.timerX[i] = r.GetS16(0x13D6 + i * 2);
        s.timerY[i] = r.GetS16(0x13DA + i * 2);
    }
    s.magicState = r.GetS16(0x13F0);
    s.prevMagicState = r.GetS16(0x13F2);
    s.magicCapacity = r.GetS16(0x13F4);
    s.magicFillTarget = r.GetS16(0x13F6);
    s.magicTarget = r.GetS16(0x13F8);
    for (int i = 0; i < 4; i++) {
        s.eventInf[i] = r.GetU16(0x13FA + i * 2);
    }
    s.minigameState = r.GetU16(0x1404);
    s.minigameScore = r.GetU16(0x1406);
    s.nextDayTime = r.GetU16(0x1416);
    s.skyboxTime = r.GetU16(0x141A);
    s.dogIsLost = r.GetU8(0x141C);
    s.sunsSongState = r.GetS16(0x1422);
    s.healthAccumulator = r.GetS16(0x1424);
}

// What to restore once Link has spawned in the new scene.
struct PendingArrival {
    int16_t sceneId;
    Vec3f pos;
    Vec3s worldRot;
    Vec3s shapeRot;
    bool hasLink;
    GzMacro::LinkState link;
    RespawnData voidOutRespawn;
    uint32_t tempClearFlags;
    uint32_t gameplayFrames;
};

PendingArrival sPending;
void (*sOnArrived)() = nullptr;
HOOK_ID sSceneInitHook = 0;
HOOK_ID sPlayerUpdateHook = 0;
// From importing a state until Link arrives in its scene
bool sImporting = false;

Vec3f ToVec3f(const GzMacro::Vec3fBE& v) {
    return { v.x, v.y, v.z };
}

Vec3s ToVec3s(const GzMacro::Vec3sBE& v) {
    return { v.x, v.y, v.z };
}

void ApplyArrival() {
    Player* player = GET_PLAYER(gPlayState);
    if (player == nullptr) {
        return;
    }
    sImporting = false;
    // He spawned walking in from the entrance, which holds him still for 20 frames and would swallow the start of
    // a macro. The state has him free to move.
    func_8083C148(player, gPlayState);
    player->actor.world.pos = sPending.pos;
    player->actor.prevPos = sPending.pos;
    player->actor.world.rot = sPending.worldRot;
    player->actor.shape.rot = sPending.shapeRot;
    if (sPending.hasLink) {
        const GzMacro::LinkState& link = sPending.link;
        player->actor.velocity = ToVec3f(link.velocity);
        player->actor.speedXZ = link.speedXZ;
        player->linearVelocity = link.linearVelocity;
        player->yaw = link.yaw;
        player->currentMask = link.currentMask;
        // His blink timer draws a random number when it runs out, so it has to run out when it did on the N64
        player->unk_3A8[0] = link.blink[0];
        player->unk_3A8[1] = link.blink[1];
    }
    // The warp used the void out respawn point to place Link, put back the one from the state.
    gSaveContext.respawn[RESPAWN_MODE_DOWN] = sPending.voidOutRespawn;
    gPlayState->actorCtx.flags.tempClear = sPending.tempClearFlags;
    gPlayState->gameplayFrames = sPending.gameplayFrames;
    Gz_Notify("gz savestate imported");
    if (sOnArrived != nullptr) {
        void (*onArrived)() = sOnArrived;
        sOnArrived = nullptr;
        onArrived();
    }
}

// Starts a temporary file that is never written to disk (SaveManager skips 0xFF), the same way Warping.cpp boots
// to a warp point. The imported state then replaces its gameplay data.
void InitTemporaryFile() {
    gSaveContext.gameMode = GAMEMODE_NORMAL;
    gSaveContext.fileNum = 0xFE;
    Sram_InitDebugSave();
    gSaveContext.fileNum = 0xFF;
    gSaveContext.sceneLayer = 0;
    for (int i = 0; i < ARRAY_COUNT(gSaveContext.buttonStatus); i++) {
        gSaveContext.buttonStatus[i] = BTN_ENABLED;
    }
    gSaveContext.nextHudVisibilityMode = gSaveContext.hudVisibilityMode = gSaveContext.hudVisibilityModeTimer = 0;
    gSaveContext.forceRisingButtonAlphas = 0;
    gSaveContext.showTitleCard = false;
    gWeatherMode = 0;
}

// With a file loaded, imports into it. Otherwise, when boot is set, starts gameplay from the state on a temporary
// file instead, from wherever the game is (the title screen, file select).
bool Import(bool boot = false) {
    if (!sStateLoaded) {
        return false;
    }
    bool fileLoaded = gPlayState != nullptr && GameInteractor::IsSaveLoaded(true);
    if (!fileLoaded && (!boot || gGameState == nullptr)) {
        Gz_Notify("load a file before importing a gz savestate");
        return false;
    }
    const GzMacro::StateFile& st = sState;
    SaveReader r(st.saveContext);

    if (!fileLoaded) {
        InitTemporaryFile();
    }
    ApplySaveContext(r);
    // Leaving the current scene resets linkAge to linkAgeOnLoad, and swaps the age equipment when they differ.
    // The imported equipment already matches the imported age, so make both agree.
    if (gPlayState != nullptr) {
        gPlayState->linkAgeOnLoad = gSaveContext.linkAge;
    }
    // The current scene's flags are live in the play state, merge them in so the scene reloads with them.
    if (st.sceneId >= 0 && st.sceneId < ARRAY_COUNT(gSaveContext.sceneFlags)) {
        SavedSceneFlags& flags = gSaveContext.sceneFlags[st.sceneId];
        flags.chest = st.chestFlags;
        flags.swch = st.swchFlags;
        flags.clear = st.clearFlags;
        flags.collect = st.collectFlags;
        // Leaving a scene saves its live flags over these, so when the state is in the scene already playing (a
        // macro played again), what the last playback did to it would come back
        if (gPlayState != nullptr && gPlayState->sceneNum == st.sceneId) {
            gPlayState->actorCtx.flags.chest = st.chestFlags;
            gPlayState->actorCtx.flags.swch = st.swchFlags;
            gPlayState->actorCtx.flags.clear = st.clearFlags;
            gPlayState->actorCtx.flags.collect = st.collectFlags;
        }
    }

    sPending.sceneId = st.sceneId;
    sPending.gameplayFrames = st.gameplayFrames;
    sPending.hasLink = st.linkFound;
    sPending.link = st.link;
    if (st.linkFound) {
        sPending.pos = ToVec3f(st.link.worldPos);
        sPending.worldRot = ToVec3s(st.link.worldRot);
        sPending.shapeRot = ToVec3s(st.link.shapeRot);
    } else {
        // The camera's copy of Link's position and rotation.
        sPending.pos = ToVec3f(st.cameraPlayerPos);
        sPending.worldRot = ToVec3s(st.cameraPlayerRot);
        sPending.shapeRot = ToVec3s(st.cameraPlayerRot);
    }
    sPending.voidOutRespawn = gSaveContext.respawn[RESPAWN_MODE_DOWN];
    sPending.tempClearFlags = st.tempClearFlags;

    // Like the warp in Warping.cpp, spawning Link where he was through the void out respawn point.
    s32 entranceIndex = gSaveContext.entranceIndex;
    RespawnData& respawn = gSaveContext.respawn[RESPAWN_MODE_DOWN];
    respawn.entranceIndex = entranceIndex;
    respawn.roomIndex = st.roomNum;
    respawn.pos = sPending.pos;
    respawn.yaw = sPending.shapeRot.y;
    respawn.playerParams = 0xDFF;
    respawn.tempSwchFlags = st.tempSwchFlags;
    respawn.tempCollectFlags = st.tempCollectFlags;
    gSaveContext.nextTransitionType = TRANS_TYPE_INSTANT;
    gSaveContext.respawnFlag = 1;

    // Restart the play state on the new entrance, as Warping.cpp does at boot, rather than requesting a scene
    // transition. A cutscene or transition already running (the new file intro's black fill, a door fade) owns the
    // transition state and would drop the request, leaving the imported data under a stalled or black screen.
    // Play_Destroy tears down whatever transition was in progress.
    gSaveContext.cutsceneTrigger = 0;
    Audio_QueueSeqCmd(SEQ_PLAYER_BGM_MAIN << 24 | NA_BGM_STOP);
    gSaveContext.seqId = (u8)NA_BGM_DISABLED;
    gSaveContext.natureAmbienceId = 0xFF;
    if (gPlayState != nullptr) {
        gPlayState->transitionTrigger = TRANS_TRIGGER_OFF;
    }
    gGameState->running = false;
    SET_NEXT_GAMESTATE(gGameState, Play_Init, PlayState);

    static HOOK_ID voidDamageHook = 0;
    voidDamageHook = REGISTER_VB_SHOULD(VB_INFLICT_VOID_DAMAGE, {
        *should = false;
        GameInteractor::Instance->UnregisterGameHookForID<GameInteractor::OnVanillaBehavior>(voidDamageHook);
    });

    // Wait for the new scene, then for Link's first update in it.
    sImporting = true;
    GameInteractor::Instance->UnregisterGameHook<GameInteractor::OnSceneInit>(sSceneInitHook);
    GameInteractor::Instance->UnregisterGameHook<GameInteractor::OnPlayerUpdate>(sPlayerUpdateHook);
    sSceneInitHook = GameInteractor::Instance->RegisterGameHook<GameInteractor::OnSceneInit>([](int16_t sceneNum) {
        GameInteractor::Instance->UnregisterGameHook<GameInteractor::OnSceneInit>(sSceneInitHook);
        sSceneInitHook = 0;
        if (sceneNum != sPending.sceneId) {
            SPDLOG_WARN("[gz state] expected scene {} but loaded {}", sPending.sceneId, sceneNum);
            return;
        }
        sPlayerUpdateHook = GameInteractor::Instance->RegisterGameHook<GameInteractor::OnPlayerUpdate>([]() {
            GameInteractor::Instance->UnregisterGameHook<GameInteractor::OnPlayerUpdate>(sPlayerUpdateHook);
            sPlayerUpdateHook = 0;
            ApplyArrival();
        });
    });
    return true;
}

} // namespace

void Gz_Notify(const char* text) {
    if (!sNotifications) {
        return;
    }
    Ship::Context::GetRawInstance()->GetWindow()->GetGui()->GetGameOverlay()->TextDrawNotification(2.0f, true,
                                                                                                   "%s", text);
}

void Gz_SetNotifications(bool enabled) {
    sNotifications = enabled;
}

bool GzState_IsImporting() {
    return sImporting;
}

bool GzState_GetSavedRng(uint32_t* rng) {
    if (!sStateLoaded || !sState.rngFound) {
        return false;
    }
    *rng = sState.rng;
    return true;
}

bool GzState_GetSummary(int* sceneId, int* roomNum, float pos[3]) {
    if (!sStateLoaded) {
        return false;
    }
    *sceneId = sState.sceneId;
    *roomNum = sState.roomNum;
    const GzMacro::Vec3fBE& p = sState.linkFound ? sState.link.worldPos : sState.cameraPlayerPos;
    pos[0] = p.x;
    pos[1] = p.y;
    pos[2] = p.z;
    return true;
}

bool GzState_Import(void (*onArrived)(), bool boot) {
    sOnArrived = onArrived;
    if (!Import(boot)) {
        sOnArrived = nullptr;
        return false;
    }
    return true;
}

bool GzState_Load(const std::string& path) {
    GzMacro::StateFile state;
    std::string error;
    if (!GzMacro::LoadStateFile(path, state, error)) {
        SPDLOG_ERROR("[gz state] failed to load {}: {}", path, error);
        Gz_Notify(("failed to load gz savestate: " + error).c_str());
        return false;
    }
    sState = std::move(state);
    sStatePath = path;
    sStateLoaded = true;
    CVarSetString(CVAR_STATE_PATH_NAME, path.c_str());
    Ship::Context::GetRawInstance()->GetWindow()->GetGui()->SaveConsoleVariablesNextFrame();
    SPDLOG_INFO("[gz state] loaded {} ({}, scene {})", path, GzMacro::GzVersionName(sState.version), sState.sceneId);
    Gz_Notify("gz savestate loaded");
    return true;
}

void GzState_DrawTab() {
    static std::string path = CVarGetString(CVAR_STATE_PATH_NAME, "");
    // Show the file that was actually loaded when it came from a drop or the file picker
    static std::string shownStatePath;
    if (sStatePath != shownStatePath) {
        shownStatePath = sStatePath;
        path = shownStatePath;
    }

    ImGui::TextWrapped("Recreates a gz savestate: its save data, scene, room, and Link's position and movement. "
                       "Enemies, objects and timers start fresh, so it is close to the state but not exact.");
    ImGui::Spacing();

    UIWidgets::InputString("Savestate File", &path,
                           UIWidgets::InputOptions().Color(THEME_COLOR).PlaceholderText("path/to/state.gzs"));
    if (UIWidgets::Button("Load##GzState", UIWidgets::ButtonOptions().Color(THEME_COLOR))) {
        GzState_Load(path);
    }
#ifdef __EMSCRIPTEN__
    // The browser can't read paths on the user's disk; the picked file goes through the drop handler
    if (UIWidgets::Button("Browse...##GzState", UIWidgets::ButtonOptions().Color(THEME_COLOR))) {
        SohWeb_OpenFilePicker(".gzs");
    }
#endif

    if (!sStateLoaded) {
        ImGui::TextDisabled("No savestate loaded");
        return;
    }

    const GzMacro::StateFile& st = sState;
    ImGui::SeparatorText(std::filesystem::path(sStatePath).filename().string().c_str());
    ImGui::Text("Game version: %s", GzMacro::GzVersionName(st.version));
    ImGui::Text("Scene: %d, room: %d", st.sceneId, st.roomNum);
    if (st.linkFound) {
        ImGui::Text("Link: %.2f, %.2f, %.2f  speed %.2f", st.link.worldPos.x, st.link.worldPos.y, st.link.worldPos.z,
                    st.link.linearVelocity);
    } else {
        ImGui::TextWrapped("Link's actor was not found, so his position comes from the camera and his speed is "
                           "not restored.");
    }

    if (GzMacro::IsMasterQuestVersion(st.version) != (bool)ResourceMgr_IsSceneMasterQuest(st.sceneId)) {
        ImGui::TextWrapped("This state's dungeon layout (vanilla or Master Quest) differs from SoH's for this "
                           "scene, so the scene will not match.");
    }
    if (IS_RANDO) {
        ImGui::TextWrapped("Importing replaces this randomizer file's items and flags with vanilla ones.");
    }

    ImGui::Spacing();
    if (UIWidgets::Button("Import into Current File",
                          UIWidgets::ButtonOptions()
                              .Color(THEME_COLOR)
                              .Tooltip("Replaces the current file's items and flags with the savestate's and warps "
                                       "there. Nothing is written to disk until the game saves."))) {
        Import();
    }
}
