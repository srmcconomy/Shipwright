// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot16_Doughnut/z_bg_spot16_doughnut.h"

void BgSpot16Doughnut_Init(void*, void*);
void BgSpot16Doughnut_Destroy(void*, void*);
void BgSpot16Doughnut_Update(void*, void*);
void BgSpot16Doughnut_UpdateExpanding(void*, void*);
void BgSpot16Doughnut_Draw(void*, void*);
void BgSpot16Doughnut_DrawExpanding(void*, void*);

const GzActorSpan gGzBgSpot16DoughnutSpans[] = {
    { offsetof(BgSpot16Doughnut, fireFlag), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Doughnut, pad[0]), offsetof(BgSpot16Doughnut, pad[1]) - offsetof(BgSpot16Doughnut, pad[0]), 0x13e, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Doughnut, envColorAlpha), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot16DoughnutSpanCount = ARRAY_COUNT(gGzBgSpot16DoughnutSpans);

const GzActorFunction gGzBgSpot16DoughnutFunctions[] = {
    { 0x0, (void*)BgSpot16Doughnut_Init },
    { 0x174, (void*)BgSpot16Doughnut_Destroy },
    { 0x184, (void*)BgSpot16Doughnut_Update },
    { 0x218, (void*)BgSpot16Doughnut_UpdateExpanding },
    { 0x280, (void*)BgSpot16Doughnut_Draw },
    { 0x430, (void*)BgSpot16Doughnut_DrawExpanding },
};
const size_t gGzBgSpot16DoughnutFunctionCount = ARRAY_COUNT(gGzBgSpot16DoughnutFunctions);
