// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot12_Gate/z_bg_spot12_gate.h"

void BgSpot12Gate_Init(void*, void*);
void BgSpot12Gate_Destroy(void*, void*);
void func_808B30D8(void*, void*);
void func_808B314C(void*, void*);
void func_808B318C(void*, void*);
void func_808B3298(void*, void*);
void BgSpot12Gate_Update(void*, void*);
void BgSpot12Gate_Draw(void*, void*);

const GzActorSpan gGzBgSpot12GateSpans[] = {
    { offsetof(BgSpot12Gate, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot12Gate, unk_168), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot12GateSpanCount = ARRAY_COUNT(gGzBgSpot12GateSpans);

const GzActorFunction gGzBgSpot12GateFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgSpot12Gate_Init },
    { 0xd8, (void*)BgSpot12Gate_Destroy },
    { 0x10c, NULL },
    { 0x128, (void*)func_808B30D8 },
    { 0x184, NULL },
    { 0x1a0, (void*)func_808B314C },
    { 0x1d0, NULL },
    { 0x1e4, (void*)func_808B318C },
    { 0x2cc, NULL },
    { 0x2f4, (void*)func_808B3298 },
    { 0x304, (void*)BgSpot12Gate_Update },
    { 0x338, (void*)BgSpot12Gate_Draw },
};
const size_t gGzBgSpot12GateFunctionCount = ARRAY_COUNT(gGzBgSpot12GateFunctions);
