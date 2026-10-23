// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Bigmirror/z_bg_jya_bigmirror.h"

void BgJyaBigmirror_SetRoomFlag(void*, void*);
void BgJyaBigmirror_HandleCobra(void*, void*);
void BgJyaBigmirror_SetBombiwaFlag(void*, void*);
void BgJyaBigmirror_HandleMirRay(void*, void*);
void BgJyaBigmirror_Init(void*, void*);
void BgJyaBigmirror_Destroy(void*, void*);
void BgJyaBigmirror_Update(void*, void*);
void BgJyaBigmirror_DrawLightBeam(void*, void*);
void BgJyaBigmirror_Draw(void*, void*);

const GzActorSpan gGzBgJyaBigmirrorSpans[] = {
    { offsetof(BgJyaBigmirror, cobraInfo[0].cobra), offsetof(BgJyaBigmirror, cobraInfo[1].cobra) - offsetof(BgJyaBigmirror, cobraInfo[0].cobra), 0x13c, 0x8, 2, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBigmirror, cobraInfo[0].rotY), offsetof(BgJyaBigmirror, cobraInfo[1].rotY) - offsetof(BgJyaBigmirror, cobraInfo[0].rotY), 0x140, 0x8, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBigmirror, puzzleFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBigmirror, spawned), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBigmirror, lightBeams[0]), offsetof(BgJyaBigmirror, lightBeams[1]) - offsetof(BgJyaBigmirror, lightBeams[0]), 0x150, 0x4, 3, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBigmirror, mirRayObjIndex), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBigmirror, liftHeight), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaBigmirrorSpanCount = ARRAY_COUNT(gGzBgJyaBigmirrorSpans);

const GzActorFunction gGzBgJyaBigmirrorFunctions[] = {
    { 0x0, (void*)BgJyaBigmirror_SetRoomFlag },
    { 0x70, (void*)BgJyaBigmirror_HandleCobra },
    { 0x208, (void*)BgJyaBigmirror_SetBombiwaFlag },
    { 0x25c, (void*)BgJyaBigmirror_HandleMirRay },
    { 0x404, (void*)BgJyaBigmirror_Init },
    { 0x488, (void*)BgJyaBigmirror_Destroy },
    { 0x4a8, (void*)BgJyaBigmirror_Update },
    { 0x4f8, (void*)BgJyaBigmirror_DrawLightBeam },
    { 0x674, (void*)BgJyaBigmirror_Draw },
};
const size_t gGzBgJyaBigmirrorFunctionCount = ARRAY_COUNT(gGzBgJyaBigmirrorFunctions);
