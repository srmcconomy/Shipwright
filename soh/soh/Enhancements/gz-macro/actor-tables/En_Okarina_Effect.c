// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Okarina_Effect/z_en_okarina_effect.h"

void EnOkarinaEffect_Destroy(void*, void*);
void EnOkarinaEffect_Init(void*, void*);
void EnOkarinaEffect_TriggerStorm(void*, void*);
void EnOkarinaEffect_ManageStorm(void*, void*);
void EnOkarinaEffect_Update(void*, void*);

const GzActorSpan gGzEnOkarinaEffectSpans[] = {
    { offsetof(EnOkarinaEffect, timer), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkarinaEffect, actionFunc), 0, 0x140, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnOkarinaEffectSpanCount = ARRAY_COUNT(gGzEnOkarinaEffectSpans);

const GzActorFunction gGzEnOkarinaEffectFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnOkarinaEffect_Destroy },
    { 0x8c, (void*)EnOkarinaEffect_Init },
    { 0xd4, (void*)EnOkarinaEffect_TriggerStorm },
    { 0x160, (void*)EnOkarinaEffect_ManageStorm },
    { 0x330, (void*)EnOkarinaEffect_Update },
};
const size_t gGzEnOkarinaEffectFunctionCount = ARRAY_COUNT(gGzEnOkarinaEffectFunctions);
