// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot18_Futa/z_bg_spot18_futa.h"

void BgSpot18Futa_Init(void*, void*);
void BgSpot18Futa_Destroy(void*, void*);
void BgSpot18Futa_Update(void*, void*);
void BgSpot18Futa_Draw(void*, void*);

const GzActorSpan gGzBgSpot18FutaSpans[] = {
};
const size_t gGzBgSpot18FutaSpanCount = ARRAY_COUNT(gGzBgSpot18FutaSpans);

const GzActorFunction gGzBgSpot18FutaFunctions[] = {
    { 0x0, (void*)BgSpot18Futa_Init },
    { 0x6c, (void*)BgSpot18Futa_Destroy },
    { 0xa0, (void*)BgSpot18Futa_Update },
    { 0x104, (void*)BgSpot18Futa_Draw },
};
const size_t gGzBgSpot18FutaFunctionCount = ARRAY_COUNT(gGzBgSpot18FutaFunctions);
