// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Haka_Gate/z_bg_haka_gate.h"

void BgHakaGate_Init(void*, void*);
void BgHakaGate_Destroy(void*, void*);
void BgHakaGate_DoNothing(void*, void*);
void BgHakaGate_StatueInactive(void*, void*);
void BgHakaGate_StatueIdle(void*, void*);
void BgHakaGate_StatueTurn(void*, void*);
void BgHakaGate_FloorClosed(void*, void*);
void BgHakaGate_FloorOpen(void*, void*);
void BgHakaGate_GateWait(void*, void*);
void BgHakaGate_GateOpen(void*, void*);
void BgHakaGate_SkullOfTruth(void*, void*);
void BgHakaGate_FalseSkull(void*, void*);
void BgHakaGate_Update(void*, void*);
void BgHakaGate_DrawFlame(void*, void*);
void BgHakaGate_Draw(void*, void*);

const GzActorSpan gGzBgHakaGateSpans[] = {
    { offsetof(BgHakaGate, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHakaGate, switchFlag), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaGate, actionVar1), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaGate, actionVar2), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaGate, actionVar3), 0, 0x15e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaGate, actionVar4), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaGate, actionVar5), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHakaGateSpanCount = ARRAY_COUNT(gGzBgHakaGateSpans);

const GzActorFunction gGzBgHakaGateFunctions[] = {
    { 0x0, (void*)BgHakaGate_Init },
    { 0x2d0, (void*)BgHakaGate_Destroy },
    { 0x32c, (void*)BgHakaGate_DoNothing },
    { 0x33c, (void*)BgHakaGate_StatueInactive },
    { 0x378, (void*)BgHakaGate_StatueIdle },
    { 0x490, (void*)BgHakaGate_StatueTurn },
    { 0x674, (void*)BgHakaGate_FloorClosed },
    { 0x7fc, (void*)BgHakaGate_FloorOpen },
    { 0x888, (void*)BgHakaGate_GateWait },
    { 0x8d8, (void*)BgHakaGate_GateOpen },
    { 0x968, (void*)BgHakaGate_SkullOfTruth },
    { 0x9c4, (void*)BgHakaGate_FalseSkull },
    { 0xa44, (void*)BgHakaGate_Update },
    { 0xa8c, (void*)BgHakaGate_DrawFlame },
    { 0xc58, (void*)BgHakaGate_Draw },
};
const size_t gGzBgHakaGateFunctionCount = ARRAY_COUNT(gGzBgHakaGateFunctions);
