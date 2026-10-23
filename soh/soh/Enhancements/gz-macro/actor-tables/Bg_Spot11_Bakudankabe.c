// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot11_Bakudankabe/z_bg_spot11_bakudankabe.h"

void func_808B2180(void*, void*);
void func_808B2218(void*, void*);
void BgSpot11Bakudankabe_Init(void*, void*);
void BgSpot11Bakudankabe_Destroy(void*, void*);
void BgSpot11Bakudankabe_Update(void*, void*);
void BgSpot11Bakudankabe_Draw(void*, void*);

const GzActorSpan gGzBgSpot11BakudankabeSpans[] = {
    { offsetof(BgSpot11Bakudankabe, collider.base.actor), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot11Bakudankabe, collider.base.at), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot11Bakudankabe, collider.base.ac), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot11Bakudankabe, collider.base.oc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot11Bakudankabe, collider.base.atFlags), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.base.acFlags), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.base.ocFlags1), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.base.ocFlags2), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.base.colType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.base.shape), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.toucher.dmgFlags), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.toucher.effect), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.toucher.damage), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.bumper.dmgFlags), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.bumper.effect), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.bumper.defense), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.bumper.hitPos.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.bumper.hitPos.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.bumper.hitPos.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.elemType), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.toucherFlags), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.bumperFlags), 0, 0x182, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.ocElemFlags), 0, 0x183, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.info.atHit), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot11Bakudankabe, collider.info.acHit), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot11Bakudankabe, collider.info.atHitInfo), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot11Bakudankabe, collider.info.acHitInfo), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot11Bakudankabe, collider.dim.radius), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.dim.height), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.dim.yShift), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.dim.pos.x), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.dim.pos.y), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Bakudankabe, collider.dim.pos.z), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot11BakudankabeSpanCount = ARRAY_COUNT(gGzBgSpot11BakudankabeSpans);

const GzActorFunction gGzBgSpot11BakudankabeFunctions[] = {
    { 0x0, (void*)func_808B2180 },
    { 0x94, (void*)func_808B2218 },
    { 0x3ac, (void*)BgSpot11Bakudankabe_Init },
    { 0x448, (void*)BgSpot11Bakudankabe_Destroy },
    { 0x490, (void*)BgSpot11Bakudankabe_Update },
    { 0x52c, (void*)BgSpot11Bakudankabe_Draw },
};
const size_t gGzBgSpot11BakudankabeFunctionCount = ARRAY_COUNT(gGzBgSpot11BakudankabeFunctions);
