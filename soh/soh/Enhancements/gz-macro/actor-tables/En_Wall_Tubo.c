// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Wall_Tubo/z_en_wall_tubo.h"

void EnWallTubo_Init(void*, void*);
void EnWallTubo_Destroy(void*, void*);
void EnWallTubo_FindGirl(void*, void*);
void EnWallTubo_DetectChu(void*, void*);
void EnWallTubo_SetWallFall(void*, void*);
void EnWallTubo_Update(void*, void*);

const GzActorSpan gGzEnWallTuboSpans[] = {
    { offsetof(EnWallTubo, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnWallTubo, timer), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallTubo, explosionCenter.x), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallTubo, explosionCenter.y), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallTubo, explosionCenter.z), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallTubo, chuGirl), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallTubo, unk_164.x), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallTubo, unk_164.y), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallTubo, unk_164.z), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnWallTuboSpanCount = ARRAY_COUNT(gGzEnWallTuboSpans);

const GzActorFunction gGzEnWallTuboFunctions[] = {
    { 0x0, (void*)EnWallTubo_Init },
    { 0x30, (void*)EnWallTubo_Destroy },
    { 0x40, (void*)EnWallTubo_FindGirl },
    { 0x84, (void*)EnWallTubo_DetectChu },
    { 0x2a0, (void*)EnWallTubo_SetWallFall },
    { 0x40c, (void*)EnWallTubo_Update },
};
const size_t gGzEnWallTuboFunctionCount = ARRAY_COUNT(gGzEnWallTuboFunctions);
