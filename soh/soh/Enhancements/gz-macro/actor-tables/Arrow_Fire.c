// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Arrow_Fire/z_arrow_fire.h"

void ArrowFire_Init(void*, void*);
void ArrowFire_Destroy(void*, void*);
void ArrowFire_Charge(void*, void*);
void ArrowFire_Hit(void*, void*);
void ArrowFire_Fly(void*, void*);
void ArrowFire_Update(void*, void*);
void ArrowFire_Draw(void*, void*);

const GzActorSpan gGzArrowFireSpans[] = {
    { offsetof(ArrowFire, unkPos.x), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowFire, unkPos.y), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowFire, unkPos.z), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowFire, unk_158), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowFire, unk_15C), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArrowFire, actionFunc), 0, 0x150, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ArrowFire, radius), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArrowFire, timer), 0, 0x156, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArrowFire, alpha), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzArrowFireSpanCount = ARRAY_COUNT(gGzArrowFireSpans);

const GzActorFunction gGzArrowFireFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)ArrowFire_Init },
    { 0x88, (void*)ArrowFire_Destroy },
    { 0xac, (void*)ArrowFire_Charge },
    { 0x1a0, NULL },
    { 0x1f8, (void*)ArrowFire_Hit },
    { 0x3c4, (void*)ArrowFire_Fly },
    { 0x518, (void*)ArrowFire_Update },
    { 0x56c, (void*)ArrowFire_Draw },
};
const size_t gGzArrowFireFunctionCount = ARRAY_COUNT(gGzArrowFireFunctions);
