// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mjin/z_bg_mjin.h"

void BgMjin_Init(void*, void*);
void BgMjin_Destroy(void*, void*);
void func_808A0850(void*, void*);
void BgMjin_DoNothing(void*, void*);
void BgMjin_Update(void*, void*);
void BgMjin_Draw(void*, void*);

const GzActorSpan gGzBgMjinSpans[] = {
    { offsetof(BgMjin, objBankIndex), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMjin, actionFunc), 0, 0x158, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgMjinSpanCount = ARRAY_COUNT(gGzBgMjinSpans);

const GzActorFunction gGzBgMjinFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgMjin_Init },
    { 0xac, (void*)BgMjin_Destroy },
    { 0xe0, (void*)func_808A0850 },
    { 0x1b4, (void*)BgMjin_DoNothing },
    { 0x1c4, (void*)BgMjin_Update },
    { 0x1e8, (void*)BgMjin_Draw },
};
const size_t gGzBgMjinFunctionCount = ARRAY_COUNT(gGzBgMjinFunctions);
