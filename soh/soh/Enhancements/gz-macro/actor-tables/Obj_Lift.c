// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Lift/z_obj_lift.h"

void ObjLift_SpawnFragments(void*, void*);
void ObjLift_Init(void*, void*);
void ObjLift_Destroy(void*, void*);
void ObjLift_Wait(void*, void*);
void ObjLift_Shake(void*, void*);
void ObjLift_Fall(void*, void*);
void ObjLift_Update(void*, void*);
void ObjLift_Draw(void*, void*);

const GzActorSpan gGzObjLiftSpans[] = {
    { offsetof(ObjLift, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjLift, shakeOrientation.x), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLift, shakeOrientation.y), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLift, shakeOrientation.z), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLift, timer), 0, 0x15e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzObjLiftSpanCount = ARRAY_COUNT(gGzObjLiftSpans);

const GzActorFunction gGzObjLiftFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x64, (void*)ObjLift_SpawnFragments },
    { 0x2e8, (void*)ObjLift_Init },
    { 0x3e8, (void*)ObjLift_Destroy },
    { 0x41c, NULL },
    { 0x460, (void*)ObjLift_Wait },
    { 0x550, NULL },
    { 0x57c, (void*)ObjLift_Shake },
    { 0x6c4, NULL },
    { 0x748, (void*)ObjLift_Fall },
    { 0x84c, (void*)ObjLift_Update },
    { 0x880, (void*)ObjLift_Draw },
};
const size_t gGzObjLiftFunctionCount = ARRAY_COUNT(gGzObjLiftFunctions);
