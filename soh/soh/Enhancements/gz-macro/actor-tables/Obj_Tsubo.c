// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Tsubo/z_obj_tsubo.h"

void ObjTsubo_SpawnCollectible(void*, void*);
s32 ObjTsubo_SnapToFloor(void*, void*);
void ObjTsubo_InitCollider(void*, void*);
void ObjTsubo_Init(void*, void*);
void ObjTsubo_Destroy(void*, void*);
void ObjTsubo_AirBreak(void*, void*);
void ObjTsubo_WaterBreak(void*, void*);
void ObjTsubo_WaitForObject(void*, void*);
void ObjTsubo_Idle(void*, void*);
void ObjTsubo_LiftedUp(void*, void*);
void ObjTsubo_Thrown(void*, void*);
void ObjTsubo_Update(void*, void*);
void ObjTsubo_Draw(void*, void*);

const GzActorSpan gGzObjTsuboSpans[] = {
    { offsetof(ObjTsubo, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjTsubo, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjTsubo, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjTsubo, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjTsubo, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjTsubo, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.toucher.dmgFlags), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.toucher.effect), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.toucher.damage), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.bumper.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.bumper.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.bumper.defense), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.bumper.hitPos.x), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.bumper.hitPos.y), 0, 0x168, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.bumper.hitPos.z), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.elemType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.toucherFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.bumperFlags), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.ocElemFlags), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.info.atHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjTsubo, collider.info.acHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjTsubo, collider.info.atHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjTsubo, collider.info.acHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjTsubo, collider.dim.radius), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.dim.height), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.dim.yShift), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.dim.pos.x), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.dim.pos.y), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, collider.dim.pos.z), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTsubo, objTsuboBankIndex), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzObjTsuboSpanCount = ARRAY_COUNT(gGzObjTsuboSpans);

const GzActorFunction gGzObjTsuboFunctions[] = {
    { 0x0, (void*)ObjTsubo_SpawnCollectible },
    { 0x60, NULL },
    { 0x94, (void*)ObjTsubo_SnapToFloor },
    { 0x130, (void*)ObjTsubo_InitCollider },
    { 0x188, (void*)ObjTsubo_Init },
    { 0x258, (void*)ObjTsubo_Destroy },
    { 0x284, (void*)ObjTsubo_AirBreak },
    { 0x50c, (void*)ObjTsubo_WaterBreak },
    { 0x7a4, NULL },
    { 0x7b8, (void*)ObjTsubo_WaitForObject },
    { 0x82c, NULL },
    { 0x840, (void*)ObjTsubo_Idle },
    { 0xa50, NULL },
    { 0xa94, (void*)ObjTsubo_LiftedUp },
    { 0xb1c, NULL },
    { 0xbe4, (void*)ObjTsubo_Thrown },
    { 0xd78, (void*)ObjTsubo_Update },
    { 0xd9c, (void*)ObjTsubo_Draw },
};
const size_t gGzObjTsuboFunctionCount = ARRAY_COUNT(gGzObjTsuboFunctions);
