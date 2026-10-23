// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Oceff_Wipe4/z_oceff_wipe4.h"

void OceffWipe4_Init(void*, void*);
void OceffWipe4_Destroy(void*, void*);
void OceffWipe4_Update(void*, void*);
void OceffWipe4_Draw(void*, void*);

const GzActorSpan gGzOceffWipe4Spans[] = {
    { offsetof(OceffWipe4, timer), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzOceffWipe4SpanCount = ARRAY_COUNT(gGzOceffWipe4Spans);

const GzActorFunction gGzOceffWipe4Functions[] = {
    { 0x0, (void*)OceffWipe4_Init },
    { 0x5c, (void*)OceffWipe4_Destroy },
    { 0x80, (void*)OceffWipe4_Update },
    { 0xe0, (void*)OceffWipe4_Draw },
};
const size_t gGzOceffWipe4FunctionCount = ARRAY_COUNT(gGzOceffWipe4Functions);
