// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bili/z_en_bili.h"

void EnBili_Init(void*, void*);
void EnBili_Destroy(void*, void*);
void EnBili_SetupFrozen(void*, void*);
void EnBili_FloatIdle(void*, void*);
void EnBili_SpawnedFlyApart(void*, void*);
void EnBili_DischargeLightning(void*, void*);
void EnBili_Climb(void*, void*);
void EnBili_ApproachPlayer(void*, void*);
void EnBili_SetNewHomeHeight(void*, void*);
void EnBili_Recoil(void*, void*);
void EnBili_Burnt(void*, void*);
void EnBili_Die(void*, void*);
void EnBili_Stunned(void*, void*);
void EnBili_Frozen(void*, void*);
void EnBili_UpdateDamage(void*, void*);
void EnBili_Update(void*, void*);
void EnBili_Draw(void*, void*);

const GzActorSpan gGzEnBiliSpans[] = {
    { offsetof(EnBili, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnBili, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBili, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBili, tentaclesTexIndex), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, playFlySound), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, timer), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, jointTable[0].x), offsetof(EnBili, jointTable[1].x) - offsetof(EnBili, jointTable[0].x), 0x188, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, jointTable[0].y), offsetof(EnBili, jointTable[1].y) - offsetof(EnBili, jointTable[0].y), 0x18a, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, jointTable[0].z), offsetof(EnBili, jointTable[1].z) - offsetof(EnBili, jointTable[0].z), 0x18c, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, morphTable[0].x), offsetof(EnBili, morphTable[1].x) - offsetof(EnBili, morphTable[0].x), 0x1a6, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, morphTable[0].y), offsetof(EnBili, morphTable[1].y) - offsetof(EnBili, morphTable[0].y), 0x1a8, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, morphTable[0].z), offsetof(EnBili, morphTable[1].z) - offsetof(EnBili, morphTable[0].z), 0x1aa, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.base.actor), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, collider.base.at), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, collider.base.ac), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, collider.base.oc), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, collider.base.atFlags), 0, 0x1d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.base.acFlags), 0, 0x1d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.base.ocFlags1), 0, 0x1d6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.base.ocFlags2), 0, 0x1d7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.base.colType), 0, 0x1d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.base.shape), 0, 0x1d9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.toucher.dmgFlags), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.toucher.effect), 0, 0x1e0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.toucher.damage), 0, 0x1e1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.bumper.dmgFlags), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.bumper.effect), 0, 0x1e8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.bumper.defense), 0, 0x1e9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.bumper.hitPos.x), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.bumper.hitPos.y), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.bumper.hitPos.z), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.elemType), 0, 0x1f0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.toucherFlags), 0, 0x1f1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.bumperFlags), 0, 0x1f2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.ocElemFlags), 0, 0x1f3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.info.atHit), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, collider.info.acHit), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, collider.info.atHitInfo), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, collider.info.acHitInfo), 0, 0x200, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBili, collider.dim.radius), 0, 0x204, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.dim.height), 0, 0x206, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.dim.yShift), 0, 0x208, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.dim.pos.x), 0, 0x20a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.dim.pos.y), 0, 0x20c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBili, collider.dim.pos.z), 0, 0x20e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnBiliSpanCount = ARRAY_COUNT(gGzEnBiliSpans);

const GzActorFunction gGzEnBiliFunctions[] = {
    { 0x0, (void*)EnBili_Init },
    { 0xf8, (void*)EnBili_Destroy },
    { 0x124, NULL },
    { 0x180, NULL },
    { 0x1f8, NULL },
    { 0x254, NULL },
    { 0x2ac, NULL },
    { 0x2cc, NULL },
    { 0x334, NULL },
    { 0x3bc, NULL },
    { 0x45c, NULL },
    { 0x490, NULL },
    { 0x508, (void*)EnBili_SetupFrozen },
    { 0x6e0, NULL },
    { 0x800, NULL },
    { 0x8e8, (void*)EnBili_FloatIdle },
    { 0x9d4, (void*)EnBili_SpawnedFlyApart },
    { 0xa2c, (void*)EnBili_DischargeLightning },
    { 0xc28, (void*)EnBili_Climb },
    { 0xce4, (void*)EnBili_ApproachPlayer },
    { 0xd74, (void*)EnBili_SetNewHomeHeight },
    { 0xdf0, (void*)EnBili_Recoil },
    { 0xe54, (void*)EnBili_Burnt },
    { 0xec8, (void*)EnBili_Die },
    { 0x10f0, (void*)EnBili_Stunned },
    { 0x1150, (void*)EnBili_Frozen },
    { 0x11e0, (void*)EnBili_UpdateDamage },
    { 0x13ac, (void*)EnBili_Update },
    { 0x1580, NULL },
    { 0x1798, NULL },
    { 0x19b8, NULL },
    { 0x1b20, NULL },
    { 0x1c10, (void*)EnBili_Draw },
};
const size_t gGzEnBiliFunctionCount = ARRAY_COUNT(gGzEnBiliFunctions);
