// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mizu_Water/z_bg_mizu_water.h"

void BgMizuWater_Init(void*, void*);
void BgMizuWater_Destroy(void*, void*);
void BgMizuWater_WaitForAction(void*, void*);
void BgMizuWater_ChangeWaterLevel(void*, void*);
void BgMizuWater_Update(void*, void*);
void BgMizuWater_Draw(void*, void*);

const GzActorSpan gGzBgMizuWaterSpans[] = {
    { offsetof(BgMizuWater, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMizuWater, type), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuWater, targetY), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuWater, baseY), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuWater, switchFlag), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgMizuWaterSpanCount = ARRAY_COUNT(gGzBgMizuWaterSpans);

const GzActorFunction gGzBgMizuWaterFunctions[] = {
    { 0x0, NULL },
    { 0xa0, NULL },
    { 0x10c, (void*)BgMizuWater_Init },
    { 0x368, (void*)BgMizuWater_Destroy },
    { 0x378, (void*)BgMizuWater_WaitForAction },
    { 0x544, (void*)BgMizuWater_ChangeWaterLevel },
    { 0x854, (void*)BgMizuWater_Update },
    { 0x9ac, (void*)BgMizuWater_Draw },
};
const size_t gGzBgMizuWaterFunctionCount = ARRAY_COUNT(gGzBgMizuWaterFunctions);
