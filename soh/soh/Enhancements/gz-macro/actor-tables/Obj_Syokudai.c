// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Syokudai/z_obj_syokudai.h"

void ObjSyokudai_Init(void*, void*);
void ObjSyokudai_Destroy(void*, void*);
void ObjSyokudai_Update(void*, void*);
void ObjSyokudai_Draw(void*, void*);

const GzActorSpan gGzObjSyokudaiSpans[] = {
    { offsetof(ObjSyokudai, colliderStand.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderStand.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderStand.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderStand.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderStand.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderStand.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderStand.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderStand.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderStand.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderStand.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.base.actor), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderFlame.base.at), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderFlame.base.ac), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderFlame.base.oc), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderFlame.base.atFlags), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.base.acFlags), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.base.ocFlags1), 0, 0x19a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.base.ocFlags2), 0, 0x19b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.base.colType), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.base.shape), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.toucher.dmgFlags), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.toucher.effect), 0, 0x1a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.toucher.damage), 0, 0x1a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.bumper.dmgFlags), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.bumper.effect), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.bumper.defense), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.bumper.hitPos.x), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.bumper.hitPos.y), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.bumper.hitPos.z), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.elemType), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.toucherFlags), 0, 0x1b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.bumperFlags), 0, 0x1b6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.ocElemFlags), 0, 0x1b7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.info.atHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderFlame.info.acHit), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderFlame.info.atHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderFlame.info.acHitInfo), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, colliderFlame.dim.radius), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.dim.height), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.dim.yShift), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.dim.pos.x), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.dim.pos.y), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, colliderFlame.dim.pos.z), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, litTimer), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, flameTexScroll), 0, 0x1d6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, lightNode), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjSyokudai, lightInfo.type), 0, 0x1dc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, lightInfo.params.point.x), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, lightInfo.params.point.y), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, lightInfo.params.point.z), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, lightInfo.params.point.color[0]), offsetof(ObjSyokudai, lightInfo.params.point.color[1]) - offsetof(ObjSyokudai, lightInfo.params.point.color[0]), 0x1e4, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, lightInfo.params.point.drawGlow), 0, 0x1e7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjSyokudai, lightInfo.params.point.radius), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzObjSyokudaiSpanCount = ARRAY_COUNT(gGzObjSyokudaiSpans);

const GzActorFunction gGzObjSyokudaiFunctions[] = {
    { 0x0, (void*)ObjSyokudai_Init },
    { 0x1c4, (void*)ObjSyokudai_Destroy },
    { 0x218, (void*)ObjSyokudai_Update },
    { 0x834, (void*)ObjSyokudai_Draw },
};
const size_t gGzObjSyokudaiFunctionCount = ARRAY_COUNT(gGzObjSyokudaiFunctions);
