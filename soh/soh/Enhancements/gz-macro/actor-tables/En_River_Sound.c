// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_River_Sound/z_en_river_sound.h"

void EnRiverSound_Init(void*, void*);
void EnRiverSound_Destroy(void*, void*);
void EnRiverSound_Update(void*, void*);
void EnRiverSound_Draw(void*, void*);

const GzActorSpan gGzEnRiverSoundSpans[] = {
    { offsetof(EnRiverSound, playSound), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRiverSound, soundPitchIndex), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRiverSound, pathIndex), 0, 0x13e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnRiverSoundSpanCount = ARRAY_COUNT(gGzEnRiverSoundSpans);

const GzActorFunction gGzEnRiverSoundFunctions[] = {
    { 0x0, (void*)EnRiverSound_Init },
    { 0xd0, (void*)EnRiverSound_Destroy },
    { 0x128, NULL },
    { 0x294, NULL },
    { 0x590, (void*)EnRiverSound_Update },
    { 0x760, (void*)EnRiverSound_Draw },
};
const size_t gGzEnRiverSoundFunctionCount = ARRAY_COUNT(gGzEnRiverSoundFunctions);
