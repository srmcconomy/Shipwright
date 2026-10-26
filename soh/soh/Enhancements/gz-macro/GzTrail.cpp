#include "GzTrail.h"
#include "GzMacro.h"
#include "GzView.h"

#include <algorithm>
#include <cmath>
#include <string>
#include <utility>
#include <vector>

#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>

#include "soh/Enhancements/game-interactor/GameInteractor.h"

extern "C" {
#include "z64.h"
#include "macros.h"
#include "functions.h"
#include "variables.h"
extern PlayState* gPlayState;
}

namespace {

struct Color {
    u8 r, g, b;
};

constexpr Color DEFAULT_COLOR = { 230, 40, 40 };

struct Point {
    int32_t frame;
    int16_t scene;
    int16_t room;
    Vec3f pos;
};

struct Change {
    int32_t frame;
    bool on;
    Color color;
};

// Above Link's feet, so the line doesn't sink into the floor he walks on
constexpr float HEIGHT = 6.0f;
// The line's width as a share of the screen's height, the same however far away it is (about 2 pixels on a
// 540 pixel tall screen)
constexpr float LINE_WIDTH_ON_SCREEN = 0.004f;
// Vertices hold whole numbers, too coarse for a line that thin, so they are stored relative to the camera at
// up to this many times their size, and a matrix scales them back. Seen from further away than that leaves room
// for, they are stored at less, so the line still fits.
constexpr float MAX_PRECISION = 8.0f;
constexpr float VERTEX_RANGE = 32000.0f;
// A step longer than this in one frame is a warp, void out or the like, which the line doesn't join up
constexpr float MAX_STEP = 300.0f;

bool sEnabled = false;
bool sHooked = false;
std::vector<Point> sPoints;
// Frames the line turns on or off (or changes color) from, in order
std::vector<Change> sChanges;
std::vector<Vtx> sVtx;
std::vector<Gfx> sGfx;
Mtx sMtx;

// Notes where Link is on each macro frame, once the game has drawn it, whether the line shows then or not, so
// changes to when it shows apply at once
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
    sPoints.push_back({ macro.frame, gPlayState->sceneNum, gPlayState->roomCtx.curRoom.num, pos });
}

// The change in effect at a macro frame, or null before the first, when the line is off
const Change* ChangeAt(int32_t frame) {
    const Change* current = nullptr;
    for (const Change& change : sChanges) {
        if (change.frame > frame) {
            break;
        }
        current = &change;
    }
    return current;
}

// A vertex at an offset from the camera
Vtx MakeVtx(const Vec3f& offset, float precision) {
    Vtx v = {};
    v.v.ob[0] = (s16)lroundf(offset.x * precision);
    v.v.ob[1] = (s16)lroundf(offset.y * precision);
    v.v.ob[2] = (s16)lroundf(offset.z * precision);
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
    // The line runs from where the changes last turned it on up to now (the last frame, once the macro has ended)
    const int32_t now = sPoints.back().frame;
    const Change* current = ChangeAt(now);
    if (current == nullptr || !current->on) {
        return;
    }
    int32_t start = current->frame;
    for (const Change* c = current; c != sChanges.data() && (c - 1)->on; c--) {
        start = (c - 1)->frame;
    }

    sVtx.clear();
    sGfx.clear();
    // Reserved up front: the display list points into sVtx
    sVtx.reserve(sPoints.size() * 4);
    sGfx.reserve(sPoints.size() * 3 + 8);

    // Drawn as a decal, pulled towards the camera for the depth test, so it doesn't flicker against the floor
    // just under it (the collision viewer does the same)
    const u32 renderMode = Z_CMP | IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_DEC;
    // Puts the vertices, scaled up offsets from the camera, back in the world. It is loaded in place of whatever
    // the last thing drawn left.
    const Vec3f& eye = gPlayState->view.eye;
    float furthest = 1.0f;
    for (const Point& p : sPoints) {
        furthest = fmaxf(furthest, fabsf(p.pos.x - eye.x));
        furthest = fmaxf(furthest, fabsf(p.pos.y - eye.y));
        furthest = fmaxf(furthest, fabsf(p.pos.z - eye.z));
    }
    // The furthest a quad's corner reaches past its point is far less than the margin left here
    const float precision = fminf(MAX_PRECISION, VERTEX_RANGE / (furthest * 1.05f + 50.0f));
    MtxF translate, scale, transform;
    SkinMatrix_SetTranslate(&translate, eye.x, eye.y, eye.z);
    SkinMatrix_SetScale(&scale, 1.0f / precision, 1.0f / precision, 1.0f / precision);
    SkinMatrix_MtxFMtxFMult(&translate, &scale, &transform);
    guMtxF2L(transform.mf, &sMtx);
    sGfx.push_back(gsSPMatrix(&sMtx, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH));
    sGfx.push_back(gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF));
    sGfx.push_back(gsDPSetCycleType(G_CYC_1CYCLE));
    sGfx.push_back(gsDPSetRenderMode(renderMode | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA),
                                     renderMode | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)));
    sGfx.push_back(gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE));
    sGfx.push_back(gsSPLoadGeometryMode(G_ZBUFFER));
    // Each step takes the color of the frame it reaches, set again only where that changes
    Color shown = { 0, 0, 0 };
    bool colorSet = false;

    // Half the line's width in world units at a distance of 1 from the camera
    const float widthPerDistance = LINE_WIDTH_ON_SCREEN * tanf(gPlayState->view.fovy * (float)M_PI / 360.0f);
    // Without perspective, the same width everywhere, and every point is seen from the same way
    const float orthoHeight = GzView_OrthoHeight(gPlayState);
    const Vec3f& lookAt = gPlayState->view.lookAt;
    const Vec3f viewDir = { lookAt.x - eye.x, lookAt.y - eye.y, lookAt.z - eye.z };
    for (size_t i = 1; i < sPoints.size(); i++) {
        const Point& a = sPoints[i - 1];
        const Point& b = sPoints[i];
        if (a.frame < start) {
            continue;
        }
        Vec3f step = { b.pos.x - a.pos.x, b.pos.y - a.pos.y, b.pos.z - a.pos.z };
        float length = Length(step);
        if (a.scene != b.scene || b.scene != gPlayState->sceneNum || length > MAX_STEP || length < 0.01f) {
            continue;
        }
        Vec3f fromEyeA = { a.pos.x - eye.x, a.pos.y - eye.y, a.pos.z - eye.z };
        Vec3f fromEyeB = { b.pos.x - eye.x, b.pos.y - eye.y, b.pos.z - eye.z };
        float distanceA = Length(fromEyeA);
        float distanceB = Length(fromEyeB);
        // Across the step and the view of it, so the quad faces the camera
        const Vec3f& view = orthoHeight > 0.0f ? viewDir : fromEyeA;
        Vec3f side = { step.y * view.z - step.z * view.y, step.z * view.x - step.x * view.z,
                       step.x * view.y - step.y * view.x };
        float sideLength = Length(side);
        if (sideLength < 0.0001f) {
            continue;
        }
        side = { side.x / sideLength, side.y / sideLength, side.z / sideLength };
        float halfA = orthoHeight > 0.0f ? LINE_WIDTH_ON_SCREEN * orthoHeight : widthPerDistance * distanceA;
        float halfB = orthoHeight > 0.0f ? halfA : widthPerDistance * distanceB;

        const Color color = ChangeAt(b.frame)->color;
        if (!colorSet || color.r != shown.r || color.g != shown.g || color.b != shown.b) {
            shown = color;
            colorSet = true;
            sGfx.push_back(gsDPSetPrimColor(0, 0, shown.r, shown.g, shown.b, 220));
        }
        size_t first = sVtx.size();
        auto corner = [&](const Vec3f& fromEye, float half, float sign) {
            sVtx.push_back(MakeVtx({ fromEye.x + side.x * half * sign, fromEye.y + side.y * half * sign,
                                     fromEye.z + side.z * half * sign },
                                   precision));
        };
        corner(fromEyeA, halfA, -1.0f);
        corner(fromEyeA, halfA, 1.0f);
        corner(fromEyeB, halfB, 1.0f);
        corner(fromEyeB, halfB, -1.0f);
        sGfx.push_back(gsSPVertex((uintptr_t)&sVtx[first], 4, 0));
        sGfx.push_back(gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0));
    }
    sGfx.push_back(gsSPEndDisplayList());

    OPEN_DISPS(gPlayState->state.gfxCtx);
    gSPDisplayList(POLY_XLU_DISP++, sGfx.data());
    CLOSE_DISPS(gPlayState->state.gfxCtx);
}

void GzTrail_SetEnabled(bool enabled) {
    if (!enabled) {
        sPoints.clear();
    }
    sEnabled = enabled;
    if (enabled && !sHooked) {
        GameInteractor::Instance->RegisterGameHook<GameInteractor::OnPlayDrawEnd>(GzTrail_Draw);
        sHooked = true;
    }
}

bool GzTrail_SetChanges(const char* json) {
    std::vector<Change> changes;
    try {
        for (const auto& item : nlohmann::json::parse(json)) {
            Change change = { item.at(0).get<int32_t>(), item.at(1).get<bool>(), DEFAULT_COLOR };
            if (item.size() > 2 && item.at(2).is_array() && item.at(2).size() >= 3) {
                change.color = { item.at(2).at(0).get<u8>(), item.at(2).at(1).get<u8>(), item.at(2).at(2).get<u8>() };
            }
            changes.push_back(change);
        }
    } catch (const std::exception& e) {
        SPDLOG_WARN("[gz trail] could not read the trail's changes: {}", e.what());
        return false;
    }
    std::stable_sort(changes.begin(), changes.end(),
                     [](const Change& a, const Change& b) { return a.frame < b.frame; });
    sChanges = std::move(changes);
    return true;
}

const char* GzTrail_GetPoints() {
    static std::string json;
    nlohmann::json list = nlohmann::json::array();
    for (const Point& p : sPoints) {
        list.push_back({ p.frame, p.scene, p.room, p.pos.x, p.pos.y - HEIGHT, p.pos.z });
    }
    json = list.dump();
    return json.c_str();
}
