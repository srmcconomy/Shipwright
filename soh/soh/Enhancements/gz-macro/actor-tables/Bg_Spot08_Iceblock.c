// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot08_Iceblock/z_bg_spot08_iceblock.h"

s32 BgSpot08Iceblock_NormalizeVector(void*, void*);
void BgSpot08Iceblock_Roll(void*, void*);
void BgSpot08Iceblock_SpawnTwinFloe(void*, void*);
void BgSpot08Iceblock_Init(void*, void*);
void BgSpot08Iceblock_Destroy(void*, void*);
void BgSpot08Iceblock_FloatNonrotating(void*, void*);
void BgSpot08Iceblock_FloatRotating(void*, void*);
void BgSpot08Iceblock_FloatOrbitingTwins(void*, void*);
void BgSpot08Iceblock_Update(void*, void*);
void BgSpot08Iceblock_Draw(void*, void*);

const GzActorSpan gGzBgSpot08IceblockSpans[] = {
    { offsetof(BgSpot08Iceblock, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot08Iceblock, surfaceNormal.x), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, surfaceNormal.y), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, surfaceNormal.z), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, normalDelta.x), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, normalDelta.y), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, normalDelta.z), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, rotationAxis.x), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, rotationAxis.y), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, rotationAxis.z), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, bobPhaseSlow), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, bobPhaseFast), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, bobIncrSlow), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, bobIncrFast), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, sinkOffset), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Iceblock, bobOffset), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot08IceblockSpanCount = ARRAY_COUNT(gGzBgSpot08IceblockSpans);

const GzActorFunction gGzBgSpot08IceblockFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x64, NULL },
    { 0xc4, NULL },
    { 0x120, NULL },
    { 0x1d0, NULL },
    { 0x1f0, NULL },
    { 0x224, NULL },
    { 0x298, (void*)BgSpot08Iceblock_NormalizeVector },
    { 0x334, (void*)BgSpot08Iceblock_Roll },
    { 0x6a8, (void*)BgSpot08Iceblock_SpawnTwinFloe },
    { 0x7a8, (void*)BgSpot08Iceblock_Init },
    { 0x99c, (void*)BgSpot08Iceblock_Destroy },
    { 0x9d0, NULL },
    { 0x9f4, (void*)BgSpot08Iceblock_FloatNonrotating },
    { 0xa48, NULL },
    { 0xa6c, (void*)BgSpot08Iceblock_FloatRotating },
    { 0xacc, NULL },
    { 0xaf0, (void*)BgSpot08Iceblock_FloatOrbitingTwins },
    { 0xbc8, NULL },
    { 0xbe8, (void*)BgSpot08Iceblock_Update },
    { 0xc84, (void*)BgSpot08Iceblock_Draw },
};
const size_t gGzBgSpot08IceblockFunctionCount = ARRAY_COUNT(gGzBgSpot08IceblockFunctions);
