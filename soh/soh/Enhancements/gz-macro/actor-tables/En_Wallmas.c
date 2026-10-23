// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Wallmas/z_en_wallmas.h"

void EnWallmas_Init(void*, void*);
void EnWallmas_Destroy(void*, void*);
void EnWallmas_TimerInit(void*, void*);
void EnWallmas_SetupDrop(void*, void*);
void EnWallmas_SetupLand(void*, void*);
void EnWallmas_SetupDie(void*, void*);
void EnWallmas_SetupTakePlayer(void*, void*);
void EnWallmas_WaitToDrop(void*, void*);
void EnWallmas_Drop(void*, void*);
void EnWallmas_Land(void*, void*);
void EnWallmas_Stand(void*, void*);
void EnWallmas_Walk(void*, void*);
void EnWallmas_JumpToCeiling(void*, void*);
void EnWallmas_ReturnToCeiling(void*, void*);
void EnWallmas_TakeDamage(void*, void*);
void EnWallmas_Cooldown(void*, void*);
void EnWallmas_Die(void*, void*);
void EnWallmas_TakePlayer(void*, void*);
void EnWallmas_WaitForProximity(void*, void*);
void EnWallmas_WaitForSwitchFlag(void*, void*);
void EnWallmas_Stun(void*, void*);
void EnWallmas_ColUpdate(void*, void*);
void EnWallmas_Update(void*, void*);
void EnWallmas_DrawXlu(void*, void*);
void EnWallmas_Draw(void*, void*);

const GzActorSpan gGzEnWallmasSpans[] = {
    { offsetof(EnWallmas, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnWallmas, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnWallmas, timer), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, switchFlag), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, jointTable[0].x), offsetof(EnWallmas, jointTable[1].x) - offsetof(EnWallmas, jointTable[0].x), 0x188, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, jointTable[0].y), offsetof(EnWallmas, jointTable[1].y) - offsetof(EnWallmas, jointTable[0].y), 0x18a, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, jointTable[0].z), offsetof(EnWallmas, jointTable[1].z) - offsetof(EnWallmas, jointTable[0].z), 0x18c, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, morphTable[0].x), offsetof(EnWallmas, morphTable[1].x) - offsetof(EnWallmas, morphTable[0].x), 0x21e, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, morphTable[0].y), offsetof(EnWallmas, morphTable[1].y) - offsetof(EnWallmas, morphTable[0].y), 0x220, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, morphTable[0].z), offsetof(EnWallmas, morphTable[1].z) - offsetof(EnWallmas, morphTable[0].z), 0x222, 0x6, 25, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, yTarget), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.base.actor), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, collider.base.at), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, collider.base.ac), 0, 0x2c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, collider.base.oc), 0, 0x2c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, collider.base.atFlags), 0, 0x2c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.base.acFlags), 0, 0x2c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.base.ocFlags1), 0, 0x2ca, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.base.ocFlags2), 0, 0x2cb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.base.colType), 0, 0x2cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.base.shape), 0, 0x2cd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.toucher.dmgFlags), 0, 0x2d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.toucher.effect), 0, 0x2d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.toucher.damage), 0, 0x2d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.bumper.dmgFlags), 0, 0x2d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.bumper.effect), 0, 0x2dc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.bumper.defense), 0, 0x2dd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.bumper.hitPos.x), 0, 0x2de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.bumper.hitPos.y), 0, 0x2e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.bumper.hitPos.z), 0, 0x2e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.elemType), 0, 0x2e4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.toucherFlags), 0, 0x2e5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.bumperFlags), 0, 0x2e6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.ocElemFlags), 0, 0x2e7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.info.atHit), 0, 0x2e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, collider.info.acHit), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, collider.info.atHitInfo), 0, 0x2f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, collider.info.acHitInfo), 0, 0x2f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWallmas, collider.dim.radius), 0, 0x2f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.dim.height), 0, 0x2fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.dim.yShift), 0, 0x2fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.dim.pos.x), 0, 0x2fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.dim.pos.y), 0, 0x300, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWallmas, collider.dim.pos.z), 0, 0x302, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnWallmasSpanCount = ARRAY_COUNT(gGzEnWallmasSpans);

const GzActorFunction gGzEnWallmasFunctions[] = {
    { 0x0, (void*)EnWallmas_Init },
    { 0x140, (void*)EnWallmas_Destroy },
    { 0x16c, (void*)EnWallmas_TimerInit },
    { 0x1c8, (void*)EnWallmas_SetupDrop },
    { 0x28c, (void*)EnWallmas_SetupLand },
    { 0x350, NULL },
    { 0x390, NULL },
    { 0x3e0, NULL },
    { 0x428, NULL },
    { 0x4ac, NULL },
    { 0x568, NULL },
    { 0x5bc, (void*)EnWallmas_SetupDie },
    { 0x684, (void*)EnWallmas_SetupTakePlayer },
    { 0x70c, NULL },
    { 0x754, NULL },
    { 0x824, (void*)EnWallmas_WaitToDrop },
    { 0x930, (void*)EnWallmas_Drop },
    { 0x9fc, (void*)EnWallmas_Land },
    { 0xa38, (void*)EnWallmas_Stand },
    { 0xa98, (void*)EnWallmas_Walk },
    { 0xb4c, (void*)EnWallmas_JumpToCeiling },
    { 0xb88, (void*)EnWallmas_ReturnToCeiling },
    { 0xca4, (void*)EnWallmas_TakeDamage },
    { 0xd38, (void*)EnWallmas_Cooldown },
    { 0xd74, (void*)EnWallmas_Die },
    { 0xde8, (void*)EnWallmas_TakePlayer },
    { 0x100c, (void*)EnWallmas_WaitForProximity },
    { 0x1068, (void*)EnWallmas_WaitForSwitchFlag },
    { 0x10b4, (void*)EnWallmas_Stun },
    { 0x1128, (void*)EnWallmas_ColUpdate },
    { 0x1244, (void*)EnWallmas_Update },
    { 0x140c, (void*)EnWallmas_DrawXlu },
    { 0x15a0, NULL },
    { 0x1614, NULL },
    { 0x1704, (void*)EnWallmas_Draw },
};
const size_t gGzEnWallmasFunctionCount = ARRAY_COUNT(gGzEnWallmasFunctions);
