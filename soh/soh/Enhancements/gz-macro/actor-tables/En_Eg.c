// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Eg/z_en_eg.h"

void EnEg_Destroy(void*, void*);
void EnEg_Init(void*, void*);
void func_809FFDC8(void*, void*);
void EnEg_Update(void*, void*);
void EnEg_Draw(void*, void*);

const GzActorSpan gGzEnEgSpans[] = {
    { offsetof(EnEg, action), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnEgSpanCount = ARRAY_COUNT(gGzEnEgSpans);

const GzActorFunction gGzEnEgFunctions[] = {
    { 0x0, NULL },
    { 0x20, (void*)EnEg_Destroy },
    { 0x30, (void*)EnEg_Init },
    { 0x40, (void*)func_809FFDC8 },
    { 0xd8, (void*)EnEg_Update },
    { 0x120, (void*)EnEg_Draw },
};
const size_t gGzEnEgFunctionCount = ARRAY_COUNT(gGzEnEgFunctions);
