// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Toki_Swd/z_bg_toki_swd.h"

void BgTokiSwd_Init(void*, void*);
void BgTokiSwd_Destroy(void*, void*);
void func_808BAF40(void*, void*);
void func_808BB0AC(void*, void*);
void func_808BB128(void*, void*);
void BgTokiSwd_Update(void*, void*);
void BgTokiSwd_Draw(void*, void*);

const GzActorSpan gGzBgTokiSwdSpans[] = {
    { offsetof(BgTokiSwd, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgTokiSwd, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgTokiSwd, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgTokiSwd, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgTokiSwd, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgTokiSwd, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.toucher.dmgFlags), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.toucher.effect), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.toucher.damage), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.bumper.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.bumper.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.bumper.defense), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.bumper.hitPos.x), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.bumper.hitPos.y), 0, 0x168, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.bumper.hitPos.z), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.elemType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.toucherFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.bumperFlags), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.ocElemFlags), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.info.atHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgTokiSwd, collider.info.acHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgTokiSwd, collider.info.atHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgTokiSwd, collider.info.acHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgTokiSwd, collider.dim.radius), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.dim.height), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.dim.yShift), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.dim.pos.x), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.dim.pos.y), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgTokiSwd, collider.dim.pos.z), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgTokiSwdSpanCount = ARRAY_COUNT(gGzBgTokiSwdSpans);

const GzActorFunction gGzBgTokiSwdFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgTokiSwd_Init },
    { 0xe0, (void*)BgTokiSwd_Destroy },
    { 0x10c, (void*)func_808BAF40 },
    { 0x280, (void*)func_808BB0AC },
    { 0x300, (void*)func_808BB128 },
    { 0x354, (void*)BgTokiSwd_Update },
    { 0x3a8, (void*)BgTokiSwd_Draw },
};
const size_t gGzBgTokiSwdFunctionCount = ARRAY_COUNT(gGzBgTokiSwdFunctions);
