// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Oceff_Spot/z_oceff_spot.h"

void OceffSpot_Init(void*, void*);
void OceffSpot_Destroy(void*, void*);
void OceffSpot_End(void*, void*);
void OceffSpot_Wait(void*, void*);
void OceffSpot_GrowCylinder(void*, void*);
void OceffSpot_Update(void*, void*);
void OceffSpot_Draw(void*, void*);

const GzActorSpan gGzOceffSpotSpans[] = {
    { offsetof(OceffSpot, lightNode1), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(OceffSpot, lightInfo1.type), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo1.params.point.x), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo1.params.point.y), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo1.params.point.z), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo1.params.point.color[0]), offsetof(OceffSpot, lightInfo1.params.point.color[1]) - offsetof(OceffSpot, lightInfo1.params.point.color[0]), 0x148, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo1.params.point.drawGlow), 0, 0x14b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo1.params.point.radius), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightNode2), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(OceffSpot, lightInfo2.type), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo2.params.point.x), 0, 0x156, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo2.params.point.y), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo2.params.point.z), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo2.params.point.color[0]), offsetof(OceffSpot, lightInfo2.params.point.color[1]) - offsetof(OceffSpot, lightInfo2.params.point.color[0]), 0x15c, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo2.params.point.drawGlow), 0, 0x15f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, lightInfo2.params.point.radius), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, unk_174), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, timer), 0, 0x168, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffSpot, actionFunc), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzOceffSpotSpanCount = ARRAY_COUNT(gGzOceffSpotSpans);

const GzActorFunction gGzOceffSpotFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)OceffSpot_Init },
    { 0x168, (void*)OceffSpot_Destroy },
    { 0x1f8, (void*)OceffSpot_End },
    { 0x2c0, (void*)OceffSpot_Wait },
    { 0x2fc, (void*)OceffSpot_GrowCylinder },
    { 0x360, (void*)OceffSpot_Update },
    { 0x638, (void*)OceffSpot_Draw },
};
const size_t gGzOceffSpotFunctionCount = ARRAY_COUNT(gGzOceffSpotFunctions);
