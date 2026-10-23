// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Menkuri_Nisekabe/z_bg_menkuri_nisekabe.h"

void BgMenkuriNisekabe_Init(void*, void*);
void BgMenkuriNisekabe_Destroy(void*, void*);
void BgMenkuriNisekabe_Update(void*, void*);
void BgMenkuriNisekabe_Draw(void*, void*);

const GzActorSpan gGzBgMenkuriNisekabeSpans[] = {
};
const size_t gGzBgMenkuriNisekabeSpanCount = ARRAY_COUNT(gGzBgMenkuriNisekabeSpans);

const GzActorFunction gGzBgMenkuriNisekabeFunctions[] = {
    { 0x0, (void*)BgMenkuriNisekabe_Init },
    { 0x28, (void*)BgMenkuriNisekabe_Destroy },
    { 0x38, (void*)BgMenkuriNisekabe_Update },
    { 0x6c, (void*)BgMenkuriNisekabe_Draw },
};
const size_t gGzBgMenkuriNisekabeFunctionCount = ARRAY_COUNT(gGzBgMenkuriNisekabeFunctions);
