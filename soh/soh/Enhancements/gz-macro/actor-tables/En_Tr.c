// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Tr/z_en_tr.h"

void EnTr_Init(void*, void*);
void EnTr_Destroy(void*, void*);
void EnTr_CrySpellcast(void*, void*);
void EnTr_DoNothing(void*, void*);
void EnTr_ChooseAction2(void*, void*);
void EnTr_FlyKidnapCutscene(void*, void*);
void EnTr_ShrinkVanish(void*, void*);
void EnTr_Reappear(void*, void*);
void EnTr_WaitToReappear(void*, void*);
void EnTr_TakeOff(void*, void*);
void EnTr_TurnLookOverShoulder(void*, void*);
void EnTr_ChooseAction1(void*, void*);
void EnTr_Update(void*, void*);
void EnTr_Draw(void*, void*);

const GzActorSpan gGzEnTrSpans[] = {
    { offsetof(EnTr, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTr, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnTr, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTr, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTr, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnTr, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, jointTable[0].x), offsetof(EnTr, jointTable[1].x) - offsetof(EnTr, jointTable[0].x), 0x180, 0x6, 27, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, jointTable[0].y), offsetof(EnTr, jointTable[1].y) - offsetof(EnTr, jointTable[0].y), 0x182, 0x6, 27, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, jointTable[0].z), offsetof(EnTr, jointTable[1].z) - offsetof(EnTr, jointTable[0].z), 0x184, 0x6, 27, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, morphTable[0].x), offsetof(EnTr, morphTable[1].x) - offsetof(EnTr, morphTable[0].x), 0x222, 0x6, 27, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, morphTable[0].y), offsetof(EnTr, morphTable[1].y) - offsetof(EnTr, morphTable[0].y), 0x224, 0x6, 27, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, morphTable[0].z), offsetof(EnTr, morphTable[1].z) - offsetof(EnTr, morphTable[0].z), 0x226, 0x6, 27, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, unk_2D4), 0, 0x2c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, timer), 0, 0x2c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, actionIndex), 0, 0x2c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, actionFunc), 0, 0x2cc, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnTr, eyeIndex), 0, 0x2d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, blinkTimer), 0, 0x2d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTr, animation), 0, 0x2d4, 0x0, 1, 4, GZ_SPAN_POINTER },
};
const size_t gGzEnTrSpanCount = ARRAY_COUNT(gGzEnTrSpans);

const GzActorFunction gGzEnTrFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnTr_Init },
    { 0x15c, (void*)EnTr_Destroy },
    { 0x16c, (void*)EnTr_CrySpellcast },
    { 0x21c, (void*)EnTr_DoNothing },
    { 0x22c, (void*)EnTr_ChooseAction2 },
    { 0x3dc, (void*)EnTr_FlyKidnapCutscene },
    { 0x558, NULL },
    { 0x7d8, (void*)EnTr_ShrinkVanish },
    { 0x994, (void*)EnTr_Reappear },
    { 0xb2c, (void*)EnTr_WaitToReappear },
    { 0xbec, (void*)EnTr_TakeOff },
    { 0xcb4, (void*)EnTr_TurnLookOverShoulder },
    { 0xd94, (void*)EnTr_ChooseAction1 },
    { 0xec8, (void*)EnTr_Update },
    { 0x1080, NULL },
    { 0x11b0, (void*)EnTr_Draw },
    { 0x12bc, NULL },
    { 0x131c, NULL },
    { 0x1518, NULL },
    { 0x15a0, NULL },
};
const size_t gGzEnTrFunctionCount = ARRAY_COUNT(gGzEnTrFunctions);
