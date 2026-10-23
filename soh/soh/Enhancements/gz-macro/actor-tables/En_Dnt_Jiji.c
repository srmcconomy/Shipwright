// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Dnt_Jiji/z_en_dnt_jiji.h"

void EnDntJiji_Init(void*, void*);
void EnDntJiji_Destroy(void*, void*);
void EnDntJiji_SetFlower(void*, void*);
void EnDntJiji_SetupWait(void*, void*);
void EnDntJiji_Wait(void*, void*);
void EnDntJiji_SetupUp(void*, void*);
void EnDntJiji_Up(void*, void*);
void EnDntJiji_SetupUnburrow(void*, void*);
void EnDntJiji_Unburrow(void*, void*);
void EnDntJiji_SetupWalk(void*, void*);
void EnDntJiji_Walk(void*, void*);
void EnDntJiji_SetupBurrow(void*, void*);
void EnDntJiji_Burrow(void*, void*);
void EnDntJiji_SetupCower(void*, void*);
void EnDntJiji_Cower(void*, void*);
void EnDntJiji_SetupTalk(void*, void*);
void EnDntJiji_Talk(void*, void*);
void EnDntJiji_SetupGivePrize(void*, void*);
void EnDntJiji_GivePrize(void*, void*);
void EnDntJiji_SetupHide(void*, void*);
void EnDntJiji_Hide(void*, void*);
void EnDntJiji_SetupReturn(void*, void*);
void EnDntJiji_Return(void*, void*);
void EnDntJiji_Update(void*, void*);
void EnDntJiji_Draw(void*, void*);

const GzActorSpan gGzEnDntJijiSpans[] = {
    { offsetof(EnDntJiji, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDntJiji, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, jointTable[0].x), offsetof(EnDntJiji, jointTable[1].x) - offsetof(EnDntJiji, jointTable[0].x), 0x180, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, jointTable[0].y), offsetof(EnDntJiji, jointTable[1].y) - offsetof(EnDntJiji, jointTable[0].y), 0x182, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, jointTable[0].z), offsetof(EnDntJiji, jointTable[1].z) - offsetof(EnDntJiji, jointTable[0].z), 0x184, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, morphTable[0].x), offsetof(EnDntJiji, morphTable[1].x) - offsetof(EnDntJiji, morphTable[0].x), 0x1ce, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, morphTable[0].y), offsetof(EnDntJiji, morphTable[1].y) - offsetof(EnDntJiji, morphTable[0].y), 0x1d0, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, morphTable[0].z), offsetof(EnDntJiji, morphTable[1].z) - offsetof(EnDntJiji, morphTable[0].z), 0x1d2, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, actionFunc), 0, 0x21c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDntJiji, flowerPos.x), 0, 0x220, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, flowerPos.y), 0, 0x224, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, flowerPos.z), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, isSolid), 0, 0x22c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, action), 0, 0x22e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, timer), 0, 0x230, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, sfxTimer), 0, 0x232, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, blinkTimer), 0, 0x234, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, unkTimer), 0, 0x236, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, endFrame), 0, 0x238, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, unburrow), 0, 0x23a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, eyeState), 0, 0x23c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, stageSignal), 0, 0x23e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, unused), 0, 0x240, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, attackFlag), 0, 0x242, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, getItemId), 0, 0x244, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, stage), 0, 0x248, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, collider.base.actor), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, collider.base.at), 0, 0x250, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, collider.base.ac), 0, 0x254, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, collider.base.oc), 0, 0x258, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, collider.base.atFlags), 0, 0x25c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.base.acFlags), 0, 0x25d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.base.ocFlags1), 0, 0x25e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.base.ocFlags2), 0, 0x25f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.base.colType), 0, 0x260, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.base.shape), 0, 0x261, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.toucher.dmgFlags), 0, 0x264, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.toucher.effect), 0, 0x268, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.toucher.damage), 0, 0x269, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.bumper.dmgFlags), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.bumper.effect), 0, 0x270, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.bumper.defense), 0, 0x271, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.bumper.hitPos.x), 0, 0x272, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.bumper.hitPos.y), 0, 0x274, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.bumper.hitPos.z), 0, 0x276, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.elemType), 0, 0x278, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.toucherFlags), 0, 0x279, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.bumperFlags), 0, 0x27a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.ocElemFlags), 0, 0x27b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.info.atHit), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, collider.info.acHit), 0, 0x280, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, collider.info.atHitInfo), 0, 0x284, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, collider.info.acHitInfo), 0, 0x288, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntJiji, collider.dim.radius), 0, 0x28c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.dim.height), 0, 0x28e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.dim.yShift), 0, 0x290, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.dim.pos.x), 0, 0x292, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.dim.pos.y), 0, 0x294, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntJiji, collider.dim.pos.z), 0, 0x296, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnDntJijiSpanCount = ARRAY_COUNT(gGzEnDntJijiSpans);

const GzActorFunction gGzEnDntJijiFunctions[] = {
    { 0x0, (void*)EnDntJiji_Init },
    { 0xe0, (void*)EnDntJiji_Destroy },
    { 0x10c, (void*)EnDntJiji_SetFlower },
    { 0x14c, (void*)EnDntJiji_SetupWait },
    { 0x1fc, (void*)EnDntJiji_Wait },
    { 0x2b4, (void*)EnDntJiji_SetupUp },
    { 0x398, (void*)EnDntJiji_Up },
    { 0x408, (void*)EnDntJiji_SetupUnburrow },
    { 0x4ec, (void*)EnDntJiji_Unburrow },
    { 0x574, (void*)EnDntJiji_SetupWalk },
    { 0x624, (void*)EnDntJiji_Walk },
    { 0x760, (void*)EnDntJiji_SetupBurrow },
    { 0x850, (void*)EnDntJiji_Burrow },
    { 0x87c, (void*)EnDntJiji_SetupCower },
    { 0x9bc, (void*)EnDntJiji_Cower },
    { 0xa60, (void*)EnDntJiji_SetupTalk },
    { 0xaf4, (void*)EnDntJiji_Talk },
    { 0xbc0, (void*)EnDntJiji_SetupGivePrize },
    { 0xc30, (void*)EnDntJiji_GivePrize },
    { 0xd40, (void*)EnDntJiji_SetupHide },
    { 0xdd8, (void*)EnDntJiji_Hide },
    { 0xe44, (void*)EnDntJiji_SetupReturn },
    { 0xef4, (void*)EnDntJiji_Return },
    { 0x106c, (void*)EnDntJiji_Update },
    { 0x1244, (void*)EnDntJiji_Draw },
};
const size_t gGzEnDntJijiFunctionCount = ARRAY_COUNT(gGzEnDntJijiFunctions);
