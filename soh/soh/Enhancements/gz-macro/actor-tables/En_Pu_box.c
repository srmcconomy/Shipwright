// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Pu_box/z_en_pu_box.h"

void EnPubox_Init(void*, void*);
void EnPubox_Destroy(void*, void*);
void EnPubox_Update(void*, void*);
void EnPubox_Draw(void*, void*);

const GzActorSpan gGzEnPuboxSpans[] = {
    { offsetof(EnPubox, unused_164), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnPuboxSpanCount = ARRAY_COUNT(gGzEnPuboxSpans);

const GzActorFunction gGzEnPuboxFunctions[] = {
    { 0x0, (void*)EnPubox_Init },
    { 0x138, (void*)EnPubox_Destroy },
    { 0x16c, (void*)EnPubox_Update },
    { 0x2bc, (void*)EnPubox_Draw },
};
const size_t gGzEnPuboxFunctionCount = ARRAY_COUNT(gGzEnPuboxFunctions);
