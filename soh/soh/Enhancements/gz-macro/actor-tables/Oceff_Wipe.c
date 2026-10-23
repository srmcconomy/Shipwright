// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Oceff_Wipe/z_oceff_wipe.h"

void OceffWipe_Init(void*, void*);
void OceffWipe_Destroy(void*, void*);
void OceffWipe_Update(void*, void*);
void OceffWipe_Draw(void*, void*);

const GzActorSpan gGzOceffWipeSpans[] = {
    { offsetof(OceffWipe, timer), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzOceffWipeSpanCount = ARRAY_COUNT(gGzOceffWipeSpans);

const GzActorFunction gGzOceffWipeFunctions[] = {
    { 0x0, (void*)OceffWipe_Init },
    { 0x5c, (void*)OceffWipe_Destroy },
    { 0xa8, (void*)OceffWipe_Update },
    { 0x108, (void*)OceffWipe_Draw },
};
const size_t gGzOceffWipeFunctionCount = ARRAY_COUNT(gGzOceffWipeFunctions);
