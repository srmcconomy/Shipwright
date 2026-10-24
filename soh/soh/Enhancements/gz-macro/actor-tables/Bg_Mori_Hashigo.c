// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mori_Hashigo/z_bg_mori_hashigo.h"

void BgMoriHashigo_InitCollider(void*, void*);
s32 BgMoriHashigo_SpawnLadder(void*, void*);
s32 BgMoriHashigo_InitClasp(void*, void*);
s32 BgMoriHashigo_InitLadder(void*, void*);
void BgMoriHashigo_Init(void*, void*);
void BgMoriHashigo_Destroy(void*, void*);
void BgMoriHashigo_WaitForMoriTex(void*, void*);
void BgMoriHashigo_Clasp(void*, void*);
void BgMoriHashigo_LadderWait(void*, void*);
void BgMoriHashigo_LadderFall(void*, void*);
void BgMoriHashigo_Update(void*, void*);
void BgMoriHashigo_Draw(void*, void*);

const GzActorSpan gGzBgMoriHashigoSpans[] = {
    { offsetof(BgMoriHashigo, collider.base.actor), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMoriHashigo, collider.base.at), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMoriHashigo, collider.base.ac), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMoriHashigo, collider.base.oc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMoriHashigo, collider.base.atFlags), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, collider.base.acFlags), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, collider.base.ocFlags1), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, collider.base.ocFlags2), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, collider.base.colType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, collider.base.shape), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, collider.count), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, collider.elements), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMoriHashigo, colliderItems[0].info.toucher.dmgFlags), 0, 0x174, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.toucher.effect), 0, 0x178, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.toucher.damage), 0, 0x179, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.bumper.dmgFlags), 0, 0x17c, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.bumper.effect), 0, 0x180, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.bumper.defense), 0, 0x181, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.bumper.hitPos.x), 0, 0x182, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.bumper.hitPos.y), 0, 0x184, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.bumper.hitPos.z), 0, 0x186, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.elemType), 0, 0x188, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.toucherFlags), 0, 0x189, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.bumperFlags), 0, 0x18a, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.ocElemFlags), 0, 0x18b, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].info.atHit), 0, 0x18c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMoriHashigo, colliderItems[0].info.acHit), 0, 0x190, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMoriHashigo, colliderItems[0].info.atHitInfo), 0, 0x194, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMoriHashigo, colliderItems[0].info.acHitInfo), 0, 0x198, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMoriHashigo, colliderItems[0].dim.modelSphere.center.x), 0, 0x19c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].dim.modelSphere.center.y), 0, 0x19e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].dim.modelSphere.center.z), 0, 0x1a0, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].dim.modelSphere.radius), 0, 0x1a2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].dim.worldSphere.center.x), 0, 0x1a4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].dim.worldSphere.center.y), 0, 0x1a6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].dim.worldSphere.center.z), 0, 0x1a8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].dim.worldSphere.radius), 0, 0x1aa, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].dim.scale), 0, 0x1ac, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, colliderItems[0].dim.limb), 0, 0x1b0, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, actionFunc), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMoriHashigo, hitTimer), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, bounceCounter), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashigo, moriTexObjIndex), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgMoriHashigoSpanCount = ARRAY_COUNT(gGzBgMoriHashigoSpans);

const GzActorFunction gGzBgMoriHashigoFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgMoriHashigo_InitCollider },
    { 0x104, (void*)BgMoriHashigo_SpawnLadder },
    { 0x1bc, (void*)BgMoriHashigo_InitClasp },
    { 0x248, (void*)BgMoriHashigo_InitLadder },
    { 0x28c, (void*)BgMoriHashigo_Init },
    { 0x350, (void*)BgMoriHashigo_Destroy },
    { 0x3a8, NULL },
    { 0x3bc, (void*)BgMoriHashigo_WaitForMoriTex },
    { 0x43c, NULL },
    { 0x450, (void*)BgMoriHashigo_Clasp },
    { 0x4b4, NULL },
    { 0x4c8, (void*)BgMoriHashigo_LadderWait },
    { 0x4fc, NULL },
    { 0x538, (void*)BgMoriHashigo_LadderFall },
    { 0x618, NULL },
    { 0x63c, (void*)BgMoriHashigo_Update },
    { 0x678, (void*)BgMoriHashigo_Draw },
};
const size_t gGzBgMoriHashigoFunctionCount = ARRAY_COUNT(gGzBgMoriHashigoFunctions);
