// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Eff_Dust/z_eff_dust.h"

void EffDust_Init(void*, void*);
void EffDust_Destroy(void*, void*);
void EffDust_UpdateFunc_8099DB28(void*, void*);
void EffDust_UpdateFunc_8099DD74(void*, void*);
void EffDust_UpdateFunc_8099DFC0(void*, void*);
void EffDust_Update(void*, void*);
void EffDust_DrawFunc_8099E4F4(void*, void*);
void EffDust_DrawFunc_8099E784(void*, void*);
void EffDust_Draw(void*, void*);

const GzActorSpan gGzEffDustSpans[] = {
    { offsetof(EffDust, distanceTraveled[0]), offsetof(EffDust, distanceTraveled[1]) - offsetof(EffDust, distanceTraveled[0]), 0x13c, 0x4, 64, 4, GZ_SPAN_VALUE },
    { offsetof(EffDust, initialPositions[0].x), offsetof(EffDust, initialPositions[1].x) - offsetof(EffDust, initialPositions[0].x), 0x23c, 0xc, 64, 4, GZ_SPAN_VALUE },
    { offsetof(EffDust, initialPositions[0].y), offsetof(EffDust, initialPositions[1].y) - offsetof(EffDust, initialPositions[0].y), 0x240, 0xc, 64, 4, GZ_SPAN_VALUE },
    { offsetof(EffDust, initialPositions[0].z), offsetof(EffDust, initialPositions[1].z) - offsetof(EffDust, initialPositions[0].z), 0x244, 0xc, 64, 4, GZ_SPAN_VALUE },
    { offsetof(EffDust, index), 0, 0x53c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EffDust, life), 0, 0x53d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EffDust, dx), 0, 0x540, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EffDust, dy), 0, 0x544, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EffDust, dz), 0, 0x548, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EffDust, scalingFactor), 0, 0x54c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EffDust, actionFunc), 0, 0x550, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EffDust, drawFunc), 0, 0x554, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEffDustSpanCount = ARRAY_COUNT(gGzEffDustSpans);

const GzActorFunction gGzEffDustFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x18, NULL },
    { 0x90, (void*)EffDust_Init },
    { 0x250, (void*)EffDust_Destroy },
    { 0x260, (void*)EffDust_UpdateFunc_8099DB28 },
    { 0x4ac, (void*)EffDust_UpdateFunc_8099DD74 },
    { 0x6f8, (void*)EffDust_UpdateFunc_8099DFC0 },
    { 0xc0c, (void*)EffDust_Update },
    { 0xc30, (void*)EffDust_DrawFunc_8099E4F4 },
    { 0xe8c, (void*)EffDust_DrawFunc_8099E784 },
    { 0x11f0, (void*)EffDust_Draw },
};
const size_t gGzEffDustFunctionCount = ARRAY_COUNT(gGzEffDustFunctions);
