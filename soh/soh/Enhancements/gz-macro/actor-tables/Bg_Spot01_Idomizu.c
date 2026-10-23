// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot01_Idomizu/z_bg_spot01_idomizu.h"

void BgSpot01Idomizu_Init(void*, void*);
void BgSpot01Idomizu_Destroy(void*, void*);
void BgSpot01Idomizu_UpdateWaterLevel(void*, void*);
void BgSpot01Idomizu_Update(void*, void*);
void BgSpot01Idomizu_Draw(void*, void*);

const GzActorSpan gGzBgSpot01IdomizuSpans[] = {
    { offsetof(BgSpot01Idomizu, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot01Idomizu, waterHeight), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot01Idomizu, unk_154[0]), offsetof(BgSpot01Idomizu, unk_154[1]) - offsetof(BgSpot01Idomizu, unk_154[0]), 0x144, 0x1, 4, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot01IdomizuSpanCount = ARRAY_COUNT(gGzBgSpot01IdomizuSpans);

const GzActorFunction gGzBgSpot01IdomizuFunctions[] = {
    { 0x0, (void*)BgSpot01Idomizu_Init },
    { 0x98, (void*)BgSpot01Idomizu_Destroy },
    { 0xa8, (void*)BgSpot01Idomizu_UpdateWaterLevel },
    { 0x15c, (void*)BgSpot01Idomizu_Update },
    { 0x180, (void*)BgSpot01Idomizu_Draw },
};
const size_t gGzBgSpot01IdomizuFunctionCount = ARRAY_COUNT(gGzBgSpot01IdomizuFunctions);
