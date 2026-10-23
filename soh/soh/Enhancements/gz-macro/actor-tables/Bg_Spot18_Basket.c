// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot18_Basket/z_bg_spot18_basket.h"

void BgSpot18Basket_InitColliderJntSph(void*, void*);
void BgSpot18Basket_Init(void*, void*);
void BgSpot18Basket_Destroy(void*, void*);
void BgSpot18Basket_Inactive(void*, void*);
void BgSpot18Basket_Activation(void*, void*);
void BgSpot18Basket_Spinning(void*, void*);
void BgSpot18Basket_ExplosionCs(void*, void*);
void BgSpot18Basket_Stopping(void*, void*);
void BgSpot18Basket_GivingPrize(void*, void*);
void BgSpot18Basket_Update(void*, void*);
void BgSpot18Basket_Draw(void*, void*);

const GzActorSpan gGzBgSpot18BasketSpans[] = {
    { offsetof(BgSpot18Basket, colliderJntSph.base.actor), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot18Basket, colliderJntSph.base.at), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot18Basket, colliderJntSph.base.ac), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot18Basket, colliderJntSph.base.oc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot18Basket, colliderJntSph.base.atFlags), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, colliderJntSph.base.acFlags), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, colliderJntSph.base.ocFlags1), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, colliderJntSph.base.ocFlags2), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, colliderJntSph.base.colType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, colliderJntSph.base.shape), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, colliderJntSph.count), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, colliderJntSph.elements), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.toucher.dmgFlags), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.toucher.dmgFlags) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.toucher.dmgFlags), 0x174, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.toucher.effect), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.toucher.effect) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.toucher.effect), 0x178, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.toucher.damage), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.toucher.damage) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.toucher.damage), 0x179, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.dmgFlags), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.bumper.dmgFlags) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.dmgFlags), 0x17c, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.effect), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.bumper.effect) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.effect), 0x180, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.defense), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.bumper.defense) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.defense), 0x181, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.hitPos.x), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.bumper.hitPos.x) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.hitPos.x), 0x182, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.hitPos.y), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.bumper.hitPos.y) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.hitPos.y), 0x184, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.hitPos.z), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.bumper.hitPos.z) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumper.hitPos.z), 0x186, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.elemType), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.elemType) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.elemType), 0x188, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.toucherFlags), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.toucherFlags) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.toucherFlags), 0x189, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumperFlags), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.bumperFlags) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.bumperFlags), 0x18a, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.ocElemFlags), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.ocElemFlags) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.ocElemFlags), 0x18b, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.atHit), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.atHit) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.atHit), 0x18c, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.acHit), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.acHit) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.acHit), 0x190, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.atHitInfo), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.atHitInfo) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.atHitInfo), 0x194, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.acHitInfo), offsetof(BgSpot18Basket, ColliderJntSphElements[1].info.acHitInfo) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].info.acHitInfo), 0x198, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.modelSphere.center.x), offsetof(BgSpot18Basket, ColliderJntSphElements[1].dim.modelSphere.center.x) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.modelSphere.center.x), 0x19c, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.modelSphere.center.y), offsetof(BgSpot18Basket, ColliderJntSphElements[1].dim.modelSphere.center.y) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.modelSphere.center.y), 0x19e, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.modelSphere.center.z), offsetof(BgSpot18Basket, ColliderJntSphElements[1].dim.modelSphere.center.z) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.modelSphere.center.z), 0x1a0, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.modelSphere.radius), offsetof(BgSpot18Basket, ColliderJntSphElements[1].dim.modelSphere.radius) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.modelSphere.radius), 0x1a2, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.worldSphere.center.x), offsetof(BgSpot18Basket, ColliderJntSphElements[1].dim.worldSphere.center.x) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.worldSphere.center.x), 0x1a4, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.worldSphere.center.y), offsetof(BgSpot18Basket, ColliderJntSphElements[1].dim.worldSphere.center.y) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.worldSphere.center.y), 0x1a6, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.worldSphere.center.z), offsetof(BgSpot18Basket, ColliderJntSphElements[1].dim.worldSphere.center.z) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.worldSphere.center.z), 0x1a8, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.worldSphere.radius), offsetof(BgSpot18Basket, ColliderJntSphElements[1].dim.worldSphere.radius) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.worldSphere.radius), 0x1aa, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.scale), offsetof(BgSpot18Basket, ColliderJntSphElements[1].dim.scale) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.scale), 0x1ac, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.limb), offsetof(BgSpot18Basket, ColliderJntSphElements[1].dim.limb) - offsetof(BgSpot18Basket, ColliderJntSphElements[0].dim.limb), 0x1b0, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, actionFunc), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot18Basket, circleRadius), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, circleRate), 0, 0x1fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, circleMoveAngle), 0, 0x1fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, spinRate), 0, 0x200, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, pivotAzimuth), 0, 0x202, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, pivotAltitude), 0, 0x204, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, timer), 0, 0x206, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, prize), 0, 0x208, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, isHeartPieceGiven), 0, 0x20a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot18Basket, pad), 0, 0x20b, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot18BasketSpanCount = ARRAY_COUNT(gGzBgSpot18BasketSpans);

const GzActorFunction gGzBgSpot18BasketFunctions[] = {
    { 0x0, (void*)BgSpot18Basket_InitColliderJntSph },
    { 0x5c, NULL },
    { 0x218, (void*)BgSpot18Basket_Init },
    { 0x364, (void*)BgSpot18Basket_Destroy },
    { 0x3ac, NULL },
    { 0x3c0, (void*)BgSpot18Basket_Inactive },
    { 0x41c, NULL },
    { 0x434, (void*)BgSpot18Basket_Activation },
    { 0x478, NULL },
    { 0x498, (void*)BgSpot18Basket_Spinning },
    { 0x604, NULL },
    { 0x620, (void*)BgSpot18Basket_ExplosionCs },
    { 0x844, NULL },
    { 0x894, (void*)BgSpot18Basket_Stopping },
    { 0xa60, NULL },
    { 0xa78, (void*)BgSpot18Basket_GivingPrize },
    { 0xd10, (void*)BgSpot18Basket_Update },
    { 0xdd4, (void*)BgSpot18Basket_Draw },
};
const size_t gGzBgSpot18BasketFunctionCount = ARRAY_COUNT(gGzBgSpot18BasketFunctions);
