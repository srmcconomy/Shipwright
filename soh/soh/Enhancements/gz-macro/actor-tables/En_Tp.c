// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Tp/z_en_tp.h"

void EnTp_Init(void*, void*);
void EnTp_Destroy(void*, void*);
void EnTp_Tail_FollowHead(void*, void*);
void EnTp_Head_ApproachPlayer(void*, void*);
void EnTp_Die(void*, void*);
void EnTp_Fragment_Fade(void*, void*);
void EnTp_Head_TakeOff(void*, void*);
void EnTp_Head_Wait(void*, void*);
void EnTp_Head_BurrowReturnHome(void*, void*);
void EnTp_UpdateDamage(void*, void*);
void EnTp_Update(void*, void*);
void EnTp_Draw(void*, void*);

const GzActorSpan gGzEnTpSpans[] = {
    { offsetof(EnTp, actionIndex), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTp, unk_150), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTp, actionFunc), 0, 0x144, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnTp, damageEffect), 0, 0x148, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, timer), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, unk_15C), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, alpha), 0, 0x14e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, red), 0, 0x150, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, kiraSpawnTimer), 0, 0x152, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, unk_164), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, heightPhase), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTp, horizontalVariation), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTp, extraHeightVariation), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTp, collider.base.actor), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTp, collider.base.at), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTp, collider.base.ac), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTp, collider.base.oc), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTp, collider.base.atFlags), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, collider.base.acFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, collider.base.ocFlags1), 0, 0x176, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, collider.base.ocFlags2), 0, 0x177, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, collider.base.colType), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, collider.base.shape), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, collider.count), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTp, collider.elements), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTp, colliderItems[0].info.toucher.dmgFlags), 0, 0x184, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.toucher.effect), 0, 0x188, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.toucher.damage), 0, 0x189, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.bumper.dmgFlags), 0, 0x18c, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.bumper.effect), 0, 0x190, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.bumper.defense), 0, 0x191, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.bumper.hitPos.x), 0, 0x192, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.bumper.hitPos.y), 0, 0x194, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.bumper.hitPos.z), 0, 0x196, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.elemType), 0, 0x198, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.toucherFlags), 0, 0x199, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.bumperFlags), 0, 0x19a, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.ocElemFlags), 0, 0x19b, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].info.atHit), 0, 0x19c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTp, colliderItems[0].info.acHit), 0, 0x1a0, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTp, colliderItems[0].info.atHitInfo), 0, 0x1a4, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTp, colliderItems[0].info.acHitInfo), 0, 0x1a8, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTp, colliderItems[0].dim.modelSphere.center.x), 0, 0x1ac, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].dim.modelSphere.center.y), 0, 0x1ae, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].dim.modelSphere.center.z), 0, 0x1b0, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].dim.modelSphere.radius), 0, 0x1b2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].dim.worldSphere.center.x), 0, 0x1b4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].dim.worldSphere.center.y), 0, 0x1b6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].dim.worldSphere.center.z), 0, 0x1b8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].dim.worldSphere.radius), 0, 0x1ba, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].dim.scale), 0, 0x1bc, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTp, colliderItems[0].dim.limb), 0, 0x1c0, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTp, head), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
};
const size_t gGzEnTpSpanCount = ARRAY_COUNT(gGzEnTpSpans);

const GzActorFunction gGzEnTpFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnTp_Init },
    { 0x284, (void*)EnTp_Destroy },
    { 0x2b0, NULL },
    { 0x2dc, (void*)EnTp_Tail_FollowHead },
    { 0x4b8, NULL },
    { 0x4ec, (void*)EnTp_Head_ApproachPlayer },
    { 0x688, NULL },
    { 0x700, (void*)EnTp_Die },
    { 0xa30, NULL },
    { 0xb34, (void*)EnTp_Fragment_Fade },
    { 0xb80, NULL },
    { 0xbdc, (void*)EnTp_Head_TakeOff },
    { 0xdc4, NULL },
    { 0xe10, (void*)EnTp_Head_Wait },
    { 0x111c, NULL },
    { 0x114c, (void*)EnTp_Head_BurrowReturnHome },
    { 0x141c, (void*)EnTp_UpdateDamage },
    { 0x1674, (void*)EnTp_Update },
    { 0x19e0, (void*)EnTp_Draw },
};
const size_t gGzEnTpFunctionCount = ARRAY_COUNT(gGzEnTpFunctions);
