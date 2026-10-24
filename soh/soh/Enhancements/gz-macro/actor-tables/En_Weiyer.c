// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Weiyer/z_en_weiyer.h"

void EnWeiyer_Init(void*, void*);
void EnWeiyer_Destroy(void*, void*);
void EnWeiyer_InitInsideWaterBox(void*, void*);
void EnWeiyer_FreeSwim(void*, void*);
void EnWeiyer_TurnAround(void*, void*);
void EnWeiyer_StuckOnFloor(void*, void*);
void EnWeiyer_Attack(void*, void*);
void EnWeiyer_Inactive(void*, void*);
void EnWeiyer_Hurt(void*, void*);
void EnWeiyer_Die(void*, void*);
void EnWeiyer_Dead(void*, void*);
void EnWeiyer_Stunned(void*, void*);
void EnWeiyer_OutOfWater(void*, void*);
void EnWeiyer_UpdateDamage(void*, void*);
void EnWeiyer_Update(void*, void*);
void EnWeiyer_Draw(void*, void*);

const GzActorSpan gGzEnWeiyerSpans[] = {
    { offsetof(EnWeiyer, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnWeiyer, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnWeiyer, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnWeiyer, timer), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, targetYaw), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, jointTable[0].x), offsetof(EnWeiyer, jointTable[1].x) - offsetof(EnWeiyer, jointTable[0].x), 0x188, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, jointTable[0].y), offsetof(EnWeiyer, jointTable[1].y) - offsetof(EnWeiyer, jointTable[0].y), 0x18a, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, jointTable[0].z), offsetof(EnWeiyer, jointTable[1].z) - offsetof(EnWeiyer, jointTable[0].z), 0x18c, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, morphTable[0].x), offsetof(EnWeiyer, morphTable[1].x) - offsetof(EnWeiyer, morphTable[0].x), 0x1fa, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, morphTable[0].y), offsetof(EnWeiyer, morphTable[1].y) - offsetof(EnWeiyer, morphTable[0].y), 0x1fc, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, morphTable[0].z), offsetof(EnWeiyer, morphTable[1].z) - offsetof(EnWeiyer, morphTable[0].z), 0x1fe, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, swimHeight), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, targetSwimHeight), 0, 0x270, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.base.actor), 0, 0x274, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, collider.base.at), 0, 0x278, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, collider.base.ac), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, collider.base.oc), 0, 0x280, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, collider.base.atFlags), 0, 0x284, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.base.acFlags), 0, 0x285, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.base.ocFlags1), 0, 0x286, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.base.ocFlags2), 0, 0x287, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.base.colType), 0, 0x288, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.base.shape), 0, 0x289, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.toucher.dmgFlags), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.toucher.effect), 0, 0x290, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.toucher.damage), 0, 0x291, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.bumper.dmgFlags), 0, 0x294, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.bumper.effect), 0, 0x298, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.bumper.defense), 0, 0x299, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.bumper.hitPos.x), 0, 0x29a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.bumper.hitPos.y), 0, 0x29c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.bumper.hitPos.z), 0, 0x29e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.elemType), 0, 0x2a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.toucherFlags), 0, 0x2a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.bumperFlags), 0, 0x2a2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.ocElemFlags), 0, 0x2a3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.info.atHit), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, collider.info.acHit), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, collider.info.atHitInfo), 0, 0x2ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, collider.info.acHitInfo), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWeiyer, collider.dim.radius), 0, 0x2b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.dim.height), 0, 0x2b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.dim.yShift), 0, 0x2b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.dim.pos.x), 0, 0x2ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.dim.pos.y), 0, 0x2bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWeiyer, collider.dim.pos.z), 0, 0x2be, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnWeiyerSpanCount = ARRAY_COUNT(gGzEnWeiyerSpans);

const GzActorFunction gGzEnWeiyerFunctions[] = {
    { 0x0, (void*)EnWeiyer_Init },
    { 0xd0, (void*)EnWeiyer_Destroy },
    { 0xfc, NULL },
    { 0x1b0, NULL },
    { 0x210, NULL },
    { 0x284, NULL },
    { 0x2b8, NULL },
    { 0x324, NULL },
    { 0x3e4, NULL },
    { 0x4a8, NULL },
    { 0x534, NULL },
    { 0x560, NULL },
    { 0x590, (void*)EnWeiyer_InitInsideWaterBox },
    { 0x674, (void*)EnWeiyer_FreeSwim },
    { 0x9b8, (void*)EnWeiyer_TurnAround },
    { 0xabc, (void*)EnWeiyer_StuckOnFloor },
    { 0xb78, NULL },
    { 0xbc4, (void*)EnWeiyer_Attack },
    { 0xdac, (void*)EnWeiyer_Inactive },
    { 0xf60, (void*)EnWeiyer_Hurt },
    { 0x1048, (void*)EnWeiyer_Die },
    { 0x10cc, (void*)EnWeiyer_Dead },
    { 0x114c, (void*)EnWeiyer_Stunned },
    { 0x1230, (void*)EnWeiyer_OutOfWater },
    { 0x1424, (void*)EnWeiyer_UpdateDamage },
    { 0x1504, (void*)EnWeiyer_Update },
    { 0x1678, NULL },
    { 0x16a8, (void*)EnWeiyer_Draw },
};
const size_t gGzEnWeiyerFunctionCount = ARRAY_COUNT(gGzEnWeiyerFunctions);
