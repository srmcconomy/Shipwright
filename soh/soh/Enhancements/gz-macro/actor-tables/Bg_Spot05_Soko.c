// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot05_Soko/z_bg_spot05_soko.h"

void BgSpot05Soko_Init(void*, void*);
void BgSpot05Soko_Destroy(void*, void*);
void func_808AE5A8(void*, void*);
void func_808AE5B4(void*, void*);
void func_808AE630(void*, void*);
void BgSpot05Soko_Update(void*, void*);
void BgSpot05Soko_Draw(void*, void*);

const GzActorSpan gGzBgSpot05SokoSpans[] = {
    { offsetof(BgSpot05Soko, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot05Soko, switchFlag), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot05SokoSpanCount = ARRAY_COUNT(gGzBgSpot05SokoSpans);

const GzActorFunction gGzBgSpot05SokoFunctions[] = {
    { 0x0, (void*)BgSpot05Soko_Init },
    { 0x10c, (void*)BgSpot05Soko_Destroy },
    { 0x140, (void*)func_808AE5A8 },
    { 0x150, (void*)func_808AE5B4 },
    { 0x1cc, (void*)func_808AE630 },
    { 0x234, (void*)BgSpot05Soko_Update },
    { 0x258, (void*)BgSpot05Soko_Draw },
};
const size_t gGzBgSpot05SokoFunctionCount = ARRAY_COUNT(gGzBgSpot05SokoFunctions);
