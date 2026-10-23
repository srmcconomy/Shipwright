// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bom/z_en_bom.h"

void EnBom_Init(void*, void*);
void EnBom_Destroy(void*, void*);
void EnBom_Move(void*, void*);
void EnBom_WaitForRelease(void*, void*);
void EnBom_Explode(void*, void*);
void EnBom_Update(void*, void*);
void EnBom_Draw(void*, void*);

const GzActorSpan gGzEnBomSpans[] = {
    { offsetof(EnBom, bombCollider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, bombCollider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, bombCollider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, bombCollider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, bombCollider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, bombCollider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, bombCollider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, bombCollider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, bombCollider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, bombCollider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionCollider.base.actor), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, explosionCollider.base.at), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, explosionCollider.base.ac), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, explosionCollider.base.oc), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, explosionCollider.base.atFlags), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionCollider.base.acFlags), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionCollider.base.ocFlags1), 0, 0x19a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionCollider.base.ocFlags2), 0, 0x19b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionCollider.base.colType), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionCollider.base.shape), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionCollider.count), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionCollider.elements), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, explosionColliderItems[0].info.toucher.dmgFlags), 0, 0x1a8, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.toucher.effect), 0, 0x1ac, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.toucher.damage), 0, 0x1ad, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.bumper.dmgFlags), 0, 0x1b0, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.bumper.effect), 0, 0x1b4, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.bumper.defense), 0, 0x1b5, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.bumper.hitPos.x), 0, 0x1b6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.bumper.hitPos.y), 0, 0x1b8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.bumper.hitPos.z), 0, 0x1ba, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.elemType), 0, 0x1bc, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.toucherFlags), 0, 0x1bd, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.bumperFlags), 0, 0x1be, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.ocElemFlags), 0, 0x1bf, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].info.atHit), 0, 0x1c0, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, explosionColliderItems[0].info.acHit), 0, 0x1c4, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, explosionColliderItems[0].info.atHitInfo), 0, 0x1c8, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, explosionColliderItems[0].info.acHitInfo), 0, 0x1cc, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBom, explosionColliderItems[0].dim.modelSphere.center.x), 0, 0x1d0, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].dim.modelSphere.center.y), 0, 0x1d2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].dim.modelSphere.center.z), 0, 0x1d4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].dim.modelSphere.radius), 0, 0x1d6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].dim.worldSphere.center.x), 0, 0x1d8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].dim.worldSphere.center.y), 0, 0x1da, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].dim.worldSphere.center.z), 0, 0x1dc, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].dim.worldSphere.radius), 0, 0x1de, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].dim.scale), 0, 0x1e0, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBom, explosionColliderItems[0].dim.limb), 0, 0x1e4, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, timer), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, flashSpeedScale), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBom, flashIntensity), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBom, bumpOn), 0, 0x1f0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBom, actionFunc), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnBomSpanCount = ARRAY_COUNT(gGzEnBomSpans);

const GzActorFunction gGzEnBomFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnBom_Init },
    { 0x124, (void*)EnBom_Destroy },
    { 0x164, (void*)EnBom_Move },
    { 0x334, (void*)EnBom_WaitForRelease },
    { 0x380, (void*)EnBom_Explode },
    { 0x4d0, (void*)EnBom_Update },
    { 0xb60, (void*)EnBom_Draw },
};
const size_t gGzEnBomFunctionCount = ARRAY_COUNT(gGzEnBomFunctions);
