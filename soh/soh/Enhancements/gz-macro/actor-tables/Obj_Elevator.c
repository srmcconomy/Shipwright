// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Elevator/z_obj_elevator.h"

void ObjElevator_Init(void*, void*);
void ObjElevator_Destroy(void*, void*);
void func_80B92C80(void*, void*);
void func_80B92D44(void*, void*);
void ObjElevator_Update(void*, void*);
void ObjElevator_Draw(void*, void*);

const GzActorSpan gGzObjElevatorSpans[] = {
    { offsetof(ObjElevator, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjElevator, unk_168), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjElevator, unk_16C), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjElevator, unk_170), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzObjElevatorSpanCount = ARRAY_COUNT(gGzObjElevatorSpans);

const GzActorFunction gGzObjElevatorFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x64, (void*)ObjElevator_Init },
    { 0xf4, (void*)ObjElevator_Destroy },
    { 0x128, NULL },
    { 0x14c, (void*)func_80B92C80 },
    { 0x1ec, NULL },
    { 0x210, (void*)func_80B92D44 },
    { 0x294, (void*)ObjElevator_Update },
    { 0x2c8, (void*)ObjElevator_Draw },
};
const size_t gGzObjElevatorFunctionCount = ARRAY_COUNT(gGzObjElevatorFunctions);
