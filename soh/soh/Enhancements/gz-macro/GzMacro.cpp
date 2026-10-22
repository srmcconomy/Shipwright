#include "GzMacro.h"
#include "GzMacroFile.h"
#include "GzState.h"

#include <algorithm>
#include <cctype>
#include <filesystem>

#include <spdlog/spdlog.h>
#include <ship/Context.h>
#include <ship/window/Window.h>
#include <ship/window/FileDropMgr.h>
#include <libultraship/bridge/consolevariablebridge.h>

#include "soh/cvar_prefixes.h"
#include "soh/OTRGlobals.h"
#include "soh/ShipInit.hpp"
#include "soh/SohGui/SohGui.hpp"
#include "soh/SohGui/UIWidgets.hpp"
#include "soh/WebFiles.h"

extern "C" {
#include "functions.h"
#include "macros.h"
}

#define CVAR_GZ_MACRO(var) CVAR_DEVELOPER_TOOLS("GzMacro." var)
#define CVAR_PATH_NAME CVAR_GZ_MACRO("Path")
#define CVAR_LOOP_NAME CVAR_GZ_MACRO("Loop")
#define CVAR_PLAY_ON_STATE_LOAD_NAME CVAR_GZ_MACRO("PlayOnStateLoad")

namespace {

struct Playback {
    GzMacro::MacroFile macro;
    std::string loadedPath;
    bool loaded = false;
    bool playing = false;

    // Number of inputs consumed so far, same as gz's movie_frame.
    int32_t frame = 0;
    size_t seedPos = 0;
    size_t ocarinaInputPos = 0;
    size_t ocarinaSyncPos = 0;
    size_t roomLoadPos = 0;
    int32_t lastOcarinaSyncFrame = -1;

    // Desync indicators, shown in the window.
    int32_t rngMismatches = 0;
    bool resetWarned = false;
};

Playback sPlayback;

// The rng to use where gz's would come from the state but can't (the state's couldn't be found, or the scene an
// import loads before the macro starts): the N64's at power on
constexpr u32 FIXED_SEED = 1;

void Rewind() {
    sPlayback.frame = 0;
    sPlayback.seedPos = 0;
    sPlayback.ocarinaInputPos = 0;
    sPlayback.ocarinaSyncPos = 0;
    sPlayback.roomLoadPos = 0;
    sPlayback.lastOcarinaSyncFrame = -1;
}

void Start() {
    if (!sPlayback.loaded || sPlayback.macro.inputs.empty()) {
        return;
    }
    Rewind();
    sPlayback.rngMismatches = 0;
    sPlayback.resetWarned = false;
    // The rng the state was saved with, as gz restores it when playing a macro, so the macro draws the same random
    // numbers it was recorded with
    uint32_t rng;
    Rand_Seed(GzState_GetSavedRng(&rng) ? rng : FIXED_SEED);
    sPlayback.playing = true;
    Gz_Notify("macro playing");
}

void Stop() {
    if (sPlayback.playing) {
        sPlayback.playing = false;
        Gz_Notify("macro stopped");
    }
}

bool LoadMacro(const std::string& path) {
    GzMacro::MacroFile macro;
    std::string error;
    if (!GzMacro::LoadMacroFile(path, macro, error)) {
        SPDLOG_ERROR("[gz macro] failed to load {}: {}", path, error);
        Gz_Notify(("failed to load macro: " + error).c_str());
        return false;
    }
    sPlayback.playing = false;
    sPlayback.macro = std::move(macro);
    sPlayback.loadedPath = path;
    sPlayback.loaded = true;
    Rewind();
    SPDLOG_INFO("[gz macro] loaded {} ({} frames)", path, sPlayback.macro.inputs.size());
    Gz_Notify("macro loaded");
    return true;
}

// Advances a record position past records for frames that have already gone by, which can happen when
// SoH runs a hook on fewer frames than the N64 did.
template <typename T> const T* NextRecord(const std::vector<T>& records, size_t& pos) {
    while (pos < records.size() && records[pos].frame < sPlayback.frame) {
        pos++;
    }
    if (pos < records.size() && records[pos].frame == sPlayback.frame) {
        return &records[pos++];
    }
    return nullptr;
}

// Scene loads can land a frame or two away from where gz recorded them (SoH reaches Play_Init a frame earlier
// than the N64 does), and a seed missed by frame would leave the rng to the clock. So the next seed record within
// this many frames is used, in order.
constexpr int32_t SEED_SLACK = 2;

// Whether either rng value follows the other within a few draws
bool RngClose(u32 a, u32 b) {
    constexpr int MAX_DRAWS = 64;
    u32 fromA = a;
    u32 fromB = b;
    for (int i = 0; i <= MAX_DRAWS; i++) {
        if (fromA == b || fromB == a) {
            return true;
        }
        fromA = fromA * 1664525 + 1013904223;
        fromB = fromB * 1664525 + 1013904223;
    }
    return false;
}

const GzMacro::Seed* NextSeedRecord() {
    const std::vector<GzMacro::Seed>& seeds = sPlayback.macro.seeds;
    size_t& pos = sPlayback.seedPos;
    while (pos < seeds.size() && seeds[pos].frame < sPlayback.frame - SEED_SLACK) {
        pos++;
    }
    if (pos < seeds.size() && seeds[pos].frame <= sPlayback.frame + SEED_SLACK) {
        return &seeds[pos++];
    }
    return nullptr;
}

// Same as gz's movie_to_z.
void MovieToInput(int32_t frame, Input* input) {
    const GzMacro::Input& mi = sPlayback.macro.inputs[frame];
    const GzMacro::Controller& rawPrev = frame == 0 ? sPlayback.macro.inputStart : sPlayback.macro.inputs[frame - 1].raw;
    u16 delta = mi.padDelta & ~GzMacro::PAD_DELTA_RESET;

    *input = {};
    input->cur.button = mi.raw.pad;
    input->cur.stick_x = mi.raw.x;
    input->cur.stick_y = mi.raw.y;
    input->prev.button = rawPrev.pad;
    input->prev.stick_x = rawPrev.x;
    input->prev.stick_y = rawPrev.y;
    input->press.button = (mi.raw.pad & ~rawPrev.pad) | delta;
    input->press.stick_x = (s8)(mi.raw.x - rawPrev.x);
    input->press.stick_y = (s8)(mi.raw.y - rawPrev.y);
    input->rel.button = (~mi.raw.pad & rawPrev.pad) | delta;
    PadUtils_UpdateRelXY(input);
}

bool HandleMacroDrop(char* filePath) {
    std::string extension = std::filesystem::path(filePath).extension().string();
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    if (extension == ".gzs") {
        GzState_Load(filePath);
        return true;
    }
    if (extension != ".gzm") {
        return false;
    }
    if (LoadMacro(filePath)) {
        CVarSetString(CVAR_PATH_NAME, filePath);
        Ship::Context::GetRawInstance()->GetWindow()->GetGui()->SaveConsoleVariablesNextFrame();
    }
    return true;
}

void RegisterGzMacro() {
    Ship::Context::GetRawInstance()->GetFileDropMgr()->RegisterDropHandler(HandleMacroDrop);
}

static RegisterShipInitFunc initFunc(RegisterGzMacro);

} // namespace

extern "C" {

void GzMacro_UpdateInput(Input* input) {
    if (!sPlayback.playing) {
        return;
    }
    if (sPlayback.frame >= (int32_t)sPlayback.macro.inputs.size()) {
        if (CVarGetInteger(CVAR_LOOP_NAME, 0)) {
            Rewind();
        } else {
            sPlayback.playing = false;
            Gz_Notify("macro finished");
            return;
        }
    }
    if ((sPlayback.macro.inputs[sPlayback.frame].padDelta & GzMacro::PAD_DELTA_RESET) && !sPlayback.resetWarned) {
        SPDLOG_WARN("[gz macro] frame {} has a reset, which is not supported", sPlayback.frame);
        sPlayback.resetWarned = true;
    }
    MovieToInput(sPlayback.frame++, input);
}

u32 GzMacro_FilterRandSeed(u32 seed) {
    if (!sPlayback.playing) {
        // The scene an imported state loads would seed the rng from the clock, and what it draws before the macro
        // starts (such as Link's blink timer) lasts into it. A fixed seed makes every import the same.
        return GzState_IsImporting() ? FIXED_SEED : seed;
    }
    const GzMacro::Seed* record = NextSeedRecord();
    if (record == nullptr) {
        return seed;
    }
    // gz only restores the seed when the rng matches. SoH reaches the scene load a frame early, a few random
    // numbers short of where the N64 was, so it counts as in sync when the two are that close in the sequence,
    // and the seed is restored anyway to put SoH back in sync on every scene load.
    if (!RngClose(Rand_GetSeed(), record->oldSeed)) {
        sPlayback.rngMismatches++;
    }
    return record->newSeed;
}

void GzMacro_UpdateOcarinaInput(Input* input) {
    if (!sPlayback.playing || sPlayback.frame == 0) {
        return;
    }
    const GzMacro::OcarinaInput* record = NextRecord(sPlayback.macro.ocarinaInputs, sPlayback.ocarinaInputPos);
    if (record != nullptr) {
        input->cur.button = record->pad;
        input->rel.stick_x = record->adjustedX;
        input->rel.stick_y = record->adjustedY;
        input->cur.right_stick_x = 0;
        input->cur.right_stick_y = 0;
    } else {
        // Ocarina input is read after the frame counter has been advanced, so use the previous frame.
        MovieToInput(sPlayback.frame - 1, input);
    }
}

bool GzMacro_GetOcarinaSync(s32* audioFrames) {
    if (!sPlayback.playing || sPlayback.lastOcarinaSyncFrame == sPlayback.frame) {
        return false;
    }
    sPlayback.lastOcarinaSyncFrame = sPlayback.frame;
    const GzMacro::OcarinaSync* record = NextRecord(sPlayback.macro.ocarinaSyncs, sPlayback.ocarinaSyncPos);
    if (record != nullptr) {
        *audioFrames = record->audioFrames;
    }
    return true;
}

u32 GzMacro_OcarinaMemoryGameRand(u8 songLength) {
    // Same as gz's afx_rand_hook.
    u32 value = Rand_GetSeed();
    for (s32 i = 0; i < songLength + 1; i++) {
        value = value * 0x0019660D + 0x3C6EF35F;
    }
    return value;
}

bool GzMacro_ShouldDelayRoomLoad(void) {
    return sPlayback.playing && NextRecord(sPlayback.macro.roomLoads, sPlayback.roomLoadPos) != nullptr;
}

bool GzMacro_IsPlaying(void) {
    return sPlayback.playing;
}

bool GzMacro_GetCurrentInput(u16* button, s8* stickX, s8* stickY) {
    if (!sPlayback.playing) {
        return false;
    }
    // The frame counter has already moved past the input the game was given
    const GzMacro::Controller& raw =
        sPlayback.frame == 0 ? sPlayback.macro.inputStart : sPlayback.macro.inputs[sPlayback.frame - 1].raw;
    *button = raw.pad;
    *stickX = raw.x;
    *stickY = raw.y;
    return true;
}

} // extern "C"

bool GzMacro_Load(const std::string& path) {
    return LoadMacro(path);
}

void GzMacro_Play() {
    Start();
}

void GzMacro_Stop() {
    Stop();
}

GzMacroStatus GzMacro_GetStatus() {
    return { sPlayback.loaded, sPlayback.playing, sPlayback.frame, (int32_t)sPlayback.macro.inputs.size(),
             sPlayback.rngMismatches };
}

void GzMacro_OnSaveStateLoaded() {
    if (sPlayback.loaded && CVarGetInteger(CVAR_PLAY_ON_STATE_LOAD_NAME, 0)) {
        Start();
    }
}

static void DrawMacroTab() {
    static std::string path = CVarGetString(CVAR_PATH_NAME, "");
    // Show the file that was actually loaded when it came from a drop or the file picker
    static std::string shownLoadedPath;
    if (sPlayback.loadedPath != shownLoadedPath) {
        shownLoadedPath = sPlayback.loadedPath;
        path = shownLoadedPath;
    }

    ImGui::TextWrapped("Plays back macros recorded in gz, the OoT practice ROM.");
    ImGui::Spacing();

    if (UIWidgets::InputString("Macro File", &path,
                               UIWidgets::InputOptions().Color(THEME_COLOR).PlaceholderText("path/to/macro.gzm"))) {
        CVarSetString(CVAR_PATH_NAME, path.c_str());
        Ship::Context::GetRawInstance()->GetWindow()->GetGui()->SaveConsoleVariablesNextFrame();
    }
    if (UIWidgets::Button("Load", UIWidgets::ButtonOptions().Color(THEME_COLOR))) {
        LoadMacro(path);
    }
#ifdef __EMSCRIPTEN__
    // The browser can't read paths on the user's disk; the picked file goes through the drop handler
    if (UIWidgets::Button("Browse...", UIWidgets::ButtonOptions().Color(THEME_COLOR))) {
        SohWeb_OpenFilePicker(".gzm,.gzs");
    }
#endif

    if (!sPlayback.loaded) {
        ImGui::TextDisabled("No macro loaded");
        return;
    }

    const GzMacro::MacroFile& macro = sPlayback.macro;
    ImGui::SeparatorText(std::filesystem::path(sPlayback.loadedPath).filename().string().c_str());
    ImGui::Text("Frames: %zu", macro.inputs.size());
    ImGui::Text("RNG seeds: %zu", macro.seeds.size());
    ImGui::Text("Ocarina inputs: %zu, sync: %zu", macro.ocarinaInputs.size(), macro.ocarinaSyncs.size());
    ImGui::Text("Room load lag frames: %zu", macro.roomLoads.size());
    ImGui::Text("Rerecords: %d", macro.rerecords);

    ImGui::Spacing();
    if (sPlayback.playing) {
        if (UIWidgets::Button("Stop", UIWidgets::ButtonOptions().Color(THEME_COLOR))) {
            Stop();
        }
    } else if (UIWidgets::Button("Play", UIWidgets::ButtonOptions().Color(THEME_COLOR))) {
        Start();
    }
    UIWidgets::CVarCheckbox("Loop", CVAR_LOOP_NAME, UIWidgets::CheckboxOptions().Color(THEME_COLOR));
    UIWidgets::CVarCheckbox(
        "Play on Savestate Load", CVAR_PLAY_ON_STATE_LOAD_NAME,
        UIWidgets::CheckboxOptions()
            .Color(THEME_COLOR)
            .Tooltip("Starts the macro from the beginning whenever a savestate is loaded, like loading a state "
                     "and playing a macro in gz."));

    ImGui::Spacing();
    ImGui::Text("Frame: %d / %zu", sPlayback.frame, macro.inputs.size());
    if (sPlayback.rngMismatches > 0) {
        ImGui::TextWrapped("RNG differed from the recording at %d scene load(s); the recorded seed was used.",
                           sPlayback.rngMismatches);
    }
    if (sPlayback.resetWarned) {
        ImGui::TextWrapped("This macro resets the console, which is not supported.");
    }

    ImGui::Spacing();
    ImGui::TextWrapped("Start playback from the same spot the macro was recorded from in gz. Enhancements that "
                       "change gameplay, and differences between N64 and SoH, can cause desyncs.");
}

void GzMacroWindow::DrawElement() {
    ImGui::TextWrapped("Tools for gz, the OoT practice ROM. Load files below or drag .gzm and .gzs files onto the "
                       "game window.");
    if (ImGui::BeginTabBar("##GzTools")) {
        if (ImGui::BeginTabItem("Macros")) {
            DrawMacroTab();
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("Savestates")) {
            GzState_DrawTab();
            ImGui::EndTabItem();
        }
        ImGui::EndTabBar();
    }
}
