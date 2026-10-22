#ifdef __EMSCRIPTEN__

// Lets the web page drive the gz tools: the player page loads a savestate and macro, imports the state and
// plays the macro from it, and polls the status.

#include "GzMacro.h"
#include "GzState.h"

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
void Graph_SetWebSpeed(s32 speed);
}

namespace {

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

// Runs this many game updates per browser frame, for fast-forwarding through a macro.
EMSCRIPTEN_KEEPALIVE void SohWeb_SetSpeed(int speed) {
    Graph_SetWebSpeed(speed);
}

// The macro and where Link is, as JSON. The string lives until the next call.
EMSCRIPTEN_KEEPALIVE const char* SohWeb_GzStatus() {
    static char json[768];
    GzMacroStatus macro = GzMacro_GetStatus();
    int written = snprintf(json, sizeof(json),
                           "{\"macro\":{\"loaded\":%s,\"playing\":%s,\"frame\":%d,\"frameCount\":%d,"
                           "\"rngMismatches\":%d},\"saveLoaded\":%s",
                           macro.loaded ? "true" : "false", macro.playing ? "true" : "false", macro.frame,
                           macro.frameCount, macro.rngMismatches,
                           GameInteractor::IsSaveLoaded() ? "true" : "false");
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
