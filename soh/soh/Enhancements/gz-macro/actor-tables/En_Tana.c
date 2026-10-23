// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Tana/z_en_tana.h"

void EnTana_Init(void*, void*);
void EnTana_Destroy(void*, void*);
void EnTana_Update(void*, void*);
void EnTana_DrawWoodenShelves(void*, void*);
void EnTana_DrawStoneShelves(void*, void*);

const GzActorSpan gGzEnTanaSpans[] = {
};
const size_t gGzEnTanaSpanCount = ARRAY_COUNT(gGzEnTanaSpans);

const GzActorFunction gGzEnTanaFunctions[] = {
    { 0x0, (void*)EnTana_Init },
    { 0x50, (void*)EnTana_Destroy },
    { 0x60, (void*)EnTana_Update },
    { 0x70, (void*)EnTana_DrawWoodenShelves },
    { 0x104, (void*)EnTana_DrawStoneShelves },
};
const size_t gGzEnTanaFunctionCount = ARRAY_COUNT(gGzEnTanaFunctions);
