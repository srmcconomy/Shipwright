// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Hamishi/z_obj_hamishi.h"

void ObjHamishi_InitCollision(void*, void*);
void ObjHamishi_Break(void*, void*);
void ObjHamishi_Init(void*, void*);
void ObjHamishi_Destroy(void*, void*);
void ObjHamishi_Update(void*, void*);
void ObjHamishi_Draw(void*, void*);

const GzActorSpan gGzObjHamishiSpans[] = {
    { offsetof(ObjHamishi, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjHamishi, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjHamishi, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjHamishi, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjHamishi, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjHamishi, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjHamishi, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjHamishi, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjHamishi, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, shakePosSize), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, shakeRotSize), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, shakeFrames), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, shakePosPhase), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, shakeRotPhase), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjHamishi, hitCount), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzObjHamishiSpanCount = ARRAY_COUNT(gGzObjHamishiSpans);

const GzActorFunction gGzObjHamishiFunctions[] = {
    { 0x0, (void*)ObjHamishi_InitCollision },
    { 0x58, NULL },
    { 0x1d4, (void*)ObjHamishi_Break },
    { 0x480, (void*)ObjHamishi_Init },
    { 0x568, (void*)ObjHamishi_Destroy },
    { 0x594, (void*)ObjHamishi_Update },
    { 0x6c4, (void*)ObjHamishi_Draw },
};
const size_t gGzObjHamishiFunctionCount = ARRAY_COUNT(gGzObjHamishiFunctions);
