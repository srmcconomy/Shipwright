// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Sda/z_en_sda.h"

void EnSda_Init(void*, void*);
void EnSda_Destroy(void*, void*);
void EnSda_Update(void*, void*);
void EnSda_Draw(void*, void*);

const GzActorSpan gGzEnSdaSpans[] = {
};
const size_t gGzEnSdaSpanCount = ARRAY_COUNT(gGzEnSdaSpans);

const GzActorFunction gGzEnSdaFunctions[] = {
    { 0x0, (void*)EnSda_Init },
    { 0x10, (void*)EnSda_Destroy },
    { 0x20, (void*)EnSda_Update },
    { 0x5c, (void*)EnSda_Draw },
    { 0xf0, NULL },
    { 0x754, NULL },
    { 0xdd0, NULL },
};
const size_t gGzEnSdaFunctionCount = ARRAY_COUNT(gGzEnSdaFunctions);
