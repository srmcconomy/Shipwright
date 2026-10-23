// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_OE2/z_en_oe2.h"

void EnOE2_Init(void*, void*);
void EnOE2_Destroy(void*, void*);
void EnOE2_DoNothing(void*, void*);
void EnOE2_Update(void*, void*);
void EnOE2_Draw(void*, void*);

const GzActorSpan gGzEnOE2Spans[] = {
    { offsetof(EnOE2, unk_14C[0]), offsetof(EnOE2, unk_14C[1]) - offsetof(EnOE2, unk_14C[0]), 0x13c, 0x1, 68, 1, GZ_SPAN_VALUE },
    { offsetof(EnOE2, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnOE2SpanCount = ARRAY_COUNT(gGzEnOE2Spans);

const GzActorFunction gGzEnOE2Functions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnOE2_Init },
    { 0x34, (void*)EnOE2_Destroy },
    { 0x44, (void*)EnOE2_DoNothing },
    { 0x54, (void*)EnOE2_Update },
    { 0x64, (void*)EnOE2_Draw },
};
const size_t gGzEnOE2FunctionCount = ARRAY_COUNT(gGzEnOE2Functions);
