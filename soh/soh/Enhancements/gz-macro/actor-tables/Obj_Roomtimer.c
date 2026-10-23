// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Roomtimer/z_obj_roomtimer.h"

void ObjRoomtimer_Init(void*, void*);
void ObjRoomtimer_Destroy(void*, void*);
void func_80B9D054(void*, void*);
void func_80B9D0B0(void*, void*);
void ObjRoomtimer_Update(void*, void*);

const GzActorSpan gGzObjRoomtimerSpans[] = {
    { offsetof(ObjRoomtimer, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjRoomtimer, switchFlag), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzObjRoomtimerSpanCount = ARRAY_COUNT(gGzObjRoomtimerSpans);

const GzActorFunction gGzObjRoomtimerFunctions[] = {
    { 0x0, (void*)ObjRoomtimer_Init },
    { 0x54, (void*)ObjRoomtimer_Destroy },
    { 0x88, (void*)func_80B9D054 },
    { 0xe8, (void*)func_80B9D0B0 },
    { 0x1c4, (void*)ObjRoomtimer_Update },
};
const size_t gGzObjRoomtimerFunctionCount = ARRAY_COUNT(gGzObjRoomtimerFunctions);
