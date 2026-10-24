// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Toryo/z_en_toryo.h"

void EnToryo_Init(void*, void*);
void EnToryo_Destroy(void*, void*);
s32 EnToryo_TalkRespond(void*, void*);
s32 EnToryo_DoneTalking(void*, void*);
s32 EnToryo_GetTextId(void*, void*);
void EnToryo_HandleTalking(void*, void*);
void EnToryo_Idle(void*, void*);
void EnToryo_Update(void*, void*);
void EnToryo_Draw(void*, void*);

const GzActorSpan gGzEnToryoSpans[] = {
    { offsetof(EnToryo, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnToryo, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnToryo, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnToryo, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnToryo, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, exchangeItemId), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, messageState), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, stateFlags), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, unk_1EA), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.talkState), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.trackingMode), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.autoTurnTimer), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.autoTurnState), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.headRot.x), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.headRot.y), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.headRot.z), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.torsoRot.x), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.torsoRot.y), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.torsoRot.z), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.yOffset), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.trackPos.x), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.trackPos.y), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.trackPos.z), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnToryo, interactInfo.unk_24[0]), offsetof(EnToryo, interactInfo.unk_24[1]) - offsetof(EnToryo, interactInfo.unk_24[0]), 0x200, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnToryo, jointTable[0].x), offsetof(EnToryo, jointTable[1].x) - offsetof(EnToryo, jointTable[0].x), 0x204, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, jointTable[0].y), offsetof(EnToryo, jointTable[1].y) - offsetof(EnToryo, jointTable[0].y), 0x206, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, jointTable[0].z), offsetof(EnToryo, jointTable[1].z) - offsetof(EnToryo, jointTable[0].z), 0x208, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, morphTable[0].x), offsetof(EnToryo, morphTable[1].x) - offsetof(EnToryo, morphTable[0].x), 0x26a, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, morphTable[0].y), offsetof(EnToryo, morphTable[1].y) - offsetof(EnToryo, morphTable[0].y), 0x26c, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnToryo, morphTable[0].z), offsetof(EnToryo, morphTable[1].z) - offsetof(EnToryo, morphTable[0].z), 0x26e, 0x6, 17, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnToryoSpanCount = ARRAY_COUNT(gGzEnToryoSpans);

const GzActorFunction gGzEnToryoFunctions[] = {
    { 0x0, (void*)EnToryo_Init },
    { 0x244, (void*)EnToryo_Destroy },
    { 0x270, (void*)EnToryo_TalkRespond },
    { 0x464, (void*)EnToryo_DoneTalking },
    { 0x4d0, NULL },
    { 0x53c, (void*)EnToryo_GetTextId },
    { 0x608, (void*)EnToryo_HandleTalking },
    { 0x7b8, (void*)EnToryo_Idle },
    { 0x81c, (void*)EnToryo_Update },
    { 0x954, (void*)EnToryo_Draw },
    { 0x9b4, NULL },
    { 0xa44, NULL },
};
const size_t gGzEnToryoFunctionCount = ARRAY_COUNT(gGzEnToryoFunctions);
