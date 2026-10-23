// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mori_Idomizu/z_bg_mori_idomizu.h"

void BgMoriIdomizu_Init(void*, void*);
void BgMoriIdomizu_Destroy(void*, void*);
void BgMoriIdomizu_WaitForMoriTex(void*, void*);
void BgMoriIdomizu_Main(void*, void*);
void BgMoriIdomizu_Update(void*, void*);
void BgMoriIdomizu_Draw(void*, void*);

const GzActorSpan gGzBgMoriIdomizuSpans[] = {
    { offsetof(BgMoriIdomizu, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMoriIdomizu, targetWaterLevel), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriIdomizu, prevSwitchFlagSet), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriIdomizu, isLoaded), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriIdomizu, drainTimer), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriIdomizu, moriTexObjIndex), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgMoriIdomizuSpanCount = ARRAY_COUNT(gGzBgMoriIdomizuSpans);

const GzActorFunction gGzBgMoriIdomizuFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x34, (void*)BgMoriIdomizu_Init },
    { 0x158, (void*)BgMoriIdomizu_Destroy },
    { 0x178, NULL },
    { 0x19c, (void*)BgMoriIdomizu_WaitForMoriTex },
    { 0x1f4, NULL },
    { 0x218, (void*)BgMoriIdomizu_Main },
    { 0x3dc, (void*)BgMoriIdomizu_Update },
    { 0x408, (void*)BgMoriIdomizu_Draw },
};
const size_t gGzBgMoriIdomizuFunctionCount = ARRAY_COUNT(gGzBgMoriIdomizuFunctions);
