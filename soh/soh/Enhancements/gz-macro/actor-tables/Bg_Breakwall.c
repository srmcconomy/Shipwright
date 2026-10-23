// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Breakwall/z_bg_breakwall.h"

void BgBreakwall_Init(void*, void*);
void BgBreakwall_Destroy(void*, void*);
void BgBreakwall_WaitForObject(void*, void*);
void BgBreakwall_Wait(void*, void*);
void BgBreakwall_LavaCoverMove(void*, void*);
void BgBreakwall_Update(void*, void*);
void BgBreakwall_Draw(void*, void*);

const GzActorSpan gGzBgBreakwallSpans[] = {
    { offsetof(BgBreakwall, bombableWallDList), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBreakwall, colType), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, bankIndex), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.base.actor), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBreakwall, collider.base.at), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBreakwall, collider.base.ac), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBreakwall, collider.base.oc), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBreakwall, collider.base.atFlags), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.base.acFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.base.ocFlags1), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.base.ocFlags2), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.base.colType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.base.shape), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.toucher.dmgFlags), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.toucher.effect), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.toucher.damage), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.bumper.dmgFlags), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.bumper.effect), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.bumper.defense), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.bumper.hitPos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.bumper.hitPos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.bumper.hitPos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.elemType), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.toucherFlags), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.bumperFlags), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.ocElemFlags), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.info.atHit), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBreakwall, collider.info.acHit), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBreakwall, collider.info.atHitInfo), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBreakwall, collider.info.acHitInfo), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBreakwall, collider.dim.quad[0].x), offsetof(BgBreakwall, collider.dim.quad[1].x) - offsetof(BgBreakwall, collider.dim.quad[0].x), 0x19c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.dim.quad[0].y), offsetof(BgBreakwall, collider.dim.quad[1].y) - offsetof(BgBreakwall, collider.dim.quad[0].y), 0x1a0, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.dim.quad[0].z), offsetof(BgBreakwall, collider.dim.quad[1].z) - offsetof(BgBreakwall, collider.dim.quad[0].z), 0x1a4, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.dim.dcMid.x), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.dim.dcMid.y), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.dim.dcMid.z), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.dim.baMid.x), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.dim.baMid.y), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.dim.baMid.z), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, collider.dim.acDist), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBreakwall, actionFunc), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgBreakwallSpanCount = ARRAY_COUNT(gGzBgBreakwallSpans);

const GzActorFunction gGzBgBreakwallFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgBreakwall_Init },
    { 0x1b8, (void*)BgBreakwall_Destroy },
    { 0x1ec, NULL },
    { 0x6bc, (void*)BgBreakwall_WaitForObject },
    { 0x7c4, (void*)BgBreakwall_Wait },
    { 0x994, (void*)BgBreakwall_LavaCoverMove },
    { 0x9e8, (void*)BgBreakwall_Update },
    { 0xa0c, (void*)BgBreakwall_Draw },
};
const size_t gGzBgBreakwallFunctionCount = ARRAY_COUNT(gGzBgBreakwallFunctions);
