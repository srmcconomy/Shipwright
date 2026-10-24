// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Hintnuts/z_en_hintnuts.h"

void EnHintnuts_Init(void*, void*);
void EnHintnuts_Destroy(void*, void*);
void EnHintnuts_HitByScrubProjectile1(void*, void*);
void EnHintnuts_SetupLeave(void*, void*);
void EnHintnuts_Wait(void*, void*);
void EnHintnuts_LookAround(void*, void*);
void EnHintnuts_Stand(void*, void*);
void EnHintnuts_ThrowNut(void*, void*);
void EnHintnuts_Burrow(void*, void*);
void EnHintnuts_BeginRun(void*, void*);
void EnHintnuts_BeginFreeze(void*, void*);
void EnHintnuts_CheckProximity(void*, void*);
void EnHintnuts_Run(void*, void*);
void EnHintnuts_Talk(void*, void*);
void EnHintnuts_Leave(void*, void*);
void EnHintnuts_Freeze(void*, void*);
void EnHintnuts_ColliderCheck(void*, void*);
void EnHintnuts_Update(void*, void*);
void EnHintnuts_Draw(void*, void*);

const GzActorSpan gGzEnHintnutsSpans[] = {
    { offsetof(EnHintnuts, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnHintnuts, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHintnuts, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHintnuts, animFlagAndTimer), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, unk_196), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, textIdCopy), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, jointTable[0].x), offsetof(EnHintnuts, jointTable[1].x) - offsetof(EnHintnuts, jointTable[0].x), 0x18a, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, jointTable[0].y), offsetof(EnHintnuts, jointTable[1].y) - offsetof(EnHintnuts, jointTable[0].y), 0x18c, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, jointTable[0].z), offsetof(EnHintnuts, jointTable[1].z) - offsetof(EnHintnuts, jointTable[0].z), 0x18e, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, morphTable[0].x), offsetof(EnHintnuts, morphTable[1].x) - offsetof(EnHintnuts, morphTable[0].x), 0x1c6, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, morphTable[0].y), offsetof(EnHintnuts, morphTable[1].y) - offsetof(EnHintnuts, morphTable[0].y), 0x1c8, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, morphTable[0].z), offsetof(EnHintnuts, morphTable[1].z) - offsetof(EnHintnuts, morphTable[0].z), 0x1ca, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.base.actor), 0, 0x204, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, collider.base.at), 0, 0x208, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, collider.base.ac), 0, 0x20c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, collider.base.oc), 0, 0x210, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, collider.base.atFlags), 0, 0x214, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.base.acFlags), 0, 0x215, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.base.ocFlags1), 0, 0x216, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.base.ocFlags2), 0, 0x217, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.base.colType), 0, 0x218, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.base.shape), 0, 0x219, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.toucher.dmgFlags), 0, 0x21c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.toucher.effect), 0, 0x220, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.toucher.damage), 0, 0x221, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.bumper.dmgFlags), 0, 0x224, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.bumper.effect), 0, 0x228, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.bumper.defense), 0, 0x229, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.bumper.hitPos.x), 0, 0x22a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.bumper.hitPos.y), 0, 0x22c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.bumper.hitPos.z), 0, 0x22e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.elemType), 0, 0x230, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.toucherFlags), 0, 0x231, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.bumperFlags), 0, 0x232, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.ocElemFlags), 0, 0x233, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.info.atHit), 0, 0x234, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, collider.info.acHit), 0, 0x238, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, collider.info.atHitInfo), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, collider.info.acHitInfo), 0, 0x240, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHintnuts, collider.dim.radius), 0, 0x244, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.dim.height), 0, 0x246, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.dim.yShift), 0, 0x248, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.dim.pos.x), 0, 0x24a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.dim.pos.y), 0, 0x24c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHintnuts, collider.dim.pos.z), 0, 0x24e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnHintnutsSpanCount = ARRAY_COUNT(gGzEnHintnutsSpans);

const GzActorFunction gGzEnHintnutsFunctions[] = {
    { 0x0, (void*)EnHintnuts_Init },
    { 0x1a0, (void*)EnHintnuts_Destroy },
    { 0x1dc, (void*)EnHintnuts_HitByScrubProjectile1 },
    { 0x260, NULL },
    { 0x2e0, NULL },
    { 0x328, NULL },
    { 0x368, NULL },
    { 0x3d0, NULL },
    { 0x420, NULL },
    { 0x510, NULL },
    { 0x558, NULL },
    { 0x5a4, (void*)EnHintnuts_SetupLeave },
    { 0x664, NULL },
    { 0x710, (void*)EnHintnuts_Wait },
    { 0x974, (void*)EnHintnuts_LookAround },
    { 0x9f8, (void*)EnHintnuts_Stand },
    { 0xabc, (void*)EnHintnuts_ThrowNut },
    { 0xbf8, (void*)EnHintnuts_Burrow },
    { 0xd0c, (void*)EnHintnuts_BeginRun },
    { 0xd70, (void*)EnHintnuts_BeginFreeze },
    { 0xdac, (void*)EnHintnuts_CheckProximity },
    { 0xe40, (void*)EnHintnuts_Run },
    { 0x10d0, (void*)EnHintnuts_Talk },
    { 0x113c, (void*)EnHintnuts_Leave },
    { 0x12f8, (void*)EnHintnuts_Freeze },
    { 0x1424, (void*)EnHintnuts_ColliderCheck },
    { 0x14d8, (void*)EnHintnuts_Update },
    { 0x1660, NULL },
    { 0x1794, (void*)EnHintnuts_Draw },
};
const size_t gGzEnHintnutsFunctionCount = ARRAY_COUNT(gGzEnHintnutsFunctions);
