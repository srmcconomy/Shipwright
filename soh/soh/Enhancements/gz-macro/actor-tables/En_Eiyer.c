// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Eiyer/z_en_eiyer.h"

void EnEiyer_Init(void*, void*);
void EnEiyer_Destroy(void*, void*);
void EnEiyer_SetupAmbush(void*, void*);
void EnEiyer_SetupDiveAttack(void*, void*);
void EnEiyer_AppearFromGround(void*, void*);
void EnEiyer_CheckPlayerCollision(void*, void*);
void EnEiyer_CircleUnderground(void*, void*);
void EnEiyer_WanderUnderground(void*, void*);
void EnEiyer_Inactive(void*, void*);
void EnEiyer_Ambush(void*, void*);
void EnEiyer_Glide(void*, void*);
void EnEiyer_StartAttack(void*, void*);
void EnEiyer_DiveAttack(void*, void*);
void EnEiyer_Land(void*, void*);
void EnEiyer_Hurt(void*, void*);
void EnEiyer_Die(void*, void*);
void EnEiyer_Dead(void*, void*);
void EnEiyer_Stunned(void*, void*);
void EnEiyer_UpdateDamage(void*, void*);
void EnEiyer_Update(void*, void*);
void EnEiyer_Draw(void*, void*);

const GzActorSpan gGzEnEiyerSpans[] = {
    { offsetof(EnEiyer, skelanime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, skelanime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnEiyer, skelanime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, skelanime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, skelanime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnEiyer, skelanime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, skelanime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnEiyer, timer), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, targetYaw), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, jointTable[0].x), offsetof(EnEiyer, jointTable[1].x) - offsetof(EnEiyer, jointTable[0].x), 0x188, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, jointTable[0].y), offsetof(EnEiyer, jointTable[1].y) - offsetof(EnEiyer, jointTable[0].y), 0x18a, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, jointTable[0].z), offsetof(EnEiyer, jointTable[1].z) - offsetof(EnEiyer, jointTable[0].z), 0x18c, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, morphTable[0].x), offsetof(EnEiyer, morphTable[1].x) - offsetof(EnEiyer, morphTable[0].x), 0x1fa, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, morphTable[0].y), offsetof(EnEiyer, morphTable[1].y) - offsetof(EnEiyer, morphTable[0].y), 0x1fc, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, morphTable[0].z), offsetof(EnEiyer, morphTable[1].z) - offsetof(EnEiyer, morphTable[0].z), 0x1fe, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, basePos.x), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, basePos.y), 0, 0x270, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, basePos.z), 0, 0x274, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.base.actor), 0, 0x278, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, collider.base.at), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, collider.base.ac), 0, 0x280, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, collider.base.oc), 0, 0x284, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, collider.base.atFlags), 0, 0x288, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.base.acFlags), 0, 0x289, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.base.ocFlags1), 0, 0x28a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.base.ocFlags2), 0, 0x28b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.base.colType), 0, 0x28c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.base.shape), 0, 0x28d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.toucher.dmgFlags), 0, 0x290, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.toucher.effect), 0, 0x294, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.toucher.damage), 0, 0x295, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.bumper.dmgFlags), 0, 0x298, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.bumper.effect), 0, 0x29c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.bumper.defense), 0, 0x29d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.bumper.hitPos.x), 0, 0x29e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.bumper.hitPos.y), 0, 0x2a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.bumper.hitPos.z), 0, 0x2a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.elemType), 0, 0x2a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.toucherFlags), 0, 0x2a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.bumperFlags), 0, 0x2a6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.ocElemFlags), 0, 0x2a7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.info.atHit), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, collider.info.acHit), 0, 0x2ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, collider.info.atHitInfo), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, collider.info.acHitInfo), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnEiyer, collider.dim.radius), 0, 0x2b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.dim.height), 0, 0x2ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.dim.yShift), 0, 0x2bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.dim.pos.x), 0, 0x2be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.dim.pos.y), 0, 0x2c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEiyer, collider.dim.pos.z), 0, 0x2c2, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnEiyerSpanCount = ARRAY_COUNT(gGzEnEiyerSpans);

const GzActorFunction gGzEnEiyerFunctions[] = {
    { 0x0, (void*)EnEiyer_Init },
    { 0x1e0, (void*)EnEiyer_Destroy },
    { 0x20c, NULL },
    { 0x27c, NULL },
    { 0x3bc, NULL },
    { 0x41c, NULL },
    { 0x448, (void*)EnEiyer_SetupAmbush },
    { 0x528, NULL },
    { 0x5a4, NULL },
    { 0x5b8, (void*)EnEiyer_SetupDiveAttack },
    { 0x600, NULL },
    { 0x678, NULL },
    { 0x728, NULL },
    { 0x7e8, NULL },
    { 0x814, NULL },
    { 0x8d8, (void*)EnEiyer_AppearFromGround },
    { 0x928, (void*)EnEiyer_CheckPlayerCollision },
    { 0x958, (void*)EnEiyer_CircleUnderground },
    { 0x9d4, (void*)EnEiyer_WanderUnderground },
    { 0xb08, (void*)EnEiyer_Inactive },
    { 0xb9c, (void*)EnEiyer_Ambush },
    { 0xcf4, (void*)EnEiyer_Glide },
    { 0xf10, (void*)EnEiyer_StartAttack },
    { 0x100c, (void*)EnEiyer_DiveAttack },
    { 0x1098, (void*)EnEiyer_Land },
    { 0x118c, (void*)EnEiyer_Hurt },
    { 0x12c4, (void*)EnEiyer_Die },
    { 0x1378, (void*)EnEiyer_Dead },
    { 0x13f8, (void*)EnEiyer_Stunned },
    { 0x14b0, (void*)EnEiyer_UpdateDamage },
    { 0x15f8, (void*)EnEiyer_Update },
    { 0x181c, NULL },
    { 0x1870, (void*)EnEiyer_Draw },
};
const size_t gGzEnEiyerFunctionCount = ARRAY_COUNT(gGzEnEiyerFunctions);
