// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ta/z_en_ta.h"

void EnTa_SetTextForTalkInLonLonHouse(void*, void*);
void EnTa_Init(void*, void*);
void EnTa_Destroy(void*, void*);
void EnTa_SleepTalkInKakariko(void*, void*);
void EnTa_SleepTalkInLonLonHouse(void*, void*);
void EnTa_TalkWakingUp2(void*, void*);
void EnTa_TalkWakingUp1(void*, void*);
void EnTa_WakeUp(void*, void*);
void EnTa_SleepTalkInCastle(void*, void*);
void EnTa_IdleAsleepInCastle(void*, void*);
void EnTa_IdleAsleepInLonLonHouse(void*, void*);
void EnTa_IdleAsleepInKakariko(void*, void*);
void EnTa_RunWithAccelerationAndSfx(void*, void*);
void EnTa_RunAwayRunOutOfGate(void*, void*);
void EnTa_RunAwayTurnTowardsGate(void*, void*);
void EnTa_RunAwayRunWest(void*, void*);
void EnTa_RunAwayTurnWest(void*, void*);
void EnTa_RunAwayRunSouth(void*, void*);
void EnTa_RunAwayStart(void*, void*);
void EnTa_TalkAwakeInCastle(void*, void*);
void EnTa_IdleAwakeInCastle(void*, void*);
void EnTa_TalkAwakeInKakariko(void*, void*);
void EnTa_IdleAwakeInKakariko(void*, void*);
void EnTa_TalkAtRanch(void*, void*);
void EnTa_IdleAtRanch(void*, void*);
void EnTa_CreateFloorCamera(void*, void*);
void EnTa_RemoveFloorCamera(void*, void*);
void EnTa_TalkNotEnoughRupees(void*, void*);
void EnTa_TalkFoundSuperCucco(void*, void*);
void EnTa_IdleFoundSuperCucco(void*, void*);
s32 EnTa_GetSuperCuccosCount(void*, void*);
void EnTa_TransitionToPostCuccoGame(void*, void*);
void EnTa_TalkCuccoGameEnd(void*, void*);
void EnTa_RunCuccoGame(void*, void*);
void EnTa_ThrowSuperCuccos(void*, void*);
void EnTa_StartingCuccoGame3(void*, void*);
void EnTa_StartingCuccoGame2(void*, void*);
void EnTa_StartingCuccoGame1(void*, void*);
void EnTa_StartCuccoGame(void*, void*);
void EnTa_TalkGeneralInLonLonHouse(void*, void*);
void EnTa_GiveItemInLonLonHouse(void*, void*);
void EnTa_TalkAfterCuccoGameFirstWon(void*, void*);
void EnTa_WaitBuyMilkOrPlayCuccoGameResponse(void*, void*);
void EnTa_WaitForPlayCuccoGameResponse(void*, void*);
void EnTa_WaitForMarryMalonResponse(void*, void*);
void EnTa_ContinueTalkInLonLonHouse(void*, void*);
void EnTa_TalkAfterCuccoGameWon(void*, void*);
void EnTa_IdleSittingInLonLonHouse(void*, void*);
void EnTa_IdleAfterCuccoGameFinished(void*, void*);
void EnTa_Update(void*, void*);
void EnTa_Draw(void*, void*);

const GzActorSpan gGzEnTaSpans[] = {
    { offsetof(EnTa, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnTa, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnTa, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, jointTable[0].x), offsetof(EnTa, jointTable[1].x) - offsetof(EnTa, jointTable[0].x), 0x180, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, jointTable[0].y), offsetof(EnTa, jointTable[1].y) - offsetof(EnTa, jointTable[0].y), 0x182, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, jointTable[0].z), offsetof(EnTa, jointTable[1].z) - offsetof(EnTa, jointTable[0].z), 0x184, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, morphTable[0].x), offsetof(EnTa, morphTable[1].x) - offsetof(EnTa, morphTable[0].x), 0x1e6, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, morphTable[0].y), offsetof(EnTa, morphTable[1].y) - offsetof(EnTa, morphTable[0].y), 0x1e8, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, morphTable[0].z), offsetof(EnTa, morphTable[1].z) - offsetof(EnTa, morphTable[0].z), 0x1ea, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, actionFunc), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnTa, animFunc), 0, 0x250, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnTa, collider.base.actor), 0, 0x254, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, collider.base.at), 0, 0x258, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, collider.base.ac), 0, 0x25c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, collider.base.oc), 0, 0x260, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, collider.base.atFlags), 0, 0x264, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.base.acFlags), 0, 0x265, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.base.ocFlags1), 0, 0x266, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.base.ocFlags2), 0, 0x267, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.base.colType), 0, 0x268, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.base.shape), 0, 0x269, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.toucher.dmgFlags), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.toucher.effect), 0, 0x270, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.toucher.damage), 0, 0x271, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.bumper.dmgFlags), 0, 0x274, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.bumper.effect), 0, 0x278, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.bumper.defense), 0, 0x279, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.bumper.hitPos.x), 0, 0x27a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.bumper.hitPos.y), 0, 0x27c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.bumper.hitPos.z), 0, 0x27e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.elemType), 0, 0x280, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.toucherFlags), 0, 0x281, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.bumperFlags), 0, 0x282, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.ocElemFlags), 0, 0x283, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.info.atHit), 0, 0x284, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, collider.info.acHit), 0, 0x288, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, collider.info.atHitInfo), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, collider.info.acHitInfo), 0, 0x290, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, collider.dim.radius), 0, 0x294, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.dim.height), 0, 0x296, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.dim.yShift), 0, 0x298, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.dim.pos.x), 0, 0x29a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.dim.pos.y), 0, 0x29c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, collider.dim.pos.z), 0, 0x29e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, blinkFunc), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnTa, eyeIndex), 0, 0x2a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, blinkTimer), 0, 0x2a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, superCuccos[0]), offsetof(EnTa, superCuccos[1]) - offsetof(EnTa, superCuccos[0]), 0x2a8, 0x4, 3, 4, GZ_SPAN_POINTER },
    { offsetof(EnTa, superCuccoTimers[0]), offsetof(EnTa, superCuccoTimers[1]) - offsetof(EnTa, superCuccoTimers[0]), 0x2b4, 0x2, 3, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, lastFoundSuperCuccoIdx), 0, 0x2ba, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTa, timer), 0, 0x2bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, rapidBlinks), 0, 0x2be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, subCamId), 0, 0x2c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, returnToCamId), 0, 0x2c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, headRot.x), 0, 0x2c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, headRot.y), 0, 0x2c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, headRot.z), 0, 0x2c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, torsoRot.x), 0, 0x2ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, torsoRot.y), 0, 0x2cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, torsoRot.z), 0, 0x2ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, stateFlags), 0, 0x2d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, nodOffTimer), 0, 0x2d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTa, currentAnimation), 0, 0x2d4, 0x0, 1, 4, GZ_SPAN_POINTER },
};
const size_t gGzEnTaSpanCount = ARRAY_COUNT(gGzEnTaSpans);

const GzActorFunction gGzEnTaFunctions[] = {
    { 0x0, NULL },
    { 0x10, (void*)EnTa_SetTextForTalkInLonLonHouse },
    { 0xf0, (void*)EnTa_Init },
    { 0x774, NULL },
    { 0x7a8, (void*)EnTa_Destroy },
    { 0x820, NULL },
    { 0x8c8, (void*)EnTa_SleepTalkInKakariko },
    { 0x908, (void*)EnTa_SleepTalkInLonLonHouse },
    { 0x948, NULL },
    { 0x9c4, (void*)EnTa_TalkWakingUp2 },
    { 0xa10, (void*)EnTa_TalkWakingUp1 },
    { 0xaac, (void*)EnTa_WakeUp },
    { 0xb38, (void*)EnTa_SleepTalkInCastle },
    { 0xb78, (void*)EnTa_IdleAsleepInCastle },
    { 0xc40, (void*)EnTa_IdleAsleepInLonLonHouse },
    { 0xca4, (void*)EnTa_IdleAsleepInKakariko },
    { 0xd6c, (void*)EnTa_RunWithAccelerationAndSfx },
    { 0xdec, (void*)EnTa_RunAwayRunOutOfGate },
    { 0xe60, (void*)EnTa_RunAwayTurnTowardsGate },
    { 0xec0, (void*)EnTa_RunAwayRunWest },
    { 0xf48, (void*)EnTa_RunAwayTurnWest },
    { 0xfa8, (void*)EnTa_RunAwayRunSouth },
    { 0x1048, (void*)EnTa_RunAwayStart },
    { 0x10c0, (void*)EnTa_TalkAwakeInCastle },
    { 0x116c, (void*)EnTa_IdleAwakeInCastle },
    { 0x11b8, (void*)EnTa_TalkAwakeInKakariko },
    { 0x1204, (void*)EnTa_IdleAwakeInKakariko },
    { 0x12ac, (void*)EnTa_TalkAtRanch },
    { 0x12f8, (void*)EnTa_IdleAtRanch },
    { 0x133c, NULL },
    { 0x138c, (void*)EnTa_CreateFloorCamera },
    { 0x1440, (void*)EnTa_RemoveFloorCamera },
    { 0x1484, NULL },
    { 0x1514, NULL },
    { 0x15a0, (void*)EnTa_TalkNotEnoughRupees },
    { 0x1618, NULL },
    { 0x166c, (void*)EnTa_TalkFoundSuperCucco },
    { 0x17cc, (void*)EnTa_IdleFoundSuperCucco },
    { 0x183c, (void*)EnTa_GetSuperCuccosCount },
    { 0x1878, NULL },
    { 0x1944, (void*)EnTa_TransitionToPostCuccoGame },
    { 0x1994, (void*)EnTa_TalkCuccoGameEnd },
    { 0x1a70, (void*)EnTa_RunCuccoGame },
    { 0x1dd0, (void*)EnTa_ThrowSuperCuccos },
    { 0x2048, (void*)EnTa_StartingCuccoGame3 },
    { 0x216c, (void*)EnTa_StartingCuccoGame2 },
    { 0x223c, (void*)EnTa_StartingCuccoGame1 },
    { 0x2304, (void*)EnTa_StartCuccoGame },
    { 0x239c, (void*)EnTa_TalkGeneralInLonLonHouse },
    { 0x23f8, (void*)EnTa_GiveItemInLonLonHouse },
    { 0x24cc, (void*)EnTa_TalkAfterCuccoGameFirstWon },
    { 0x2564, (void*)EnTa_WaitBuyMilkOrPlayCuccoGameResponse },
    { 0x2740, (void*)EnTa_WaitForPlayCuccoGameResponse },
    { 0x2868, (void*)EnTa_WaitForMarryMalonResponse },
    { 0x28e8, (void*)EnTa_ContinueTalkInLonLonHouse },
    { 0x29b4, (void*)EnTa_TalkAfterCuccoGameWon },
    { 0x2a8c, (void*)EnTa_IdleSittingInLonLonHouse },
    { 0x2b8c, (void*)EnTa_IdleAfterCuccoGameFinished },
    { 0x2c50, NULL },
    { 0x2c84, NULL },
    { 0x2d44, NULL },
    { 0x2d84, NULL },
    { 0x2dd8, NULL },
    { 0x2eb8, NULL },
    { 0x2f10, (void*)EnTa_Update },
    { 0x30a0, NULL },
    { 0x3224, NULL },
    { 0x3264, (void*)EnTa_Draw },
};
const size_t gGzEnTaFunctionCount = ARRAY_COUNT(gGzEnTaFunctions);
