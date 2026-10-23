// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bubble/z_en_bubble.h"

void EnBubble_DamagePlayer(void*, void*);
void EnBubble_Fly(void*, void*);
void EnBubble_Init(void*, void*);
void EnBubble_Destroy(void*, void*);
void EnBubble_Wait(void*, void*);
void EnBubble_Pop(void*, void*);
void EnBubble_Disappear(void*, void*);
void EnBubble_Regrow(void*, void*);
void EnBubble_Update(void*, void*);
void EnBubble_Draw(void*, void*);

const GzActorSpan gGzEnBubbleSpans[] = {
    { offsetof(EnBubble, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBubble, colliderSphere.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBubble, colliderSphere.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBubble, colliderSphere.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBubble, colliderSphere.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBubble, colliderSphere.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphere.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphere.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphere.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphere.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphere.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphere.count), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphere.elements), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBubble, colliderSphereItems[0].info.toucher.dmgFlags), offsetof(EnBubble, colliderSphereItems[1].info.toucher.dmgFlags) - offsetof(EnBubble, colliderSphereItems[0].info.toucher.dmgFlags), 0x160, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.toucher.effect), offsetof(EnBubble, colliderSphereItems[1].info.toucher.effect) - offsetof(EnBubble, colliderSphereItems[0].info.toucher.effect), 0x164, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.toucher.damage), offsetof(EnBubble, colliderSphereItems[1].info.toucher.damage) - offsetof(EnBubble, colliderSphereItems[0].info.toucher.damage), 0x165, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.bumper.dmgFlags), offsetof(EnBubble, colliderSphereItems[1].info.bumper.dmgFlags) - offsetof(EnBubble, colliderSphereItems[0].info.bumper.dmgFlags), 0x168, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.bumper.effect), offsetof(EnBubble, colliderSphereItems[1].info.bumper.effect) - offsetof(EnBubble, colliderSphereItems[0].info.bumper.effect), 0x16c, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.bumper.defense), offsetof(EnBubble, colliderSphereItems[1].info.bumper.defense) - offsetof(EnBubble, colliderSphereItems[0].info.bumper.defense), 0x16d, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.bumper.hitPos.x), offsetof(EnBubble, colliderSphereItems[1].info.bumper.hitPos.x) - offsetof(EnBubble, colliderSphereItems[0].info.bumper.hitPos.x), 0x16e, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.bumper.hitPos.y), offsetof(EnBubble, colliderSphereItems[1].info.bumper.hitPos.y) - offsetof(EnBubble, colliderSphereItems[0].info.bumper.hitPos.y), 0x170, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.bumper.hitPos.z), offsetof(EnBubble, colliderSphereItems[1].info.bumper.hitPos.z) - offsetof(EnBubble, colliderSphereItems[0].info.bumper.hitPos.z), 0x172, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.elemType), offsetof(EnBubble, colliderSphereItems[1].info.elemType) - offsetof(EnBubble, colliderSphereItems[0].info.elemType), 0x174, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.toucherFlags), offsetof(EnBubble, colliderSphereItems[1].info.toucherFlags) - offsetof(EnBubble, colliderSphereItems[0].info.toucherFlags), 0x175, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.bumperFlags), offsetof(EnBubble, colliderSphereItems[1].info.bumperFlags) - offsetof(EnBubble, colliderSphereItems[0].info.bumperFlags), 0x176, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.ocElemFlags), offsetof(EnBubble, colliderSphereItems[1].info.ocElemFlags) - offsetof(EnBubble, colliderSphereItems[0].info.ocElemFlags), 0x177, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].info.atHit), offsetof(EnBubble, colliderSphereItems[1].info.atHit) - offsetof(EnBubble, colliderSphereItems[0].info.atHit), 0x178, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBubble, colliderSphereItems[0].info.acHit), offsetof(EnBubble, colliderSphereItems[1].info.acHit) - offsetof(EnBubble, colliderSphereItems[0].info.acHit), 0x17c, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBubble, colliderSphereItems[0].info.atHitInfo), offsetof(EnBubble, colliderSphereItems[1].info.atHitInfo) - offsetof(EnBubble, colliderSphereItems[0].info.atHitInfo), 0x180, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBubble, colliderSphereItems[0].info.acHitInfo), offsetof(EnBubble, colliderSphereItems[1].info.acHitInfo) - offsetof(EnBubble, colliderSphereItems[0].info.acHitInfo), 0x184, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBubble, colliderSphereItems[0].dim.modelSphere.center.x), offsetof(EnBubble, colliderSphereItems[1].dim.modelSphere.center.x) - offsetof(EnBubble, colliderSphereItems[0].dim.modelSphere.center.x), 0x188, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].dim.modelSphere.center.y), offsetof(EnBubble, colliderSphereItems[1].dim.modelSphere.center.y) - offsetof(EnBubble, colliderSphereItems[0].dim.modelSphere.center.y), 0x18a, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].dim.modelSphere.center.z), offsetof(EnBubble, colliderSphereItems[1].dim.modelSphere.center.z) - offsetof(EnBubble, colliderSphereItems[0].dim.modelSphere.center.z), 0x18c, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].dim.modelSphere.radius), offsetof(EnBubble, colliderSphereItems[1].dim.modelSphere.radius) - offsetof(EnBubble, colliderSphereItems[0].dim.modelSphere.radius), 0x18e, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].dim.worldSphere.center.x), offsetof(EnBubble, colliderSphereItems[1].dim.worldSphere.center.x) - offsetof(EnBubble, colliderSphereItems[0].dim.worldSphere.center.x), 0x190, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].dim.worldSphere.center.y), offsetof(EnBubble, colliderSphereItems[1].dim.worldSphere.center.y) - offsetof(EnBubble, colliderSphereItems[0].dim.worldSphere.center.y), 0x192, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].dim.worldSphere.center.z), offsetof(EnBubble, colliderSphereItems[1].dim.worldSphere.center.z) - offsetof(EnBubble, colliderSphereItems[0].dim.worldSphere.center.z), 0x194, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].dim.worldSphere.radius), offsetof(EnBubble, colliderSphereItems[1].dim.worldSphere.radius) - offsetof(EnBubble, colliderSphereItems[0].dim.worldSphere.radius), 0x196, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].dim.scale), offsetof(EnBubble, colliderSphereItems[1].dim.scale) - offsetof(EnBubble, colliderSphereItems[0].dim.scale), 0x198, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, colliderSphereItems[0].dim.limb), offsetof(EnBubble, colliderSphereItems[1].dim.limb) - offsetof(EnBubble, colliderSphereItems[0].dim.limb), 0x19c, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, unk_1F0.x), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, unk_1F0.y), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, unk_1F0.z), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, unk_1FC.x), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, unk_1FC.y), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, unk_1FC.z), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, unk_208), 0, 0x1f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, explosionCountdown), 0, 0x1fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBubble, unk_20C[0]), offsetof(EnBubble, unk_20C[1]) - offsetof(EnBubble, unk_20C[0]), 0x1fc, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, graphicRotSpeed), 0, 0x200, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, graphicEccentricity), 0, 0x204, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, unk_218), 0, 0x208, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, unk_21C), 0, 0x20c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, expansionWidth), 0, 0x210, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, expansionHeight), 0, 0x214, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, bounceCount), 0, 0x218, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBubble, bounceDirection.x), 0, 0x21c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, bounceDirection.y), 0, 0x220, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, bounceDirection.z), 0, 0x224, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, velocityFromBounce.x), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, velocityFromBounce.y), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, velocityFromBounce.z), 0, 0x230, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, normalizedBumpVelocity.x), 0, 0x234, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, normalizedBumpVelocity.y), 0, 0x238, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, normalizedBumpVelocity.z), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, velocityFromBump.x), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, velocityFromBump.y), 0, 0x244, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, velocityFromBump.z), 0, 0x248, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBubble, sinkSpeed), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnBubbleSpanCount = ARRAY_COUNT(gGzEnBubbleSpans);

const GzActorFunction gGzEnBubbleFunctions[] = {
    { 0x0, NULL },
    { 0xbc, NULL },
    { 0xf0, NULL },
    { 0x114, (void*)EnBubble_DamagePlayer },
    { 0x180, NULL },
    { 0x3dc, NULL },
    { 0x428, NULL },
    { 0x47c, NULL },
    { 0x504, NULL },
    { 0x57c, (void*)EnBubble_Fly },
    { 0xa58, NULL },
    { 0xaf4, NULL },
    { 0xb84, NULL },
    { 0xc98, (void*)EnBubble_Init },
    { 0xd98, (void*)EnBubble_Destroy },
    { 0xdc4, (void*)EnBubble_Wait },
    { 0xe78, (void*)EnBubble_Pop },
    { 0xec8, (void*)EnBubble_Disappear },
    { 0xf10, (void*)EnBubble_Regrow },
    { 0xf80, (void*)EnBubble_Update },
    { 0xffc, (void*)EnBubble_Draw },
};
const size_t gGzEnBubbleFunctionCount = ARRAY_COUNT(gGzEnBubbleFunctions);
