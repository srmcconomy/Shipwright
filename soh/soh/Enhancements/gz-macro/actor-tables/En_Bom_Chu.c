// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bom_Chu/z_en_bom_chu.h"

void EnBomChu_Init(void*, void*);
void EnBomChu_Destroy(void*, void*);
void EnBomChu_Explode(void*, void*);
void EnBomChu_WaitForRelease(void*, void*);
void EnBomChu_Move(void*, void*);
void EnBomChu_WaitForKill(void*, void*);
void EnBomChu_Update(void*, void*);
void EnBomChu_Draw(void*, void*);

const GzActorSpan gGzEnBomChuSpans[] = {
    { offsetof(EnBomChu, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBomChu, timer), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, axisForwards.x), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, axisForwards.y), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, axisForwards.z), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, axisUp.x), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, axisUp.y), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, axisUp.z), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, axisLeft.x), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, axisLeft.y), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, axisLeft.z), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, visualJitter), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, blure1Index), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, blure2Index), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, collider.base.actor), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomChu, collider.base.at), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomChu, collider.base.ac), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomChu, collider.base.oc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomChu, collider.base.atFlags), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, collider.base.acFlags), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, collider.base.ocFlags1), 0, 0x186, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, collider.base.ocFlags2), 0, 0x187, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, collider.base.colType), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, collider.base.shape), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, collider.count), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, collider.elements), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomChu, colliderElements[0].info.toucher.dmgFlags), 0, 0x194, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.toucher.effect), 0, 0x198, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.toucher.damage), 0, 0x199, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.bumper.dmgFlags), 0, 0x19c, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.bumper.effect), 0, 0x1a0, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.bumper.defense), 0, 0x1a1, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.bumper.hitPos.x), 0, 0x1a2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.bumper.hitPos.y), 0, 0x1a4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.bumper.hitPos.z), 0, 0x1a6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.elemType), 0, 0x1a8, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.toucherFlags), 0, 0x1a9, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.bumperFlags), 0, 0x1aa, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.ocElemFlags), 0, 0x1ab, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].info.atHit), 0, 0x1ac, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomChu, colliderElements[0].info.acHit), 0, 0x1b0, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomChu, colliderElements[0].info.atHitInfo), 0, 0x1b4, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomChu, colliderElements[0].info.acHitInfo), 0, 0x1b8, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomChu, colliderElements[0].dim.modelSphere.center.x), 0, 0x1bc, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].dim.modelSphere.center.y), 0, 0x1be, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].dim.modelSphere.center.z), 0, 0x1c0, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].dim.modelSphere.radius), 0, 0x1c2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].dim.worldSphere.center.x), 0, 0x1c4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].dim.worldSphere.center.y), 0, 0x1c6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].dim.worldSphere.center.z), 0, 0x1c8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].dim.worldSphere.radius), 0, 0x1ca, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].dim.scale), 0, 0x1cc, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomChu, colliderElements[0].dim.limb), 0, 0x1d0, 0x40, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnBomChuSpanCount = ARRAY_COUNT(gGzEnBomChuSpans);

const GzActorFunction gGzEnBomChuFunctions[] = {
    { 0x0, (void*)EnBomChu_Init },
    { 0x1a0, (void*)EnBomChu_Destroy },
    { 0x1f0, (void*)EnBomChu_Explode },
    { 0x310, NULL },
    { 0x384, NULL },
    { 0x5b8, (void*)EnBomChu_WaitForRelease },
    { 0x728, (void*)EnBomChu_Move },
    { 0xc40, (void*)EnBomChu_WaitForKill },
    { 0xc80, NULL },
    { 0xd30, NULL },
    { 0xdbc, (void*)EnBomChu_Update },
    { 0x1180, (void*)EnBomChu_Draw },
};
const size_t gGzEnBomChuFunctionCount = ARRAY_COUNT(gGzEnBomChuFunctions);
