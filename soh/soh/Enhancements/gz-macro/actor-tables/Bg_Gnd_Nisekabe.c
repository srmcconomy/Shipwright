// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Gnd_Nisekabe/z_bg_gnd_nisekabe.h"

void BgGndNisekabe_Init(void*, void*);
void BgGndNisekabe_Destroy(void*, void*);
void BgGndNisekabe_Update(void*, void*);
void BgGndNisekabe_Draw(void*, void*);

const GzActorSpan gGzBgGndNisekabeSpans[] = {
};
const size_t gGzBgGndNisekabeSpanCount = ARRAY_COUNT(gGzBgGndNisekabeSpans);

const GzActorFunction gGzBgGndNisekabeFunctions[] = {
    { 0x0, (void*)BgGndNisekabe_Init },
    { 0x3c, (void*)BgGndNisekabe_Destroy },
    { 0x4c, (void*)BgGndNisekabe_Update },
    { 0x80, (void*)BgGndNisekabe_Draw },
};
const size_t gGzBgGndNisekabeFunctionCount = ARRAY_COUNT(gGzBgGndNisekabeFunctions);
