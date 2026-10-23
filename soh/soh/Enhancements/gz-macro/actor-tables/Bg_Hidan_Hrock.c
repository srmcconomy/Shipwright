// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Hrock/z_bg_hidan_hrock.h"

void BgHidanHrock_Init(void*, void*);
void BgHidanHrock_Destroy(void*, void*);
void func_808894A4(void*, void*);
void func_808894B0(void*, void*);
void func_8088960C(void*, void*);
void func_808896B8(void*, void*);
void BgHidanHrock_Update(void*, void*);
void BgHidanHrock_Draw(void*, void*);

const GzActorSpan gGzBgHidanHrockSpans[] = {
    { offsetof(BgHidanHrock, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHidanHrock, unk_168), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, unk_16A), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, collider.base.actor), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, collider.base.at), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, collider.base.ac), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, collider.base.oc), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, collider.base.atFlags), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, collider.base.acFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, collider.base.ocFlags1), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, collider.base.ocFlags2), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, collider.base.colType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, collider.base.shape), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, collider.count), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, collider.elements), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, colliderItems[0].info.toucher.dmgFlags), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.toucher.effect), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.toucher.damage), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.bumper.dmgFlags), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.bumper.effect), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.bumper.defense), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.bumper.hitPos.x), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.bumper.hitPos.y), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.bumper.hitPos.z), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.elemType), 0, 0x190, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.toucherFlags), 0, 0x191, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.bumperFlags), 0, 0x192, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.ocElemFlags), 0, 0x193, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].info.atHit), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, colliderItems[0].info.acHit), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, colliderItems[0].info.atHitInfo), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, colliderItems[0].info.acHitInfo), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, colliderItems[0].dim.vtx[0].x), offsetof(BgHidanHrock, colliderItems[0].dim.vtx[1].x) - offsetof(BgHidanHrock, colliderItems[0].dim.vtx[0].x), 0x1a4, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].dim.vtx[0].y), offsetof(BgHidanHrock, colliderItems[0].dim.vtx[1].y) - offsetof(BgHidanHrock, colliderItems[0].dim.vtx[0].y), 0x1a8, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].dim.vtx[0].z), offsetof(BgHidanHrock, colliderItems[0].dim.vtx[1].z) - offsetof(BgHidanHrock, colliderItems[0].dim.vtx[0].z), 0x1ac, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].dim.plane.normal.x), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].dim.plane.normal.y), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].dim.plane.normal.z), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[0].dim.plane.originDist), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.toucher.dmgFlags), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.toucher.effect), 0, 0x1dc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.toucher.damage), 0, 0x1dd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.bumper.dmgFlags), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.bumper.effect), 0, 0x1e4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.bumper.defense), 0, 0x1e5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.bumper.hitPos.x), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.bumper.hitPos.y), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.bumper.hitPos.z), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.elemType), 0, 0x1ec, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.toucherFlags), 0, 0x1ed, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.bumperFlags), 0, 0x1ee, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.ocElemFlags), 0, 0x1ef, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].info.atHit), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, colliderItems[1].info.acHit), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, colliderItems[1].info.atHitInfo), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, colliderItems[1].info.acHitInfo), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanHrock, colliderItems[1].dim.vtx[0].x), offsetof(BgHidanHrock, colliderItems[1].dim.vtx[1].x) - offsetof(BgHidanHrock, colliderItems[1].dim.vtx[0].x), 0x200, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].dim.vtx[0].y), offsetof(BgHidanHrock, colliderItems[1].dim.vtx[1].y) - offsetof(BgHidanHrock, colliderItems[1].dim.vtx[0].y), 0x204, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].dim.vtx[0].z), offsetof(BgHidanHrock, colliderItems[1].dim.vtx[1].z) - offsetof(BgHidanHrock, colliderItems[1].dim.vtx[0].z), 0x208, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].dim.plane.normal.x), 0, 0x224, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].dim.plane.normal.y), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].dim.plane.normal.z), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanHrock, colliderItems[1].dim.plane.originDist), 0, 0x230, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanHrockSpanCount = ARRAY_COUNT(gGzBgHidanHrockSpans);

const GzActorFunction gGzBgHidanHrockFunctions[] = {
    { 0x0, (void*)BgHidanHrock_Init },
    { 0x330, (void*)BgHidanHrock_Destroy },
    { 0x378, (void*)func_808894A4 },
    { 0x388, (void*)func_808894B0 },
    { 0x4e4, (void*)func_8088960C },
    { 0x590, (void*)func_808896B8 },
    { 0x670, (void*)BgHidanHrock_Update },
    { 0x694, (void*)BgHidanHrock_Draw },
};
const size_t gGzBgHidanHrockFunctionCount = ARRAY_COUNT(gGzBgHidanHrockFunctions);
