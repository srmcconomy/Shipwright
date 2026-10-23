// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Gate_Shutter/z_bg_gate_shutter.h"

void BgGateShutter_Init(void*, void*);
void BgGateShutter_Destroy(void*, void*);
void func_8087828C(void*, void*);
void func_80878300(void*, void*);
void func_808783AC(void*, void*);
void func_808783D4(void*, void*);
void BgGateShutter_Update(void*, void*);
void BgGateShutter_Draw(void*, void*);

const GzActorSpan gGzBgGateShutterSpans[] = {
    { offsetof(BgGateShutter, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgGateShutter, openingState), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGateShutter, somePos.x), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGateShutter, somePos.y), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGateShutter, somePos.z), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGateShutter, unk_178), 0, 0x168, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgGateShutterSpanCount = ARRAY_COUNT(gGzBgGateShutterSpans);

const GzActorFunction gGzBgGateShutterFunctions[] = {
    { 0x0, (void*)BgGateShutter_Init },
    { 0xe8, (void*)BgGateShutter_Destroy },
    { 0x11c, (void*)func_8087828C },
    { 0x190, (void*)func_80878300 },
    { 0x240, (void*)func_808783AC },
    { 0x268, (void*)func_808783D4 },
    { 0x324, (void*)BgGateShutter_Update },
    { 0x358, (void*)BgGateShutter_Draw },
};
const size_t gGzBgGateShutterFunctionCount = ARRAY_COUNT(gGzBgGateShutterFunctions);
