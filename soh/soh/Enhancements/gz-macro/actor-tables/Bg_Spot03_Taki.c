// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot03_Taki/z_bg_spot03_taki.h"

void BgSpot03Taki_Init(void*, void*);
void BgSpot03Taki_Destroy(void*, void*);
void BgSpot03Taki_HandleWaterfallState(void*, void*);
void BgSpot03Taki_Update(void*, void*);
void BgSpot03Taki_Draw(void*, void*);

const GzActorSpan gGzBgSpot03TakiSpans[] = {
    { offsetof(BgSpot03Taki, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot03Taki, timer), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot03Taki, state), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot03Taki, switchFlag), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot03Taki, openingAlpha), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot03Taki, bufferIndex), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot03TakiSpanCount = ARRAY_COUNT(gGzBgSpot03TakiSpans);

const GzActorFunction gGzBgSpot03TakiFunctions[] = {
    { 0x0, NULL },
    { 0x33c, (void*)BgSpot03Taki_Init },
    { 0x3ec, (void*)BgSpot03Taki_Destroy },
    { 0x420, (void*)BgSpot03Taki_HandleWaterfallState },
    { 0x5f4, (void*)BgSpot03Taki_Update },
    { 0x618, (void*)BgSpot03Taki_Draw },
};
const size_t gGzBgSpot03TakiFunctionCount = ARRAY_COUNT(gGzBgSpot03TakiFunctions);
