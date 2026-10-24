// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ko/z_en_ko.h"

s32 EnKo_AreObjectsAvailable(void*, void*);
s32 EnKo_AreObjectsLoaded(void*, void*);
s32 EnKo_IsOsAnimeAvailable(void*, void*);
s32 EnKo_IsOsAnimeLoaded(void*, void*);
s32 func_80A97D68(void*, void*);
s32 func_80A97E18(void*, void*);
s32 func_80A97EB0(void*, void*);
s32 func_80A97F20(void*, void*);
s32 func_80A97F70(void*, void*);
s32 func_80A98034(void*, void*);
s32 func_80A98124(void*, void*);
s32 func_80A98174(void*, void*);
s32 EnKo_ChildStart(void*, void*);
s32 EnKo_ChildStone(void*, void*);
s32 EnKo_ChildSaria(void*, void*);
s32 EnKo_AdultEnemy(void*, void*);
s32 EnKo_AdultSaved(void*, void*);
void func_80A9877C(void*, void*);
s32 EnKo_CanSpawn(void*, void*);
void func_80A98DB4(void*, void*);
s32 func_80A98ECC(void*, void*);
void EnKo_Init(void*, void*);
void EnKo_Destroy(void*, void*);
void func_80A99048(void*, void*);
void func_80A99438(void*, void*);
void func_80A99504(void*, void*);
void func_80A99560(void*, void*);
void EnKo_Update(void*, void*);
void EnKo_Draw(void*, void*);

const GzActorSpan gGzEnKoSpans[] = {
    { offsetof(EnKo, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnKo, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKo, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKo, headObjectBankIdx), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, bodyObjectBankIdx), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, legsObjectBankIdx), 0, 0x186, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, osAnimeBankIndex), 0, 0x187, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.base.actor), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, collider.base.at), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, collider.base.ac), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, collider.base.oc), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, collider.base.atFlags), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.base.acFlags), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.base.ocFlags1), 0, 0x19a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.base.ocFlags2), 0, 0x19b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.base.colType), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.base.shape), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.toucher.dmgFlags), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.toucher.effect), 0, 0x1a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.toucher.damage), 0, 0x1a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.bumper.dmgFlags), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.bumper.effect), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.bumper.defense), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.bumper.hitPos.x), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.bumper.hitPos.y), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.bumper.hitPos.z), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.elemType), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.toucherFlags), 0, 0x1b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.bumperFlags), 0, 0x1b6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.ocElemFlags), 0, 0x1b7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.info.atHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, collider.info.acHit), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, collider.info.atHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, collider.info.acHitInfo), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, collider.dim.radius), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.dim.height), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.dim.yShift), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.dim.pos.x), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.dim.pos.y), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, collider.dim.pos.z), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, path), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKo, interactInfo.talkState), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.trackingMode), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.autoTurnTimer), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.autoTurnState), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.headRot.x), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.headRot.y), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.headRot.z), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.torsoRot.x), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.torsoRot.y), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.torsoRot.z), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.yOffset), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.trackPos.x), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.trackPos.y), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.trackPos.z), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, interactInfo.unk_24[0]), offsetof(EnKo, interactInfo.unk_24[1]) - offsetof(EnKo, interactInfo.unk_24[0]), 0x1fc, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, unk_210), 0, 0x200, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKo, forestQuestState), 0, 0x202, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, blinkTimer), 0, 0x204, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, eyeTextureIndex), 0, 0x206, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, appearDist), 0, 0x208, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, lookDist), 0, 0x20c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, modelAlpha), 0, 0x210, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKo, jointTable[0].x), offsetof(EnKo, jointTable[1].x) - offsetof(EnKo, jointTable[0].x), 0x214, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, jointTable[0].y), offsetof(EnKo, jointTable[1].y) - offsetof(EnKo, jointTable[0].y), 0x216, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, jointTable[0].z), offsetof(EnKo, jointTable[1].z) - offsetof(EnKo, jointTable[0].z), 0x218, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, morphTable[0].x), offsetof(EnKo, morphTable[1].x) - offsetof(EnKo, morphTable[0].x), 0x274, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, morphTable[0].y), offsetof(EnKo, morphTable[1].y) - offsetof(EnKo, morphTable[0].y), 0x276, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, morphTable[0].z), offsetof(EnKo, morphTable[1].z) - offsetof(EnKo, morphTable[0].z), 0x278, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, fidgetTableY[0]), offsetof(EnKo, fidgetTableY[1]) - offsetof(EnKo, fidgetTableY[0]), 0x2d4, 0x2, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnKo, fidgetTableZ[0]), offsetof(EnKo, fidgetTableZ[1]) - offsetof(EnKo, fidgetTableZ[0]), 0x2f4, 0x2, 16, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnKoSpanCount = ARRAY_COUNT(gGzEnKoSpans);

const GzActorFunction gGzEnKoFunctions[] = {
    { 0x0, (void*)EnKo_AreObjectsAvailable },
    { 0x118, (void*)EnKo_AreObjectsLoaded },
    { 0x1a0, (void*)EnKo_IsOsAnimeAvailable },
    { 0x1f0, (void*)EnKo_IsOsAnimeLoaded },
    { 0x230, NULL },
    { 0x598, NULL },
    { 0x870, NULL },
    { 0x99c, NULL },
    { 0xd9c, NULL },
    { 0xe24, NULL },
    { 0xee0, NULL },
    { 0xf64, NULL },
    { 0xfd0, (void*)func_80A97D68 },
    { 0x1080, (void*)func_80A97E18 },
    { 0x111c, (void*)func_80A97EB0 },
    { 0x1190, (void*)func_80A97F20 },
    { 0x11e0, (void*)func_80A97F70 },
    { 0x12a4, (void*)func_80A98034 },
    { 0x1398, (void*)func_80A98124 },
    { 0x13e8, (void*)func_80A98174 },
    { 0x14cc, (void*)EnKo_ChildStart },
    { 0x15d4, (void*)EnKo_ChildStone },
    { 0x16dc, (void*)EnKo_ChildSaria },
    { 0x17e4, (void*)EnKo_AdultEnemy },
    { 0x18ec, (void*)EnKo_AdultSaved },
    { 0x19f4, (void*)func_80A9877C },
    { 0x1bb0, (void*)EnKo_CanSpawn },
    { 0x1e94, NULL },
    { 0x1f54, NULL },
    { 0x1fac, NULL },
    { 0x2038, (void*)func_80A98DB4 },
    { 0x2150, (void*)func_80A98ECC },
    { 0x2218, (void*)EnKo_Init },
    { 0x22a8, (void*)EnKo_Destroy },
    { 0x22d4, (void*)func_80A99048 },
    { 0x2604, (void*)func_80A99384 },
    { 0x26b8, (void*)func_80A99438 },
    { 0x2784, (void*)func_80A99504 },
    { 0x27e4, (void*)func_80A99560 },
    { 0x2854, (void*)func_80A995CC },
    { 0x2990, (void*)EnKo_Update },
    { 0x2af4, NULL },
    { 0x2e5c, NULL },
    { 0x2f2c, NULL },
    { 0x2f98, (void*)EnKo_Draw },
};
const size_t gGzEnKoFunctionCount = ARRAY_COUNT(gGzEnKoFunctions);
