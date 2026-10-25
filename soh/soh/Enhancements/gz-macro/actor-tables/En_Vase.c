// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Vase/z_en_vase.h"

void EnVase_Init(void*, void*);
void EnVase_Destroy(void*, void*);
void EnVase_Draw(void*, void*);

const GzActorSpan gGzEnVaseSpans[] = {
};
const size_t gGzEnVaseSpanCount = ARRAY_COUNT(gGzEnVaseSpans);

const GzActorFunction gGzEnVaseFunctions[] = {
    { 0x0, (void*)EnVase_Init },
    { 0x64, (void*)EnVase_Destroy },
    { 0x74, (void*)EnVase_Draw },
};
const size_t gGzEnVaseFunctionCount = ARRAY_COUNT(gGzEnVaseFunctions);
