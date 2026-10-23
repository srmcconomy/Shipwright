// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Heishi3/z_en_heishi3.h"

void EnHeishi3_Init(void*, void*);
void EnHeishi3_Destroy(void*, void*);
void EnHeishi3_SetupGuardType(void*, void*);
void EnHeishi3_StandSentinelInGrounds(void*, void*);
void EnHeishi3_StandSentinelInCastle(void*, void*);
void EnHeishi3_CatchStart(void*, void*);
void func_80A55BD4(void*, void*);
void EnHeishi3_ResetAnimationToIdle(void*, void*);
void func_80A55D00(void*, void*);
void EnHeishi3_Update(void*, void*);
void EnHeishi3_Draw(void*, void*);

const GzActorSpan gGzEnHeishi3Spans[] = {
    { offsetof(EnHeishi3, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHeishi3, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, jointTable[0].x), offsetof(EnHeishi3, jointTable[1].x) - offsetof(EnHeishi3, jointTable[0].x), 0x180, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, jointTable[0].y), offsetof(EnHeishi3, jointTable[1].y) - offsetof(EnHeishi3, jointTable[0].y), 0x182, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, jointTable[0].z), offsetof(EnHeishi3, jointTable[1].z) - offsetof(EnHeishi3, jointTable[0].z), 0x184, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, morphTable[0].x), offsetof(EnHeishi3, morphTable[1].x) - offsetof(EnHeishi3, morphTable[0].x), 0x1e6, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, morphTable[0].y), offsetof(EnHeishi3, morphTable[1].y) - offsetof(EnHeishi3, morphTable[0].y), 0x1e8, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, morphTable[0].z), offsetof(EnHeishi3, morphTable[1].z) - offsetof(EnHeishi3, morphTable[0].z), 0x1ea, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, actionFunc), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHeishi3, unk_260[0]), offsetof(EnHeishi3, unk_260[1]) - offsetof(EnHeishi3, unk_260[0]), 0x250, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, unk_262), 0, 0x252, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, unk_264), 0, 0x254, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, unk_266[0]), offsetof(EnHeishi3, unk_266[1]) - offsetof(EnHeishi3, unk_266[0]), 0x256, 0x1, 8, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, unk_26E), 0, 0x25e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, unk_270[0]), offsetof(EnHeishi3, unk_270[1]) - offsetof(EnHeishi3, unk_270[0]), 0x260, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, caughtTimer), 0, 0x262, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, unk_274), 0, 0x264, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, respawnFlag), 0, 0x266, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, unk_278), 0, 0x268, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, unk_27A[0]), offsetof(EnHeishi3, unk_27A[1]) - offsetof(EnHeishi3, unk_27A[0]), 0x26a, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.base.actor), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, collider.base.at), 0, 0x270, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, collider.base.ac), 0, 0x274, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, collider.base.oc), 0, 0x278, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, collider.base.atFlags), 0, 0x27c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.base.acFlags), 0, 0x27d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.base.ocFlags1), 0, 0x27e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.base.ocFlags2), 0, 0x27f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.base.colType), 0, 0x280, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.base.shape), 0, 0x281, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.toucher.dmgFlags), 0, 0x284, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.toucher.effect), 0, 0x288, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.toucher.damage), 0, 0x289, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.bumper.dmgFlags), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.bumper.effect), 0, 0x290, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.bumper.defense), 0, 0x291, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.bumper.hitPos.x), 0, 0x292, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.bumper.hitPos.y), 0, 0x294, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.bumper.hitPos.z), 0, 0x296, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.elemType), 0, 0x298, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.toucherFlags), 0, 0x299, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.bumperFlags), 0, 0x29a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.ocElemFlags), 0, 0x29b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.info.atHit), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, collider.info.acHit), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, collider.info.atHitInfo), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, collider.info.acHitInfo), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi3, collider.dim.radius), 0, 0x2ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.dim.height), 0, 0x2ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.dim.yShift), 0, 0x2b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.dim.pos.x), 0, 0x2b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.dim.pos.y), 0, 0x2b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi3, collider.dim.pos.z), 0, 0x2b6, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnHeishi3SpanCount = ARRAY_COUNT(gGzEnHeishi3Spans);

const GzActorFunction gGzEnHeishi3Functions[] = {
    { 0x0, (void*)EnHeishi3_Init },
    { 0x12c, (void*)EnHeishi3_Destroy },
    { 0x158, (void*)EnHeishi3_SetupGuardType },
    { 0x208, (void*)EnHeishi3_StandSentinelInGrounds },
    { 0x364, (void*)EnHeishi3_StandSentinelInCastle },
    { 0x4d4, (void*)EnHeishi3_CatchStart },
    { 0x57c, (void*)func_80A55BD4 },
    { 0x614, (void*)EnHeishi3_ResetAnimationToIdle },
    { 0x6a8, (void*)func_80A55D00 },
    { 0x758, (void*)EnHeishi3_Update },
    { 0x838, NULL },
    { 0x8a0, (void*)EnHeishi3_Draw },
};
const size_t gGzEnHeishi3FunctionCount = ARRAY_COUNT(gGzEnHeishi3Functions);
