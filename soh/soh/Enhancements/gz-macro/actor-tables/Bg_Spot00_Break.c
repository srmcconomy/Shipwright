// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot00_Break/z_bg_spot00_break.h"

void BgSpot00Break_Init(void*, void*);
void BgSpot00Break_Destroy(void*, void*);
void BgSpot00Break_Update(void*, void*);
void BgSpot00Break_Draw(void*, void*);

const GzActorSpan gGzBgSpot00BreakSpans[] = {
};
const size_t gGzBgSpot00BreakSpanCount = ARRAY_COUNT(gGzBgSpot00BreakSpans);

const GzActorFunction gGzBgSpot00BreakFunctions[] = {
    { 0x0, (void*)BgSpot00Break_Init },
    { 0xac, (void*)BgSpot00Break_Destroy },
    { 0xe0, (void*)BgSpot00Break_Update },
    { 0xf0, (void*)BgSpot00Break_Draw },
};
const size_t gGzBgSpot00BreakFunctionCount = ARRAY_COUNT(gGzBgSpot00BreakFunctions);
