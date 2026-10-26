#include "GzMarkers.h"
#include "GzMacro.h"

#include <cmath>
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

enum class Shape { Circle, Arrow };

struct Marker {
    int32_t from;
    int32_t until;
    Shape shape;
    Vec3f pos;
    float size;
    u8 r, g, b;
};

// Vertices hold whole numbers, so, as for the trail, they are stored relative to the camera at this many times their
// size, and a matrix scales them back. Markers out of the range that leaves are skipped.
constexpr float PRECISION = 8.0f;
constexpr float MAX_RANGE = 32000.0f / PRECISION;
constexpr int CIRCLE_SEGMENTS = 32;
// Just above the ground, as a decal, so the ring doesn't flicker against the floor it lies on
constexpr float CIRCLE_LIFT = 1.0f;
// The arrow bobs up and down over this many frames, by this share of its size
constexpr float BOB_FRAMES = 20.0f;
constexpr float BOB_SHARE = 0.15f;

std::vector<Marker> sMarkers;
bool sHooked = false;
std::vector<Vtx> sVtx;
std::vector<Gfx> sGfx;
Mtx sMtx;

Vtx MakeVtx(const Vec3f& offset) {
    Vtx v = {};
    v.v.ob[0] = (s16)lroundf(offset.x * PRECISION);
    v.v.ob[1] = (s16)lroundf(offset.y * PRECISION);
    v.v.ob[2] = (s16)lroundf(offset.z * PRECISION);
    return v;
}

// Two triangles through four points around a quad, given as offsets from the camera
void Quad(const Vec3f& a, const Vec3f& b, const Vec3f& c, const Vec3f& d) {
    size_t first = sVtx.size();
    sVtx.push_back(MakeVtx(a));
    sVtx.push_back(MakeVtx(b));
    sVtx.push_back(MakeVtx(c));
    sVtx.push_back(MakeVtx(d));
    sGfx.push_back(gsSPVertex((uintptr_t)&sVtx[first], 4, 0));
    sGfx.push_back(gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0));
}

void Triangle(const Vec3f& a, const Vec3f& b, const Vec3f& c) {
    size_t first = sVtx.size();
    sVtx.push_back(MakeVtx(a));
    sVtx.push_back(MakeVtx(b));
    sVtx.push_back(MakeVtx(c));
    sGfx.push_back(gsSPVertex((uintptr_t)&sVtx[first], 3, 0));
    sGfx.push_back(gsSP1Triangle(0, 1, 2, 0));
}

void SetRenderMode(bool depthTest) {
    // A decal tested against the floor for the ring; the arrow is drawn over everything, so walls don't hide it
    const u32 mode = depthTest ? (Z_CMP | IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_DEC)
                               : (IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_XLU);
    sGfx.push_back(gsDPSetRenderMode(mode | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA),
                                     mode | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)));
    sGfx.push_back(gsSPLoadGeometryMode(depthTest ? G_ZBUFFER : 0));
}

// A flat ring around the marker, with a dark edge so it shows on light and dark floors
void DrawCircle(const Marker& m, const Vec3f& center) {
    const float width = fmaxf(2.5f, m.size * 0.14f);
    auto ring = [&](float inner, float outer) {
        for (int i = 0; i < CIRCLE_SEGMENTS; i++) {
            float a0 = 2.0f * (float)M_PI * i / CIRCLE_SEGMENTS;
            float a1 = 2.0f * (float)M_PI * (i + 1) / CIRCLE_SEGMENTS;
            auto at = [&](float angle, float radius) {
                return Vec3f{ center.x + cosf(angle) * radius, center.y, center.z + sinf(angle) * radius };
            };
            Quad(at(a0, inner), at(a0, outer), at(a1, outer), at(a1, inner));
        }
    };
    SetRenderMode(true);
    sGfx.push_back(gsDPSetPrimColor(0, 0, 0, 0, 0, 150));
    ring(fmaxf(0.0f, m.size - width), m.size + width);
    sGfx.push_back(gsDPSetPrimColor(0, 0, m.r, m.g, m.b, 230));
    ring(fmaxf(0.0f, m.size - width / 2), m.size + width / 2);
}

// An arrow pointing down at the marker, standing upright and turned to face the camera, bobbing above it
void DrawArrow(const Marker& m, const Vec3f& tipFromEye) {
    // Across the view, level with the ground; looking straight down, any level direction
    Vec3f right = { -tipFromEye.z, 0.0f, tipFromEye.x };
    float length = sqrtf(right.x * right.x + right.z * right.z);
    right = length > 0.001f ? Vec3f{ right.x / length, 0.0f, right.z / length } : Vec3f{ 1.0f, 0.0f, 0.0f };
    const float h = m.size;
    const float frame = (float)GzMacro_GetStatus().frame;
    const float bob = (0.5f - 0.5f * cosf(2.0f * (float)M_PI * frame / BOB_FRAMES)) * h * BOB_SHARE;
    // A point on the arrow: across from its middle, and up from its tip
    auto at = [&](float across, float up) {
        return Vec3f{ tipFromEye.x + right.x * across, tipFromEye.y + up + bob, tipFromEye.z + right.z * across };
    };
    // The head is the lower 45%, the shaft the rest; grow pads it all round, for the dark edge
    auto shape = [&](float grow) {
        Triangle(at(0.0f, -grow * 1.4f), at(h * 0.35f + grow, h * 0.45f + grow * 0.5f),
                 at(-h * 0.35f - grow, h * 0.45f + grow * 0.5f));
        Quad(at(-h * 0.12f - grow, h * 0.44f), at(h * 0.12f + grow, h * 0.44f), at(h * 0.12f + grow, h + grow),
             at(-h * 0.12f - grow, h + grow));
    };
    SetRenderMode(false);
    sGfx.push_back(gsDPSetPrimColor(0, 0, 0, 0, 0, 170));
    shape(fmaxf(1.0f, h * 0.06f));
    sGfx.push_back(gsDPSetPrimColor(0, 0, m.r, m.g, m.b, 240));
    shape(0.0f);
}

} // namespace

// C linkage, like the game's draw functions, for the functions OPEN_DISPS declares
extern "C" void GzMarkers_Draw() {
    if (sMarkers.empty() || gPlayState == nullptr) {
        return;
    }
    GzMacroStatus macro = GzMacro_GetStatus();
    if (!macro.playing) {
        return;
    }
    sVtx.clear();
    sGfx.clear();
    // Reserved up front: the display list points into sVtx
    sVtx.reserve(sMarkers.size() * CIRCLE_SEGMENTS * 8);
    sGfx.reserve(sMarkers.size() * CIRCLE_SEGMENTS * 4 + 16);

    const Vec3f& eye = gPlayState->view.eye;
    MtxF translate, scale, transform;
    SkinMatrix_SetTranslate(&translate, eye.x, eye.y, eye.z);
    SkinMatrix_SetScale(&scale, 1.0f / PRECISION, 1.0f / PRECISION, 1.0f / PRECISION);
    SkinMatrix_MtxFMtxFMult(&translate, &scale, &transform);
    guMtxF2L(transform.mf, &sMtx);
    sGfx.push_back(gsSPMatrix(&sMtx, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH));
    sGfx.push_back(gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF));
    sGfx.push_back(gsDPSetCycleType(G_CYC_1CYCLE));
    sGfx.push_back(gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE));

    size_t drawn = 0;
    // Rings first, so arrows over them stay on top
    for (Shape shape : { Shape::Circle, Shape::Arrow }) {
        for (const Marker& m : sMarkers) {
            if (m.shape != shape || macro.frame < m.from || macro.frame >= m.until) {
                continue;
            }
            Vec3f fromEye = { m.pos.x - eye.x, m.pos.y - eye.y, m.pos.z - eye.z };
            float distance = sqrtf(fromEye.x * fromEye.x + fromEye.y * fromEye.y + fromEye.z * fromEye.z);
            if (distance + m.size * 1.5f > MAX_RANGE) {
                continue;
            }
            if (shape == Shape::Circle) {
                fromEye.y += CIRCLE_LIFT;
                DrawCircle(m, fromEye);
            } else {
                DrawArrow(m, fromEye);
            }
            drawn++;
        }
    }
    if (drawn == 0) {
        return;
    }
    sGfx.push_back(gsSPEndDisplayList());

    OPEN_DISPS(gPlayState->state.gfxCtx);
    gSPDisplayList(POLY_XLU_DISP++, sGfx.data());
    CLOSE_DISPS(gPlayState->state.gfxCtx);
}

bool GzMarkers_Set(const char* text) {
    std::vector<Marker> markers;
    try {
        nlohmann::json list = nlohmann::json::parse(text);
        for (const auto& item : list) {
            Marker m = {};
            m.from = item.value("from", 0);
            m.until = item.value("until", INT32_MAX);
            m.shape = item.value("shape", std::string("circle")) == "arrow" ? Shape::Arrow : Shape::Circle;
            const auto& pos = item.at("pos");
            m.pos = { pos.at(0).get<float>(), pos.at(1).get<float>(), pos.at(2).get<float>() };
            m.size = item.value("size", m.shape == Shape::Arrow ? 30.0f : 25.0f);
            auto color = item.value("color", std::vector<int>{ 255, 210, 63 });
            if (color.size() < 3) {
                color = { 255, 210, 63 };
            }
            m.r = (u8)color[0];
            m.g = (u8)color[1];
            m.b = (u8)color[2];
            markers.push_back(m);
        }
    } catch (const std::exception& e) {
        SPDLOG_WARN("[gz markers] could not read the markers: {}", e.what());
        return false;
    }
    sMarkers = std::move(markers);
    if (!sMarkers.empty() && !sHooked) {
        GameInteractor::Instance->RegisterGameHook<GameInteractor::OnPlayDrawEnd>(GzMarkers_Draw);
        sHooked = true;
    }
    return true;
}
