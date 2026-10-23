// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ds/z_en_ds.h"

void EnDs_Init(void*, void*);
void EnDs_Destroy(void*, void*);
void EnDs_TalkNoEmptyBottle(void*, void*);
void EnDs_DisplayOddPotionText(void*, void*);
void EnDs_GiveOddPotion(void*, void*);
void EnDs_TalkAfterBrewOddPotion(void*, void*);
void EnDs_BrewOddPotion3(void*, void*);
void EnDs_BrewOddPotion2(void*, void*);
void EnDs_BrewOddPotion1(void*, void*);
void EnDs_OfferOddPotion(void*, void*);
void EnDs_GiveBluePotion(void*, void*);
void EnDs_OfferBluePotion(void*, void*);
void EnDs_Wait(void*, void*);
void EnDs_Update(void*, void*);
void EnDs_Draw(void*, void*);

const GzActorSpan gGzEnDsSpans[] = {
    { offsetof(EnDs, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDs, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDs, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDs, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDs, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDs, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, jointTable[0].x), offsetof(EnDs, jointTable[1].x) - offsetof(EnDs, jointTable[0].x), 0x180, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, jointTable[0].y), offsetof(EnDs, jointTable[1].y) - offsetof(EnDs, jointTable[0].y), 0x182, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, jointTable[0].z), offsetof(EnDs, jointTable[1].z) - offsetof(EnDs, jointTable[0].z), 0x184, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, morphTable[0].x), offsetof(EnDs, morphTable[1].x) - offsetof(EnDs, morphTable[0].x), 0x1a4, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, morphTable[0].y), offsetof(EnDs, morphTable[1].y) - offsetof(EnDs, morphTable[0].y), 0x1a6, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, morphTable[0].z), offsetof(EnDs, morphTable[1].z) - offsetof(EnDs, morphTable[0].z), 0x1a8, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, unk_1D8.x), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, unk_1D8.y), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, unk_1D8.z), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, unk_1DE.x), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, unk_1DE.y), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, unk_1DE.z), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, unk_1E4), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDs, unk_1E8), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, brewTimer), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDs, actionFunc), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnDsSpanCount = ARRAY_COUNT(gGzEnDsSpans);

const GzActorFunction gGzEnDsFunctions[] = {
    { 0x0, (void*)EnDs_Init },
    { 0xd0, (void*)EnDs_Destroy },
    { 0xe0, (void*)EnDs_Talk },
    { 0x130, (void*)EnDs_TalkNoEmptyBottle },
    { 0x19c, (void*)EnDs_TalkAfterGiveOddPotion },
    { 0x1f8, (void*)EnDs_DisplayOddPotionText },
    { 0x258, (void*)EnDs_GiveOddPotion },
    { 0x2c4, (void*)EnDs_TalkAfterBrewOddPotion },
    { 0x344, (void*)EnDs_BrewOddPotion3 },
    { 0x3e8, (void*)EnDs_BrewOddPotion2 },
    { 0x43c, (void*)EnDs_BrewOddPotion1 },
    { 0x4dc, (void*)EnDs_OfferOddPotion },
    { 0x5a8, NULL },
    { 0x5f8, (void*)EnDs_GiveBluePotion },
    { 0x65c, (void*)EnDs_OfferBluePotion },
    { 0x794, (void*)EnDs_Wait },
    { 0x918, (void*)EnDs_Update },
    { 0xa20, NULL },
    { 0xa68, NULL },
    { 0xaa8, (void*)EnDs_Draw },
};
const size_t gGzEnDsFunctionCount = ARRAY_COUNT(gGzEnDsFunctions);
