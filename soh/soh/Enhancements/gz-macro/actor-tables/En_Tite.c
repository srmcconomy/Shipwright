// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Tite/z_en_tite.h"

void EnTite_Init(void*, void*);
void EnTite_Destroy(void*, void*);
void EnTite_Idle(void*, void*);
void EnTite_Attack(void*, void*);
void EnTite_TurnTowardPlayer(void*, void*);
void EnTite_MoveTowardPlayer(void*, void*);
void EnTite_Recoil(void*, void*);
void EnTite_Stunned(void*, void*);
void EnTite_DeathCry(void*, void*);
void EnTite_FallApart(void*, void*);
void EnTite_FlipOnBack(void*, void*);
void EnTite_FlipUpright(void*, void*);
void EnTite_CheckDamage(void*, void*);
void EnTite_Update(void*, void*);
void EnTite_Draw(void*, void*);

const GzActorSpan gGzEnTiteSpans[] = {
    { offsetof(EnTite, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnTite, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, jointTable[0].x), offsetof(EnTite, jointTable[1].x) - offsetof(EnTite, jointTable[0].x), 0x180, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, jointTable[0].y), offsetof(EnTite, jointTable[1].y) - offsetof(EnTite, jointTable[0].y), 0x182, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, jointTable[0].z), offsetof(EnTite, jointTable[1].z) - offsetof(EnTite, jointTable[0].z), 0x184, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, morphTable[0].x), offsetof(EnTite, morphTable[1].x) - offsetof(EnTite, morphTable[0].x), 0x216, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, morphTable[0].y), offsetof(EnTite, morphTable[1].y) - offsetof(EnTite, morphTable[0].y), 0x218, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, morphTable[0].z), offsetof(EnTite, morphTable[1].z) - offsetof(EnTite, morphTable[0].z), 0x21a, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, action), 0, 0x2ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, flipState), 0, 0x2ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, actionFunc), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnTite, bodyBreak.matrices), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, bodyBreak.objectIds), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, bodyBreak.count), 0, 0x2bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, bodyBreak.dLists), 0, 0x2c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, bodyBreak.val), 0, 0x2c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, bodyBreak.prevLimbIndex), 0, 0x2c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, unk_2DC), 0, 0x2cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, actionVar1), 0, 0x2d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, actionVar2), 0, 0x2d2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, spawnIceTimer), 0, 0x2d3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, damageEffect), 0, 0x2d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, collider.base.actor), 0, 0x2d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, collider.base.at), 0, 0x2dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, collider.base.ac), 0, 0x2e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, collider.base.oc), 0, 0x2e4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, collider.base.atFlags), 0, 0x2e8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, collider.base.acFlags), 0, 0x2e9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, collider.base.ocFlags1), 0, 0x2ea, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, collider.base.ocFlags2), 0, 0x2eb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, collider.base.colType), 0, 0x2ec, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, collider.base.shape), 0, 0x2ed, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, collider.count), 0, 0x2f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, collider.elements), 0, 0x2f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, colliderItem.info.toucher.dmgFlags), 0, 0x2f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.toucher.effect), 0, 0x2fc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.toucher.damage), 0, 0x2fd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.bumper.dmgFlags), 0, 0x300, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.bumper.effect), 0, 0x304, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.bumper.defense), 0, 0x305, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.bumper.hitPos.x), 0, 0x306, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.bumper.hitPos.y), 0, 0x308, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.bumper.hitPos.z), 0, 0x30a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.elemType), 0, 0x30c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.toucherFlags), 0, 0x30d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.bumperFlags), 0, 0x30e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.ocElemFlags), 0, 0x30f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.info.atHit), 0, 0x310, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, colliderItem.info.acHit), 0, 0x314, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, colliderItem.info.atHitInfo), 0, 0x318, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, colliderItem.info.acHitInfo), 0, 0x31c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTite, colliderItem.dim.modelSphere.center.x), 0, 0x320, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.dim.modelSphere.center.y), 0, 0x322, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.dim.modelSphere.center.z), 0, 0x324, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.dim.modelSphere.radius), 0, 0x326, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.dim.worldSphere.center.x), 0, 0x328, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.dim.worldSphere.center.y), 0, 0x32a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.dim.worldSphere.center.z), 0, 0x32c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.dim.worldSphere.radius), 0, 0x32e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.dim.scale), 0, 0x330, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, colliderItem.dim.limb), 0, 0x334, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTite, frontLeftFootPos.x), 0, 0x338, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, frontLeftFootPos.y), 0, 0x33c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, frontLeftFootPos.z), 0, 0x340, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, frontRightFootPos.x), 0, 0x344, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, frontRightFootPos.y), 0, 0x348, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, frontRightFootPos.z), 0, 0x34c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, backRightFootPos.x), 0, 0x350, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, backRightFootPos.y), 0, 0x354, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, backRightFootPos.z), 0, 0x358, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, backLeftFootPos.x), 0, 0x35c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, backLeftFootPos.y), 0, 0x360, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTite, backLeftFootPos.z), 0, 0x364, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnTiteSpanCount = ARRAY_COUNT(gGzEnTiteSpans);

const GzActorFunction gGzEnTiteFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnTite_Init },
    { 0x164, (void*)EnTite_Destroy },
    { 0x1ac, NULL },
    { 0x214, (void*)EnTite_Idle },
    { 0x358, NULL },
    { 0x3cc, (void*)EnTite_Attack },
    { 0xa74, NULL },
    { 0xb10, (void*)EnTite_TurnTowardPlayer },
    { 0xdac, NULL },
    { 0xe68, (void*)EnTite_MoveTowardPlayer },
    { 0x1378, NULL },
    { 0x13e4, (void*)EnTite_Recoil },
    { 0x173c, NULL },
    { 0x17f0, (void*)EnTite_Stunned },
    { 0x1b8c, NULL },
    { 0x1bc0, (void*)EnTite_DeathCry },
    { 0x1c34, (void*)EnTite_FallApart },
    { 0x1cc0, NULL },
    { 0x1ddc, (void*)EnTite_FlipOnBack },
    { 0x1f98, NULL },
    { 0x1fe8, (void*)EnTite_FlipUpright },
    { 0x2110, (void*)EnTite_CheckDamage },
    { 0x22e8, (void*)EnTite_Update },
    { 0x26d4, NULL },
    { 0x27c4, (void*)EnTite_Draw },
};
const size_t gGzEnTiteFunctionCount = ARRAY_COUNT(gGzEnTiteFunctions);
