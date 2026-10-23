// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Ice_Poly/z_obj_ice_poly.h"

void ObjIcePoly_Init(void*, void*);
void ObjIcePoly_Destroy(void*, void*);
void ObjIcePoly_Idle(void*, void*);
void ObjIcePoly_Melt(void*, void*);
void ObjIcePoly_Update(void*, void*);
void ObjIcePoly_Draw(void*, void*);

const GzActorSpan gGzObjIcePolySpans[] = {
    { offsetof(ObjIcePoly, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjIcePoly, alpha), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, unk_151), 0, 0x141, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, meltTimer), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.base.actor), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderIce.base.at), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderIce.base.ac), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderIce.base.oc), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderIce.base.atFlags), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.base.acFlags), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.base.ocFlags1), 0, 0x156, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.base.ocFlags2), 0, 0x157, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.base.colType), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.base.shape), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.toucher.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.toucher.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.toucher.damage), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.bumper.dmgFlags), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.bumper.effect), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.bumper.defense), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.bumper.hitPos.x), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.bumper.hitPos.y), 0, 0x16c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.bumper.hitPos.z), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.elemType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.toucherFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.bumperFlags), 0, 0x172, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.ocElemFlags), 0, 0x173, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.info.atHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderIce.info.acHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderIce.info.atHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderIce.info.acHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderIce.dim.radius), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.dim.height), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.dim.yShift), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.dim.pos.x), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.dim.pos.y), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderIce.dim.pos.z), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.base.actor), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderHard.base.at), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderHard.base.ac), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderHard.base.oc), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderHard.base.atFlags), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.base.acFlags), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.base.ocFlags1), 0, 0x1a2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.base.ocFlags2), 0, 0x1a3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.base.colType), 0, 0x1a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.base.shape), 0, 0x1a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.toucher.dmgFlags), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.toucher.effect), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.toucher.damage), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.bumper.dmgFlags), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.bumper.effect), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.bumper.defense), 0, 0x1b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.bumper.hitPos.x), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.bumper.hitPos.y), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.bumper.hitPos.z), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.elemType), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.toucherFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.bumperFlags), 0, 0x1be, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.ocElemFlags), 0, 0x1bf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.info.atHit), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderHard.info.acHit), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderHard.info.atHitInfo), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderHard.info.acHitInfo), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjIcePoly, colliderHard.dim.radius), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.dim.height), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.dim.yShift), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.dim.pos.x), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.dim.pos.y), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjIcePoly, colliderHard.dim.pos.z), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzObjIcePolySpanCount = ARRAY_COUNT(gGzObjIcePolySpans);

const GzActorFunction gGzObjIcePolyFunctions[] = {
    { 0x0, (void*)ObjIcePoly_Init },
    { 0x1c0, (void*)ObjIcePoly_Destroy },
    { 0x210, (void*)ObjIcePoly_Idle },
    { 0x440, (void*)ObjIcePoly_Melt },
    { 0x6f8, (void*)ObjIcePoly_Update },
    { 0x71c, (void*)ObjIcePoly_Draw },
};
const size_t gGzObjIcePolyFunctionCount = ARRAY_COUNT(gGzObjIcePolyFunctions);
