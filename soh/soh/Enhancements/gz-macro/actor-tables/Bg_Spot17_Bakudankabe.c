// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot17_Bakudankabe/z_bg_spot17_bakudankabe.h"

void func_808B6BC0(void*, void*);
void BgSpot17Bakudankabe_Init(void*, void*);
void BgSpot17Bakudankabe_Destroy(void*, void*);
void BgSpot17Bakudankabe_Update(void*, void*);
void BgSpot17Bakudankabe_Draw(void*, void*);

const GzActorSpan gGzBgSpot17BakudankabeSpans[] = {
};
const size_t gGzBgSpot17BakudankabeSpanCount = ARRAY_COUNT(gGzBgSpot17BakudankabeSpans);

const GzActorFunction gGzBgSpot17BakudankabeFunctions[] = {
    { 0x0, (void*)func_808B6BC0 },
    { 0x330, (void*)BgSpot17Bakudankabe_Init },
    { 0x3c4, (void*)BgSpot17Bakudankabe_Destroy },
    { 0x3f8, (void*)BgSpot17Bakudankabe_Update },
    { 0x48c, (void*)BgSpot17Bakudankabe_Draw },
};
const size_t gGzBgSpot17BakudankabeFunctionCount = ARRAY_COUNT(gGzBgSpot17BakudankabeFunctions);
