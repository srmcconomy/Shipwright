#include "GzState.h"
#include "GzStateFile.h"
#include "GzActorTables.h"

#include <algorithm>
#include <filesystem>
#include <unordered_map>

#include <spdlog/spdlog.h>
#include <ship/Context.h>
#include <ship/window/Window.h>
#include <libultraship/bridge/consolevariablebridge.h>

#include "soh/cvar_prefixes.h"
#include "soh/OTRGlobals.h"
#include "soh/ResourceManagerHelpers.h"
#include "soh/Enhancements/game-interactor/GameInteractor.h"
#include "soh/Enhancements/game-interactor/GameInteractor_Hooks.h"
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
extern EffectSsInfo sEffectSsInfo;
#include "overlays/actors/ovl_Object_Kankyo/z_object_kankyo.h"
#include "overlays/actors/ovl_En_Elf/z_en_elf.h"
// Sets Navi's mode, and the movement and timers that go with it
void func_80A01C38(EnElf* elf, s32 mode);
// Ends whatever Link is doing and leaves him standing, or treading water
void func_8083C148(Player* player, PlayState* play);
// The display lists for each of Link's model types, adult and child (z_player_lib.c)
extern Gfx** sPlayerDListGroups[PLAYER_MODELTYPE_MAX];
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
    uint32_t stateFrames;
    bool hasFloorAhead;
    float floorYNear;
    float floorYFar;
    Vec3f floorFarPos;
    Vec3f floorFarNorm;
    uint32_t gameplayFrames;
    uint8_t camera[GzMacro::N64_CAMERA_SIZE];
    uint8_t precipitation[4];
    GzMacro::PauseState pause;
    std::vector<GzMacro::KankyoState> kankyos;
    std::vector<GzMacro::ActorState> actors;
    // The actor tables describe the N64 1.2 versions of the actors
    bool actorTablesApply;
};

PendingArrival sPending;
void (*sOnArrived)() = nullptr;
HOOK_ID sSceneInitHook = 0;
HOOK_ID sPlayerUpdateHook = 0;
HOOK_ID sFrameEndHook = 0;
// From importing a state until Link arrives in its scene
bool sImporting = false;

Vec3f ToVec3f(const GzMacro::Vec3fBE& v) {
    return { v.x, v.y, v.z };
}

Vec3s ToVec3s(const GzMacro::Vec3sBE& v) {
    return { v.x, v.y, v.z };
}

// Puts the main camera back where the N64 had it. Link moves relative to the camera, so a camera that starts
// somewhere else turns the same stick input into a different path. Only plain values are restored: the fields
// that point at things, or index tables this scene builds for itself, keep what the arrival set up.
void RestoreCamera(const uint8_t* c) {
    using GzMacro::ReadF32;
    using GzMacro::ReadU16;
    using GzMacro::ReadU32;
    using GzMacro::ReadVec3f;
    auto s16At = [c](size_t offset) { return (s16)ReadU16(c + offset); };
    auto vec3sAt = [c](size_t offset) {
        return Vec3s{ (s16)ReadU16(c + offset), (s16)ReadU16(c + offset + 2), (s16)ReadU16(c + offset + 4) };
    };
    Camera* camera = &gPlayState->mainCamera;
    // A different setting or mode runs a different camera function, whose working data couldn't be carried over
    if (camera->setting != s16At(0x142) || camera->mode != s16At(0x144)) {
        SPDLOG_WARN("[gz state] camera setting {} mode {} differs from the state's {} {}, not restoring it",
                    camera->setting, camera->mode, s16At(0x142), s16At(0x144));
        return;
    }

    camera->at = ToVec3f(ReadVec3f(c + 0x50));
    camera->eye = ToVec3f(ReadVec3f(c + 0x5C));
    camera->up = ToVec3f(ReadVec3f(c + 0x68));
    camera->eyeNext = ToVec3f(ReadVec3f(c + 0x74));
    camera->skyboxOffset = ToVec3f(ReadVec3f(c + 0x80));
    camera->playerPosRot.pos = ToVec3f(ReadVec3f(c + 0x94));
    camera->playerPosRot.rot = vec3sAt(0xA0);
    camera->targetPosRot.pos = ToVec3f(ReadVec3f(c + 0xAC));
    camera->targetPosRot.rot = vec3sAt(0xB8);
    camera->rUpdateRateInv = ReadF32(c + 0xC0);
    camera->pitchUpdateRateInv = ReadF32(c + 0xC4);
    camera->yawUpdateRateInv = ReadF32(c + 0xC8);
    camera->xzOffsetUpdateRate = ReadF32(c + 0xCC);
    camera->yOffsetUpdateRate = ReadF32(c + 0xD0);
    camera->fovUpdateRate = ReadF32(c + 0xD4);
    camera->xzSpeed = ReadF32(c + 0xD8);
    camera->dist = ReadF32(c + 0xDC);
    camera->speedRatio = ReadF32(c + 0xE0);
    camera->posOffset = ToVec3f(ReadVec3f(c + 0xE4));
    camera->playerPosDelta = ToVec3f(ReadVec3f(c + 0xF0));
    camera->fov = ReadF32(c + 0xFC);
    camera->atLERPStepScale = ReadF32(c + 0x100);
    camera->playerGroundY = ReadF32(c + 0x104);
    camera->floorNorm = ToVec3f(ReadVec3f(c + 0x108));
    camera->waterYPos = ReadF32(c + 0x114);
    camera->inputDir = vec3sAt(0x134);
    camera->camDir = vec3sAt(0x13A);
    camera->status = s16At(0x140);
    camera->unk_14A = s16At(0x14A);
    camera->unk_14C = s16At(0x14C);
    camera->waterDistortionTimer = s16At(0x150);
    camera->distortionFlags = s16At(0x152);
    camera->prevSetting = s16At(0x154);
    camera->roll = s16At(0x15A);
    camera->paramFlags = s16At(0x15C);
    camera->animState = s16At(0x15E);
    camera->timer = s16At(0x160);
    camera->unk_16A = s16At(0x16A);

    // The working data of the function the camera is running. Only the usual one, Normal1, is understood.
    if (Camera_GetFuncIdx(camera) == CAM_FUNC_NORM1) {
        Normal1* norm1 = (Normal1*)camera->paramData;
        norm1->yOffset = ReadF32(c + 0x00);
        norm1->distMin = ReadF32(c + 0x04);
        norm1->distMax = ReadF32(c + 0x08);
        norm1->unk_0C = ReadF32(c + 0x0C);
        norm1->unk_10 = ReadF32(c + 0x10);
        norm1->unk_14 = ReadF32(c + 0x14);
        norm1->fovTarget = ReadF32(c + 0x18);
        norm1->atLERPScaleMax = ReadF32(c + 0x1C);
        norm1->pitchTarget = s16At(0x20);
        norm1->interfaceFlags = s16At(0x22);
        Normal1Anim* anim = &norm1->anim;
        anim->swing.collisionClosePoint = ToVec3f(ReadVec3f(c + 0x24));
        // A pointer into the N64's collision, never read
        anim->swing.atEyePoly = NULL;
        anim->swing.swingUpdateRate = ReadF32(c + 0x34);
        anim->swing.unk_14 = s16At(0x38);
        anim->swing.unk_16 = s16At(0x3A);
        anim->swing.unk_18 = s16At(0x3C);
        anim->swing.swingUpdateRateTimer = s16At(0x3E);
        anim->yOffset = ReadF32(c + 0x40);
        anim->unk_20 = ReadF32(c + 0x44);
        anim->slopePitchAdj = s16At(0x48);
        anim->swingYawTarget = s16At(0x4A);
        anim->unk_28 = s16At(0x4C);
        anim->startSwingTimer = s16At(0x4E);
    }
}

// Carries on each Object_Kankyo's effects (falling snow and the like) from where the state had them, instead of
// the fresh actor spawning them all at once
void RestoreKankyos(const std::vector<GzMacro::KankyoState>& kankyos) {
    using GzMacro::ReadF32;
    using GzMacro::ReadU16;
    using GzMacro::ReadVec3f;
    std::vector<bool> used(kankyos.size(), false);
    for (Actor* actor = gPlayState->actorCtx.actorLists[ACTORCAT_ITEMACTION].head; actor != nullptr;
         actor = actor->next) {
        if (actor->id != ACTOR_OBJECT_KANKYO) {
            continue;
        }
        size_t match = 0;
        while (match < kankyos.size() && (used[match] || kankyos[match].params != actor->params)) {
            match++;
        }
        if (match == kankyos.size()) {
            continue;
        }
        used[match] = true;
        ObjectKankyo* kankyo = (ObjectKankyo*)actor;
        const uint8_t* data = kankyos[match].data.data();
        for (size_t i = 0; i < GzMacro::N64_KANKYO_EFFECT_COUNT; i++) {
            const uint8_t* e = data + GzMacro::N64_KANKYO_EFFECTS + i * GzMacro::N64_KANKYO_EFFECT_SIZE;
            ObjectKankyoEffect* effect = &kankyo->effects[i];
            effect->state = e[0x00];
            effect->pos = ToVec3f(ReadVec3f(e + 0x04));
            effect->prevPos = ToVec3f(ReadVec3f(e + 0x10));
            effect->base = ToVec3f(ReadVec3f(e + 0x1C));
            effect->dirPhase = ToVec3f(ReadVec3f(e + 0x28));
            effect->speed = ReadF32(e + 0x34);
            effect->targetSpeed = ReadF32(e + 0x38);
            effect->alphaTimer = ReadU16(e + 0x3C);
            effect->angle = ReadU16(e + 0x3E);
            effect->alpha = e[0x40];
            effect->size = ReadF32(e + 0x44);
            effect->angleVel = ReadU16(e + 0x48);
            effect->flightRadius = ReadU16(e + 0x4A);
            effect->amplitude = ReadF32(e + 0x4C);
            effect->timer = ReadU16(e + 0x50);
        }
        kankyo->prevEyePos = ToVec3f(ReadVec3f(data + GzMacro::N64_KANKYO_PREV_EYE_POS));
    }
}

// Puts the Actor fields the N64 had back into one actor: where it is and how it is moving, its collision and
// shape, its flags and its timers. Pointers and the actor's own fields keep what its fresh spawn set up.
void RestoreActorFields(Actor* actor, const uint8_t* a) {
    using GzMacro::ReadF32;
    using GzMacro::ReadU16;
    using GzMacro::ReadVec3f;
    auto vec3sAt = [a](size_t offset) {
        return Vec3s{ (s16)ReadU16(a + offset), (s16)ReadU16(a + offset + 2), (s16)ReadU16(a + offset + 4) };
    };
    // What the actor is set up to do, such as whether it keeps updating off screen, which some change as they go
    actor->flags = GzMacro::ReadU32(a + 0x04);
    // Some actors move their home with them, and it has done its job of matching the actor to the state's by now
    actor->home.pos = ToVec3f(ReadVec3f(a + 0x08));
    actor->home.rot = vec3sAt(0x14);
    actor->targetMode = (s8)a[0x1F];
    actor->world.pos = ToVec3f(ReadVec3f(a + 0x24));
    actor->world.rot = vec3sAt(0x30);
    actor->focus.pos = ToVec3f(ReadVec3f(a + 0x38));
    actor->focus.rot = vec3sAt(0x44);
    actor->targetArrowOffset = ReadF32(a + 0x4C);
    actor->scale = ToVec3f(ReadVec3f(a + 0x50));
    actor->velocity = ToVec3f(ReadVec3f(a + 0x5C));
    actor->speedXZ = ReadF32(a + 0x68);
    actor->gravity = ReadF32(a + 0x6C);
    actor->minVelocityY = ReadF32(a + 0x70);
    actor->wallYaw = (s16)ReadU16(a + 0x7E);
    actor->floorHeight = ReadF32(a + 0x80);
    actor->yDistToWater = ReadF32(a + 0x84);
    actor->bgCheckFlags = ReadU16(a + 0x88);
    actor->yawTowardsPlayer = (s16)ReadU16(a + 0x8A);
    actor->xyzDistToPlayerSq = ReadF32(a + 0x8C);
    actor->xzDistToPlayer = ReadF32(a + 0x90);
    actor->yDistToPlayer = ReadF32(a + 0x94);
    actor->colChkInfo.displacement = ToVec3f(ReadVec3f(a + 0x9C));
    actor->colChkInfo.cylRadius = (s16)ReadU16(a + 0xA8);
    actor->colChkInfo.cylHeight = (s16)ReadU16(a + 0xAA);
    actor->colChkInfo.cylYShift = (s16)ReadU16(a + 0xAC);
    actor->colChkInfo.mass = a[0xAE];
    actor->colChkInfo.health = a[0xAF];
    actor->colChkInfo.damage = a[0xB0];
    actor->colChkInfo.damageEffect = a[0xB1];
    actor->colChkInfo.atHitEffect = a[0xB2];
    actor->colChkInfo.acHitEffect = a[0xB3];
    actor->shape.rot = vec3sAt(0xB4);
    actor->shape.face = (s16)ReadU16(a + 0xBA);
    actor->shape.yOffset = ReadF32(a + 0xBC);
    actor->shape.shadowScale = ReadF32(a + 0xC4);
    actor->shape.shadowAlpha = a[0xC8];
    actor->shape.feetFloorFlags = a[0xC9];
    actor->shape.feetPos[0] = ToVec3f(ReadVec3f(a + 0xCC));
    actor->shape.feetPos[1] = ToVec3f(ReadVec3f(a + 0xD8));
    actor->uncullZoneForward = ReadF32(a + 0xF4);
    actor->uncullZoneScale = ReadF32(a + 0xF8);
    actor->uncullZoneDownward = ReadF32(a + 0xFC);
    actor->prevPos = ToVec3f(ReadVec3f(a + 0x100));
    actor->targetPriority = a[0x10D];
    actor->textId = ReadU16(a + 0x10E);
    actor->freezeTimer = ReadU16(a + 0x110);
    actor->colorFilterParams = ReadU16(a + 0x112);
    actor->colorFilterTimer = a[0x114];
    actor->dropFlag = a[0x116];
    actor->naviEnemyId = a[0x117];
}

// The N64's offsets into Navi's own fields: the decomp's, less the debug ROM's 0x10 of Actor padding
constexpr size_t N64_EN_ELF_SIZE = 0x2C0;

// Navi spawns with Link, out of his hat and sparkling, where the state may have her hidden. Her mode, timers and
// movement come from the state; the mode is set first, the way the game sets it, for the movement it runs.
void RestoreNavi(EnElf* elf, const std::vector<uint8_t>& data) {
    using GzMacro::ReadF32;
    using GzMacro::ReadU16;
    using GzMacro::ReadVec3f;
    if (data.size() < N64_EN_ELF_SIZE) {
        return;
    }
    const uint8_t* e = data.data();
    auto colorAt = [e](size_t offset) {
        return Color_RGBAf{ ReadF32(e + offset), ReadF32(e + offset + 4), ReadF32(e + offset + 8), ReadF32(e + offset + 12) };
    };
    func_80A01C38(elf, (s16)ReadU16(e + 0x298));
    elf->innerColor = colorAt(0x234);
    elf->outerColor = colorAt(0x244);
    elf->unk_28C = ToVec3f(ReadVec3f(e + 0x27C));
    elf->unk_29C = ReadF32(e + 0x28C);
    elf->unk_2A0 = ReadF32(e + 0x290);
    elf->unk_2A4 = ReadF32(e + 0x294);
    elf->unk_2AA = (s16)ReadU16(e + 0x29A);
    elf->unk_2AC = (s16)ReadU16(e + 0x29C);
    elf->unk_2AE = (s16)ReadU16(e + 0x29E);
    elf->unk_2B0 = (s16)ReadU16(e + 0x2A0);
    elf->unk_2B4 = ReadF32(e + 0x2A4);
    elf->unk_2B8 = ReadF32(e + 0x2A8);
    elf->unk_2BC = (s16)ReadU16(e + 0x2AC);
    elf->timer = ReadU16(e + 0x2AE);
    elf->unk_2C0 = (s16)ReadU16(e + 0x2B0);
    elf->disappearTimer = (s16)ReadU16(e + 0x2B2);
    elf->fairyFlags = ReadU16(e + 0x2B4);
    elf->unk_2C6 = e[0x2B6];
    elf->unk_2C7 = e[0x2B7];
}

// Restores an actor from the state: its Actor fields, and its own for the actors that need them
const GzActorTable* FindActorTable(s16 id) {
    static std::unordered_map<s16, const GzActorTable*> sTables;
    if (sTables.empty()) {
        for (size_t i = 0; i < gGzActorTableCount; i++) {
            sTables[gGzActorTables[i].id] = &gGzActorTables[i];
        }
    }
    auto it = sTables.find(id);
    return it != sTables.end() ? it->second : nullptr;
}

// The name SoH loads an N64 animation by, from the address the N64 had for it: an offset into the object in its
// segment (the actor's own object, or one of the keep objects)
const char* FindAnimation(Actor* actor, uint32_t address) {
    static std::unordered_map<uint64_t, const char*> sAnimations;
    if (sAnimations.empty()) {
        for (size_t i = 0; i < gGzAnimationCount; i++) {
            sAnimations[((uint64_t)(uint16_t)gGzAnimations[i].objectId << 32) | gGzAnimations[i].offset] =
                gGzAnimations[i].name;
        }
    }
    ObjectContext* objectCtx = &gPlayState->objectCtx;
    s32 objectId;
    switch (address >> 24) {
        case 4:
            objectId = OBJECT_GAMEPLAY_KEEP;
            break;
        case 5:
            objectId = objectCtx->status[objectCtx->subKeepIndex].id;
            break;
        case 6:
            if (actor->objBankIndex < 0) {
                return nullptr;
            }
            objectId = objectCtx->status[actor->objBankIndex].id;
            break;
        default:
            return nullptr;
    }
    auto it = sAnimations.find(((uint64_t)(uint16_t)objectId << 32) | (address & 0xFFFFFF));
    return it != sAnimations.end() ? it->second : nullptr;
}

// Overlays are loaded above code, which ends here in N64 OoT 1.2
constexpr uint32_t N64_CODE_END = 0x80115480;

// Restores an actor's own fields from the state, for the actors whose N64 layout and code are known: numbers as they
// were, and function pointers (what the actor is in the middle of doing) as the SoH function at the same place in
// the actor's code. Pointers to data keep what the fresh actor set up. Returns whether it could.
bool RestoreOwnFields(Actor* actor, const std::vector<uint8_t>& data) {
    const GzActorTable* table = FindActorTable(actor->id);
    if (table == nullptr || data.size() < table->n64Size) {
        return false;
    }
    const uint8_t* n64 = data.data();
    // Where the actor's code was loaded, from its destroy function's address
    constexpr size_t N64_ACTOR_DESTROY = 0x12C;
    uint32_t destroy = GzMacro::ReadU32(n64 + N64_ACTOR_DESTROY);
    bool haveBase = table->destroyIndex >= 0 && destroy != 0;
    uint32_t base = haveBase ? destroy - table->functions[table->destroyIndex].n64Offset : 0;
    if (table->destroyIndex < 0) {
        // Without a destroy function in its own code (Player's are in code), the overlay's address is the one that
        // makes the most of the actor's function pointers land on its functions
        std::unordered_map<uint32_t, int> votes;
        for (size_t s = 0; s < *table->spanCount; s++) {
            const GzActorSpan& span = table->spans[s];
            if (span.kind != GZ_SPAN_FUNCTION) {
                continue;
            }
            for (size_t i = 0; i < span.count; i++) {
                uint32_t address = GzMacro::ReadU32(n64 + span.n64Offset + i * span.n64Stride);
                // A pointer into code (a SkelAnime's update, say) says nothing about where the overlay is
                if (address < N64_CODE_END) {
                    continue;
                }
                for (size_t f = 0; f < *table->functionCount; f++) {
                    votes[address - table->functions[f].n64Offset]++;
                }
            }
        }
        int best = 0;
        for (auto& [candidate, count] : votes) {
            // The heap an overlay is loaded into hands out 16 byte aligned blocks
            if (count > best && candidate % 16 == 0 && candidate >= N64_CODE_END && candidate < 0x80800000) {
                best = count;
                base = candidate;
            }
        }
        haveBase = best > 0;
    }
    auto translate = [&](uint32_t address, void* current) -> void* {
        if (address == 0) {
            return nullptr;
        }
        if (haveBase) {
            for (size_t i = 0; i < *table->functionCount; i++) {
                if (base + table->functions[i].n64Offset == address) {
                    return table->functions[i].function != nullptr ? table->functions[i].function : current;
                }
            }
        }
        return current;
    };
    uint8_t* soh = (uint8_t*)actor;
    for (size_t s = 0; s < *table->spanCount; s++) {
        const GzActorSpan& span = table->spans[s];
        for (size_t i = 0; i < span.count; i++) {
            const uint8_t* from = n64 + span.n64Offset + i * span.n64Stride;
            uint8_t* to = soh + span.sohOffset + i * span.sohStride;
            switch (span.kind) {
                case GZ_SPAN_VALUE:
                    switch (span.size) {
                        case 1:
                            *to = *from;
                            break;
                        case 2: {
                            uint16_t v = GzMacro::ReadU16(from);
                            memcpy(to, &v, 2);
                            break;
                        }
                        case 4: {
                            uint32_t v = GzMacro::ReadU32(from);
                            memcpy(to, &v, 4);
                            break;
                        }
                        case 8: {
                            uint64_t v = ((uint64_t)GzMacro::ReadU32(from) << 32) | GzMacro::ReadU32(from + 4);
                            memcpy(to, &v, 8);
                            break;
                        }
                    }
                    break;
                case GZ_SPAN_ANIMATION: {
                    const char* current;
                    memcpy(&current, to, sizeof(current));
                    const char* name = FindAnimation(actor, GzMacro::ReadU32(from));
                    // The actor's own pointer is kept when it names the same animation: some actors compare it with
                    // the animations they know, which are their own copies of the names
                    if (name != nullptr &&
                        (current == nullptr || !ResourceMgr_OTRSigCheck((char*)current) || strcmp(current, name) != 0)) {
                        memcpy(to, &name, sizeof(name));
                    }
                    break;
                }
                case GZ_SPAN_FUNCTION: {
                    void* current;
                    memcpy(&current, to, sizeof(current));
                    void* function = translate(GzMacro::ReadU32(from), current);
                    memcpy(to, &function, sizeof(function));
                    break;
                }
                default:
                    break;
            }
        }
    }
    return true;
}

// Restores an actor from the state: its Actor fields, and its own where the actor tables describe it
void RestoreActor(Actor* actor, const GzMacro::ActorState& state) {
    RestoreActorFields(actor, state.data.data());
    if (sPending.actorTablesApply && RestoreOwnFields(actor, state.data)) {
        return;
    }
    if (actor->id == ACTOR_EN_ELF && actor->params == FAIRY_NAVI) {
        RestoreNavi((EnElf*)actor, state.data);
    }
}

// Matches the scene's actors to the state's by id, params and where they were spawned, or by id and params alone
// when there is only one of the kind on each side (Navi, who spawns wherever Link arrives), and restores each one's
// Actor fields. Link is restored on his own.
// Initialises an actor now if its object is loaded, as the next actor update would: restoring it before then would
// be undone by its init
void InitActorNow(Actor* actor) {
    if (actor->init == nullptr || !Object_IsLoaded(&gPlayState->objectCtx, actor->objBankIndex)) {
        return;
    }
    Actor_SetObjectDependency(gPlayState, actor);
    if (GameInteractor_ShouldActorInit(actor)) {
        actor->init(actor, gPlayState);
        actor->init = nullptr;
        GameInteractor_ExecuteOnActorInit(actor);
    } else {
        actor->init = nullptr;
        Actor_Kill(actor);
    }
}

// Returns the live actor each saved one was restored into, or null where none matched
std::vector<Actor*> RestoreActors(const std::vector<GzMacro::ActorState>& saved) {
    // An actor whose object wasn't loaded when it spawned is initialised on the next actor update, which would undo
    // what is restored here. SoH holds a new scene's objects back a frame, as the N64 takes that long to load them,
    // but the state's actors were all set up long ago: so the objects are finished and those actors initialised now.
    Object_UpdateBank(&gPlayState->objectCtx);
    for (int category = 0; category < ACTORCAT_MAX; category++) {
        for (Actor* actor = gPlayState->actorCtx.actorLists[category].head; actor != nullptr; actor = actor->next) {
            InitActorNow(actor);
        }
    }
    std::vector<Actor*> live;
    for (int category = 0; category < ACTORCAT_MAX; category++) {
        for (Actor* actor = gPlayState->actorCtx.actorLists[category].head; actor != nullptr; actor = actor->next) {
            if (actor->id != ACTOR_PLAYER) {
                live.push_back(actor);
            }
        }
    }
    auto sameKind = [](const Actor* actor, const GzMacro::ActorState& state) {
        return actor->id == state.id && actor->params == state.params;
    };
    std::vector<bool> used(saved.size(), false);
    std::vector<bool> restored(live.size(), false);
    std::vector<Actor*> into(saved.size(), nullptr);
    for (size_t i = 0; i < live.size(); i++) {
        for (size_t j = 0; j < saved.size(); j++) {
            const Vec3f home = ToVec3f(saved[j].homePos);
            if (!used[j] && sameKind(live[i], saved[j]) && home.x == live[i]->home.pos.x &&
                home.y == live[i]->home.pos.y && home.z == live[i]->home.pos.z) {
                RestoreActor(live[i], saved[j]);
                used[j] = restored[i] = true;
                into[j] = live[i];
                break;
            }
        }
    }
    size_t matched = std::count(restored.begin(), restored.end(), true);
    for (size_t i = 0; i < live.size(); i++) {
        if (restored[i]) {
            continue;
        }
        size_t liveCount = std::count_if(live.begin(), live.end(), [&](const Actor* other) {
            return other->id == live[i]->id && other->params == live[i]->params;
        });
        size_t savedIndex = SIZE_MAX;
        size_t savedCount = 0;
        for (size_t j = 0; j < saved.size(); j++) {
            if (sameKind(live[i], saved[j])) {
                savedCount++;
                savedIndex = j;
            }
        }
        if (liveCount == 1 && savedCount == 1 && !used[savedIndex]) {
            RestoreActor(live[i], saved[savedIndex]);
            used[savedIndex] = restored[i] = true;
            into[savedIndex] = live[i];
            matched++;
        }
    }
    SPDLOG_INFO("[gz state] restored {} of {} actors ({} in the state)", matched, live.size(), saved.size());
    return into;
}

// Gives Link back the actor he had as his child, such as the hookshot's hook, which he spawns himself when he takes
// the hookshot out, so a fresh scene doesn't have it. Without the hook, Link waits for it to come back and never
// moves again. The state's actor whose parent is Link is his child; it is spawned if no live actor matched it.
void RestoreLinkChild(Player* player, const std::vector<GzMacro::ActorState>& saved, const std::vector<Actor*>& into) {
    constexpr size_t N64_ACTOR_PARENT = 0x118;
    constexpr size_t N64_ACTOR_CHILD = 0x11C;
    constexpr size_t N64_PLAYER_HELD_ACTOR = 0x39C;
    constexpr size_t N64_CAMERA_PLAYER = 0x90;
    const uint8_t* link = sPending.link.data.data();
    uint32_t child = GzMacro::ReadU32(link + N64_ACTOR_CHILD);
    uint32_t linkAddress = GzMacro::ReadU32(sPending.camera + N64_CAMERA_PLAYER);
    if (child == 0 || linkAddress == 0) {
        return;
    }
    size_t found = SIZE_MAX;
    for (size_t j = 0; j < saved.size(); j++) {
        if (saved[j].data.size() >= GzMacro::N64_ACTOR_SIZE &&
            GzMacro::ReadU32(saved[j].data.data() + N64_ACTOR_PARENT) == linkAddress) {
            if (found != SIZE_MAX) {
                // The state doesn't say where its actors were, so with two it isn't known which is the child
                SPDLOG_WARN("[gz state] more than one actor has Link as its parent, not restoring his child");
                return;
            }
            found = j;
        }
    }
    if (found == SIZE_MAX) {
        return;
    }
    const GzMacro::ActorState& state = saved[found];
    Actor* actor = into[found];
    if (actor == nullptr) {
        const Vec3f pos = ToVec3f(GzMacro::ReadVec3f(state.data.data() + 0x24));
        actor = Actor_SpawnAsChild(&gPlayState->actorCtx, &player->actor, gPlayState, state.id, pos.x, pos.y, pos.z,
                                   0, player->actor.shape.rot.y, 0, state.params);
        if (actor == nullptr) {
            return;
        }
        InitActorNow(actor);
        RestoreActor(actor, state);
    }
    actor->parent = &player->actor;
    player->actor.child = actor;
    if (GzMacro::ReadU32(link + N64_PLAYER_HELD_ACTOR) == child) {
        player->heldActor = actor;
    }
}

// Puts back the pause menu's page and cursors, so the next pause opens where the macro expects
void RestorePause(const GzMacro::PauseState& saved) {
    PauseContext* pauseCtx = &gPlayState->pauseCtx;
    pauseCtx->pageIndex = saved.pageIndex;
    for (int i = 0; i < 5; i++) {
        pauseCtx->cursorPoint[i] = saved.cursorPoint[i];
        pauseCtx->cursorX[i] = saved.cursorX[i];
        pauseCtx->cursorY[i] = saved.cursorY[i];
    }
    pauseCtx->dungeonMapSlot = saved.dungeonMapSlot;
    pauseCtx->cursorSpecialPos = saved.cursorSpecialPos;
    for (int i = 0; i < 4; i++) {
        pauseCtx->cursorItem[i] = saved.cursorItem[i];
        pauseCtx->cursorSlot[i] = saved.cursorSlot[i];
    }
}

// Link's hands, sheath and waist: which models they show (the types) come back with his fields, but what draws them
// are pointers into SoH's tables, which are set from the types here as Player_SetModels does
void RestoreLinkModels(Player* player) {
    s32 age = gSaveContext.linkAge;
    player->leftHandDLists = &sPlayerDListGroups[player->leftHandType][age];
    player->rightHandDLists = &sPlayerDListGroups[player->rightHandType][age];
    player->sheathDLists = &sPlayerDListGroups[player->sheathType][age];
    player->waistDLists = &sPlayerDListGroups[gPlayerModelTypes[player->modelGroup][PLAYER_MODELGROUPENTRY_WAIST]][age];
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
    RestorePause(sPending.pause);
    // The rest is put back once this frame is done, so the next one starts the way the N64 had it: the camera
    // updates after Link, and the weather and the macro's random numbers are drawn on until the frame ends
    GameInteractor::Instance->UnregisterGameHook<GameInteractor::OnPlayDrawEnd>(sFrameEndHook);
    sFrameEndHook = GameInteractor::Instance->RegisterGameHook<GameInteractor::OnPlayDrawEnd>([]() {
        GameInteractor::Instance->UnregisterGameHook<GameInteractor::OnPlayDrawEnd>(sFrameEndHook);
        sFrameEndHook = 0;
        if (gPlayState == nullptr) {
            return;
        }
        RestoreCamera(sPending.camera);
        if (sPending.hasFloorAhead) {
            Camera_SetFloorAhead(sPending.floorYNear, sPending.floorYFar, &sPending.floorFarPos, &sPending.floorFarNorm);
        }
        // The effects the arrival spawned (Navi's sparkles as she appears) aren't the state's, and the ones that last
        // draw random numbers every frame
        for (s32 i = 0; i < sEffectSsInfo.tableSize; i++) {
            if (sEffectSsInfo.table[i].life > -1) {
                EffectSs_Delete(&sEffectSsInfo.table[i]);
            }
        }
        memcpy(gPlayState->envCtx.unk_EE, sPending.precipitation, sizeof(gPlayState->envCtx.unk_EE));
        // gz saves it partway through a frame, before that frame counts it up, which this one does as it ends
        gPlayState->state.frames = sPending.stateFrames;
        std::vector<Actor*> restoredInto = RestoreActors(sPending.actors);
        // Link, the same way, once his arrival is done
        if (sPending.hasLink && sPending.link.data.size() >= GzMacro::N64_PLAYER_SIZE && GET_PLAYER(gPlayState) != nullptr) {
            Player* player = GET_PLAYER(gPlayState);
            RestoreActorFields(&player->actor, sPending.link.data.data());
            if (sPending.actorTablesApply && RestoreOwnFields(&player->actor, sPending.link.data)) {
                RestoreLinkModels(player);
                RestoreLinkChild(player, sPending.actors, restoredInto);
            }
        }
        RestoreKankyos(sPending.kankyos);
        Gz_Notify("gz savestate imported");
        if (sOnArrived != nullptr) {
            void (*onArrived)() = sOnArrived;
            sOnArrived = nullptr;
            onArrived();
        }
    });
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
    sPending.stateFrames = st.stateFrames;
    sPending.hasFloorAhead = st.rngFound;
    sPending.floorYNear = st.floorYNear;
    sPending.floorYFar = st.floorYFar;
    sPending.floorFarPos = { st.floorFarPos.x, st.floorFarPos.y, st.floorFarPos.z };
    sPending.floorFarNorm = { st.floorFarNorm.x, st.floorFarNorm.y, st.floorFarNorm.z };
    sPending.gameplayFrames = st.gameplayFrames;
    memcpy(sPending.camera, st.mainCamera, sizeof(sPending.camera));
    memcpy(sPending.precipitation, st.precipitation, sizeof(sPending.precipitation));
    sPending.pause = st.pause;
    sPending.kankyos = st.kankyos;
    sPending.actors = st.actors;
    sPending.actorTablesApply = st.version == (uint16_t)GzMacro::GzVersion::Oot12;
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
