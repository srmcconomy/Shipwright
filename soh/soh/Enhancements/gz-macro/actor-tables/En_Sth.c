// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Sth/z_en_sth.h"

void EnSth_Init(void*, void*);
void EnSth_SetupShapeColliderUpdate2AndDraw(void*, void*);
void EnSth_SetupAfterObjectLoaded(void*, void*);
void EnSth_Destroy(void*, void*);
void EnSth_WaitForObjectLoaded(void*, void*);
void EnSth_FacePlayer(void*, void*);
void EnSth_LookAtPlayer(void*, void*);
void EnSth_ParentRewardObtainedWait(void*, void*);
void EnSth_GivePlayerItem(void*, void*);
void EnSth_GiveReward(void*, void*);
void EnSth_RewardUnobtainedTalk(void*, void*);
void EnSth_RewardUnobtainedWait(void*, void*);
void EnSth_ChildRewardObtainedWait(void*, void*);
void EnSth_Update(void*, void*);
void EnSth_Update2(void*, void*);
void EnSth_Draw(void*, void*);

const GzActorSpan gGzEnSthSpans[] = {
    { offsetof(EnSth, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnSth, skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSth, skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnSth, skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, jointTable[0].x), offsetof(EnSth, jointTable[1].x) - offsetof(EnSth, jointTable[0].x), 0x1cc, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, jointTable[0].y), offsetof(EnSth, jointTable[1].y) - offsetof(EnSth, jointTable[0].y), 0x1ce, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, jointTable[0].z), offsetof(EnSth, jointTable[1].z) - offsetof(EnSth, jointTable[0].z), 0x1d0, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, morphTable[0].x), offsetof(EnSth, morphTable[1].x) - offsetof(EnSth, morphTable[0].x), 0x22c, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, morphTable[0].y), offsetof(EnSth, morphTable[1].y) - offsetof(EnSth, morphTable[0].y), 0x22e, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, morphTable[0].z), offsetof(EnSth, morphTable[1].z) - offsetof(EnSth, morphTable[0].z), 0x230, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, eventFlag), 0, 0x28c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, drawFunc), 0, 0x290, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnSth, objectBankIdx), 0, 0x294, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSth, headRot.x), 0, 0x296, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, headRot.y), 0, 0x298, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, headRot.z), 0, 0x29a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, unk_2AC.x), 0, 0x29c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, unk_2AC.y), 0, 0x29e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, unk_2AC.z), 0, 0x2a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, unk_2B2), 0, 0x2a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, unk_2B4), 0, 0x2a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, unk_2B6), 0, 0x2a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSth, actionFunc), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnSthSpanCount = ARRAY_COUNT(gGzEnSthSpans);

const GzActorFunction gGzEnSthFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnSth_Init },
    { 0x108, (void*)EnSth_SetupShapeColliderUpdate2AndDraw },
    { 0x18c, (void*)EnSth_SetupAfterObjectLoaded },
    { 0x2b0, (void*)EnSth_Destroy },
    { 0x2dc, (void*)EnSth_WaitForObjectLoaded },
    { 0x330, (void*)EnSth_FacePlayer },
    { 0x448, (void*)EnSth_LookAtPlayer },
    { 0x55c, (void*)EnSth_RewardObtainedTalk },
    { 0x5d8, (void*)EnSth_ParentRewardObtainedWait },
    { 0x664, (void*)EnSth_GivePlayerItem },
    { 0x700, (void*)EnSth_GiveReward },
    { 0x780, (void*)EnSth_RewardUnobtainedTalk },
    { 0x7fc, (void*)EnSth_RewardUnobtainedWait },
    { 0x8a0, (void*)EnSth_ChildRewardObtainedWait },
    { 0x94c, (void*)EnSth_Update },
    { 0x970, (void*)EnSth_Update2 },
    { 0xa74, NULL },
    { 0xbd0, NULL },
    { 0xc48, NULL },
    { 0xcb4, (void*)EnSth_Draw },
};
const size_t gGzEnSthFunctionCount = ARRAY_COUNT(gGzEnSthFunctions);
