// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Haheniron/z_bg_jya_haheniron.h"

void BgJyaHaheniron_ColliderInit(void*, void*);
void BgJyaHaheniron_Init(void*, void*);
void BgJyaHaheniron_Destroy(void*, void*);
void BgJyaHaheniron_ChairCrumble(void*, void*);
void BgJyaHaheniron_PillarCrumble(void*, void*);
void BgJyaHaheniron_RubbleCollide(void*, void*);
void BgJyaHaheniron_Update(void*, void*);
void BgJyaHaheniron_Draw(void*, void*);

const GzActorSpan gGzBgJyaHahenironSpans[] = {
    { offsetof(BgJyaHaheniron, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgJyaHaheniron, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaHaheniron, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaHaheniron, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaHaheniron, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaHaheniron, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, collider.count), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, collider.elements), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.toucher.dmgFlags), 0, 0x160, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.toucher.effect), 0, 0x164, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.toucher.damage), 0, 0x165, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.bumper.dmgFlags), 0, 0x168, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.bumper.effect), 0, 0x16c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.bumper.defense), 0, 0x16d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.bumper.hitPos.x), 0, 0x16e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.bumper.hitPos.y), 0, 0x170, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.bumper.hitPos.z), 0, 0x172, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.elemType), 0, 0x174, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.toucherFlags), 0, 0x175, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.bumperFlags), 0, 0x176, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.ocElemFlags), 0, 0x177, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.atHit), 0, 0x178, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.acHit), 0, 0x17c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.atHitInfo), 0, 0x180, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaHaheniron, colliderItems[0].info.acHitInfo), 0, 0x184, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaHaheniron, colliderItems[0].dim.modelSphere.center.x), 0, 0x188, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].dim.modelSphere.center.y), 0, 0x18a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].dim.modelSphere.center.z), 0, 0x18c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].dim.modelSphere.radius), 0, 0x18e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].dim.worldSphere.center.x), 0, 0x190, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].dim.worldSphere.center.y), 0, 0x192, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].dim.worldSphere.center.z), 0, 0x194, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].dim.worldSphere.radius), 0, 0x196, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].dim.scale), 0, 0x198, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, colliderItems[0].dim.limb), 0, 0x19c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaHaheniron, timer), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaHahenironSpanCount = ARRAY_COUNT(gGzBgJyaHahenironSpans);

const GzActorFunction gGzBgJyaHahenironFunctions[] = {
    { 0x0, (void*)BgJyaHaheniron_ColliderInit },
    { 0x54, NULL },
    { 0x280, (void*)BgJyaHaheniron_Init },
    { 0x34c, (void*)BgJyaHaheniron_Destroy },
    { 0x384, NULL },
    { 0x398, (void*)BgJyaHaheniron_ChairCrumble },
    { 0x4d4, NULL },
    { 0x4e8, (void*)BgJyaHaheniron_PillarCrumble },
    { 0x568, NULL },
    { 0x57c, (void*)BgJyaHaheniron_RubbleCollide },
    { 0x5e0, (void*)BgJyaHaheniron_Update },
    { 0x60c, (void*)BgJyaHaheniron_Draw },
};
const size_t gGzBgJyaHahenironFunctionCount = ARRAY_COUNT(gGzBgJyaHahenironFunctions);
