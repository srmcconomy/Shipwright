// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Bombchuiwa/z_bg_jya_bombchuiwa.h"

void BgJyaBombchuiwa_SetupCollider(void*, void*);
void BgJyaBombchuiwa_Init(void*, void*);
void BgJyaBombchuiwa_Destroy(void*, void*);
void BgJyaBombchuiwa_Break(void*, void*);
void BgJyaBombchuiwa_SetupWaitForExplosion(void*, void*);
void BgJyaBombchuiwa_WaitForExplosion(void*, void*);
void BgJyaBombchuiwa_CleanUpAfterExplosion(void*, void*);
void func_808949B8(void*, void*);
void BgJyaBombchuiwa_SpawnLightRay(void*, void*);
void BgJyaBombchuiwa_Update(void*, void*);
void BgJyaBombchuiwa_DrawLight(void*, void*);
void BgJyaBombchuiwa_Draw(void*, void*);

const GzActorSpan gGzBgJyaBombchuiwaSpans[] = {
    { offsetof(BgJyaBombchuiwa, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgJyaBombchuiwa, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombchuiwa, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombchuiwa, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombchuiwa, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombchuiwa, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, collider.count), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, collider.elements), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.toucher.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.toucher.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.toucher.damage), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.bumper.dmgFlags), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.bumper.effect), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.bumper.defense), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.bumper.hitPos.x), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.bumper.hitPos.y), 0, 0x170, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.bumper.hitPos.z), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.elemType), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.toucherFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.bumperFlags), 0, 0x176, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.ocElemFlags), 0, 0x177, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.atHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.acHit), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.atHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombchuiwa, colliderItems.info.acHitInfo), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombchuiwa, colliderItems.dim.modelSphere.center.x), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.dim.modelSphere.center.y), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.dim.modelSphere.center.z), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.dim.modelSphere.radius), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.dim.worldSphere.center.x), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.dim.worldSphere.center.y), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.dim.worldSphere.center.z), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.dim.worldSphere.radius), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.dim.scale), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, colliderItems.dim.limb), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, lightRayIntensity), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, timer), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombchuiwa, drawFlags), 0, 0x1a6, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaBombchuiwaSpanCount = ARRAY_COUNT(gGzBgJyaBombchuiwaSpans);

const GzActorFunction gGzBgJyaBombchuiwaFunctions[] = {
    { 0x0, (void*)BgJyaBombchuiwa_SetupCollider },
    { 0x54, NULL },
    { 0x78, (void*)BgJyaBombchuiwa_Init },
    { 0xf8, (void*)BgJyaBombchuiwa_Destroy },
    { 0x124, (void*)BgJyaBombchuiwa_Break },
    { 0x3b0, (void*)BgJyaBombchuiwa_SetupWaitForExplosion },
    { 0x3e8, (void*)BgJyaBombchuiwa_WaitForExplosion },
    { 0x4cc, (void*)BgJyaBombchuiwa_CleanUpAfterExplosion },
    { 0x524, (void*)func_808949B8 },
    { 0x5b0, (void*)BgJyaBombchuiwa_SpawnLightRay },
    { 0x628, (void*)BgJyaBombchuiwa_Update },
    { 0x654, NULL },
    { 0x6d8, (void*)BgJyaBombchuiwa_DrawLight },
    { 0x928, (void*)BgJyaBombchuiwa_Draw },
};
const size_t gGzBgJyaBombchuiwaFunctionCount = ARRAY_COUNT(gGzBgJyaBombchuiwaFunctions);
