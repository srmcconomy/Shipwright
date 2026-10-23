// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Dekujr/z_obj_dekujr.h"

void ObjDekujr_Init(void*, void*);
void ObjDekujr_Destroy(void*, void*);
void ObjDekujr_SetInitialPos(void*, void*);
void ObjDekujr_SetFinalPos(void*, void*);
void ObjDekujr_ComeUp(void*, void*);
void ObjDekujr_Update(void*, void*);
void ObjDekujr_Draw(void*, void*);

const GzActorSpan gGzObjDekujrSpans[] = {
    { offsetof(ObjDekujr, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjDekujr, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjDekujr, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjDekujr, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjDekujr, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjDekujr, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjDekujr, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjDekujr, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjDekujr, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, unk_198[0]), offsetof(ObjDekujr, unk_198[1]) - offsetof(ObjDekujr, unk_198[0]), 0x188, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, unk_19B), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, unk_19C), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, unk_19D[0]), offsetof(ObjDekujr, unk_19D[1]) - offsetof(ObjDekujr, unk_19D[0]), 0x18d, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(ObjDekujr, unk_1A0), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzObjDekujrSpanCount = ARRAY_COUNT(gGzObjDekujrSpans);

const GzActorFunction gGzObjDekujrFunctions[] = {
    { 0x0, (void*)ObjDekujr_Init },
    { 0x10c, (void*)ObjDekujr_Destroy },
    { 0x11c, (void*)ObjDekujr_SetInitialPos },
    { 0x160, (void*)ObjDekujr_SetFinalPos },
    { 0x1a4, (void*)ObjDekujr_ComeUp },
    { 0x354, (void*)ObjDekujr_Update },
    { 0x444, (void*)ObjDekujr_Draw },
};
const size_t gGzObjDekujrFunctionCount = ARRAY_COUNT(gGzObjDekujrFunctions);
