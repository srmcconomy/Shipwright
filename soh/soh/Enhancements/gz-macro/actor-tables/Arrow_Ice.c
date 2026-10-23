// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Arrow_Ice/z_arrow_ice.h"

void ArrowIce_Init(void*, void*);
void ArrowIce_Destroy(void*, void*);
void ArrowIce_Charge(void*, void*);
void ArrowIce_Hit(void*, void*);
void ArrowIce_Fly(void*, void*);
void ArrowIce_Update(void*, void*);
void ArrowIce_Draw(void*, void*);

const GzActorSpan gGzArrowIceSpans[] = {
    { offsetof(ArrowIce, radius), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArrowIce, timer), 0, 0x13e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArrowIce, alpha), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArrowIce, unkPos.x), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowIce, unkPos.y), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowIce, unkPos.z), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowIce, unk_160), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowIce, unk_164), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowIce, actionFunc), 0, 0x158, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzArrowIceSpanCount = ARRAY_COUNT(gGzArrowIceSpans);

const GzActorFunction gGzArrowIceFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)ArrowIce_Init },
    { 0x88, (void*)ArrowIce_Destroy },
    { 0xac, (void*)ArrowIce_Charge },
    { 0x1a0, NULL },
    { 0x1f8, (void*)ArrowIce_Hit },
    { 0x3c4, (void*)ArrowIce_Fly },
    { 0x518, (void*)ArrowIce_Update },
    { 0x56c, (void*)ArrowIce_Draw },
};
const size_t gGzArrowIceFunctionCount = ARRAY_COUNT(gGzArrowIceFunctions);
