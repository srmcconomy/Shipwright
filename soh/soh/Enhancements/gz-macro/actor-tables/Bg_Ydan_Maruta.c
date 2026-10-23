// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Ydan_Maruta/z_bg_ydan_maruta.h"

void BgYdanMaruta_Init(void*, void*);
void BgYdanMaruta_Destroy(void*, void*);
void func_808BEFF4(void*, void*);
void func_808BF078(void*, void*);
void func_808BF108(void*, void*);
void func_808BF1EC(void*, void*);
void BgYdanMaruta_DoNothing(void*, void*);
void BgYdanMaruta_Update(void*, void*);
void BgYdanMaruta_Draw(void*, void*);

const GzActorSpan gGzBgYdanMarutaSpans[] = {
    { offsetof(BgYdanMaruta, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgYdanMaruta, switchFlag), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, unk_16A), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, collider.base.actor), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, collider.base.at), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, collider.base.ac), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, collider.base.oc), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, collider.base.atFlags), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, collider.base.acFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, collider.base.ocFlags1), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, collider.base.ocFlags2), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, collider.base.colType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, collider.base.shape), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, collider.count), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, collider.elements), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, elements[0].info.toucher.dmgFlags), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.toucher.effect), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.toucher.damage), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.bumper.dmgFlags), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.bumper.effect), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.bumper.defense), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.bumper.hitPos.x), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.bumper.hitPos.y), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.bumper.hitPos.z), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.elemType), 0, 0x190, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.toucherFlags), 0, 0x191, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.bumperFlags), 0, 0x192, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.ocElemFlags), 0, 0x193, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].info.atHit), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, elements[0].info.acHit), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, elements[0].info.atHitInfo), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, elements[0].info.acHitInfo), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, elements[0].dim.vtx[0].x), offsetof(BgYdanMaruta, elements[0].dim.vtx[1].x) - offsetof(BgYdanMaruta, elements[0].dim.vtx[0].x), 0x1a4, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].dim.vtx[0].y), offsetof(BgYdanMaruta, elements[0].dim.vtx[1].y) - offsetof(BgYdanMaruta, elements[0].dim.vtx[0].y), 0x1a8, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].dim.vtx[0].z), offsetof(BgYdanMaruta, elements[0].dim.vtx[1].z) - offsetof(BgYdanMaruta, elements[0].dim.vtx[0].z), 0x1ac, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].dim.plane.normal.x), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].dim.plane.normal.y), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].dim.plane.normal.z), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[0].dim.plane.originDist), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.toucher.dmgFlags), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.toucher.effect), 0, 0x1dc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.toucher.damage), 0, 0x1dd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.bumper.dmgFlags), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.bumper.effect), 0, 0x1e4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.bumper.defense), 0, 0x1e5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.bumper.hitPos.x), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.bumper.hitPos.y), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.bumper.hitPos.z), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.elemType), 0, 0x1ec, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.toucherFlags), 0, 0x1ed, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.bumperFlags), 0, 0x1ee, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.ocElemFlags), 0, 0x1ef, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].info.atHit), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, elements[1].info.acHit), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, elements[1].info.atHitInfo), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, elements[1].info.acHitInfo), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanMaruta, elements[1].dim.vtx[0].x), offsetof(BgYdanMaruta, elements[1].dim.vtx[1].x) - offsetof(BgYdanMaruta, elements[1].dim.vtx[0].x), 0x200, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].dim.vtx[0].y), offsetof(BgYdanMaruta, elements[1].dim.vtx[1].y) - offsetof(BgYdanMaruta, elements[1].dim.vtx[0].y), 0x204, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].dim.vtx[0].z), offsetof(BgYdanMaruta, elements[1].dim.vtx[1].z) - offsetof(BgYdanMaruta, elements[1].dim.vtx[0].z), 0x208, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].dim.plane.normal.x), 0, 0x224, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].dim.plane.normal.y), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].dim.plane.normal.z), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanMaruta, elements[1].dim.plane.originDist), 0, 0x230, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgYdanMarutaSpanCount = ARRAY_COUNT(gGzBgYdanMarutaSpans);

const GzActorFunction gGzBgYdanMarutaFunctions[] = {
    { 0x0, (void*)BgYdanMaruta_Init },
    { 0x264, (void*)BgYdanMaruta_Destroy },
    { 0x2b8, (void*)func_808BEFF4 },
    { 0x33c, (void*)func_808BF078 },
    { 0x3cc, (void*)func_808BF108 },
    { 0x4b0, (void*)func_808BF1EC },
    { 0x520, (void*)BgYdanMaruta_DoNothing },
    { 0x530, (void*)BgYdanMaruta_Update },
    { 0x554, (void*)BgYdanMaruta_Draw },
};
const size_t gGzBgYdanMarutaFunctionCount = ARRAY_COUNT(gGzBgYdanMarutaFunctions);
