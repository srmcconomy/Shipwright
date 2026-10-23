// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Dha/z_en_dha.h"

void EnDha_Init(void*, void*);
void EnDha_Destroy(void*, void*);
void EnDha_Wait(void*, void*);
void EnDha_TakeDamage(void*, void*);
void EnDha_Die(void*, void*);
void EnDha_UpdateHealth(void*, void*);
void EnDha_Update(void*, void*);
void EnDha_Draw(void*, void*);

const GzActorSpan gGzEnDhaSpans[] = {
    { offsetof(EnDha, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDha, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, jointTable[0].x), offsetof(EnDha, jointTable[1].x) - offsetof(EnDha, jointTable[0].x), 0x180, 0x6, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, jointTable[0].y), offsetof(EnDha, jointTable[1].y) - offsetof(EnDha, jointTable[0].y), 0x182, 0x6, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, jointTable[0].z), offsetof(EnDha, jointTable[1].z) - offsetof(EnDha, jointTable[0].z), 0x184, 0x6, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, morphTable[0].x), offsetof(EnDha, morphTable[1].x) - offsetof(EnDha, morphTable[0].x), 0x198, 0x6, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, morphTable[0].y), offsetof(EnDha, morphTable[1].y) - offsetof(EnDha, morphTable[0].y), 0x19a, 0x6, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, morphTable[0].z), offsetof(EnDha, morphTable[1].z) - offsetof(EnDha, morphTable[0].z), 0x19c, 0x6, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, unk_1C0), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, actionFunc), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDha, actionTimer), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, timer), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, unk_1CC), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, limbAngleX[0]), offsetof(EnDha, limbAngleX[1]) - offsetof(EnDha, limbAngleX[0]), 0x1be, 0x2, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, limbAngleY), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, handAngle.x), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, handAngle.y), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, handAngle.z), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, handPos[0].x), offsetof(EnDha, handPos[1].x) - offsetof(EnDha, handPos[0].x), 0x1cc, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, handPos[0].y), offsetof(EnDha, handPos[1].y) - offsetof(EnDha, handPos[0].y), 0x1d0, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, handPos[0].z), offsetof(EnDha, handPos[1].z) - offsetof(EnDha, handPos[0].z), 0x1d4, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, armPos.x), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, armPos.y), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, armPos.z), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, collider.base.actor), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, collider.base.at), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, collider.base.ac), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, collider.base.oc), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, collider.base.atFlags), 0, 0x200, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, collider.base.acFlags), 0, 0x201, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, collider.base.ocFlags1), 0, 0x202, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, collider.base.ocFlags2), 0, 0x203, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, collider.base.colType), 0, 0x204, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, collider.base.shape), 0, 0x205, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, collider.count), 0, 0x208, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, collider.elements), 0, 0x20c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, colliderItem[0].info.toucher.dmgFlags), offsetof(EnDha, colliderItem[1].info.toucher.dmgFlags) - offsetof(EnDha, colliderItem[0].info.toucher.dmgFlags), 0x210, 0x40, 5, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.toucher.effect), offsetof(EnDha, colliderItem[1].info.toucher.effect) - offsetof(EnDha, colliderItem[0].info.toucher.effect), 0x214, 0x40, 5, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.toucher.damage), offsetof(EnDha, colliderItem[1].info.toucher.damage) - offsetof(EnDha, colliderItem[0].info.toucher.damage), 0x215, 0x40, 5, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.bumper.dmgFlags), offsetof(EnDha, colliderItem[1].info.bumper.dmgFlags) - offsetof(EnDha, colliderItem[0].info.bumper.dmgFlags), 0x218, 0x40, 5, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.bumper.effect), offsetof(EnDha, colliderItem[1].info.bumper.effect) - offsetof(EnDha, colliderItem[0].info.bumper.effect), 0x21c, 0x40, 5, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.bumper.defense), offsetof(EnDha, colliderItem[1].info.bumper.defense) - offsetof(EnDha, colliderItem[0].info.bumper.defense), 0x21d, 0x40, 5, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.bumper.hitPos.x), offsetof(EnDha, colliderItem[1].info.bumper.hitPos.x) - offsetof(EnDha, colliderItem[0].info.bumper.hitPos.x), 0x21e, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.bumper.hitPos.y), offsetof(EnDha, colliderItem[1].info.bumper.hitPos.y) - offsetof(EnDha, colliderItem[0].info.bumper.hitPos.y), 0x220, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.bumper.hitPos.z), offsetof(EnDha, colliderItem[1].info.bumper.hitPos.z) - offsetof(EnDha, colliderItem[0].info.bumper.hitPos.z), 0x222, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.elemType), offsetof(EnDha, colliderItem[1].info.elemType) - offsetof(EnDha, colliderItem[0].info.elemType), 0x224, 0x40, 5, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.toucherFlags), offsetof(EnDha, colliderItem[1].info.toucherFlags) - offsetof(EnDha, colliderItem[0].info.toucherFlags), 0x225, 0x40, 5, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.bumperFlags), offsetof(EnDha, colliderItem[1].info.bumperFlags) - offsetof(EnDha, colliderItem[0].info.bumperFlags), 0x226, 0x40, 5, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.ocElemFlags), offsetof(EnDha, colliderItem[1].info.ocElemFlags) - offsetof(EnDha, colliderItem[0].info.ocElemFlags), 0x227, 0x40, 5, 1, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].info.atHit), offsetof(EnDha, colliderItem[1].info.atHit) - offsetof(EnDha, colliderItem[0].info.atHit), 0x228, 0x40, 5, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, colliderItem[0].info.acHit), offsetof(EnDha, colliderItem[1].info.acHit) - offsetof(EnDha, colliderItem[0].info.acHit), 0x22c, 0x40, 5, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, colliderItem[0].info.atHitInfo), offsetof(EnDha, colliderItem[1].info.atHitInfo) - offsetof(EnDha, colliderItem[0].info.atHitInfo), 0x230, 0x40, 5, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, colliderItem[0].info.acHitInfo), offsetof(EnDha, colliderItem[1].info.acHitInfo) - offsetof(EnDha, colliderItem[0].info.acHitInfo), 0x234, 0x40, 5, 4, GZ_SPAN_POINTER },
    { offsetof(EnDha, colliderItem[0].dim.modelSphere.center.x), offsetof(EnDha, colliderItem[1].dim.modelSphere.center.x) - offsetof(EnDha, colliderItem[0].dim.modelSphere.center.x), 0x238, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].dim.modelSphere.center.y), offsetof(EnDha, colliderItem[1].dim.modelSphere.center.y) - offsetof(EnDha, colliderItem[0].dim.modelSphere.center.y), 0x23a, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].dim.modelSphere.center.z), offsetof(EnDha, colliderItem[1].dim.modelSphere.center.z) - offsetof(EnDha, colliderItem[0].dim.modelSphere.center.z), 0x23c, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].dim.modelSphere.radius), offsetof(EnDha, colliderItem[1].dim.modelSphere.radius) - offsetof(EnDha, colliderItem[0].dim.modelSphere.radius), 0x23e, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].dim.worldSphere.center.x), offsetof(EnDha, colliderItem[1].dim.worldSphere.center.x) - offsetof(EnDha, colliderItem[0].dim.worldSphere.center.x), 0x240, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].dim.worldSphere.center.y), offsetof(EnDha, colliderItem[1].dim.worldSphere.center.y) - offsetof(EnDha, colliderItem[0].dim.worldSphere.center.y), 0x242, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].dim.worldSphere.center.z), offsetof(EnDha, colliderItem[1].dim.worldSphere.center.z) - offsetof(EnDha, colliderItem[0].dim.worldSphere.center.z), 0x244, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].dim.worldSphere.radius), offsetof(EnDha, colliderItem[1].dim.worldSphere.radius) - offsetof(EnDha, colliderItem[0].dim.worldSphere.radius), 0x246, 0x40, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].dim.scale), offsetof(EnDha, colliderItem[1].dim.scale) - offsetof(EnDha, colliderItem[0].dim.scale), 0x248, 0x40, 5, 4, GZ_SPAN_VALUE },
    { offsetof(EnDha, colliderItem[0].dim.limb), offsetof(EnDha, colliderItem[1].dim.limb) - offsetof(EnDha, colliderItem[0].dim.limb), 0x24c, 0x40, 5, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnDhaSpanCount = ARRAY_COUNT(gGzEnDhaSpans);

const GzActorFunction gGzEnDhaFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnDha_Init },
    { 0x128, (void*)EnDha_Destroy },
    { 0x154, NULL },
    { 0x1dc, (void*)EnDha_Wait },
    { 0x6ec, NULL },
    { 0x718, (void*)EnDha_TakeDamage },
    { 0x7e0, NULL },
    { 0x850, (void*)EnDha_Die },
    { 0xa0c, (void*)EnDha_UpdateHealth },
    { 0xb00, (void*)EnDha_Update },
    { 0xba8, NULL },
    { 0xc48, NULL },
    { 0xd60, (void*)EnDha_Draw },
};
const size_t gGzEnDhaFunctionCount = ARRAY_COUNT(gGzEnDhaFunctions);
