// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Oceff_Wipe2/z_oceff_wipe2.h"

void OceffWipe2_Init(void*, void*);
void OceffWipe2_Destroy(void*, void*);
void OceffWipe2_Update(void*, void*);
void OceffWipe2_Draw(void*, void*);

const GzActorSpan gGzOceffWipe2Spans[] = {
    { offsetof(OceffWipe2, timer), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzOceffWipe2SpanCount = ARRAY_COUNT(gGzOceffWipe2Spans);

const GzActorFunction gGzOceffWipe2Functions[] = {
    { 0x0, (void*)OceffWipe2_Init },
    { 0x5c, (void*)OceffWipe2_Destroy },
    { 0xa8, (void*)OceffWipe2_Update },
    { 0x108, (void*)OceffWipe2_Draw },
};
const size_t gGzOceffWipe2FunctionCount = ARRAY_COUNT(gGzOceffWipe2Functions);
