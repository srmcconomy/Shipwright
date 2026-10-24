// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Skj/z_en_skj.h"

void EnSkj_Init(void*, void*);
void EnSkj_Destroy(void*, void*);
s32 EnSkj_RangeCheck(void*, void*);
s32 EnSkj_ShootNeedle(void*, void*);
void EnSkj_SpawnBlood(void*, void*);
s32 EnSkj_CollisionCheck(void*, void*);
s32 func_80AFEDF8(void*, void*);
void EnSkj_Fade(void*, void*);
void EnSkj_WaitToShootNeedle(void*, void*);
void EnSkj_SariasSongKidIdle(void*, void*);
void EnSkj_WaitForDeathAnim(void*, void*);
void EnSkj_PickNextFightAction(void*, void*);
void EnSkj_WaitForLandAnim(void*, void*);
void EnSkj_ResetFight(void*, void*);
void EnSkj_Fight(void*, void*);
void EnSkj_NeedleRecover(void*, void*);
void EnSkj_SpawnDeathEffect(void*, void*);
void EnSkj_WaitInRange(void*, void*);
void EnSkj_WaitForSong(void*, void*);
void EnSkj_AfterSong(void*, void*);
void EnSkj_SariaSongTalk(void*, void*);
void func_80AFFE44(void*, void*);
void EnSkj_ChangeModeAfterSong(void*, void*);
void EnSkj_StartMaskTrade(void*, void*);
void EnSkj_WaitForLanding(void*, void*);
void EnSkj_WaitForLandAnimFinish(void*, void*);
void EnSkj_WalkToPlayer(void*, void*);
void EnSkj_SetupAskForMask(void*, void*);
void EnSkj_AskForMask(void*, void*);
void EnSkj_SetupTakeMask(void*, void*);
void EnSkj_TakeMask(void*, void*);
void EnSkj_WaitForMaskTextClear(void*, void*);
void EnSkj_WrongSong(void*, void*);
void EnSkj_SariasSongWaitForTextClear(void*, void*);
void EnSkj_OcarinaGameWaitForPlayer(void*, void*);
void EnSkj_OcarinaGameIdle(void*, void*);
void EnSkj_PlayOcarinaGame(void*, void*);
void EnSkj_LeaveOcarinaGame(void*, void*);
void EnSkj_Update(void*, void*);
void EnSkj_SariasSongShortStumpUpdate(void*, void*);
void EnSkj_TurnPlayer(void*, void*);
void EnSkj_SetupWaitForOcarina(void*, void*);
void EnSkj_WaitForOcarina(void*, void*);
void EnSkj_StartOcarinaMinigame(void*, void*);
void EnSkj_WaitForPlayback(void*, void*);
void EnSkj_FailedMiniGame(void*, void*);
void EnSkj_WaitForNextRound(void*, void*);
void EnSkj_OfferNextRound(void*, void*);
void EnSkj_WaitForOfferResponse(void*, void*);
void EnSkj_WonOcarinaMiniGame(void*, void*);
void EnSkj_WaitToGiveReward(void*, void*);
void EnSkj_GiveOcarinaGameReward(void*, void*);
void EnSkj_FinishOcarinaGameRound(void*, void*);
void EnSkj_OcarinaMinigameShortStumpUpdate(void*, void*);
void EnSkj_Draw(void*, void*);

const GzActorSpan gGzEnSkjSpans[] = {
    { offsetof(EnSkj, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnSkj, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnSkj, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, jointTable[0].x), offsetof(EnSkj, jointTable[1].x) - offsetof(EnSkj, jointTable[0].x), 0x180, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, jointTable[0].y), offsetof(EnSkj, jointTable[1].y) - offsetof(EnSkj, jointTable[0].y), 0x182, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, jointTable[0].z), offsetof(EnSkj, jointTable[1].z) - offsetof(EnSkj, jointTable[0].z), 0x184, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, morphTable[0].x), offsetof(EnSkj, morphTable[1].x) - offsetof(EnSkj, morphTable[0].x), 0x1f2, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, morphTable[0].y), offsetof(EnSkj, morphTable[1].y) - offsetof(EnSkj, morphTable[0].y), 0x1f4, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, morphTable[0].z), offsetof(EnSkj, morphTable[1].z) - offsetof(EnSkj, morphTable[0].z), 0x1f6, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, actionFunc), 0, 0x264, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnSkj, collider.base.actor), 0, 0x268, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, collider.base.at), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, collider.base.ac), 0, 0x270, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, collider.base.oc), 0, 0x274, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, collider.base.atFlags), 0, 0x278, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.base.acFlags), 0, 0x279, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.base.ocFlags1), 0, 0x27a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.base.ocFlags2), 0, 0x27b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.base.colType), 0, 0x27c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.base.shape), 0, 0x27d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.toucher.dmgFlags), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.toucher.effect), 0, 0x284, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.toucher.damage), 0, 0x285, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.bumper.dmgFlags), 0, 0x288, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.bumper.effect), 0, 0x28c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.bumper.defense), 0, 0x28d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.bumper.hitPos.x), 0, 0x28e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.bumper.hitPos.y), 0, 0x290, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.bumper.hitPos.z), 0, 0x292, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.elemType), 0, 0x294, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.toucherFlags), 0, 0x295, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.bumperFlags), 0, 0x296, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.ocElemFlags), 0, 0x297, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.info.atHit), 0, 0x298, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, collider.info.acHit), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, collider.info.atHitInfo), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, collider.info.acHitInfo), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSkj, collider.dim.radius), 0, 0x2a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.dim.height), 0, 0x2aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.dim.yShift), 0, 0x2ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.dim.pos.x), 0, 0x2ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.dim.pos.y), 0, 0x2b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, collider.dim.pos.z), 0, 0x2b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, textId), 0, 0x2b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, timer), 0, 0x2b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, unk_2C8), 0, 0x2b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, multiuseTimer), 0, 0x2ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, needleShootTimer), 0, 0x2bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, dodgeResetTimer), 0, 0x2be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSkj, animIndex), 0, 0x2c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, action), 0, 0x2c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, backflipFlag), 0, 0x2c2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, unk_2D3), 0, 0x2c3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, needlesToShoot), 0, 0x2c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, hitsUntilDodge), 0, 0x2c5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, unk_2D6), 0, 0x2c6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, playerInRange), 0, 0x2c7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, minigameState), 0, 0x2c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSkj, alpha), 0, 0x2cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, center.x), 0, 0x2d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, center.y), 0, 0x2d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, center.z), 0, 0x2d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, unk_2EC), 0, 0x2dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, unk_2F0), 0, 0x2e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, posCopy.x), 0, 0x2e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, posCopy.y), 0, 0x2e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSkj, posCopy.z), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnSkjSpanCount = ARRAY_COUNT(gGzEnSkjSpans);

const GzActorFunction gGzEnSkjFunctions[] = {
    { 0x0, NULL },
    { 0x88, NULL },
    { 0xe0, NULL },
    { 0x178, NULL },
    { 0x1fc, (void*)EnSkj_Init },
    { 0x548, (void*)EnSkj_Destroy },
    { 0x574, (void*)EnSkj_RangeCheck },
    { 0x5f0, NULL },
    { 0x638, NULL },
    { 0x664, (void*)EnSkj_ShootNeedle },
    { 0x77c, (void*)EnSkj_SpawnBlood },
    { 0x8d4, (void*)EnSkj_CollisionCheck },
    { 0xa90, (void*)func_80AFEDF8 },
    { 0xb1c, NULL },
    { 0xb64, (void*)EnSkj_Fade },
    { 0xbf4, NULL },
    { 0xc30, (void*)EnSkj_WaitToShootNeedle },
    { 0xcd0, NULL },
    { 0xd14, (void*)EnSkj_SariasSongKidIdle },
    { 0xe0c, NULL },
    { 0xe40, (void*)EnSkj_WaitForDeathAnim },
    { 0xe94, NULL },
    { 0xec8, (void*)EnSkj_PickNextFightAction },
    { 0xf48, NULL },
    { 0xf8c, (void*)EnSkj_WaitForLandAnim },
    { 0xfe0, NULL },
    { 0x102c, (void*)EnSkj_ResetFight },
    { 0x107c, NULL },
    { 0x10d0, (void*)EnSkj_Fight },
    { 0x129c, NULL },
    { 0x12d0, (void*)EnSkj_NeedleRecover },
    { 0x130c, NULL },
    { 0x1334, (void*)EnSkj_SpawnDeathEffect },
    { 0x144c, NULL },
    { 0x1484, (void*)EnSkj_WaitInRange },
    { 0x1698, NULL },
    { 0x16bc, (void*)EnSkj_WaitForSong },
    { 0x1990, NULL },
    { 0x19c4, (void*)EnSkj_AfterSong },
    { 0x1a18, NULL },
    { 0x1a38, (void*)EnSkj_SariaSongTalk },
    { 0x1adc, NULL },
    { 0x1afc, (void*)func_80AFFE44 },
    { 0x1b74, NULL },
    { 0x1b94, (void*)EnSkj_ChangeModeAfterSong },
    { 0x1bfc, NULL },
    { 0x1c1c, (void*)EnSkj_StartMaskTrade },
    { 0x1c84, NULL },
    { 0x1ce8, (void*)EnSkj_WaitForLanding },
    { 0x1d38, NULL },
    { 0x1d6c, (void*)EnSkj_WaitForLandAnimFinish },
    { 0x1dc0, NULL },
    { 0x1e04, (void*)EnSkj_WalkToPlayer },
    { 0x1ea0, (void*)EnSkj_SetupAskForMask },
    { 0x1ee8, (void*)EnSkj_AskForMask },
    { 0x1f80, (void*)EnSkj_SetupTakeMask },
    { 0x1fb8, (void*)EnSkj_TakeMask },
    { 0x2050, NULL },
    { 0x2070, (void*)EnSkj_WaitForMaskTextClear },
    { 0x20d8, NULL },
    { 0x2110, (void*)EnSkj_WrongSong },
    { 0x2164, NULL },
    { 0x2184, (void*)EnSkj_SariasSongWaitForTextClear },
    { 0x21fc, NULL },
    { 0x223c, (void*)EnSkj_OcarinaGameWaitForPlayer },
    { 0x2278, NULL },
    { 0x22c8, NULL },
    { 0x22fc, NULL },
    { 0x2324, (void*)EnSkj_OcarinaGameIdle },
    { 0x2370, NULL },
    { 0x23a4, (void*)EnSkj_PlayOcarinaGame },
    { 0x23f0, NULL },
    { 0x2438, (void*)EnSkj_LeaveOcarinaGame },
    { 0x2480, (void*)EnSkj_Update },
    { 0x2664, (void*)EnSkj_SariasSongShortStumpUpdate },
    { 0x268c, (void*)EnSkj_TurnPlayer },
    { 0x26d8, (void*)EnSkj_SetupWaitForOcarina },
    { 0x2794, (void*)EnSkj_WaitForOcarina },
    { 0x283c, (void*)EnSkj_StartOcarinaMinigame },
    { 0x28c8, (void*)EnSkj_WaitForPlayback },
    { 0x2b38, (void*)EnSkj_FailedMiniGame },
    { 0x2b78, (void*)EnSkj_WaitForNextRound },
    { 0x2bc8, (void*)EnSkj_OfferNextRound },
    { 0x2c04, (void*)EnSkj_WaitForOfferResponse },
    { 0x2cac, (void*)EnSkj_WonOcarinaMiniGame },
    { 0x2cec, (void*)EnSkj_WaitToGiveReward },
    { 0x2d74, (void*)EnSkj_GiveOcarinaGameReward },
    { 0x2de8, (void*)EnSkj_FinishOcarinaGameRound },
    { 0x2e84, (void*)EnSkj_CleanupOcarinaGame },
    { 0x2f00, (void*)EnSkj_OcarinaMinigameShortStumpUpdate },
    { 0x2f84, NULL },
    { 0x2fa0, NULL },
    { 0x3070, NULL },
    { 0x30bc, NULL },
    { 0x30f0, (void*)EnSkj_Draw },
};
const size_t gGzEnSkjFunctionCount = ARRAY_COUNT(gGzEnSkjFunctions);
