#include "GzTrail.h"
#include "GzMacro.h"

#include <cmath>
#include <vector>

#include "soh/Enhancements/game-interactor/GameInteractor.h"

extern "C" {
#include "z64.h"
#include "macros.h"
#include "functions.h"
#include "variables.h"
extern PlayState* gPlayState;
}

namespace {

struct Point {
    int32_t frame;
    int16_t scene;
    Vec3f pos;
};

// Above Link's feet, so the line doesn't sink into the floor he walks on
constexpr float HEIGHT = 6.0f;
// The line's width as a share of the screen's height, the same however far away it is (about 2 pixels on a
// 540 pixel tall screen)
constexpr float LINE_WIDTH_ON_SCREEN = 0.004f;
// Vertices hold whole numbers, too coarse for a line that thin, so they are stored relative to the camera at
// this many times their size, and a matrix scales them back. Points out of the range that leaves are skipped.
constexpr float PRECISION = 8.0f;
constexpr float MAX_RANGE = 32000.0f / PRECISION;
// A step longer than this in one frame is a warp, void out or the like, which the line doesn't join up
constexpr float MAX_STEP = 300.0f;

bool sEnabled = false;
bool sHooked = false;
std::vector<Point> sPoints;
std::vector<Vtx> sVtx;
std::vector<Gfx> sGfx;
Mtx sMtx;

// Notes where Link is on each macro frame, once the game has drawn it
void Record() {
    GzMacroStatus macro = GzMacro_GetStatus();
    if (!macro.playing) {
        return;
    }
    if (!sPoints.empty() && macro.frame < sPoints.back().frame) {
        sPoints.clear();
    }
    if (!sPoints.empty() && macro.frame == sPoints.back().frame) {
        return;
    }
    Player* player = GET_PLAYER(gPlayState);
    Vec3f pos = player->actor.world.pos;
    pos.y += HEIGHT;
    sPoints.push_back({ macro.frame, gPlayState->sceneNum, pos });
}

// A vertex at an offset from the camera
Vtx MakeVtx(const Vec3f& offset) {
    Vtx v = {};
    v.v.ob[0] = (s16)lroundf(offset.x * PRECISION);
    v.v.ob[1] = (s16)lroundf(offset.y * PRECISION);
    v.v.ob[2] = (s16)lroundf(offset.z * PRECISION);
    return v;
}

float Length(const Vec3f& v) {
    return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

} // namespace

// A thin quad along each step, turned to face the camera so it reads as a line from any angle, and widening with
// distance so it stays the same width on screen. C linkage, like the game's draw functions, for the functions
// OPEN_DISPS declares.
extern "C" void GzTrail_Draw() {
    if (!sEnabled || gPlayState == nullptr) {
        return;
    }
    Record();
    if (sPoints.size() < 2) {
        return;
    }

    sVtx.clear();
    sGfx.clear();
    // Reserved up front: the display list points into sVtx
    sVtx.reserve(sPoints.size() * 4);
    sGfx.reserve(sPoints.size() * 2 + 8);

    // Drawn as a decal, pulled towards the camera for the depth test, so it doesn't flicker against the floor
    // just under it (the collision viewer does the same)
    const u32 renderMode = Z_CMP | IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_DEC;
    // Puts the vertices, scaled up offsets from the camera, back in the world. It is loaded in place of whatever
    // the last thing drawn left.
    const Vec3f& eye = gPlayState->view.eye;
    MtxF translate, scale, transform;
    SkinMatrix_SetTranslate(&translate, eye.x, eye.y, eye.z);
    SkinMatrix_SetScale(&scale, 1.0f / PRECISION, 1.0f / PRECISION, 1.0f / PRECISION);
    SkinMatrix_MtxFMtxFMult(&translate, &scale, &transform);
    guMtxF2L(transform.mf, &sMtx);
    sGfx.push_back(gsSPMatrix(&sMtx, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH));
    sGfx.push_back(gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF));
    sGfx.push_back(gsDPSetCycleType(G_CYC_1CYCLE));
    sGfx.push_back(gsDPSetRenderMode(renderMode | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA),
                                     renderMode | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)));
    sGfx.push_back(gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE));
    sGfx.push_back(gsSPLoadGeometryMode(G_ZBUFFER));
    sGfx.push_back(gsDPSetPrimColor(0, 0, 230, 40, 40, 220));

    // Half the line's width in world units at a distance of 1 from the camera
    const float widthPerDistance = LINE_WIDTH_ON_SCREEN * tanf(gPlayState->view.fovy * (float)M_PI / 360.0f);
    for (size_t i = 1; i < sPoints.size(); i++) {
        const Point& a = sPoints[i - 1];
        const Point& b = sPoints[i];
        Vec3f step = { b.pos.x - a.pos.x, b.pos.y - a.pos.y, b.pos.z - a.pos.z };
        float length = Length(step);
        if (a.scene != b.scene || b.scene != gPlayState->sceneNum || length > MAX_STEP || length < 0.01f) {
            continue;
        }
        Vec3f fromEyeA = { a.pos.x - eye.x, a.pos.y - eye.y, a.pos.z - eye.z };
        Vec3f fromEyeB = { b.pos.x - eye.x, b.pos.y - eye.y, b.pos.z - eye.z };
        float distanceA = Length(fromEyeA);
        float distanceB = Length(fromEyeB);
        if (distanceA > MAX_RANGE || distanceB > MAX_RANGE) {
            continue;
        }
        // Across the step and the view of it, so the quad faces the camera
        Vec3f side = { step.y * fromEyeA.z - step.z * fromEyeA.y, step.z * fromEyeA.x - step.x * fromEyeA.z,
                       step.x * fromEyeA.y - step.y * fromEyeA.x };
        float sideLength = Length(side);
        if (sideLength < 0.0001f) {
            continue;
        }
        side = { side.x / sideLength, side.y / sideLength, side.z / sideLength };
        float halfA = widthPerDistance * distanceA;
        float halfB = widthPerDistance * distanceB;

        size_t first = sVtx.size();
        sVtx.push_back(MakeVtx({ fromEyeA.x - side.x * halfA, fromEyeA.y - side.y * halfA, fromEyeA.z - side.z * halfA }));
        sVtx.push_back(MakeVtx({ fromEyeA.x + side.x * halfA, fromEyeA.y + side.y * halfA, fromEyeA.z + side.z * halfA }));
        sVtx.push_back(MakeVtx({ fromEyeB.x + side.x * halfB, fromEyeB.y + side.y * halfB, fromEyeB.z + side.z * halfB }));
        sVtx.push_back(MakeVtx({ fromEyeB.x - side.x * halfB, fromEyeB.y - side.y * halfB, fromEyeB.z - side.z * halfB }));
        sGfx.push_back(gsSPVertex((uintptr_t)&sVtx[first], 4, 0));
        sGfx.push_back(gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0));
    }
    sGfx.push_back(gsSPEndDisplayList());

    OPEN_DISPS(gPlayState->state.gfxCtx);
    gSPDisplayList(POLY_XLU_DISP++, sGfx.data());
    CLOSE_DISPS(gPlayState->state.gfxCtx);
}

void GzTrail_SetEnabled(bool enabled) {
    sEnabled = enabled;
    sPoints.clear();
    if (enabled && !sHooked) {
        GameInteractor::Instance->RegisterGameHook<GameInteractor::OnPlayDrawEnd>(GzTrail_Draw);
        sHooked = true;
    }
}
