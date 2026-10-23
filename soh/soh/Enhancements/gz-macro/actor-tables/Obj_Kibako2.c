// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Kibako2/z_obj_kibako2.h"

void ObjKibako2_InitCollider(void*, void*);
void ObjKibako2_Break(void*, void*);
void ObjKibako2_SpawnCollectible(void*, void*);
void ObjKibako2_Init(void*, void*);
void ObjKibako2_Destroy(void*, void*);
void ObjKibako2_Idle(void*, void*);
void ObjKibako2_Kill(void*, void*);
void ObjKibako2_Update(void*, void*);
void ObjKibako2_Draw(void*, void*);

const GzActorSpan gGzObjKibako2Spans[] = {
    { offsetof(ObjKibako2, collider.base.actor), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjKibako2, collider.base.at), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjKibako2, collider.base.ac), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjKibako2, collider.base.oc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjKibako2, collider.base.atFlags), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.base.acFlags), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.base.ocFlags1), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.base.ocFlags2), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.base.colType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.base.shape), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.toucher.dmgFlags), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.toucher.effect), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.toucher.damage), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.bumper.dmgFlags), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.bumper.effect), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.bumper.defense), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.bumper.hitPos.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.bumper.hitPos.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.bumper.hitPos.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.elemType), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.toucherFlags), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.bumperFlags), 0, 0x182, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.ocElemFlags), 0, 0x183, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.info.atHit), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjKibako2, collider.info.acHit), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjKibako2, collider.info.atHitInfo), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjKibako2, collider.info.acHitInfo), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjKibako2, collider.dim.radius), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.dim.height), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.dim.yShift), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.dim.pos.x), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.dim.pos.y), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, collider.dim.pos.z), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjKibako2, actionFunc), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjKibako2, collectibleFlag), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzObjKibako2SpanCount = ARRAY_COUNT(gGzObjKibako2Spans);

const GzActorFunction gGzObjKibako2Functions[] = {
    { 0x0, (void*)ObjKibako2_InitCollider },
    { 0x58, (void*)ObjKibako2_Break },
    { 0x2d4, (void*)ObjKibako2_SpawnCollectible },
    { 0x324, (void*)ObjKibako2_Init },
    { 0x3d0, (void*)ObjKibako2_Destroy },
    { 0x418, (void*)ObjKibako2_Idle },
    { 0x4f0, (void*)ObjKibako2_Kill },
    { 0x574, (void*)ObjKibako2_Update },
    { 0x598, (void*)ObjKibako2_Draw },
};
const size_t gGzObjKibako2FunctionCount = ARRAY_COUNT(gGzObjKibako2Functions);
