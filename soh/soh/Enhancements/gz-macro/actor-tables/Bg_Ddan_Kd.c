// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Ddan_Kd/z_bg_ddan_kd.h"

void BgDdanKd_Init(void*, void*);
void BgDdanKd_Destroy(void*, void*);
void BgDdanKd_CheckForExplosions(void*, void*);
void BgDdanKd_LowerStairs(void*, void*);
void BgDdanKd_DoNothing(void*, void*);
void BgDdanKd_Update(void*, void*);
void BgDdanKd_Draw(void*, void*);

const GzActorSpan gGzBgDdanKdSpans[] = {
    { offsetof(BgDdanKd, prevExplosive), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDdanKd, timer), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, prevExplosivePos.x), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, prevExplosivePos.y), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, prevExplosivePos.z), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.base.actor), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDdanKd, collider.base.at), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDdanKd, collider.base.ac), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDdanKd, collider.base.oc), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDdanKd, collider.base.atFlags), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.base.acFlags), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.base.ocFlags1), 0, 0x17a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.base.ocFlags2), 0, 0x17b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.base.colType), 0, 0x17c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.base.shape), 0, 0x17d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.toucher.dmgFlags), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.toucher.effect), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.toucher.damage), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.bumper.dmgFlags), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.bumper.effect), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.bumper.defense), 0, 0x18d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.bumper.hitPos.x), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.bumper.hitPos.y), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.bumper.hitPos.z), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.elemType), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.toucherFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.bumperFlags), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.ocElemFlags), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.info.atHit), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDdanKd, collider.info.acHit), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDdanKd, collider.info.atHitInfo), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDdanKd, collider.info.acHitInfo), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDdanKd, collider.dim.radius), 0, 0x1a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.dim.height), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.dim.yShift), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.dim.pos.x), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.dim.pos.y), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, collider.dim.pos.z), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanKd, actionFunc), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgDdanKdSpanCount = ARRAY_COUNT(gGzBgDdanKdSpans);

const GzActorFunction gGzBgDdanKdFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgDdanKd_Init },
    { 0x104, (void*)BgDdanKd_Destroy },
    { 0x14c, (void*)BgDdanKd_CheckForExplosions },
    { 0x264, (void*)BgDdanKd_LowerStairs },
    { 0x738, (void*)BgDdanKd_DoNothing },
    { 0x748, (void*)BgDdanKd_Update },
    { 0x76c, (void*)BgDdanKd_Draw },
};
const size_t gGzBgDdanKdFunctionCount = ARRAY_COUNT(gGzBgDdanKdFunctions);
