// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Goroiwa/z_bg_jya_goroiwa.h"

void BgJyaGoroiwa_InitCollider(void*, void*);
void BgJyaGoroiwa_Init(void*, void*);
void BgJyaGoroiwa_Destroy(void*, void*);
void BgJyaGoroiwa_Move(void*, void*);
void BgJyaGoroiwa_Wait(void*, void*);
void BgJyaGoroiwa_Update(void*, void*);
void BgJyaGoroiwa_Draw(void*, void*);

const GzActorSpan gGzBgJyaGoroiwaSpans[] = {
    { offsetof(BgJyaGoroiwa, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgJyaGoroiwa, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaGoroiwa, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaGoroiwa, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaGoroiwa, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaGoroiwa, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, collider.count), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, collider.elements), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaGoroiwa, colliderItem.info.toucher.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.toucher.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.toucher.damage), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.bumper.dmgFlags), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.bumper.effect), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.bumper.defense), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.bumper.hitPos.x), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.bumper.hitPos.y), 0, 0x170, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.bumper.hitPos.z), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.elemType), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.toucherFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.bumperFlags), 0, 0x176, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.ocElemFlags), 0, 0x177, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.info.atHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaGoroiwa, colliderItem.info.acHit), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaGoroiwa, colliderItem.info.atHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaGoroiwa, colliderItem.info.acHitInfo), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaGoroiwa, colliderItem.dim.modelSphere.center.x), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.dim.modelSphere.center.y), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.dim.modelSphere.center.z), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.dim.modelSphere.radius), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.dim.worldSphere.center.x), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.dim.worldSphere.center.y), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.dim.worldSphere.center.z), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.dim.worldSphere.radius), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.dim.scale), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, colliderItem.dim.limb), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, speedFactor), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, hasHit), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, waitTimer), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaGoroiwa, yOffsetSpeed), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaGoroiwaSpanCount = ARRAY_COUNT(gGzBgJyaGoroiwaSpans);

const GzActorFunction gGzBgJyaGoroiwaFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgJyaGoroiwa_InitCollider },
    { 0xc0, NULL },
    { 0x100, (void*)BgJyaGoroiwa_Init },
    { 0x194, (void*)BgJyaGoroiwa_Destroy },
    { 0x1c0, NULL },
    { 0x1f0, (void*)BgJyaGoroiwa_Move },
    { 0x484, NULL },
    { 0x49c, (void*)BgJyaGoroiwa_Wait },
    { 0x4ec, (void*)BgJyaGoroiwa_Update },
    { 0x5d8, (void*)BgJyaGoroiwa_Draw },
};
const size_t gGzBgJyaGoroiwaFunctionCount = ARRAY_COUNT(gGzBgJyaGoroiwaFunctions);
