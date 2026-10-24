// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Fr/z_en_fr.h"

void EnFr_Init(void*, void*);
void EnFr_Update(void*, void*);
void EnFr_Destroy(void*, void*);
void EnFr_IsDivingIntoWater(void*, void*);
void EnFr_DivingIntoWater(void*, void*);
s32 EnFr_IsBelowLogSpot(void*, void*);
s32 EnFr_IsAboveAndWithin30DistXZ(void*, void*);
void EnFr_SetupJumpingOutOfWater(void*, void*);
void EnFr_JumpingOutOfWater(void*, void*);
void EnFr_OrientOnLogSpot(void*, void*);
void EnFr_ChooseJumpFromLogSpot(void*, void*);
void EnFr_JumpingUp(void*, void*);
void EnFr_JumpingBackIntoWater(void*, void*);
void EnFr_SetScaleActive(void*, void*);
void EnFr_ButterflyPath(void*, void*);
void EnFr_UpdateActive(void*, void*);
void EnFr_Activate(void*, void*);
void EnFr_ActivateCheckFrogSong(void*, void*);
void func_80A1BE98(void*, void*);
void EnFr_ListeningToOcarinaNotes(void*, void*);
void EnFr_ChildSong(void*, void*);
void EnFr_ChildSongFirstTime(void*, void*);
void EnFr_TalkBeforeFrogSong(void*, void*);
void EnFr_SetupFrogSong(void*, void*);
s32 EnFr_IsFrogSongComplete(void*, void*);
void EnFr_OcarinaMistake(void*, void*);
void EnFr_ContinueFrogSong(void*, void*);
void EnFr_PrintTextBox(void*, void*);
void EnFr_TalkBeforeReward(void*, void*);
void EnFr_SetReward(void*, void*);
void EnFr_Deactivate(void*, void*);
void EnFr_SetIdle(void*, void*);
void EnFr_UpdateIdle(void*, void*);
void EnFr_Draw(void*, void*);

const GzActorSpan gGzEnFrSpans[] = {
    { offsetof(EnFr, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFr, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnFr, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFr, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFr, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFr, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, jointTable[0].x), offsetof(EnFr, jointTable[1].x) - offsetof(EnFr, jointTable[0].x), 0x180, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, jointTable[0].y), offsetof(EnFr, jointTable[1].y) - offsetof(EnFr, jointTable[0].y), 0x182, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, jointTable[0].z), offsetof(EnFr, jointTable[1].z) - offsetof(EnFr, jointTable[0].z), 0x184, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, morphTable[0].x), offsetof(EnFr, morphTable[1].x) - offsetof(EnFr, morphTable[0].x), 0x210, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, morphTable[0].y), offsetof(EnFr, morphTable[1].y) - offsetof(EnFr, morphTable[0].y), 0x212, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, morphTable[0].z), offsetof(EnFr, morphTable[1].z) - offsetof(EnFr, morphTable[0].z), 0x214, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.limbCount), 0, 0x2a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.mode), 0, 0x2a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.dListCount), 0, 0x2a2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.taper), 0, 0x2a3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.skeleton), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFr, skelAnimeButterfly.animation), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnFr, skelAnimeButterfly.startFrame), 0, 0x2ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.endFrame), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.animLength), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.curFrame), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.playSpeed), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.jointTable), 0, 0x2c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFr, skelAnimeButterfly.morphTable), 0, 0x2c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFr, skelAnimeButterfly.morphWeight), 0, 0x2c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.morphRate), 0, 0x2cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.update.normal), 0, 0x2d0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFr, skelAnimeButterfly.initFlags), 0, 0x2d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.movementFlags), 0, 0x2d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.prevRot), 0, 0x2d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.prevTransl.x), 0, 0x2d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.prevTransl.y), 0, 0x2da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.prevTransl.z), 0, 0x2dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.baseTransl.x), 0, 0x2de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.baseTransl.y), 0, 0x2e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, skelAnimeButterfly.baseTransl.z), 0, 0x2e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, jointTableButterfly[0].x), offsetof(EnFr, jointTableButterfly[1].x) - offsetof(EnFr, jointTableButterfly[0].x), 0x2e4, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, jointTableButterfly[0].y), offsetof(EnFr, jointTableButterfly[1].y) - offsetof(EnFr, jointTableButterfly[0].y), 0x2e6, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, jointTableButterfly[0].z), offsetof(EnFr, jointTableButterfly[1].z) - offsetof(EnFr, jointTableButterfly[0].z), 0x2e8, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, morphTableButterfly[0].x), offsetof(EnFr, morphTableButterfly[1].x) - offsetof(EnFr, morphTableButterfly[0].x), 0x314, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, morphTableButterfly[0].y), offsetof(EnFr, morphTableButterfly[1].y) - offsetof(EnFr, morphTableButterfly[0].y), 0x316, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, morphTableButterfly[0].z), offsetof(EnFr, morphTableButterfly[1].z) - offsetof(EnFr, morphTableButterfly[0].z), 0x318, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, actionFunc), 0, 0x344, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFr, lightNode), 0, 0x348, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFr, lightInfo.type), 0, 0x34c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, lightInfo.params.point.x), 0, 0x34e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, lightInfo.params.point.y), 0, 0x350, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, lightInfo.params.point.z), 0, 0x352, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, lightInfo.params.point.color[0]), offsetof(EnFr, lightInfo.params.point.color[1]) - offsetof(EnFr, lightInfo.params.point.color[0]), 0x354, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, lightInfo.params.point.drawGlow), 0, 0x357, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, lightInfo.params.point.radius), 0, 0x358, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, objBankIndex), 0, 0x35a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, jumpCounter), 0, 0x35c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, blinkTimer), 0, 0x360, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, blinkFunc), 0, 0x364, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFr, eyeTexIndex), 0, 0x368, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, isJumpingUp), 0, 0x369, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, isBelowWaterSurfaceCurrent), 0, 0x36a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, isBelowWaterSurfacePrevious), 0, 0x36b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, isDeactivating), 0, 0x36c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, isActive), 0, 0x36d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, growingScaleIndex), 0, 0x36e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, isGrowing), 0, 0x36f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, ocarinaNoteIndex), 0, 0x370, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, ocarinaNote), 0, 0x371, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, songIndex), 0, 0x372, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, isJumpingToFrogSong), 0, 0x373, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, unk_384[0]), offsetof(EnFr, unk_384[1]) - offsetof(EnFr, unk_384[0]), 0x374, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, frogSongTimer), 0, 0x376, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, reward), 0, 0x378, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, posLogSpot.x), 0, 0x37c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, posLogSpot.y), 0, 0x380, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, posLogSpot.z), 0, 0x384, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, xzDistToLogSpot), 0, 0x388, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, unusedFloat), 0, 0x38c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, scale), 0, 0x390, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, unusedButterflyActor), 0, 0x394, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFr, isButterflyDrawn), 0, 0x398, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFr, xyAngleButterfly), 0, 0x39a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFr, posButterfly.x), 0, 0x39c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, posButterfly.y), 0, 0x3a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, posButterfly.z), 0, 0x3a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, posButterflyLight.x), 0, 0x3a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, posButterflyLight.y), 0, 0x3ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFr, posButterflyLight.z), 0, 0x3b0, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnFrSpanCount = ARRAY_COUNT(gGzEnFrSpans);

const GzActorFunction gGzEnFrFunctions[] = {
    { 0x0, NULL },
    { 0x114, (void*)EnFr_Init },
    { 0x1cc, NULL },
    { 0x1f4, NULL },
    { 0x208, (void*)EnFr_Update },
    { 0x500, (void*)EnFr_Destroy },
    { 0x534, (void*)EnFr_IsDivingIntoWater },
    { 0x5b8, (void*)EnFr_DivingIntoWater },
    { 0x664, (void*)EnFr_IsBelowLogSpot },
    { 0x6c0, (void*)EnFr_IsAboveAndWithin30DistXZ },
    { 0x73c, NULL },
    { 0x764, NULL },
    { 0x7f4, (void*)EnFr_SetupJumpingOutOfWater },
    { 0x894, (void*)EnFr_JumpingOutOfWater },
    { 0xa34, (void*)EnFr_OrientOnLogSpot },
    { 0xaf4, (void*)EnFr_ChooseJumpFromLogSpot },
    { 0xc08, (void*)EnFr_JumpingUp },
    { 0xd48, (void*)EnFr_JumpingBackIntoWater },
    { 0xea0, (void*)EnFr_SetScaleActive },
    { 0xfa8, (void*)EnFr_ButterflyPath },
    { 0x1104, (void*)EnFr_UpdateActive },
    { 0x11e8, NULL },
    { 0x1288, (void*)EnFr_Idle },
    { 0x1368, (void*)EnFr_Activate },
    { 0x13d0, (void*)EnFr_ActivateCheckFrogSong },
    { 0x1474, (void*)func_80A1BE98 },
    { 0x14ec, (void*)EnFr_ListeningToOcarinaNotes },
    { 0x1638, (void*)EnFr_ChildSong },
    { 0x1770, (void*)EnFr_ChildSongFirstTime },
    { 0x17c8, (void*)EnFr_TalkBeforeFrogSong },
    { 0x1830, NULL },
    { 0x192c, NULL },
    { 0x1974, NULL },
    { 0x19f0, (void*)EnFr_SetupFrogSong },
    { 0x1a64, (void*)EnFr_IsFrogSongComplete },
    { 0x1b14, (void*)EnFr_OcarinaMistake },
    { 0x1b70, (void*)EnFr_ContinueFrogSong },
    { 0x1d14, NULL },
    { 0x1d90, (void*)EnFr_PrintTextBox },
    { 0x1dd0, (void*)EnFr_TalkBeforeReward },
    { 0x1e38, (void*)EnFr_SetReward },
    { 0x1f4c, (void*)EnFr_Deactivate },
    { 0x204c, (void*)EnFr_GiveReward },
    { 0x20ac, (void*)EnFr_SetIdle },
    { 0x2100, (void*)EnFr_UpdateIdle },
    { 0x212c, NULL },
    { 0x2158, NULL },
    { 0x2210, (void*)EnFr_Draw },
};
const size_t gGzEnFrFunctionCount = ARRAY_COUNT(gGzEnFrFunctions);
