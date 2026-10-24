// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ms/z_en_ms.h"

void EnMs_SetOfferText(void*, void*);
void EnMs_Init(void*, void*);
void EnMs_Destroy(void*, void*);
void EnMs_Talk(void*, void*);
void EnMs_Sell(void*, void*);
void EnMs_Update(void*, void*);
void EnMs_Draw(void*, void*);

const GzActorSpan gGzEnMsSpans[] = {
    { offsetof(EnMs, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnMs, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnMs, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, jointTable[0].x), offsetof(EnMs, jointTable[1].x) - offsetof(EnMs, jointTable[0].x), 0x180, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, jointTable[0].y), offsetof(EnMs, jointTable[1].y) - offsetof(EnMs, jointTable[0].y), 0x182, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, jointTable[0].z), offsetof(EnMs, jointTable[1].z) - offsetof(EnMs, jointTable[0].z), 0x184, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, morphTable[0].x), offsetof(EnMs, morphTable[1].x) - offsetof(EnMs, morphTable[0].x), 0x1b6, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, morphTable[0].y), offsetof(EnMs, morphTable[1].y) - offsetof(EnMs, morphTable[0].y), 0x1b8, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, morphTable[0].z), offsetof(EnMs, morphTable[1].z) - offsetof(EnMs, morphTable[0].z), 0x1ba, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, actionFunc), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnMs, collider.base.actor), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, collider.base.at), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, collider.base.ac), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, collider.base.oc), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, collider.base.atFlags), 0, 0x200, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.base.acFlags), 0, 0x201, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.base.ocFlags1), 0, 0x202, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.base.ocFlags2), 0, 0x203, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.base.colType), 0, 0x204, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.base.shape), 0, 0x205, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.toucher.dmgFlags), 0, 0x208, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.toucher.effect), 0, 0x20c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.toucher.damage), 0, 0x20d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.bumper.dmgFlags), 0, 0x210, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.bumper.effect), 0, 0x214, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.bumper.defense), 0, 0x215, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.bumper.hitPos.x), 0, 0x216, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.bumper.hitPos.y), 0, 0x218, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.bumper.hitPos.z), 0, 0x21a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.elemType), 0, 0x21c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.toucherFlags), 0, 0x21d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.bumperFlags), 0, 0x21e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.ocElemFlags), 0, 0x21f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.info.atHit), 0, 0x220, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, collider.info.acHit), 0, 0x224, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, collider.info.atHitInfo), 0, 0x228, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, collider.info.acHitInfo), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMs, collider.dim.radius), 0, 0x230, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.dim.height), 0, 0x232, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.dim.yShift), 0, 0x234, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.dim.pos.x), 0, 0x236, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.dim.pos.y), 0, 0x238, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, collider.dim.pos.z), 0, 0x23a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMs, activeTimer), 0, 0x23c, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnMsSpanCount = ARRAY_COUNT(gGzEnMsSpans);

const GzActorFunction gGzEnMsFunctions[] = {
    { 0x0, (void*)EnMs_SetOfferText },
    { 0x7c, (void*)EnMs_Init },
    { 0x1a0, (void*)EnMs_Destroy },
    { 0x1cc, (void*)EnMs_Wait },
    { 0x278, (void*)EnMs_Talk },
    { 0x394, (void*)EnMs_Sell },
    { 0x430, (void*)EnMs_TalkAfterPurchase },
    { 0x490, (void*)EnMs_Update },
    { 0x588, (void*)EnMs_Draw },
};
const size_t gGzEnMsFunctionCount = ARRAY_COUNT(gGzEnMsFunctions);
