// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot17_Funen/z_bg_spot17_funen.h"

void BgSpot17Funen_Init(void*, void*);
void BgSpot17Funen_Destroy(void*, void*);
void BgSpot17Funen_Update(void*, void*);
void func_808B746C(void*, void*);
void func_808B7478(void*, void*);

const GzActorSpan gGzBgSpot17FunenSpans[] = {
};
const size_t gGzBgSpot17FunenSpanCount = ARRAY_COUNT(gGzBgSpot17FunenSpans);

const GzActorFunction gGzBgSpot17FunenFunctions[] = {
    { 0x0, (void*)BgSpot17Funen_Init },
    { 0x28, (void*)BgSpot17Funen_Destroy },
    { 0x38, (void*)BgSpot17Funen_Update },
    { 0x5c, (void*)func_808B746C },
    { 0x6c, (void*)func_808B7478 },
};
const size_t gGzBgSpot17FunenFunctionCount = ARRAY_COUNT(gGzBgSpot17FunenFunctions);
