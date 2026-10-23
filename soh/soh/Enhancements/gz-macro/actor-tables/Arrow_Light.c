// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Arrow_Light/z_arrow_light.h"

void ArrowLight_Init(void*, void*);
void ArrowLight_Destroy(void*, void*);
void ArrowLight_Charge(void*, void*);
void ArrowLight_Hit(void*, void*);
void ArrowLight_Fly(void*, void*);
void ArrowLight_Update(void*, void*);
void ArrowLight_Draw(void*, void*);

const GzActorSpan gGzArrowLightSpans[] = {
    { offsetof(ArrowLight, radius), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArrowLight, timer), 0, 0x13e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArrowLight, alpha), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArrowLight, unkPos.x), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowLight, unkPos.y), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowLight, unkPos.z), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowLight, unk_160), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowLight, unk_164), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowLight, actionFunc), 0, 0x158, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzArrowLightSpanCount = ARRAY_COUNT(gGzArrowLightSpans);

const GzActorFunction gGzArrowLightFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)ArrowLight_Init },
    { 0x88, (void*)ArrowLight_Destroy },
    { 0xac, (void*)ArrowLight_Charge },
    { 0x1a0, NULL },
    { 0x1f8, (void*)ArrowLight_Hit },
    { 0x3c4, (void*)ArrowLight_Fly },
    { 0x518, (void*)ArrowLight_Update },
    { 0x56c, (void*)ArrowLight_Draw },
};
const size_t gGzArrowLightFunctionCount = ARRAY_COUNT(gGzArrowLightFunctions);
