// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Haka_Tubo/z_bg_haka_tubo.h"

void BgHakaTubo_Init(void*, void*);
void BgHakaTubo_Destroy(void*, void*);
void BgHakaTubo_Idle(void*, void*);
void BgHakaTubo_DropCollectible(void*, void*);
void BgHakaTubo_Update(void*, void*);
void BgHakaTubo_DrawFlameCircle(void*, void*);
void BgHakaTubo_Draw(void*, void*);

const GzActorSpan gGzBgHakaTuboSpans[] = {
    { offsetof(BgHakaTubo, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHakaTubo, dropTimer), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, fireScroll), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.base.actor), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, potCollider.base.at), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, potCollider.base.ac), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, potCollider.base.oc), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, potCollider.base.atFlags), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.base.acFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.base.ocFlags1), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.base.ocFlags2), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.base.colType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.base.shape), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.toucher.dmgFlags), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.toucher.effect), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.toucher.damage), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.bumper.dmgFlags), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.bumper.effect), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.bumper.defense), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.bumper.hitPos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.bumper.hitPos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.bumper.hitPos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.elemType), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.toucherFlags), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.bumperFlags), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.ocElemFlags), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.info.atHit), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, potCollider.info.acHit), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, potCollider.info.atHitInfo), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, potCollider.info.acHitInfo), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, potCollider.dim.radius), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.dim.height), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.dim.yShift), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.dim.pos.x), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.dim.pos.y), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, potCollider.dim.pos.z), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.base.actor), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, flamesCollider.base.at), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, flamesCollider.base.ac), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, flamesCollider.base.oc), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, flamesCollider.base.atFlags), 0, 0x1b8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.base.acFlags), 0, 0x1b9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.base.ocFlags1), 0, 0x1ba, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.base.ocFlags2), 0, 0x1bb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.base.colType), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.base.shape), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.toucher.dmgFlags), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.toucher.effect), 0, 0x1c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.toucher.damage), 0, 0x1c5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.bumper.dmgFlags), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.bumper.effect), 0, 0x1cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.bumper.defense), 0, 0x1cd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.bumper.hitPos.x), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.bumper.hitPos.y), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.bumper.hitPos.z), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.elemType), 0, 0x1d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.toucherFlags), 0, 0x1d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.bumperFlags), 0, 0x1d6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.ocElemFlags), 0, 0x1d7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.info.atHit), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, flamesCollider.info.acHit), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, flamesCollider.info.atHitInfo), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, flamesCollider.info.acHitInfo), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTubo, flamesCollider.dim.radius), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.dim.height), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.dim.yShift), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.dim.pos.x), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.dim.pos.y), 0, 0x1f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTubo, flamesCollider.dim.pos.z), 0, 0x1f2, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHakaTuboSpanCount = ARRAY_COUNT(gGzBgHakaTuboSpans);

const GzActorFunction gGzBgHakaTuboFunctions[] = {
    { 0x0, (void*)BgHakaTubo_Init },
    { 0xfc, (void*)BgHakaTubo_Destroy },
    { 0x154, (void*)BgHakaTubo_Idle },
    { 0x3c0, (void*)BgHakaTubo_DropCollectible },
    { 0x684, (void*)BgHakaTubo_Update },
    { 0x6b8, (void*)BgHakaTubo_DrawFlameCircle },
    { 0x85c, (void*)BgHakaTubo_Draw },
};
const size_t gGzBgHakaTuboFunctionCount = ARRAY_COUNT(gGzBgHakaTuboFunctions);
