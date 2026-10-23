// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Ironobj/z_bg_jya_ironobj.h"

void BgJyaIronobj_InitCylinder(void*, void*);
void BgJyaIronobj_Init(void*, void*);
void BgJyaIronobj_Destroy(void*, void*);
void func_808992E8(void*, void*);
void BgJyaIronobj_Update(void*, void*);
void BgJyaIronobj_Draw(void*, void*);

const GzActorSpan gGzBgJyaIronobjSpans[] = {
    { offsetof(BgJyaIronobj, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgJyaIronobj, colCylinder.base.actor), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaIronobj, colCylinder.base.at), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaIronobj, colCylinder.base.ac), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaIronobj, colCylinder.base.oc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaIronobj, colCylinder.base.atFlags), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.base.acFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.base.ocFlags1), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.base.ocFlags2), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.base.colType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.base.shape), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.toucher.dmgFlags), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.toucher.effect), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.toucher.damage), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.bumper.dmgFlags), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.bumper.effect), 0, 0x17c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.bumper.defense), 0, 0x17d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.bumper.hitPos.x), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.bumper.hitPos.y), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.bumper.hitPos.z), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.elemType), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.toucherFlags), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.bumperFlags), 0, 0x186, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.ocElemFlags), 0, 0x187, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.info.atHit), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaIronobj, colCylinder.info.acHit), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaIronobj, colCylinder.info.atHitInfo), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaIronobj, colCylinder.info.acHitInfo), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaIronobj, colCylinder.dim.radius), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.dim.height), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.dim.yShift), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.dim.pos.x), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.dim.pos.y), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaIronobj, colCylinder.dim.pos.z), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaIronobjSpanCount = ARRAY_COUNT(gGzBgJyaIronobjSpans);

const GzActorFunction gGzBgJyaIronobjFunctions[] = {
    { 0x0, (void*)BgJyaIronobj_InitCylinder },
    { 0x80, NULL },
    { 0x4fc, NULL },
    { 0x928, (void*)BgJyaIronobj_Init },
    { 0x9bc, (void*)BgJyaIronobj_Destroy },
    { 0xa04, NULL },
    { 0xa18, (void*)func_808992E8 },
    { 0xb58, (void*)BgJyaIronobj_Update },
    { 0xb7c, (void*)BgJyaIronobj_Draw },
};
const size_t gGzBgJyaIronobjFunctionCount = ARRAY_COUNT(gGzBgJyaIronobjFunctions);
