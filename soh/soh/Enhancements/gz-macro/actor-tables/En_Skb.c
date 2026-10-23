// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Skb/z_en_skb.h"

void EnSkb_Init(void*, void*);
void EnSkb_Destroy(void*, void*);
void func_80AFCE5C(void*, void*);
void func_80AFCFF0(void*, void*);
void EnSkb_Advance(void*, void*);
void EnSkb_SetupAttack(void*, void*);
void func_80AFD508(void*, void*);
void func_80AFD59C(void*, void*);
void func_80AFD6CC(void*, void*);
void func_80AFD7B4(void*, void*);
void func_80AFD880(void*, void*);
void func_80AFD968(void*, void*);
void EnSkb_Update(void*, void*);
void EnSkb_Draw(void*, void*);

const GzActorSpan gGzEnSkbSpans[] = {
    { offsetof(EnSkb, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnSkb, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, jointTable[0].x), offsetof(EnSkb, jointTable[1].x) - offsetof(EnSkb, jointTable[0].x), 0x180, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, jointTable[0].y), offsetof(EnSkb, jointTable[1].y) - offsetof(EnSkb, jointTable[0].y), 0x182, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, jointTable[0].z), offsetof(EnSkb, jointTable[1].z) - offsetof(EnSkb, jointTable[0].z), 0x184, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, morphTable[0].x), offsetof(EnSkb, morphTable[1].x) - offsetof(EnSkb, morphTable[0].x), 0x1f8, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, morphTable[0].y), offsetof(EnSkb, morphTable[1].y) - offsetof(EnSkb, morphTable[0].y), 0x1fa, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, morphTable[0].z), offsetof(EnSkb, morphTable[1].z) - offsetof(EnSkb, morphTable[0].z), 0x1fc, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, actionState), 0, 0x270, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, setColliderAT), 0, 0x271, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, lastDamageReaction), 0, 0x272, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, breakFlags), 0, 0x273, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, actionFunc), 0, 0x274, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnSkb, headlessYawOffset), 0, 0x278, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, bodyBreak.matrices), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, bodyBreak.objectIds), 0, 0x280, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, bodyBreak.count), 0, 0x284, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, bodyBreak.dLists), 0, 0x288, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, bodyBreak.val), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, bodyBreak.prevLimbIndex), 0, 0x290, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, collider.base.actor), 0, 0x294, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, collider.base.at), 0, 0x298, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, collider.base.ac), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, collider.base.oc), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, collider.base.atFlags), 0, 0x2a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, collider.base.acFlags), 0, 0x2a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, collider.base.ocFlags1), 0, 0x2a6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, collider.base.ocFlags2), 0, 0x2a7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, collider.base.colType), 0, 0x2a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, collider.base.shape), 0, 0x2a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, collider.count), 0, 0x2ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, collider.elements), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, colliderItem[0].info.toucher.dmgFlags), offsetof(EnSkb, colliderItem[1].info.toucher.dmgFlags) - offsetof(EnSkb, colliderItem[0].info.toucher.dmgFlags), 0x2b4, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.toucher.effect), offsetof(EnSkb, colliderItem[1].info.toucher.effect) - offsetof(EnSkb, colliderItem[0].info.toucher.effect), 0x2b8, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.toucher.damage), offsetof(EnSkb, colliderItem[1].info.toucher.damage) - offsetof(EnSkb, colliderItem[0].info.toucher.damage), 0x2b9, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.bumper.dmgFlags), offsetof(EnSkb, colliderItem[1].info.bumper.dmgFlags) - offsetof(EnSkb, colliderItem[0].info.bumper.dmgFlags), 0x2bc, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.bumper.effect), offsetof(EnSkb, colliderItem[1].info.bumper.effect) - offsetof(EnSkb, colliderItem[0].info.bumper.effect), 0x2c0, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.bumper.defense), offsetof(EnSkb, colliderItem[1].info.bumper.defense) - offsetof(EnSkb, colliderItem[0].info.bumper.defense), 0x2c1, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.bumper.hitPos.x), offsetof(EnSkb, colliderItem[1].info.bumper.hitPos.x) - offsetof(EnSkb, colliderItem[0].info.bumper.hitPos.x), 0x2c2, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.bumper.hitPos.y), offsetof(EnSkb, colliderItem[1].info.bumper.hitPos.y) - offsetof(EnSkb, colliderItem[0].info.bumper.hitPos.y), 0x2c4, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.bumper.hitPos.z), offsetof(EnSkb, colliderItem[1].info.bumper.hitPos.z) - offsetof(EnSkb, colliderItem[0].info.bumper.hitPos.z), 0x2c6, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.elemType), offsetof(EnSkb, colliderItem[1].info.elemType) - offsetof(EnSkb, colliderItem[0].info.elemType), 0x2c8, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.toucherFlags), offsetof(EnSkb, colliderItem[1].info.toucherFlags) - offsetof(EnSkb, colliderItem[0].info.toucherFlags), 0x2c9, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.bumperFlags), offsetof(EnSkb, colliderItem[1].info.bumperFlags) - offsetof(EnSkb, colliderItem[0].info.bumperFlags), 0x2ca, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.ocElemFlags), offsetof(EnSkb, colliderItem[1].info.ocElemFlags) - offsetof(EnSkb, colliderItem[0].info.ocElemFlags), 0x2cb, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].info.atHit), offsetof(EnSkb, colliderItem[1].info.atHit) - offsetof(EnSkb, colliderItem[0].info.atHit), 0x2cc, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, colliderItem[0].info.acHit), offsetof(EnSkb, colliderItem[1].info.acHit) - offsetof(EnSkb, colliderItem[0].info.acHit), 0x2d0, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, colliderItem[0].info.atHitInfo), offsetof(EnSkb, colliderItem[1].info.atHitInfo) - offsetof(EnSkb, colliderItem[0].info.atHitInfo), 0x2d4, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, colliderItem[0].info.acHitInfo), offsetof(EnSkb, colliderItem[1].info.acHitInfo) - offsetof(EnSkb, colliderItem[0].info.acHitInfo), 0x2d8, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkb, colliderItem[0].dim.modelSphere.center.x), offsetof(EnSkb, colliderItem[1].dim.modelSphere.center.x) - offsetof(EnSkb, colliderItem[0].dim.modelSphere.center.x), 0x2dc, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].dim.modelSphere.center.y), offsetof(EnSkb, colliderItem[1].dim.modelSphere.center.y) - offsetof(EnSkb, colliderItem[0].dim.modelSphere.center.y), 0x2de, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].dim.modelSphere.center.z), offsetof(EnSkb, colliderItem[1].dim.modelSphere.center.z) - offsetof(EnSkb, colliderItem[0].dim.modelSphere.center.z), 0x2e0, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].dim.modelSphere.radius), offsetof(EnSkb, colliderItem[1].dim.modelSphere.radius) - offsetof(EnSkb, colliderItem[0].dim.modelSphere.radius), 0x2e2, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].dim.worldSphere.center.x), offsetof(EnSkb, colliderItem[1].dim.worldSphere.center.x) - offsetof(EnSkb, colliderItem[0].dim.worldSphere.center.x), 0x2e4, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].dim.worldSphere.center.y), offsetof(EnSkb, colliderItem[1].dim.worldSphere.center.y) - offsetof(EnSkb, colliderItem[0].dim.worldSphere.center.y), 0x2e6, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].dim.worldSphere.center.z), offsetof(EnSkb, colliderItem[1].dim.worldSphere.center.z) - offsetof(EnSkb, colliderItem[0].dim.worldSphere.center.z), 0x2e8, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].dim.worldSphere.radius), offsetof(EnSkb, colliderItem[1].dim.worldSphere.radius) - offsetof(EnSkb, colliderItem[0].dim.worldSphere.radius), 0x2ea, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].dim.scale), offsetof(EnSkb, colliderItem[1].dim.scale) - offsetof(EnSkb, colliderItem[0].dim.scale), 0x2ec, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkb, colliderItem[0].dim.limb), offsetof(EnSkb, colliderItem[1].dim.limb) - offsetof(EnSkb, colliderItem[0].dim.limb), 0x2f0, 0x40, 2, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnSkbSpanCount = ARRAY_COUNT(gGzEnSkbSpans);

const GzActorFunction gGzEnSkbFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x1bc, (void*)EnSkb_Init },
    { 0x374, (void*)EnSkb_Destroy },
    { 0x3cc, NULL },
    { 0x468, NULL },
    { 0x4cc, (void*)func_80AFCE5C },
    { 0x5b8, NULL },
    { 0x660, (void*)func_80AFCFF0 },
    { 0x714, NULL },
    { 0x7ac, (void*)EnSkb_Advance },
    { 0x9ac, NULL },
    { 0xa44, (void*)EnSkb_SetupAttack },
    { 0xaf0, NULL },
    { 0xb7c, (void*)func_80AFD508 },
    { 0xbb8, NULL },
    { 0xc14, (void*)func_80AFD59C },
    { 0xcbc, NULL },
    { 0xd44, (void*)func_80AFD6CC },
    { 0xe30, (void*)func_80AFD7B4 },
    { 0xefc, (void*)func_80AFD880 },
    { 0xfe8, (void*)func_80AFD968 },
    { 0x1298, (void*)EnSkb_Update },
    { 0x13c0, NULL },
    { 0x1590, NULL },
    { 0x1638, (void*)EnSkb_Draw },
};
const size_t gGzEnSkbFunctionCount = ARRAY_COUNT(gGzEnSkbFunctions);
