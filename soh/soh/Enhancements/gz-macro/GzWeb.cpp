#ifdef __EMSCRIPTEN__

// Lets the web page drive the gz tools: the player page loads a savestate and macro, imports the state and
// plays the macro from it, and polls the status.

#include "GzMacro.h"
#include "GzMarkers.h"
#include "GzState.h"
#include "GzTrail.h"
#include "GzView.h"

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <filesystem>
#include <string>

#include <emscripten.h>
#include <ship/Context.h>
#include <ship/window/Window.h>

#include "soh/Enhancements/game-interactor/GameInteractor.h"

extern "C" {
#include "z64.h"
#include "macros.h"
#include "variables.h"
extern PlayState* gPlayState;
void Graph_SetWebSpeed(f32 speed);
void Graph_WebStep(void);
u32 Rand_GetSeed(void);
void OTRAudio_SetWebMuted(bool muted);
void OTRGlobals_SetWebSkipRender(bool skip);
}

namespace {

// The macro frame the game holds on until the page moves it on, or -1
int32_t sBreakFrame = -1;

void PlayMacroOnArrival() {
    GzMacro_Play();
}

} // namespace

extern "C" {

// Loads a .gzs or .gzm already written to the filesystem by the page.
EMSCRIPTEN_KEEPALIVE bool SohWeb_GzLoad(const char* path) {
    std::string extension = std::filesystem::path(path).extension().string();
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    if (extension == ".gzs") {
        return GzState_Load(path);
    }
    if (extension == ".gzm") {
        return GzMacro_Load(path);
    }
    return false;
}

// Imports the loaded savestate, and when playMacro is set starts the loaded macro once Link has arrived. With no
// file loaded (the title screen), boots into the state on a temporary file that is never saved.
EMSCRIPTEN_KEEPALIVE bool SohWeb_GzImport(bool playMacro) {
    return GzState_Import(playMacro ? PlayMacroOnArrival : nullptr, true);
}

EMSCRIPTEN_KEEPALIVE void SohWeb_GzPlay() {
    GzMacro_Play();
}

EMSCRIPTEN_KEEPALIVE void SohWeb_GzStop() {
    GzMacro_Stop();
}

// Shows or hides SoH's Input Viewer, which follows the macro's inputs while one plays.
EMSCRIPTEN_KEEPALIVE void SohWeb_SetInputDisplay(bool visible) {
    auto window = Ship::Context::GetRawInstance()->GetWindow()->GetGui()->GetGuiWindow("Input Viewer");
    if (window == nullptr) {
        return;
    }
    if (visible) {
        window->Show();
    } else {
        window->Hide();
    }
}

// Shows or hides the gz tools' notifications, such as "gz savestate loaded" and "macro playing".
EMSCRIPTEN_KEEPALIVE void SohWeb_SetNotifications(bool visible) {
    Gz_SetNotifications(visible);
}

// Holds the game once the playing macro reaches this frame (as GzStatus counts them), so the page can pause it
// on exactly that frame; -1 lets it run. Stepping still moves past it.
EMSCRIPTEN_KEEPALIVE void SohWeb_SetBreakFrame(int frame) {
    sBreakFrame = frame;
}

// Whether the game should hold, for the browser's frame loop
s32 GzWeb_AtBreakFrame(void) {
    return sBreakFrame >= 0 && GzMacro_IsPlaying() && GzMacro_GetStatus().frame >= sBreakFrame;
}

// Runs one game update, with the page's main loop paused.
EMSCRIPTEN_KEEPALIVE void SohWeb_StepFrame() {
    Graph_WebStep();
}

// Shows or hides the red line through where Link has been while the macro plays.
EMSCRIPTEN_KEEPALIVE void SohWeb_SetTrail(bool visible) {
    GzTrail_SetEnabled(visible);
}

// Turns the line on and off on macro frames (see GzTrail.h); "[]" leaves it on throughout.
EMSCRIPTEN_KEEPALIVE bool SohWeb_SetTrailChanges(const char* json) {
    return GzTrail_SetChanges(json);
}

// Shows markers in the game world on chosen macro frames (see GzMarkers.h); "[]" clears them.
EMSCRIPTEN_KEEPALIVE bool SohWeb_SetMarkers(const char* json) {
    return GzMarkers_Set(json);
}

// Draws the game from another camera angle (GzViewMode), leaving the game's own camera, and so the macro, alone.
EMSCRIPTEN_KEEPALIVE void SohWeb_SetView(int mode) {
    GzView_SetMode((GzViewMode)mode);
}

// Where the free camera (GZ_VIEW_FREE) looks from and at, in game units.
// With an orthoHeight above 0 it draws without perspective, that many units above and below what it looks at.
EMSCRIPTEN_KEEPALIVE void SohWeb_SetFreeCamera(float eyeX, float eyeY, float eyeZ, float atX, float atY, float atZ,
                                               float orthoHeight) {
    GzView_SetFreeCamera(eyeX, eyeY, eyeZ, atX, atY, atZ, orthoHeight);
}

// Freezes the game on its frame, so each frame after only draws it again (see GzView.h).
EMSCRIPTEN_KEEPALIVE void SohWeb_SetFrozen(bool frozen) {
    GzView_SetFrozen(frozen);
}

// Rooms of the scene drawn while frozen, as JSON, [0, 3, ...].
EMSCRIPTEN_KEEPALIVE bool SohWeb_SetFrozenRooms(const char* json) {
    return GzView_SetRooms(json);
}

// Builds frames without drawing them, for running a macro ahead as fast as the game can.
EMSCRIPTEN_KEEPALIVE void SohWeb_SetSkipRender(bool skip) {
    OTRGlobals_SetWebSkipRender(skip);
}

// Where Link was on each macro frame the trail recorded, as JSON (see GzTrail_GetPoints).
EMSCRIPTEN_KEEPALIVE const char* SohWeb_GetTrail() {
    return GzTrail_GetPoints();
}

// Silences the game, or brings its sound back.
EMSCRIPTEN_KEEPALIVE void SohWeb_SetMuted(bool muted) {
    OTRAudio_SetWebMuted(muted);
}

// Runs the game at this multiple of its own speed: 0.5 is half speed, 2 double speed. Away from 1 it is silent.
EMSCRIPTEN_KEEPALIVE void SohWeb_SetSpeed(float speed) {
    Graph_SetWebSpeed(speed);
}

// The macro and where Link is, as JSON. The string lives until the next call.
EMSCRIPTEN_KEEPALIVE const char* SohWeb_GzStatus() {
    static char json[1024];
    GzMacroStatus macro = GzMacro_GetStatus();
    int written = snprintf(json, sizeof(json),
                           "{\"macro\":{\"loaded\":%s,\"playing\":%s,\"frame\":%d,\"frameCount\":%d,"
                           "\"rngMismatches\":%d},\"saveLoaded\":%s,\"rng\":%u",
                           macro.loaded ? "true" : "false", macro.playing ? "true" : "false", macro.frame,
                           macro.frameCount, macro.rngMismatches,
                           GameInteractor::IsSaveLoaded() ? "true" : "false", Rand_GetSeed());
    Player* player = gPlayState != nullptr ? GET_PLAYER(gPlayState) : nullptr;
    if (player != nullptr) {
        written += snprintf(json + written, sizeof(json) - written,
                            ",\"scene\":%d,\"room\":%d,\"entrance\":%d,\"gameplayFrames\":%u,"
                            "\"pos\":[%.2f,%.2f,%.2f],\"yaw\":%d,\"speed\":%.2f,\"pause\":%d,"
                            "\"stateFlags1\":%u,\"stateFlags2\":%u,\"health\":%d",
                            gPlayState->sceneNum, gPlayState->roomCtx.curRoom.num, gSaveContext.entranceIndex,
                            gPlayState->gameplayFrames, player->actor.world.pos.x, player->actor.world.pos.y,
                            player->actor.world.pos.z, player->actor.shape.rot.y, player->linearVelocity,
                            gPlayState->pauseCtx.state, player->stateFlags1, player->stateFlags2, gSaveContext.health);
        const View& view = gPlayState->view;
        written += snprintf(json + written, sizeof(json) - written,
                            ",\"camera\":{\"eye\":[%.2f,%.2f,%.2f],\"at\":[%.2f,%.2f,%.2f],\"fovy\":%.2f}",
                            view.eye.x, view.eye.y, view.eye.z, view.lookAt.x, view.lookAt.y, view.lookAt.z, view.fovy);
    }
    int stateScene, stateRoom;
    float statePos[3];
    if (GzState_GetSummary(&stateScene, &stateRoom, statePos)) {
        written += snprintf(json + written, sizeof(json) - written,
                            ",\"state\":{\"scene\":%d,\"room\":%d,\"pos\":[%.2f,%.2f,%.2f]}", stateScene, stateRoom,
                            statePos[0], statePos[1], statePos[2]);
    }
    snprintf(json + written, sizeof(json) - written, "}");
    return json;
}

} // extern "C"

#endif
