// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Mure2/z_obj_mure2.h"

void ObjMure2_SetPosShrubCircle(void*, void*);
void ObjMure2_SetPosShrubScattered(void*, void*);
void ObjMure2_SetPosRockCircle(void*, void*);
void ObjMure2_SetActorSpawnParams(void*, void*);
void ObjMure2_SpawnActors(void*, void*);
void ObjMure2_CleanupAndDie(void*, void*);
void ObjMure2_Init(void*, void*);
void ObjMure2_Wait(void*, void*);
void func_80B9A668(void*, void*);
void func_80B9A6F8(void*, void*);
void ObjMure2_Update(void*, void*);

const GzActorSpan gGzObjMure2Spans[] = {
    { offsetof(ObjMure2, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjMure2, actorSpawnPtrList[0]), offsetof(ObjMure2, actorSpawnPtrList[1]) - offsetof(ObjMure2, actorSpawnPtrList[0]), 0x140, 0x4, 12, 4, GZ_SPAN_POINTER },
    { offsetof(ObjMure2, currentActorNum), 0, 0x170, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjMure2, unk_184), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzObjMure2SpanCount = ARRAY_COUNT(gGzObjMure2Spans);

const GzActorFunction gGzObjMure2Functions[] = {
    { 0x0, (void*)ObjMure2_SetPosShrubCircle },
    { 0x11c, (void*)ObjMure2_SetPosShrubScattered },
    { 0x21c, (void*)ObjMure2_SetPosRockCircle },
    { 0x328, (void*)ObjMure2_SetActorSpawnParams },
    { 0x37c, (void*)ObjMure2_SpawnActors },
    { 0x4d8, (void*)ObjMure2_CleanupAndDie },
    { 0x5d8, NULL },
    { 0x66c, (void*)ObjMure2_Init },
    { 0x6cc, NULL },
    { 0x6e0, (void*)ObjMure2_Wait },
    { 0x704, NULL },
    { 0x718, (void*)func_80B9A668 },
    { 0x798, NULL },
    { 0x7ac, (void*)func_80B9A6F8 },
    { 0x83c, (void*)ObjMure2_Update },
};
const size_t gGzObjMure2FunctionCount = ARRAY_COUNT(gGzObjMure2Functions);
