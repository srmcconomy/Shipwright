// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Oceff_Wipe3/z_oceff_wipe3.h"

void OceffWipe3_Init(void*, void*);
void OceffWipe3_Destroy(void*, void*);
void OceffWipe3_Update(void*, void*);
void OceffWipe3_Draw(void*, void*);

const GzActorSpan gGzOceffWipe3Spans[] = {
    { offsetof(OceffWipe3, counter), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzOceffWipe3SpanCount = ARRAY_COUNT(gGzOceffWipe3Spans);

const GzActorFunction gGzOceffWipe3Functions[] = {
    { 0x0, (void*)OceffWipe3_Init },
    { 0x5c, (void*)OceffWipe3_Destroy },
    { 0xa8, (void*)OceffWipe3_Update },
    { 0x108, (void*)OceffWipe3_Draw },
};
const size_t gGzOceffWipe3FunctionCount = ARRAY_COUNT(gGzOceffWipe3Functions);
