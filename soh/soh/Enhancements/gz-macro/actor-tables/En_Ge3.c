// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ge3/z_en_ge3.h"

void EnGe3_Init(void*, void*);
void EnGe3_Destroy(void*, void*);
void EnGe3_TurnToFacePlayer(void*, void*);
void EnGe3_LookAtPlayer(void*, void*);
void EnGe3_Wait(void*, void*);
void EnGe3_WaitLookAtPlayer(void*, void*);
void EnGe3_WaitTillCardGiven(void*, void*);
void EnGe3_GiveCard(void*, void*);
void EnGe3_ForceTalk(void*, void*);
void EnGe3_UpdateCollision(void*, void*);
void EnGe3_MoveAndBlink(void*, void*);
void EnGe3_UpdateWhenNotTalking(void*, void*);
void EnGe3_Update(void*, void*);
void EnGe3_Draw(void*, void*);

const GzActorSpan gGzEnGe3Spans[] = {
    { offsetof(EnGe3, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGe3, skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGe3, skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, jointTable[0].x), offsetof(EnGe3, jointTable[1].x) - offsetof(EnGe3, jointTable[0].x), 0x1cc, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, jointTable[0].y), offsetof(EnGe3, jointTable[1].y) - offsetof(EnGe3, jointTable[0].y), 0x1ce, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, jointTable[0].z), offsetof(EnGe3, jointTable[1].z) - offsetof(EnGe3, jointTable[0].z), 0x1d0, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, morphTable[0].x), offsetof(EnGe3, morphTable[1].x) - offsetof(EnGe3, morphTable[0].x), 0x25c, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, morphTable[0].y), offsetof(EnGe3, morphTable[1].y) - offsetof(EnGe3, morphTable[0].y), 0x25e, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, morphTable[0].z), offsetof(EnGe3, morphTable[1].z) - offsetof(EnGe3, morphTable[0].z), 0x260, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, eyeIndex), 0, 0x2ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, blinkTimer), 0, 0x2ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, headRot.x), 0, 0x2f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, headRot.y), 0, 0x2f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, headRot.z), 0, 0x2f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, unk_306.x), 0, 0x2f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, unk_306.y), 0, 0x2f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, unk_306.z), 0, 0x2fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, unk_30C), 0, 0x2fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGe3, actionFunc), 0, 0x300, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnGe3SpanCount = ARRAY_COUNT(gGzEnGe3Spans);

const GzActorFunction gGzEnGe3Functions[] = {
    { 0x0, NULL },
    { 0xa8, (void*)EnGe3_Init },
    { 0x1b0, (void*)EnGe3_Destroy },
    { 0x1dc, (void*)EnGe3_TurnToFacePlayer },
    { 0x2f4, (void*)EnGe3_LookAtPlayer },
    { 0x408, (void*)EnGe3_Wait },
    { 0x46c, (void*)EnGe3_WaitLookAtPlayer },
    { 0x48c, (void*)EnGe3_WaitTillCardGiven },
    { 0x4f0, (void*)EnGe3_GiveCard },
    { 0x584, (void*)EnGe3_ForceTalk },
    { 0x63c, (void*)EnGe3_UpdateCollision },
    { 0x6e4, (void*)EnGe3_MoveAndBlink },
    { 0x770, (void*)EnGe3_UpdateWhenNotTalking },
    { 0x824, (void*)EnGe3_Update },
    { 0x870, NULL },
    { 0x8cc, NULL },
    { 0x928, (void*)EnGe3_Draw },
};
const size_t gGzEnGe3FunctionCount = ARRAY_COUNT(gGzEnGe3Functions);
