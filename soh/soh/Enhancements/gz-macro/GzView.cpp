#include "GzView.h"

#include <cmath>
#include <memory>
#include <vector>

#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>

#include "soh/ResourceManagerHelpers.h"
#include "soh/resource/type/Scene.h"
#include "soh/resource/type/scenecommand/SetMesh.h"

extern "C" {
#include "macros.h"
#include "functions.h"
#include "variables.h"
}

namespace {

// How high above Link the overhead view looks down from
constexpr float OVERHEAD_HEIGHT = 700.0f;

GzViewMode sMode = GZ_VIEW_GAME;
// The game's own camera while another one draws
bool sSwapped = false;
Vec3f sEye;
Vec3f sLookAt;
Vec3f sUp;
// Where the other camera drew this frame from, for GzView_RedoCamera
bool sDrawn = false;
Vec3f sDrawnEye;
Vec3f sDrawnLookAt;
Vec3f sDrawnUp;
// The free camera, set by the page
Vec3f sFreeEye = { 0.0f, 0.0f, 0.0f };
Vec3f sFreeLookAt = { 0.0f, 0.0f, -1.0f };
// Half the free camera's height in game units when it draws without perspective, or 0
float sOrthoHeight = 0.0f;
// The view drawing this frame without perspective, while it is
View* sOrthoView = nullptr;

bool sFrozen = false;
// While frozen, the scene's fog is lifted and its draw distance (which the fog's far end sets) pushed out, so the
// view can move away from Link. The scene's own, put back once drawn:
constexpr s16 FROZEN_FOG_FAR = 25000;
bool sFogLifted = false;
s16 sFogNear;
s16 sFogFar;
// Other rooms of the scene drawn while frozen, with the resources that hold their meshes
struct ExtraRoom {
    std::shared_ptr<SOH::Scene> resource;
    Room room;
};
std::vector<int> sWantedRooms;
std::vector<ExtraRoom> sExtraRooms;
s16 sExtraRoomsScene = -1;

// Loads the meshes of the wanted rooms of the scene being played, the first time they are drawn
void LoadExtraRooms(PlayState* play) {
    if (sExtraRoomsScene == play->sceneNum) {
        return;
    }
    sExtraRooms.clear();
    sExtraRoomsScene = play->sceneNum;
    for (int num : sWantedRooms) {
        if (num < 0 || num >= play->numRooms) {
            continue;
        }
        auto resource = std::static_pointer_cast<SOH::Scene>(
            ResourceMgr_GetResourceByNameHandlingMQ(play->roomList[num].fileName));
        if (resource == nullptr) {
            continue;
        }
        for (const auto& command : resource->commands) {
            if (command == nullptr || command->cmdId != SOH::SceneCommandID::SetMesh) {
                continue;
            }
            ExtraRoom extra = { resource, {} };
            extra.room.num = num;
            extra.room.meshHeader = (MeshHeader*)static_cast<SOH::SetMesh*>(command.get())->GetRawPointer();
            // Room_Draw only draws a room with a segment. The meshes are resources, so nothing reads through it.
            extra.room.segment = resource.get();
            // A prerendered background only lines up with its own fixed camera
            if (extra.room.meshHeader != nullptr && extra.room.meshHeader->base.type != 1) {
                sExtraRooms.push_back(extra);
            }
            break;
        }
    }
}

} // namespace

extern "C" void GzView_SetMode(GzViewMode mode) {
    sMode = mode;
}

extern "C" void GzView_SetFreeCamera(float eyeX, float eyeY, float eyeZ, float atX, float atY, float atZ,
                                     float orthoHeight) {
    sFreeEye = { eyeX, eyeY, eyeZ };
    sFreeLookAt = { atX, atY, atZ };
    sOrthoHeight = orthoHeight;
}

extern "C" void GzView_SetFrozen(bool frozen) {
    sFrozen = frozen;
    if (!frozen) {
        sExtraRooms.clear();
        sExtraRoomsScene = -1;
    }
}

extern "C" s32 GzView_IsFrozen(void) {
    return sFrozen;
}

extern "C" bool GzView_SetRooms(const char* json) {
    std::vector<int> rooms;
    try {
        for (const auto& room : nlohmann::json::parse(json)) {
            rooms.push_back(room.get<int>());
        }
    } catch (const std::exception& e) {
        SPDLOG_WARN("[gz view] could not read the rooms: {}", e.what());
        return false;
    }
    sWantedRooms = std::move(rooms);
    sExtraRooms.clear();
    sExtraRoomsScene = -1;
    return true;
}

extern "C" void GzView_BeginDraw(PlayState* play) {
    sDrawn = false;
    if (sFrozen) {
        LightContext* light = &play->lightCtx;
        sFogNear = light->fogNear;
        sFogFar = light->fogFar;
        sFogLifted = true;
        // A near end of 1000 is no fog (Gfx_SetFog)
        light->fogNear = 1000;
        light->fogFar = MAX(light->fogFar, FROZEN_FOG_FAR);
        OPEN_DISPS(play->state.gfxCtx);
        POLY_OPA_DISP = Play_SetFog(play, POLY_OPA_DISP);
        POLY_XLU_DISP = Play_SetFog(play, POLY_XLU_DISP);
        CLOSE_DISPS(play->state.gfxCtx);
    }
    if (sMode == GZ_VIEW_GAME) {
        return;
    }
    Player* player = GET_PLAYER(play);
    if (player == nullptr) {
        return;
    }
    View* view = &play->view;
    sEye = view->eye;
    sLookAt = view->lookAt;
    sUp = view->up;
    sSwapped = true;

    if (sMode == GZ_VIEW_FREE) {
        view->eye = sFreeEye;
        view->lookAt = sFreeLookAt;
        view->up = { 0.0f, 1.0f, 0.0f };
        // Only a frozen game, as what is on screen feeds back into the game logic (see GzView_KeepGameProjection)
        if (sFrozen && sOrthoHeight > 0.0f) {
            sOrthoView = view;
        }
    } else {
        // The top of the picture is the way the game's camera faces, so the route reads the same way round
        Vec3f facing = { sLookAt.x - sEye.x, 0.0f, sLookAt.z - sEye.z };
        float length = sqrtf(facing.x * facing.x + facing.z * facing.z);
        facing =
            length > 0.001f ? Vec3f{ facing.x / length, 0.0f, facing.z / length } : Vec3f{ 0.0f, 0.0f, -1.0f };

        const Vec3f& link = player->actor.world.pos;
        view->lookAt = link;
        view->eye = { link.x, link.y + OVERHEAD_HEIGHT, link.z };
        view->up = facing;
    }
    sDrawn = true;
    sDrawnEye = view->eye;
    sDrawnLookAt = view->lookAt;
    sDrawnUp = view->up;
}

// Actors work out where they are on screen from this matrix while being drawn, and the game logic reads that
// back (for targeting, and whether an actor counts as on screen), so it stays the game camera's. Built the same
// way View_Apply and Play_Draw build it, so it matches to the bit. A frozen game never reads it back, so there it
// follows the camera drawing, which then also decides which actors and parts of rooms are drawn.
extern "C" void GzView_KeepGameProjection(PlayState* play) {
    if (!sSwapped || sFrozen) {
        return;
    }
    Mtx viewing;
    MtxF viewingF, projectionF;
    guLookAtF(viewingF.mf, sEye.x, sEye.y, sEye.z, sLookAt.x, sLookAt.y, sLookAt.z, sUp.x, sUp.y, sUp.z);
    Matrix_MtxFToMtx(&viewingF, &viewing);
    Matrix_MtxToMtxF(&viewing, &viewingF);
    Matrix_MtxToMtxF(&play->view.projection, &projectionF);
    Matrix_Mult(&projectionF, MTXMODE_NEW);
    Matrix_Mult(&viewingF, MTXMODE_APPLY);
    Matrix_Get(&play->viewProjectionMtxF);
}

extern "C" void GzView_Project(View* view, Mtx* projection, f32 aspect) {
    if (view != sOrthoView) {
        return;
    }
    float h = sOrthoHeight;
    guOrtho(projection, -h * aspect, h * aspect, -h, h, view->zNear, view->zFar, view->scale);
}

extern "C" float GzView_OrthoHeight(PlayState* play) {
    return sOrthoView == &play->view ? sOrthoHeight : 0.0f;
}

extern "C" void GzView_DrawRooms(PlayState* play, u32 flags) {
    if (!sFrozen || sWantedRooms.empty()) {
        return;
    }
    LoadExtraRooms(play);
    uintptr_t segment = gSegments[3];
    for (ExtraRoom& extra : sExtraRooms) {
        if (extra.room.num == play->roomCtx.curRoom.num || extra.room.num == play->roomCtx.prevRoom.num) {
            continue;
        }
        Room_Draw(play, &extra.room, flags);
    }
    gSegments[3] = segment;
}

extern "C" void GzView_EndDraw(PlayState* play) {
    sOrthoView = nullptr;
    if (sFogLifted) {
        play->lightCtx.fogNear = sFogNear;
        play->lightCtx.fogFar = sFogFar;
        sFogLifted = false;
    }
    if (!sSwapped) {
        return;
    }
    play->view.eye = sEye;
    play->view.lookAt = sLookAt;
    play->view.up = sUp;
    sSwapped = false;
}

// Some cameras, such as the one for aiming the hookshot or bow, update again once the frame is drawn and write the
// new viewing matrix over the one the frame's display lists use (Play_Draw), so the picture keeps up with the aim.
// The game's camera update still happens; this puts the other camera's matrices back over it.
extern "C" void GzView_RedoCamera(PlayState* play) {
    if (!sDrawn) {
        return;
    }
    View* view = &play->view;
    guLookAt(view->viewingPtr, sDrawnEye.x, sDrawnEye.y, sDrawnEye.z, sDrawnLookAt.x, sDrawnLookAt.y, sDrawnLookAt.z,
             sDrawnUp.x, sDrawnUp.y, sDrawnUp.z);
    if (play->skyboxId && (play->skyboxId != SKYBOX_UNSET_1D) && !play->envCtx.skyboxDisabled) {
        SkyboxDraw_UpdateMatrix(&play->skyboxCtx, sDrawnEye.x, sDrawnEye.y, sDrawnEye.z);
    }
}
