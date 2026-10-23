// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ge2/z_en_ge2.h"

void EnGe2_Init(void*, void*);
void EnGe2_Destroy(void*, void*);
void EnGe2_CaptureClose(void*, void*);
void EnGe2_CaptureCharge(void*, void*);
void EnGe2_CaptureTurn(void*, void*);
void EnGe2_KnockedOut(void*, void*);
void EnGe2_TurnPlayerSpotted(void*, void*);
void EnGe2_AboutTurn(void*, void*);
void EnGe2_Walk(void*, void*);
void EnGe2_Stand(void*, void*);
void EnGe2_TurnToFacePlayer(void*, void*);
void EnGe2_LookAtPlayer(void*, void*);
void EnGe2_SetActionAfterTalk(void*, void*);
void EnGe2_WaitLookAtPlayer(void*, void*);
void EnGe2_WaitTillCardGiven(void*, void*);
void EnGe2_GiveCard(void*, void*);
void EnGe2_ForceTalk(void*, void*);
void EnGe2_SetupCapturePlayer(void*, void*);
void EnGe2_MaintainColliderAndSetAnimState(void*, void*);
void EnGe2_MoveAndBlink(void*, void*);
void EnGe2_UpdateFriendly(void*, void*);
void EnGe2_UpdateAfterTalk(void*, void*);
void EnGe2_Update(void*, void*);
void EnGe2_UpdateStunned(void*, void*);
void EnGe2_Draw(void*, void*);

const GzActorSpan gGzEnGe2Spans[] = {
    { offsetof(EnGe2, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe2, skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGe2, skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, jointTable[0].x), offsetof(EnGe2, jointTable[1].x) - offsetof(EnGe2, jointTable[0].x), 0x1cc, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, jointTable[0].y), offsetof(EnGe2, jointTable[1].y) - offsetof(EnGe2, jointTable[0].y), 0x1ce, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, jointTable[0].z), offsetof(EnGe2, jointTable[1].z) - offsetof(EnGe2, jointTable[0].z), 0x1d0, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, morphTable[0].x), offsetof(EnGe2, morphTable[1].x) - offsetof(EnGe2, morphTable[0].x), 0x250, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, morphTable[0].y), offsetof(EnGe2, morphTable[1].y) - offsetof(EnGe2, morphTable[0].y), 0x252, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, morphTable[0].z), offsetof(EnGe2, morphTable[1].z) - offsetof(EnGe2, morphTable[0].z), 0x254, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, eyeIndex), 0, 0x2d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, blinkTimer), 0, 0x2d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, headRot.x), 0, 0x2d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, headRot.y), 0, 0x2da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, headRot.z), 0, 0x2dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, unk_2EE.x), 0, 0x2de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, unk_2EE.y), 0, 0x2e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, unk_2EE.z), 0, 0x2e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, stateFlags), 0, 0x2e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, walkDirection), 0, 0x2e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, yawTowardsPlayer), 0, 0x2e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, yDetectRange), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe2, walkDuration), 0, 0x2f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, walkTimer), 0, 0x2f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe2, unk_304), 0, 0x2f4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, timer), 0, 0x2f5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, playerSpottedParam), 0, 0x2f6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe2, actionFunc), 0, 0x2f8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnGe2SpanCount = ARRAY_COUNT(gGzEnGe2Spans);

const GzActorFunction gGzEnGe2Functions[] = {
    { 0x0, NULL },
    { 0xa8, (void*)EnGe2_Init },
    { 0x2c0, (void*)EnGe2_Destroy },
    { 0x2ec, NULL },
    { 0x398, NULL },
    { 0x4c8, NULL },
    { 0x4f4, (void*)EnGe2_CaptureClose },
    { 0x5c8, (void*)EnGe2_CaptureCharge },
    { 0x6fc, (void*)EnGe2_CaptureTurn },
    { 0x774, (void*)EnGe2_KnockedOut },
    { 0x86c, (void*)EnGe2_TurnPlayerSpotted },
    { 0x974, (void*)EnGe2_AboutTurn },
    { 0xa2c, (void*)EnGe2_Walk },
    { 0xaf4, (void*)EnGe2_Stand },
    { 0xb34, (void*)EnGe2_TurnToFacePlayer },
    { 0xc4c, (void*)EnGe2_LookAtPlayer },
    { 0xd60, (void*)EnGe2_SetActionAfterTalk },
    { 0xe24, (void*)EnGe2_WaitLookAtPlayer },
    { 0xe44, (void*)EnGe2_WaitTillCardGiven },
    { 0xea8, (void*)EnGe2_GiveCard },
    { 0xf3c, (void*)EnGe2_ForceTalk },
    { 0xfc0, (void*)EnGe2_SetupCapturePlayer },
    { 0x1030, (void*)EnGe2_MaintainColliderAndSetAnimState },
    { 0x10d8, (void*)EnGe2_MoveAndBlink },
    { 0x1164, (void*)EnGe2_UpdateFriendly },
    { 0x123c, (void*)EnGe2_UpdateAfterTalk },
    { 0x1290, (void*)EnGe2_Update },
    { 0x1478, (void*)EnGe2_UpdateStunned },
    { 0x15ac, NULL },
    { 0x15f4, NULL },
    { 0x1634, (void*)EnGe2_Draw },
};
const size_t gGzEnGe2FunctionCount = ARRAY_COUNT(gGzEnGe2Functions);
