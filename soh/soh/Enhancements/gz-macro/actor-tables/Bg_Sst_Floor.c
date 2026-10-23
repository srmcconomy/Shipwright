// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Sst_Floor/z_bg_sst_floor.h"

void BgSstFloor_Init(void*, void*);
void BgSstFloor_Destroy(void*, void*);
void BgSstFloor_Update(void*, void*);
void BgSstFloor_Draw(void*, void*);

const GzActorSpan gGzBgSstFloorSpans[] = {
    { offsetof(BgSstFloor, drumPhase), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSstFloor, drumAmp), 0, 0x156, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSstFloor, drumHeight), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgSstFloorSpanCount = ARRAY_COUNT(gGzBgSstFloorSpans);

const GzActorFunction gGzBgSstFloorFunctions[] = {
    { 0x0, (void*)BgSstFloor_Init },
    { 0x68, (void*)BgSstFloor_Destroy },
    { 0x9c, (void*)BgSstFloor_Update },
    { 0x410, (void*)BgSstFloor_Draw },
};
const size_t gGzBgSstFloorFunctionCount = ARRAY_COUNT(gGzBgSstFloorFunctions);
