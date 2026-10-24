// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Reeba/z_en_reeba.h"

void EnReeba_Init(void*, void*);
void EnReeba_Destroy(void*, void*);
void EnReeba_SetupSurface(void*, void*);
void EnReeba_Surface(void*, void*);
void EnReeba_Move(void*, void*);
void EnReeba_SetupMoveBig(void*, void*);
void EnReeba_MoveBig(void*, void*);
void EnReeba_Recoiled(void*, void*);
void EnReeba_SetupSink(void*, void*);
void EnReeba_Sink(void*, void*);
void EnReeba_SetupDamaged(void*, void*);
void EnReeba_Damaged(void*, void*);
void EnReeba_SetupStunned(void*, void*);
void EnReeba_Stunned(void*, void*);
void EnReeba_StunDie(void*, void*);
void EnReeba_SetupDie(void*, void*);
void EnReeba_Die(void*, void*);
void EnReeba_StunRecover(void*, void*);
void EnReeba_CheckDamage(void*, void*);
void EnReeba_Update(void*, void*);
void EnReeba_Draw(void*, void*);

const GzActorSpan gGzEnReebaSpans[] = {
    { offsetof(EnReeba, skelanime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, skelanime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnReeba, skelanime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, skelanime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, skelanime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnReeba, skelanime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, skelanime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, jointTable[0].x), offsetof(EnReeba, jointTable[1].x) - offsetof(EnReeba, jointTable[0].x), 0x180, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, jointTable[0].y), offsetof(EnReeba, jointTable[1].y) - offsetof(EnReeba, jointTable[0].y), 0x182, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, jointTable[0].z), offsetof(EnReeba, jointTable[1].z) - offsetof(EnReeba, jointTable[0].z), 0x184, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, morphTable[0].x), offsetof(EnReeba, morphTable[1].x) - offsetof(EnReeba, morphTable[0].x), 0x1ec, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, morphTable[0].y), offsetof(EnReeba, morphTable[1].y) - offsetof(EnReeba, morphTable[0].y), 0x1ee, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, morphTable[0].z), offsetof(EnReeba, morphTable[1].z) - offsetof(EnReeba, morphTable[0].z), 0x1f0, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, unk_268[0]), offsetof(EnReeba, unk_268[1]) - offsetof(EnReeba, unk_268[0]), 0x258, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, actionfunc), 0, 0x25c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnReeba, bigLeeverTimer), 0, 0x260, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, moveTimer), 0, 0x262, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, sfxTimer), 0, 0x264, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, damagedTimer), 0, 0x266, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, waitTimer), 0, 0x268, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, isBig), 0, 0x26a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, unkDamageField), 0, 0x26c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, stunType), 0, 0x26e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, aimType), 0, 0x270, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, yOffsetTarget), 0, 0x274, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, yOffsetStep), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, scale), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.base.actor), 0, 0x280, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, collider.base.at), 0, 0x284, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, collider.base.ac), 0, 0x288, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, collider.base.oc), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, collider.base.atFlags), 0, 0x290, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.base.acFlags), 0, 0x291, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.base.ocFlags1), 0, 0x292, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.base.ocFlags2), 0, 0x293, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.base.colType), 0, 0x294, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.base.shape), 0, 0x295, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.toucher.dmgFlags), 0, 0x298, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.toucher.effect), 0, 0x29c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.toucher.damage), 0, 0x29d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.bumper.dmgFlags), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.bumper.effect), 0, 0x2a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.bumper.defense), 0, 0x2a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.bumper.hitPos.x), 0, 0x2a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.bumper.hitPos.y), 0, 0x2a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.bumper.hitPos.z), 0, 0x2aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.elemType), 0, 0x2ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.toucherFlags), 0, 0x2ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.bumperFlags), 0, 0x2ae, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.ocElemFlags), 0, 0x2af, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.info.atHit), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, collider.info.acHit), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, collider.info.atHitInfo), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, collider.info.acHitInfo), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnReeba, collider.dim.radius), 0, 0x2c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.dim.height), 0, 0x2c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.dim.yShift), 0, 0x2c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.dim.pos.x), 0, 0x2c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.dim.pos.y), 0, 0x2c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnReeba, collider.dim.pos.z), 0, 0x2ca, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnReebaSpanCount = ARRAY_COUNT(gGzEnReebaSpans);

const GzActorFunction gGzEnReebaFunctions[] = {
    { 0x0, (void*)EnReeba_Init },
    { 0x1dc, (void*)EnReeba_Destroy },
    { 0x254, (void*)EnReeba_SetupSurface },
    { 0x368, (void*)EnReeba_Surface },
    { 0x588, (void*)EnReeba_Move },
    { 0x6a4, (void*)EnReeba_SetupMoveBig },
    { 0x6c8, (void*)EnReeba_MoveBig },
    { 0x938, (void*)EnReeba_Recoiled },
    { 0x9a4, (void*)EnReeba_SetupSink },
    { 0x9fc, (void*)EnReeba_Sink },
    { 0xb0c, (void*)EnReeba_SetupDamaged },
    { 0xb70, (void*)EnReeba_Damaged },
    { 0xc08, (void*)EnReeba_SetupStunned },
    { 0xc58, (void*)EnReeba_Stunned },
    { 0xdbc, (void*)EnReeba_StunDie },
    { 0xee4, (void*)EnReeba_SetupDie },
    { 0xf58, (void*)EnReeba_Die },
    { 0x1138, (void*)EnReeba_StunRecover },
    { 0x11cc, (void*)EnReeba_CheckDamage },
    { 0x1408, (void*)EnReeba_Update },
    { 0x16b8, (void*)EnReeba_Draw },
};
const size_t gGzEnReebaFunctionCount = ARRAY_COUNT(gGzEnReebaFunctions);
