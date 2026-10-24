// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bom_Bowl_Man/z_en_bom_bowl_man.h"

void EnBomBowlMan_Init(void*, void*);
void EnBomBowlMan_Destroy(void*, void*);
void EnBomBowMan_SetupWaitAsleep(void*, void*);
void EnBomBowMan_WaitAsleep(void*, void*);
void EnBomBowMan_TalkAsleep(void*, void*);
void EnBomBowMan_WakeUp(void*, void*);
void EnBomBowMan_BlinkAwake(void*, void*);
void EnBomBowMan_CheckBeatenDC(void*, void*);
void EnBomBowMan_WaitNotBeatenDC(void*, void*);
void EnBomBowMan_TalkNotBeatenDC(void*, void*);
void EnBomBowMan_SetupRunGame(void*, void*);
void EnBomBowMan_RunGame(void*, void*);
void EnBomBowlMan_HandlePlayChoice(void*, void*);
void func_809C41FC(void*, void*);
void EnBomBowMan_SetupChooseShowPrize(void*, void*);
void EnBomBowMan_ChooseShowPrize(void*, void*);
void EnBomBowlMan_BeginPlayGame(void*, void*);
void EnBomBowlMan_Update(void*, void*);
void EnBomBowlMan_Draw(void*, void*);

const GzActorSpan gGzEnBomBowlManSpans[] = {
    { offsetof(EnBomBowlMan, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomBowlMan, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnBomBowlMan, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomBowlMan, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomBowlMan, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBomBowlMan, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, jointTable[0].x), offsetof(EnBomBowlMan, jointTable[1].x) - offsetof(EnBomBowlMan, jointTable[0].x), 0x180, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, jointTable[0].y), offsetof(EnBomBowlMan, jointTable[1].y) - offsetof(EnBomBowlMan, jointTable[0].y), 0x182, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, jointTable[0].z), offsetof(EnBomBowlMan, jointTable[1].z) - offsetof(EnBomBowlMan, jointTable[0].z), 0x184, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, morphTable[0].x), offsetof(EnBomBowlMan, morphTable[1].x) - offsetof(EnBomBowlMan, morphTable[0].x), 0x1c2, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, morphTable[0].y), offsetof(EnBomBowlMan, morphTable[1].y) - offsetof(EnBomBowlMan, morphTable[0].y), 0x1c4, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, morphTable[0].z), offsetof(EnBomBowlMan, morphTable[1].z) - offsetof(EnBomBowlMan, morphTable[0].z), 0x1c6, 0x6, 11, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, actionFunc), 0, 0x204, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBomBowlMan, unk_218.x), 0, 0x208, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, unk_218.y), 0, 0x20a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, unk_218.z), 0, 0x20c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, unk_21E[0]), offsetof(EnBomBowlMan, unk_21E[1]) - offsetof(EnBomBowlMan, unk_21E[0]), 0x20e, 0x1, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, unk_224.x), 0, 0x214, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, unk_224.y), 0, 0x216, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, unk_224.z), 0, 0x218, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, prizeRevealTimer), 0, 0x21a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, timer), 0, 0x21c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, dialogState), 0, 0x21e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, prizeIndex), 0, 0x220, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, startedPlaying), 0, 0x222, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, eyeTextureIndex), 0, 0x224, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, blinkTimer), 0, 0x226, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, eyeMode), 0, 0x228, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, blinkCount), 0, 0x22a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, playingAgain), 0, 0x22c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, wallStatus[0]), offsetof(EnBomBowlMan, wallStatus[1]) - offsetof(EnBomBowlMan, wallStatus[0]), 0x22e, 0x2, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, prizeSelect), 0, 0x232, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, gameResult), 0, 0x234, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, posCopy.x), 0, 0x238, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, posCopy.y), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, posCopy.z), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, frameCount), 0, 0x244, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, minigamePlayStatus), 0, 0x248, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBomBowlMan, bowlPit), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBomBowlMan, exItem), 0, 0x250, 0x0, 1, 4, GZ_SPAN_POINTER },
};
const size_t gGzEnBomBowlManSpanCount = ARRAY_COUNT(gGzEnBomBowlManSpans);

const GzActorFunction gGzEnBomBowlManFunctions[] = {
    { 0x0, (void*)EnBomBowlMan_Init },
    { 0x1c0, (void*)EnBomBowlMan_Destroy },
    { 0x1d0, (void*)EnBomBowMan_SetupWaitAsleep },
    { 0x258, (void*)EnBomBowMan_WaitAsleep },
    { 0x30c, (void*)EnBomBowMan_TalkAsleep },
    { 0x384, (void*)EnBomBowMan_WakeUp },
    { 0x408, (void*)EnBomBowMan_BlinkAwake },
    { 0x504, (void*)EnBomBowMan_CheckBeatenDC },
    { 0x630, (void*)EnBomBowMan_WaitNotBeatenDC },
    { 0x68c, (void*)EnBomBowMan_TalkNotBeatenDC },
    { 0x6fc, (void*)EnBomBowMan_SetupRunGame },
    { 0x780, (void*)EnBomBowMan_RunGame },
    { 0x990, (void*)EnBomBowlMan_HandlePlayChoice },
    { 0xb4c, (void*)func_809C41FC },
    { 0xc68, (void*)EnBomBowMan_SetupChooseShowPrize },
    { 0xd6c, (void*)EnBomBowMan_ChooseShowPrize },
    { 0xfb4, (void*)EnBomBowlMan_BeginPlayGame },
    { 0x1070, (void*)EnBomBowlMan_Update },
    { 0x11e8, NULL },
    { 0x1230, (void*)EnBomBowlMan_Draw },
};
const size_t gGzEnBomBowlManFunctionCount = ARRAY_COUNT(gGzEnBomBowlManFunctions);
