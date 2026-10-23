// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bombf/z_en_bombf.h"

void EnBombf_Init(void*, void*);
void EnBombf_Destroy(void*, void*);
void EnBombf_GrowBomb(void*, void*);
void EnBombf_Move(void*, void*);
void EnBombf_WaitForRelease(void*, void*);
void EnBombf_Explode(void*, void*);
void EnBombf_Update(void*, void*);
void EnBombf_Draw(void*, void*);

const GzActorSpan gGzEnBombfSpans[] = {
    { offsetof(EnBombf, bombCollider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, bombCollider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, bombCollider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, bombCollider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, bombCollider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, bombCollider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, bombCollider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, bombCollider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, bombCollider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bombCollider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionCollider.base.actor), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, explosionCollider.base.at), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, explosionCollider.base.ac), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, explosionCollider.base.oc), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, explosionCollider.base.atFlags), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionCollider.base.acFlags), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionCollider.base.ocFlags1), 0, 0x19a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionCollider.base.ocFlags2), 0, 0x19b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionCollider.base.colType), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionCollider.base.shape), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionCollider.count), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionCollider.elements), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, explosionColliderItems[0].info.toucher.dmgFlags), 0, 0x1a8, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.toucher.effect), 0, 0x1ac, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.toucher.damage), 0, 0x1ad, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.bumper.dmgFlags), 0, 0x1b0, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.bumper.effect), 0, 0x1b4, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.bumper.defense), 0, 0x1b5, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.bumper.hitPos.x), 0, 0x1b6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.bumper.hitPos.y), 0, 0x1b8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.bumper.hitPos.z), 0, 0x1ba, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.elemType), 0, 0x1bc, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.toucherFlags), 0, 0x1bd, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.bumperFlags), 0, 0x1be, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.ocElemFlags), 0, 0x1bf, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].info.atHit), 0, 0x1c0, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, explosionColliderItems[0].info.acHit), 0, 0x1c4, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, explosionColliderItems[0].info.atHitInfo), 0, 0x1c8, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, explosionColliderItems[0].info.acHitInfo), 0, 0x1cc, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBombf, explosionColliderItems[0].dim.modelSphere.center.x), 0, 0x1d0, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].dim.modelSphere.center.y), 0, 0x1d2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].dim.modelSphere.center.z), 0, 0x1d4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].dim.modelSphere.radius), 0, 0x1d6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].dim.worldSphere.center.x), 0, 0x1d8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].dim.worldSphere.center.y), 0, 0x1da, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].dim.worldSphere.center.z), 0, 0x1dc, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].dim.worldSphere.radius), 0, 0x1de, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].dim.scale), 0, 0x1e0, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBombf, explosionColliderItems[0].dim.limb), 0, 0x1e4, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, timer), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, actionFunc), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBombf, isFuseEnabled), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBombf, bumpOn), 0, 0x1f4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBombf, flashSpeedScale), 0, 0x1f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBombf, flashIntensity), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBombf, flowerBombScale), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnBombfSpanCount = ARRAY_COUNT(gGzEnBombfSpans);

const GzActorFunction gGzEnBombfFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnBombf_Init },
    { 0x1e8, (void*)EnBombf_Destroy },
    { 0x228, NULL },
    { 0x250, (void*)EnBombf_GrowBomb },
    { 0x560, (void*)EnBombf_Move },
    { 0x684, (void*)EnBombf_WaitForRelease },
    { 0x6e8, (void*)EnBombf_Explode },
    { 0x83c, (void*)EnBombf_Update },
    { 0xfe8, NULL },
    { 0x1070, (void*)EnBombf_Draw },
};
const size_t gGzEnBombfFunctionCount = ARRAY_COUNT(gGzEnBombfFunctions);
