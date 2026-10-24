// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Dnt_Nomal/z_en_dnt_nomal.h"

void EnDntNomal_Init(void*, void*);
void EnDntNomal_Destroy(void*, void*);
void EnDntNomal_WaitForObject(void*, void*);
void EnDntNomal_SetFlower(void*, void*);
void EnDntNomal_SetupTargetWait(void*, void*);
void EnDntNomal_TargetWait(void*, void*);
void EnDntNomal_SetupTargetUnburrow(void*, void*);
void EnDntNomal_TargetUnburrow(void*, void*);
void EnDntNomal_SetupTargetWalk(void*, void*);
void EnDntNomal_TargetWalk(void*, void*);
void EnDntNomal_TargetFacePlayer(void*, void*);
void EnDntNomal_SetupTargetTalk(void*, void*);
void EnDntNomal_TargetTalk(void*, void*);
void EnDntNomal_SetupTargetGivePrize(void*, void*);
void EnDntNomal_TargetGivePrize(void*, void*);
void EnDntNomal_TargetReturn(void*, void*);
void EnDntNomal_TargetBurrow(void*, void*);
void EnDntNomal_SetupStageWait(void*, void*);
void EnDntNomal_StageWait(void*, void*);
void EnDntNomal_SetupStageUp(void*, void*);
void EnDntNomal_StageUp(void*, void*);
void EnDntNomal_SetupStageUnburrow(void*, void*);
void EnDntNomal_StageUnburrow(void*, void*);
void EnDntNomal_SetupStageCelebrate(void*, void*);
void EnDntNomal_StageCelebrate(void*, void*);
void EnDntNomal_SetupStageDance(void*, void*);
void EnDntNomal_StageDance(void*, void*);
void EnDntNomal_SetupStageHide(void*, void*);
void EnDntNomal_StageHide(void*, void*);
void EnDntNomal_StageAttackHide(void*, void*);
void EnDntNomal_SetupStageAttack(void*, void*);
void EnDntNomal_StageAttack(void*, void*);
void EnDntNomal_StageSetupReturn(void*, void*);
void EnDntNomal_StageReturn(void*, void*);
void EnDntNomal_Update(void*, void*);
void EnDntNomal_DrawStageScrub(void*, void*);
void EnDntNomal_DrawTargetScrub(void*, void*);

const GzActorSpan gGzEnDntNomalSpans[] = {
    { offsetof(EnDntNomal, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnDntNomal, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDntNomal, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, jointTable[0].x), offsetof(EnDntNomal, jointTable[1].x) - offsetof(EnDntNomal, jointTable[0].x), 0x180, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, jointTable[0].y), offsetof(EnDntNomal, jointTable[1].y) - offsetof(EnDntNomal, jointTable[0].y), 0x182, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, jointTable[0].z), offsetof(EnDntNomal, jointTable[1].z) - offsetof(EnDntNomal, jointTable[0].z), 0x184, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, morphTable[0].x), offsetof(EnDntNomal, morphTable[1].x) - offsetof(EnDntNomal, morphTable[0].x), 0x1c2, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, morphTable[0].y), offsetof(EnDntNomal, morphTable[1].y) - offsetof(EnDntNomal, morphTable[0].y), 0x1c4, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, morphTable[0].z), offsetof(EnDntNomal, morphTable[1].z) - offsetof(EnDntNomal, morphTable[0].z), 0x1c6, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, actionFunc), 0, 0x204, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDntNomal, isSolid), 0, 0x208, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, flowerPos.x), 0, 0x20c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, flowerPos.y), 0, 0x210, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, flowerPos.z), 0, 0x214, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetVtx[0].x), offsetof(EnDntNomal, targetVtx[1].x) - offsetof(EnDntNomal, targetVtx[0].x), 0x218, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetVtx[0].y), offsetof(EnDntNomal, targetVtx[1].y) - offsetof(EnDntNomal, targetVtx[0].y), 0x21c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetVtx[0].z), offsetof(EnDntNomal, targetVtx[1].z) - offsetof(EnDntNomal, targetVtx[0].z), 0x220, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, timer1), 0, 0x248, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, timer2), 0, 0x24a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, timer4), 0, 0x24c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, timer5), 0, 0x24e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, blinkTimer), 0, 0x250, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, unkCounter), 0, 0x252, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, timer3), 0, 0x254, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, objId), 0, 0x256, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, eyeState), 0, 0x258, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, type), 0, 0x25a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, hitCounter), 0, 0x25c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, endFrame), 0, 0x25e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, stageSignal), 0, 0x260, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, rotDirection), 0, 0x262, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, action), 0, 0x264, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, ignore), 0, 0x266, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, spawnedItem), 0, 0x267, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, stagePrize), 0, 0x268, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, objIndex), 0, 0x269, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, mouthPos.x), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, mouthPos.y), 0, 0x270, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, mouthPos.z), 0, 0x274, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetPos.x), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetPos.y), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetPos.z), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.base.actor), 0, 0x284, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, targetQuad.base.at), 0, 0x288, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, targetQuad.base.ac), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, targetQuad.base.oc), 0, 0x290, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, targetQuad.base.atFlags), 0, 0x294, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.base.acFlags), 0, 0x295, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.base.ocFlags1), 0, 0x296, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.base.ocFlags2), 0, 0x297, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.base.colType), 0, 0x298, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.base.shape), 0, 0x299, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.toucher.dmgFlags), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.toucher.effect), 0, 0x2a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.toucher.damage), 0, 0x2a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.bumper.dmgFlags), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.bumper.effect), 0, 0x2a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.bumper.defense), 0, 0x2a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.bumper.hitPos.x), 0, 0x2aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.bumper.hitPos.y), 0, 0x2ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.bumper.hitPos.z), 0, 0x2ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.elemType), 0, 0x2b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.toucherFlags), 0, 0x2b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.bumperFlags), 0, 0x2b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.ocElemFlags), 0, 0x2b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.info.atHit), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, targetQuad.info.acHit), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, targetQuad.info.atHitInfo), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, targetQuad.info.acHitInfo), 0, 0x2c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, targetQuad.dim.quad[0].x), offsetof(EnDntNomal, targetQuad.dim.quad[1].x) - offsetof(EnDntNomal, targetQuad.dim.quad[0].x), 0x2c4, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.dim.quad[0].y), offsetof(EnDntNomal, targetQuad.dim.quad[1].y) - offsetof(EnDntNomal, targetQuad.dim.quad[0].y), 0x2c8, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.dim.quad[0].z), offsetof(EnDntNomal, targetQuad.dim.quad[1].z) - offsetof(EnDntNomal, targetQuad.dim.quad[0].z), 0x2cc, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.dim.dcMid.x), 0, 0x2f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.dim.dcMid.y), 0, 0x2f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.dim.dcMid.z), 0, 0x2f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.dim.baMid.x), 0, 0x2fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.dim.baMid.y), 0, 0x2fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.dim.baMid.z), 0, 0x2fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, targetQuad.dim.acDist), 0, 0x300, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.base.actor), 0, 0x304, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, bodyCyl.base.at), 0, 0x308, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, bodyCyl.base.ac), 0, 0x30c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, bodyCyl.base.oc), 0, 0x310, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, bodyCyl.base.atFlags), 0, 0x314, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.base.acFlags), 0, 0x315, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.base.ocFlags1), 0, 0x316, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.base.ocFlags2), 0, 0x317, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.base.colType), 0, 0x318, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.base.shape), 0, 0x319, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.toucher.dmgFlags), 0, 0x31c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.toucher.effect), 0, 0x320, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.toucher.damage), 0, 0x321, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.bumper.dmgFlags), 0, 0x324, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.bumper.effect), 0, 0x328, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.bumper.defense), 0, 0x329, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.bumper.hitPos.x), 0, 0x32a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.bumper.hitPos.y), 0, 0x32c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.bumper.hitPos.z), 0, 0x32e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.elemType), 0, 0x330, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.toucherFlags), 0, 0x331, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.bumperFlags), 0, 0x332, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.ocElemFlags), 0, 0x333, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.info.atHit), 0, 0x334, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, bodyCyl.info.acHit), 0, 0x338, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, bodyCyl.info.atHitInfo), 0, 0x33c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, bodyCyl.info.acHitInfo), 0, 0x340, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntNomal, bodyCyl.dim.radius), 0, 0x344, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.dim.height), 0, 0x346, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.dim.yShift), 0, 0x348, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.dim.pos.x), 0, 0x34a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.dim.pos.y), 0, 0x34c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntNomal, bodyCyl.dim.pos.z), 0, 0x34e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnDntNomalSpanCount = ARRAY_COUNT(gGzEnDntNomalSpans);

const GzActorFunction gGzEnDntNomalFunctions[] = {
    { 0x0, (void*)EnDntNomal_Init },
    { 0x128, (void*)EnDntNomal_Destroy },
    { 0x174, (void*)EnDntNomal_WaitForObject },
    { 0x2c4, (void*)EnDntNomal_SetFlower },
    { 0x31c, (void*)EnDntNomal_SetupTargetWait },
    { 0x3c4, (void*)EnDntNomal_TargetWait },
    { 0x6a0, (void*)EnDntNomal_SetupTargetUnburrow },
    { 0x7bc, (void*)EnDntNomal_TargetUnburrow },
    { 0x828, (void*)EnDntNomal_SetupTargetWalk },
    { 0x8cc, (void*)EnDntNomal_TargetWalk },
    { 0x9b8, (void*)EnDntNomal_TargetFacePlayer },
    { 0xa6c, (void*)EnDntNomal_SetupTargetTalk },
    { 0xb18, (void*)EnDntNomal_TargetTalk },
    { 0xbc0, (void*)EnDntNomal_SetupTargetGivePrize },
    { 0xc58, (void*)EnDntNomal_TargetGivePrize },
    { 0xdc0, (void*)EnDntNomal_TargetReturn },
    { 0xf90, (void*)EnDntNomal_TargetBurrow },
    { 0xffc, (void*)EnDntNomal_SetupStageWait },
    { 0x10b4, (void*)EnDntNomal_StageWait },
    { 0x10e0, (void*)EnDntNomal_SetupStageUp },
    { 0x11ec, (void*)EnDntNomal_StageUp },
    { 0x1420, (void*)EnDntNomal_SetupStageUnburrow },
    { 0x1514, (void*)EnDntNomal_StageUnburrow },
    { 0x15ec, (void*)EnDntNomal_SetupStageCelebrate },
    { 0x1694, (void*)EnDntNomal_StageCelebrate },
    { 0x189c, (void*)EnDntNomal_SetupStageDance },
    { 0x19ac, (void*)EnDntNomal_StageDance },
    { 0x1b10, (void*)EnDntNomal_SetupStageHide },
    { 0x1bec, (void*)EnDntNomal_StageHide },
    { 0x1db0, (void*)EnDntNomal_StageAttackHide },
    { 0x1de4, (void*)EnDntNomal_SetupStageAttack },
    { 0x1eb0, (void*)EnDntNomal_StageAttack },
    { 0x2174, (void*)EnDntNomal_StageSetupReturn },
    { 0x2218, (void*)EnDntNomal_StageReturn },
    { 0x231c, (void*)EnDntNomal_Update },
    { 0x25e0, NULL },
    { 0x2690, NULL },
    { 0x2718, (void*)EnDntNomal_DrawStageScrub },
    { 0x2908, (void*)EnDntNomal_DrawTargetScrub },
};
const size_t gGzEnDntNomalFunctionCount = ARRAY_COUNT(gGzEnDntNomalFunctions);
