// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Light/z_en_light.h"

void EnLight_Init(void*, void*);
void EnLight_Destroy(void*, void*);
void EnLight_UpdatePosRot(void*, void*);
void EnLight_Update(void*, void*);
void EnLight_UpdateSwitch(void*, void*);
void EnLight_Draw(void*, void*);

const GzActorSpan gGzEnLightSpans[] = {
    { offsetof(EnLight, timer), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnLight, lightNode), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnLight, lightInfo.type), 0, 0x144, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnLight, lightInfo.params.point.x), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnLight, lightInfo.params.point.y), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnLight, lightInfo.params.point.z), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnLight, lightInfo.params.point.color[0]), offsetof(EnLight, lightInfo.params.point.color[1]) - offsetof(EnLight, lightInfo.params.point.color[0]), 0x14c, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnLight, lightInfo.params.point.drawGlow), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnLight, lightInfo.params.point.radius), 0, 0x150, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnLightSpanCount = ARRAY_COUNT(gGzEnLightSpans);

const GzActorFunction gGzEnLightFunctions[] = {
    { 0x0, (void*)EnLight_Init },
    { 0x1e0, (void*)EnLight_Destroy },
    { 0x214, (void*)EnLight_UpdatePosRot },
    { 0x290, (void*)EnLight_Update },
    { 0x534, (void*)EnLight_UpdateSwitch },
    { 0x96c, (void*)EnLight_Draw },
};
const size_t gGzEnLightFunctionCount = ARRAY_COUNT(gGzEnLightFunctions);
