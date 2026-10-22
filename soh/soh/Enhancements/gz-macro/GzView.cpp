#include "GzView.h"

#include <cmath>

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

} // namespace

extern "C" void GzView_SetMode(GzViewMode mode) {
    sMode = mode;
}

extern "C" void GzView_BeginDraw(PlayState* play) {
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

    // The top of the picture is the way the game's camera faces, so the route reads the same way round
    Vec3f facing = { sLookAt.x - sEye.x, 0.0f, sLookAt.z - sEye.z };
    float length = sqrtf(facing.x * facing.x + facing.z * facing.z);
    facing = length > 0.001f ? Vec3f{ facing.x / length, 0.0f, facing.z / length } : Vec3f{ 0.0f, 0.0f, -1.0f };

    const Vec3f& link = player->actor.world.pos;
    view->lookAt = link;
    view->eye = { link.x, link.y + OVERHEAD_HEIGHT, link.z };
    view->up = facing;
}

// Actors work out where they are on screen from this matrix while being drawn, and the game logic reads that
// back (for targeting, and whether an actor counts as on screen), so it stays the game camera's. Built the same
// way View_Apply and Play_Draw build it, so it matches to the bit.
extern "C" void GzView_KeepGameProjection(PlayState* play) {
    if (!sSwapped) {
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

extern "C" void GzView_EndDraw(PlayState* play) {
    if (!sSwapped) {
        return;
    }
    play->view.eye = sEye;
    play->view.lookAt = sLookAt;
    play->view.up = sUp;
    sSwapped = false;
}
