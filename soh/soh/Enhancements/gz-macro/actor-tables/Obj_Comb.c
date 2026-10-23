// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Comb/z_obj_comb.h"

void ObjComb_ChooseItemDrop(void*, void*);
void ObjComb_Init(void*, void*);
void ObjComb_Destroy(void*, void*);
void ObjComb_Wait(void*, void*);
void ObjComb_Update(void*, void*);
void ObjComb_Draw(void*, void*);

const GzActorSpan gGzObjCombSpans[] = {
    { offsetof(ObjComb, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjComb, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjComb, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjComb, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjComb, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjComb, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, collider.count), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjComb, collider.elements), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjComb, colliderItems[0].info.toucher.dmgFlags), 0, 0x160, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.toucher.effect), 0, 0x164, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.toucher.damage), 0, 0x165, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.bumper.dmgFlags), 0, 0x168, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.bumper.effect), 0, 0x16c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.bumper.defense), 0, 0x16d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.bumper.hitPos.x), 0, 0x16e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.bumper.hitPos.y), 0, 0x170, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.bumper.hitPos.z), 0, 0x172, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.elemType), 0, 0x174, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.toucherFlags), 0, 0x175, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.bumperFlags), 0, 0x176, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.ocElemFlags), 0, 0x177, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].info.atHit), 0, 0x178, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjComb, colliderItems[0].info.acHit), 0, 0x17c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjComb, colliderItems[0].info.atHitInfo), 0, 0x180, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjComb, colliderItems[0].info.acHitInfo), 0, 0x184, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjComb, colliderItems[0].dim.modelSphere.center.x), 0, 0x188, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].dim.modelSphere.center.y), 0, 0x18a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].dim.modelSphere.center.z), 0, 0x18c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].dim.modelSphere.radius), 0, 0x18e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].dim.worldSphere.center.x), 0, 0x190, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].dim.worldSphere.center.y), 0, 0x192, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].dim.worldSphere.center.z), 0, 0x194, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].dim.worldSphere.radius), 0, 0x196, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].dim.scale), 0, 0x198, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjComb, colliderItems[0].dim.limb), 0, 0x19c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjComb, unk_1B0), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjComb, unk_1B2), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzObjCombSpanCount = ARRAY_COUNT(gGzObjCombSpans);

const GzActorFunction gGzObjCombFunctions[] = {
    { 0x0, (void*)ObjComb_Break },
    { 0x2f0, (void*)ObjComb_ChooseItemDrop },
    { 0x3c0, (void*)ObjComb_Init },
    { 0x430, (void*)ObjComb_Destroy },
    { 0x45c, NULL },
    { 0x470, (void*)ObjComb_Wait },
    { 0x55c, (void*)ObjComb_Update },
    { 0x5d4, (void*)ObjComb_Draw },
};
const size_t gGzObjCombFunctionCount = ARRAY_COUNT(gGzObjCombFunctions);
