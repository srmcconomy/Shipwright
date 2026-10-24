// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Rd/z_en_rd.h"

void EnRd_Init(void*, void*);
void EnRd_Destroy(void*, void*);
void EnRd_Idle(void*, void*);
void EnRd_RiseFromCoffin(void*, void*);
void EnRd_SetupWalkToPlayer(void*, void*);
void EnRd_WalkToPlayer(void*, void*);
void EnRd_SetupWalkToHome(void*, void*);
void EnRd_WalkToHome(void*, void*);
void EnRd_WalkToParent(void*, void*);
void EnRd_Grab(void*, void*);
void EnRd_AttemptPlayerFreeze(void*, void*);
void EnRd_StandUp(void*, void*);
void EnRd_Crouch(void*, void*);
void EnRd_Damaged(void*, void*);
void EnRd_Dead(void*, void*);
void EnRd_Stunned(void*, void*);
void EnRd_TurnTowardsPlayer(void*, void*);
void EnRd_UpdateDamage(void*, void*);
void EnRd_Update(void*, void*);
void EnRd_Draw(void*, void*);

const GzActorSpan gGzEnRdSpans[] = {
    { offsetof(EnRd, firePos[0].x), offsetof(EnRd, firePos[1].x) - offsetof(EnRd, firePos[0].x), 0x13c, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, firePos[0].y), offsetof(EnRd, firePos[1].y) - offsetof(EnRd, firePos[0].y), 0x13e, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, firePos[0].z), offsetof(EnRd, firePos[1].z) - offsetof(EnRd, firePos[0].z), 0x140, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.limbCount), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.mode), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.dListCount), 0, 0x17a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.taper), 0, 0x17b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.skeleton), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, skelAnime.animation), 0, 0x180, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnRd, skelAnime.startFrame), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.endFrame), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.animLength), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.curFrame), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.playSpeed), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.jointTable), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, skelAnime.morphTable), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, skelAnime.morphWeight), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.morphRate), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.update.normal), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnRd, skelAnime.initFlags), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.movementFlags), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.prevRot), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.prevTransl.x), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.prevTransl.y), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.prevTransl.z), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.baseTransl.x), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.baseTransl.y), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, skelAnime.baseTransl.z), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, jointTable[0].x), offsetof(EnRd, jointTable[1].x) - offsetof(EnRd, jointTable[0].x), 0x1bc, 0x6, 26, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, jointTable[0].y), offsetof(EnRd, jointTable[1].y) - offsetof(EnRd, jointTable[0].y), 0x1be, 0x6, 26, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, jointTable[0].z), offsetof(EnRd, jointTable[1].z) - offsetof(EnRd, jointTable[0].z), 0x1c0, 0x6, 26, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, morphTable[0].x), offsetof(EnRd, morphTable[1].x) - offsetof(EnRd, morphTable[0].x), 0x258, 0x6, 26, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, morphTable[0].y), offsetof(EnRd, morphTable[1].y) - offsetof(EnRd, morphTable[0].y), 0x25a, 0x6, 26, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, morphTable[0].z), offsetof(EnRd, morphTable[1].z) - offsetof(EnRd, morphTable[0].z), 0x25c, 0x6, 26, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, grabState), 0, 0x2f4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, isMourning), 0, 0x2f5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, playerStunWaitTimer), 0, 0x2f6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, grabWaitTimer), 0, 0x2f7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, actionFunc), 0, 0x2f8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnRd, timer), 0, 0x2fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, headYRotation), 0, 0x2fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, upperBodyYRotation), 0, 0x300, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, rdFlags), 0, 0x302, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, alpha), 0, 0x304, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, sunsSongStunTimer), 0, 0x306, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, stunnedBySunsSong), 0, 0x308, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, grabDamageTimer), 0, 0x309, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, fireTimer), 0, 0x30a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, action), 0, 0x30b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, damageReaction), 0, 0x30c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, unk_31D), 0, 0x30d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.base.actor), 0, 0x310, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, collider.base.at), 0, 0x314, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, collider.base.ac), 0, 0x318, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, collider.base.oc), 0, 0x31c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, collider.base.atFlags), 0, 0x320, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.base.acFlags), 0, 0x321, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.base.ocFlags1), 0, 0x322, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.base.ocFlags2), 0, 0x323, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.base.colType), 0, 0x324, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.base.shape), 0, 0x325, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.toucher.dmgFlags), 0, 0x328, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.toucher.effect), 0, 0x32c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.toucher.damage), 0, 0x32d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.bumper.dmgFlags), 0, 0x330, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.bumper.effect), 0, 0x334, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.bumper.defense), 0, 0x335, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.bumper.hitPos.x), 0, 0x336, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.bumper.hitPos.y), 0, 0x338, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.bumper.hitPos.z), 0, 0x33a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.elemType), 0, 0x33c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.toucherFlags), 0, 0x33d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.bumperFlags), 0, 0x33e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.ocElemFlags), 0, 0x33f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.info.atHit), 0, 0x340, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, collider.info.acHit), 0, 0x344, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, collider.info.atHitInfo), 0, 0x348, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, collider.info.acHitInfo), 0, 0x34c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnRd, collider.dim.radius), 0, 0x350, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.dim.height), 0, 0x352, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.dim.yShift), 0, 0x354, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.dim.pos.x), 0, 0x356, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.dim.pos.y), 0, 0x358, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnRd, collider.dim.pos.z), 0, 0x35a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnRdSpanCount = ARRAY_COUNT(gGzEnRdSpans);

const GzActorFunction gGzEnRdFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnRd_Init },
    { 0x1f8, (void*)EnRd_Destroy },
    { 0x23c, NULL },
    { 0x2a8, NULL },
    { 0x350, (void*)EnRd_Idle },
    { 0x57c, NULL },
    { 0x61c, (void*)EnRd_RiseFromCoffin },
    { 0x79c, (void*)EnRd_SetupWalkToPlayer },
    { 0x828, (void*)EnRd_WalkToPlayer },
    { 0xb5c, (void*)EnRd_SetupWalkToHome },
    { 0xbdc, (void*)EnRd_WalkToHome },
    { 0xdf0, NULL },
    { 0xe74, (void*)EnRd_WalkToParent },
    { 0x1008, NULL },
    { 0x106c, (void*)EnRd_Grab },
    { 0x13d8, NULL },
    { 0x1450, (void*)EnRd_AttemptPlayerFreeze },
    { 0x1548, NULL },
    { 0x1594, (void*)EnRd_StandUp },
    { 0x15f0, NULL },
    { 0x1670, (void*)EnRd_Crouch },
    { 0x16ac, NULL },
    { 0x1738, (void*)EnRd_Damaged },
    { 0x1848, NULL },
    { 0x18c0, (void*)EnRd_Dead },
    { 0x1a0c, NULL },
    { 0x1af8, (void*)EnRd_Stunned },
    { 0x1bcc, (void*)EnRd_TurnTowardsPlayer },
    { 0x1d44, (void*)EnRd_UpdateDamage },
    { 0x1f10, (void*)EnRd_Update },
    { 0x20fc, NULL },
    { 0x2158, NULL },
    { 0x22a0, (void*)EnRd_Draw },
};
const size_t gGzEnRdFunctionCount = ARRAY_COUNT(gGzEnRdFunctions);
