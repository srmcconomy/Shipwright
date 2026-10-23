// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Ingate/z_bg_ingate.h"

void BgInGate_Init(void*, void*);
void BgInGate_Destroy(void*, void*);
void func_80892890(void*, void*);
void BgInGate_DoNothing(void*, void*);
void BgInGate_Update(void*, void*);
void BgInGate_Draw(void*, void*);

const GzActorSpan gGzBgInGateSpans[] = {
    { offsetof(BgInGate, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgInGateSpanCount = ARRAY_COUNT(gGzBgInGateSpans);

const GzActorFunction gGzBgInGateFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgInGate_Init },
    { 0x128, (void*)BgInGate_Destroy },
    { 0x15c, (void*)func_80892890 },
    { 0x25c, (void*)BgInGate_DoNothing },
    { 0x26c, (void*)BgInGate_Update },
    { 0x290, (void*)BgInGate_Draw },
};
const size_t gGzBgInGateFunctionCount = ARRAY_COUNT(gGzBgInGateFunctions);
