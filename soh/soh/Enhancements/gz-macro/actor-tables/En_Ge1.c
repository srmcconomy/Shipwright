// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ge1/z_en_ge1.h"

void EnGe1_Init(void*, void*);
void EnGe1_Destroy(void*, void*);
void EnGe1_KickPlayer(void*, void*);
void EnGe1_SpotPlayer(void*, void*);
void EnGe1_WatchForPlayerFrontOnly(void*, void*);
void EnGe1_ChooseActionFromTextId(void*, void*);
void EnGe1_WatchForAndSensePlayer(void*, void*);
void EnGe1_GetReaction_ValleyFloor(void*, void*);
void EnGe1_WaitTillOpened_GTGGuard(void*, void*);
void EnGe1_Open_GTGGuard(void*, void*);
void EnGe1_SetupOpen_GTGGuard(void*, void*);
void EnGe1_RefuseEntryTooPoor_GTGGuard(void*, void*);
void EnGe1_OfferOpen_GTGGuard(void*, void*);
void EnGe1_RefuseOpenNoCard_GTGGuard(void*, void*);
void EnGe1_CheckForCard_GTGGuard(void*, void*);
void EnGe1_WaitGateOpen_GateOp(void*, void*);
void EnGe1_WaitUntilGateOpened_GateOp(void*, void*);
void EnGe1_OpenGate_GateOp(void*, void*);
void EnGe1_SetupOpenGate_GateOp(void*, void*);
void EnGe1_CheckGate_GateOp(void*, void*);
void EnGe1_Talk_GateGuard(void*, void*);
void EnGe1_GetReaction_GateGuard(void*, void*);
void EnGe1_SetupWait_Archery(void*, void*);
void EnGe1_WaitTillItemGiven_Archery(void*, void*);
void EnGe1_BeginGiveItem_Archery(void*, void*);
void EnGe1_TalkWinPrize_Archery(void*, void*);
void EnGe1_TalkTooPoor_Archery(void*, void*);
void EnGe1_WaitDoNothing(void*, void*);
void EnGe1_BeginGame_Archery(void*, void*);
void EnGe1_TalkOfferPlay_Archery(void*, void*);
void EnGe1_TalkNoPrize_Archery(void*, void*);
void EnGe1_TalkAfterGame_Archery(void*, void*);
void EnGe1_TalkNoHorse_Archery(void*, void*);
void EnGe1_Wait_Archery(void*, void*);
void EnGe1_TurnToFacePlayer(void*, void*);
void EnGe1_LookAtPlayer(void*, void*);
void EnGe1_Update(void*, void*);
void EnGe1_Draw(void*, void*);

const GzActorSpan gGzEnGe1Spans[] = {
    { offsetof(EnGe1, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnGe1, skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGe1, skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, jointTable[0].x), offsetof(EnGe1, jointTable[1].x) - offsetof(EnGe1, jointTable[0].x), 0x1cc, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, jointTable[0].y), offsetof(EnGe1, jointTable[1].y) - offsetof(EnGe1, jointTable[0].y), 0x1ce, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, jointTable[0].z), offsetof(EnGe1, jointTable[1].z) - offsetof(EnGe1, jointTable[0].z), 0x1d0, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, morphTable[0].x), offsetof(EnGe1, morphTable[1].x) - offsetof(EnGe1, morphTable[0].x), 0x22c, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, morphTable[0].y), offsetof(EnGe1, morphTable[1].y) - offsetof(EnGe1, morphTable[0].y), 0x22e, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, morphTable[0].z), offsetof(EnGe1, morphTable[1].z) - offsetof(EnGe1, morphTable[0].z), 0x230, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, headRot.x), 0, 0x28c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, headRot.y), 0, 0x28e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, headRot.z), 0, 0x290, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, unk_2A2.x), 0, 0x292, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, unk_2A2.y), 0, 0x294, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, unk_2A2.z), 0, 0x296, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, eyeIndex), 0, 0x298, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, blinkTimer), 0, 0x29a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, stateFlags), 0, 0x29c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe1, hairstyle), 0, 0x29e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, cutsceneTimer), 0, 0x29f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe1, animation), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe1, actionFunc), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGe1, animFunc), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnGe1SpanCount = ARRAY_COUNT(gGzEnGe1Spans);

const GzActorFunction gGzEnGe1Functions[] = {
    { 0x0, (void*)EnGe1_Init },
    { 0x2c4, (void*)EnGe1_Destroy },
    { 0x2f0, NULL },
    { 0x3d0, NULL },
    { 0x454, NULL },
    { 0x490, (void*)EnGe1_KickPlayer },
    { 0x570, (void*)EnGe1_SpotPlayer },
    { 0x5d0, (void*)EnGe1_WatchForPlayerFrontOnly },
    { 0x688, (void*)EnGe1_ChooseActionFromTextId },
    { 0x71c, (void*)EnGe1_SetNormalText },
    { 0x74c, (void*)EnGe1_WatchForAndSensePlayer },
    { 0x818, (void*)EnGe1_GetReaction_ValleyFloor },
    { 0x86c, (void*)EnGe1_WaitTillOpened_GTGGuard },
    { 0x8bc, (void*)EnGe1_Open_GTGGuard },
    { 0x96c, (void*)EnGe1_SetupOpen_GTGGuard },
    { 0xa2c, (void*)EnGe1_RefuseEntryTooPoor_GTGGuard },
    { 0xa6c, (void*)EnGe1_OfferOpen_GTGGuard },
    { 0xb5c, (void*)EnGe1_RefuseOpenNoCard_GTGGuard },
    { 0xba0, (void*)EnGe1_CheckForCard_GTGGuard },
    { 0xc08, (void*)EnGe1_WaitGateOpen_GateOp },
    { 0xc7c, (void*)EnGe1_WaitUntilGateOpened_GateOp },
    { 0xccc, (void*)EnGe1_OpenGate_GateOp },
    { 0xd7c, (void*)EnGe1_SetupOpenGate_GateOp },
    { 0xe48, (void*)EnGe1_CheckGate_GateOp },
    { 0xec4, (void*)EnGe1_Talk_GateGuard },
    { 0xf08, (void*)EnGe1_GetReaction_GateGuard },
    { 0xfbc, (void*)EnGe1_SetupWait_Archery },
    { 0xff4, (void*)EnGe1_WaitTillItemGiven_Archery },
    { 0x10e8, (void*)EnGe1_BeginGiveItem_Archery },
    { 0x11b0, (void*)EnGe1_TalkWinPrize_Archery },
    { 0x1210, (void*)EnGe1_TalkTooPoor_Archery },
    { 0x1274, (void*)EnGe1_WaitDoNothing },
    { 0x1284, (void*)EnGe1_BeginGame_Archery },
    { 0x1424, (void*)EnGe1_TalkOfferPlay_Archery },
    { 0x1484, (void*)EnGe1_TalkNoPrize_Archery },
    { 0x14d0, (void*)EnGe1_TalkAfterGame_Archery },
    { 0x15d4, (void*)EnGe1_TalkNoHorse_Archery },
    { 0x1618, (void*)EnGe1_Wait_Archery },
    { 0x16b0, (void*)EnGe1_TurnToFacePlayer },
    { 0x17c8, (void*)EnGe1_LookAtPlayer },
    { 0x18a4, (void*)EnGe1_Update },
    { 0x19ec, NULL },
    { 0x1a2c, NULL },
    { 0x1a84, NULL },
    { 0x1bd8, NULL },
    { 0x1c44, (void*)EnGe1_Draw },
};
const size_t gGzEnGe1FunctionCount = ARRAY_COUNT(gGzEnGe1Functions);
