// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Dekunuts/z_en_dekunuts.h"

void EnDekunuts_Init(void*, void*);
void EnDekunuts_Destroy(void*, void*);
void EnDekunuts_Wait(void*, void*);
void EnDekunuts_LookAround(void*, void*);
void EnDekunuts_Stand(void*, void*);
void EnDekunuts_ThrowNut(void*, void*);
void EnDekunuts_Burrow(void*, void*);
void EnDekunuts_BeginRun(void*, void*);
void EnDekunuts_Run(void*, void*);
void EnDekunuts_Gasp(void*, void*);
void EnDekunuts_BeDamaged(void*, void*);
void EnDekunuts_BeStunned(void*, void*);
void EnDekunuts_Die(void*, void*);
void EnDekunuts_ColliderCheck(void*, void*);
void EnDekunuts_Update(void*, void*);
void EnDekunuts_Draw(void*, void*);

const GzActorSpan gGzEnDekunutsSpans[] = {
    { offsetof(EnDekunuts, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnDekunuts, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDekunuts, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDekunuts, playWalkSound), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, runAwayCount), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, animFlagAndTimer), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, runDirection), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, shotsPerRound), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, jointTable[0].x), offsetof(EnDekunuts, jointTable[1].x) - offsetof(EnDekunuts, jointTable[0].x), 0x18c, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, jointTable[0].y), offsetof(EnDekunuts, jointTable[1].y) - offsetof(EnDekunuts, jointTable[0].y), 0x18e, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, jointTable[0].z), offsetof(EnDekunuts, jointTable[1].z) - offsetof(EnDekunuts, jointTable[0].z), 0x190, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, morphTable[0].x), offsetof(EnDekunuts, morphTable[1].x) - offsetof(EnDekunuts, morphTable[0].x), 0x222, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, morphTable[0].y), offsetof(EnDekunuts, morphTable[1].y) - offsetof(EnDekunuts, morphTable[0].y), 0x224, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, morphTable[0].z), offsetof(EnDekunuts, morphTable[1].z) - offsetof(EnDekunuts, morphTable[0].z), 0x226, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.base.actor), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, collider.base.at), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, collider.base.ac), 0, 0x2c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, collider.base.oc), 0, 0x2c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, collider.base.atFlags), 0, 0x2c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.base.acFlags), 0, 0x2c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.base.ocFlags1), 0, 0x2ca, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.base.ocFlags2), 0, 0x2cb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.base.colType), 0, 0x2cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.base.shape), 0, 0x2cd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.toucher.dmgFlags), 0, 0x2d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.toucher.effect), 0, 0x2d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.toucher.damage), 0, 0x2d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.bumper.dmgFlags), 0, 0x2d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.bumper.effect), 0, 0x2dc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.bumper.defense), 0, 0x2dd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.bumper.hitPos.x), 0, 0x2de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.bumper.hitPos.y), 0, 0x2e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.bumper.hitPos.z), 0, 0x2e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.elemType), 0, 0x2e4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.toucherFlags), 0, 0x2e5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.bumperFlags), 0, 0x2e6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.ocElemFlags), 0, 0x2e7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.info.atHit), 0, 0x2e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, collider.info.acHit), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, collider.info.atHitInfo), 0, 0x2f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, collider.info.acHitInfo), 0, 0x2f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekunuts, collider.dim.radius), 0, 0x2f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.dim.height), 0, 0x2fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.dim.yShift), 0, 0x2fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.dim.pos.x), 0, 0x2fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.dim.pos.y), 0, 0x300, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekunuts, collider.dim.pos.z), 0, 0x302, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnDekunutsSpanCount = ARRAY_COUNT(gGzEnDekunutsSpans);

const GzActorFunction gGzEnDekunutsFunctions[] = {
    { 0x0, (void*)EnDekunuts_Init },
    { 0x16c, (void*)EnDekunuts_Destroy },
    { 0x1a8, NULL },
    { 0x21c, NULL },
    { 0x264, NULL },
    { 0x2a8, NULL },
    { 0x310, NULL },
    { 0x360, NULL },
    { 0x3c8, NULL },
    { 0x420, NULL },
    { 0x480, NULL },
    { 0x55c, NULL },
    { 0x5f0, NULL },
    { 0x640, (void*)EnDekunuts_Wait },
    { 0x8a4, (void*)EnDekunuts_LookAround },
    { 0x928, (void*)EnDekunuts_Stand },
    { 0xa14, (void*)EnDekunuts_ThrowNut },
    { 0xb6c, (void*)EnDekunuts_Burrow },
    { 0xc80, (void*)EnDekunuts_BeginRun },
    { 0xce8, (void*)EnDekunuts_Run },
    { 0xf28, (void*)EnDekunuts_Gasp },
    { 0xf90, (void*)EnDekunuts_BeDamaged },
    { 0xfe0, (void*)EnDekunuts_BeStunned },
    { 0x105c, (void*)EnDekunuts_Die },
    { 0x11b8, (void*)EnDekunuts_ColliderCheck },
    { 0x12dc, (void*)EnDekunuts_Update },
    { 0x1444, NULL },
    { 0x1578, (void*)EnDekunuts_Draw },
};
const size_t gGzEnDekunutsFunctionCount = ARRAY_COUNT(gGzEnDekunutsFunctions);
