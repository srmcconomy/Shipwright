// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Honotrap/z_en_honotrap.h"

void EnHonotrap_FlameCollisionCheck(void*, void*);
void EnHonotrap_GetNormal(void*, void*);
void EnHonotrap_InitEye(void*, void*);
void EnHonotrap_InitFlame(void*, void*);
void EnHonotrap_Init(void*, void*);
void EnHonotrap_Destroy(void*, void*);
void EnHonotrap_EyeIdle(void*, void*);
void EnHonotrap_EyeOpen(void*, void*);
void EnHonotrap_EyeAttack(void*, void*);
void EnHonotrap_EyeClose(void*, void*);
void EnHonotrap_Flame(void*, void*);
void EnHonotrap_FlameDrop(void*, void*);
void EnHonotrap_FlameMove(void*, void*);
void EnHonotrap_FlameChase(void*, void*);
void EnHonotrap_FlameVanish(void*, void*);
void EnHonotrap_Update(void*, void*);
void EnHonotrap_DrawEye(void*, void*);
void EnHonotrap_DrawFlame(void*, void*);
void EnHonotrap_Draw(void*, void*);

const GzActorSpan gGzEnHonotrapSpans[] = {
    { offsetof(EnHonotrap, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHonotrap, collider.tris.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.tris.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.tris.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.tris.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.tris.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.tris.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.tris.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.tris.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.tris.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.tris.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.tris.count), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.tris.elements), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.elements[0].info.toucher.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.toucher.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.toucher.damage), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.bumper.dmgFlags), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.bumper.effect), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.bumper.defense), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.bumper.hitPos.x), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.bumper.hitPos.y), 0, 0x170, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.bumper.hitPos.z), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.elemType), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.toucherFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.bumperFlags), 0, 0x176, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.ocElemFlags), 0, 0x177, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].info.atHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.elements[0].info.acHit), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.elements[0].info.atHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.elements[0].info.acHitInfo), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.elements[0].dim.vtx[0].x), offsetof(EnHonotrap, collider.elements[0].dim.vtx[1].x) - offsetof(EnHonotrap, collider.elements[0].dim.vtx[0].x), 0x188, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].dim.vtx[0].y), offsetof(EnHonotrap, collider.elements[0].dim.vtx[1].y) - offsetof(EnHonotrap, collider.elements[0].dim.vtx[0].y), 0x18c, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].dim.vtx[0].z), offsetof(EnHonotrap, collider.elements[0].dim.vtx[1].z) - offsetof(EnHonotrap, collider.elements[0].dim.vtx[0].z), 0x190, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].dim.plane.normal.x), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].dim.plane.normal.y), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].dim.plane.normal.z), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[0].dim.plane.originDist), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.toucher.dmgFlags), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.toucher.effect), 0, 0x1c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.toucher.damage), 0, 0x1c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.bumper.dmgFlags), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.bumper.effect), 0, 0x1c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.bumper.defense), 0, 0x1c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.bumper.hitPos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.bumper.hitPos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.bumper.hitPos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.elemType), 0, 0x1d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.toucherFlags), 0, 0x1d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.bumperFlags), 0, 0x1d2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.ocElemFlags), 0, 0x1d3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].info.atHit), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.elements[1].info.acHit), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.elements[1].info.atHitInfo), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.elements[1].info.acHitInfo), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHonotrap, collider.elements[1].dim.vtx[0].x), offsetof(EnHonotrap, collider.elements[1].dim.vtx[1].x) - offsetof(EnHonotrap, collider.elements[1].dim.vtx[0].x), 0x1e4, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].dim.vtx[0].y), offsetof(EnHonotrap, collider.elements[1].dim.vtx[1].y) - offsetof(EnHonotrap, collider.elements[1].dim.vtx[0].y), 0x1e8, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].dim.vtx[0].z), offsetof(EnHonotrap, collider.elements[1].dim.vtx[1].z) - offsetof(EnHonotrap, collider.elements[1].dim.vtx[0].z), 0x1ec, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].dim.plane.normal.x), 0, 0x208, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].dim.plane.normal.y), 0, 0x20c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].dim.plane.normal.z), 0, 0x210, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, collider.elements[1].dim.plane.originDist), 0, 0x214, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, timer), 0, 0x218, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, eyeState), 0, 0x21a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, targetPos.x), 0, 0x21c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, targetPos.y), 0, 0x220, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, targetPos.z), 0, 0x224, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, speedMod), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, bobPhase), 0, 0x22c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, flameScroll), 0, 0x22e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHonotrap, colChkFlags), 0, 0x230, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnHonotrapSpanCount = ARRAY_COUNT(gGzEnHonotrapSpans);

const GzActorFunction gGzEnHonotrapFunctions[] = {
    { 0x0, (void*)EnHonotrap_FlameCollisionCheck },
    { 0x94, (void*)EnHonotrap_GetNormal },
    { 0x128, (void*)EnHonotrap_InitEye },
    { 0x2c4, (void*)EnHonotrap_InitFlame },
    { 0x404, (void*)EnHonotrap_Init },
    { 0x45c, (void*)EnHonotrap_Destroy },
    { 0x4a8, NULL },
    { 0x4c4, (void*)EnHonotrap_EyeIdle },
    { 0x57c, NULL },
    { 0x5d0, (void*)EnHonotrap_EyeOpen },
    { 0x6a0, NULL },
    { 0x6b8, (void*)EnHonotrap_EyeAttack },
    { 0x6e8, NULL },
    { 0x6fc, (void*)EnHonotrap_EyeClose },
    { 0x748, NULL },
    { 0x75c, (void*)EnHonotrap_Flame },
    { 0x7f0, NULL },
    { 0x858, (void*)EnHonotrap_FlameDrop },
    { 0x99c, NULL },
    { 0xa28, (void*)EnHonotrap_FlameMove },
    { 0xbf4, NULL },
    { 0xc34, (void*)EnHonotrap_FlameChase },
    { 0xde8, NULL },
    { 0xdfc, (void*)EnHonotrap_FlameVanish },
    { 0xe8c, (void*)EnHonotrap_Update },
    { 0xfd4, (void*)EnHonotrap_DrawEye },
    { 0x10c0, (void*)EnHonotrap_DrawFlame },
    { 0x1254, (void*)EnHonotrap_Draw },
};
const size_t gGzEnHonotrapFunctionCount = ARRAY_COUNT(gGzEnHonotrapFunctions);
