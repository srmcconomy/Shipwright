// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Haka_Water/z_bg_haka_water.h"

void BgHakaWater_Init(void*, void*);
void BgHakaWater_Destroy(void*, void*);
void BgHakaWater_LowerWater(void*, void*);
void BgHakaWater_Wait(void*, void*);
void BgHakaWater_ChangeWaterLevel(void*, void*);
void BgHakaWater_Update(void*, void*);
void BgHakaWater_Draw(void*, void*);

const GzActorSpan gGzBgHakaWaterSpans[] = {
    { offsetof(BgHakaWater, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHakaWater, isLowered), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgHakaWaterSpanCount = ARRAY_COUNT(gGzBgHakaWaterSpans);

const GzActorFunction gGzBgHakaWaterFunctions[] = {
    { 0x0, (void*)BgHakaWater_Init },
    { 0x8c, (void*)BgHakaWater_Destroy },
    { 0x9c, (void*)BgHakaWater_LowerWater },
    { 0x1e4, (void*)BgHakaWater_Wait },
    { 0x2a0, (void*)BgHakaWater_ChangeWaterLevel },
    { 0x3a8, (void*)BgHakaWater_Update },
    { 0x3cc, (void*)BgHakaWater_Draw },
};
const size_t gGzBgHakaWaterFunctionCount = ARRAY_COUNT(gGzBgHakaWaterFunctions);
