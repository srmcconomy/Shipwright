// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Crow/z_en_crow.h"

void EnCrow_Init(void*, void*);
void EnCrow_Destroy(void*, void*);
void EnCrow_SetupDamaged(void*, void*);
void EnCrow_FlyIdle(void*, void*);
void EnCrow_DiveAttack(void*, void*);
void EnCrow_Damaged(void*, void*);
void EnCrow_Die(void*, void*);
void EnCrow_TurnAway(void*, void*);
void EnCrow_Respawn(void*, void*);
void EnCrow_UpdateDamage(void*, void*);
void EnCrow_Update(void*, void*);
void EnCrow_Draw(void*, void*);

const GzActorSpan gGzEnCrowSpans[] = {
    { offsetof(EnCrow, bodyPartsPos[0].x), offsetof(EnCrow, bodyPartsPos[1].x) - offsetof(EnCrow, bodyPartsPos[0].x), 0x13c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, bodyPartsPos[0].y), offsetof(EnCrow, bodyPartsPos[1].y) - offsetof(EnCrow, bodyPartsPos[0].y), 0x140, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, bodyPartsPos[0].z), offsetof(EnCrow, bodyPartsPos[1].z) - offsetof(EnCrow, bodyPartsPos[0].z), 0x144, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.limbCount), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.mode), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.dListCount), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.taper), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.skeleton), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, skelAnime.animation), 0, 0x174, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnCrow, skelAnime.startFrame), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.endFrame), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.animLength), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.curFrame), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.playSpeed), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.jointTable), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, skelAnime.morphTable), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, skelAnime.morphWeight), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.morphRate), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.update.normal), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnCrow, skelAnime.initFlags), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.movementFlags), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.prevRot), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.prevTransl.x), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.prevTransl.y), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.prevTransl.z), 0, 0x1a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.baseTransl.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.baseTransl.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, skelAnime.baseTransl.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, actionFunc), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnCrow, timer), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, aimRotX), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, aimRotY), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, jointTable[0].x), offsetof(EnCrow, jointTable[1].x) - offsetof(EnCrow, jointTable[0].x), 0x1ba, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, jointTable[0].y), offsetof(EnCrow, jointTable[1].y) - offsetof(EnCrow, jointTable[0].y), 0x1bc, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, jointTable[0].z), offsetof(EnCrow, jointTable[1].z) - offsetof(EnCrow, jointTable[0].z), 0x1be, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, morphTable[0].x), offsetof(EnCrow, morphTable[1].x) - offsetof(EnCrow, morphTable[0].x), 0x1f0, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, morphTable[0].y), offsetof(EnCrow, morphTable[1].y) - offsetof(EnCrow, morphTable[0].y), 0x1f2, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, morphTable[0].z), offsetof(EnCrow, morphTable[1].z) - offsetof(EnCrow, morphTable[0].z), 0x1f4, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, collider.base.actor), 0, 0x228, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, collider.base.at), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, collider.base.ac), 0, 0x230, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, collider.base.oc), 0, 0x234, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, collider.base.atFlags), 0, 0x238, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, collider.base.acFlags), 0, 0x239, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, collider.base.ocFlags1), 0, 0x23a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, collider.base.ocFlags2), 0, 0x23b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, collider.base.colType), 0, 0x23c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, collider.base.shape), 0, 0x23d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, collider.count), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, collider.elements), 0, 0x244, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, colliderItems[0].info.toucher.dmgFlags), 0, 0x248, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.toucher.effect), 0, 0x24c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.toucher.damage), 0, 0x24d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.bumper.dmgFlags), 0, 0x250, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.bumper.effect), 0, 0x254, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.bumper.defense), 0, 0x255, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.bumper.hitPos.x), 0, 0x256, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.bumper.hitPos.y), 0, 0x258, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.bumper.hitPos.z), 0, 0x25a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.elemType), 0, 0x25c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.toucherFlags), 0, 0x25d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.bumperFlags), 0, 0x25e, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.ocElemFlags), 0, 0x25f, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].info.atHit), 0, 0x260, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, colliderItems[0].info.acHit), 0, 0x264, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, colliderItems[0].info.atHitInfo), 0, 0x268, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, colliderItems[0].info.acHitInfo), 0, 0x26c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCrow, colliderItems[0].dim.modelSphere.center.x), 0, 0x270, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].dim.modelSphere.center.y), 0, 0x272, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].dim.modelSphere.center.z), 0, 0x274, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].dim.modelSphere.radius), 0, 0x276, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].dim.worldSphere.center.x), 0, 0x278, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].dim.worldSphere.center.y), 0, 0x27a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].dim.worldSphere.center.z), 0, 0x27c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].dim.worldSphere.radius), 0, 0x27e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].dim.scale), 0, 0x280, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCrow, colliderItems[0].dim.limb), 0, 0x284, 0x40, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnCrowSpanCount = ARRAY_COUNT(gGzEnCrowSpans);

const GzActorFunction gGzEnCrowFunctions[] = {
    { 0x0, (void*)EnCrow_Init },
    { 0xf0, (void*)EnCrow_Destroy },
    { 0x11c, NULL },
    { 0x150, NULL },
    { 0x184, (void*)EnCrow_SetupDamaged },
    { 0x4a4, NULL },
    { 0x4bc, NULL },
    { 0x544, NULL },
    { 0x638, (void*)EnCrow_FlyIdle },
    { 0xa64, (void*)EnCrow_DiveAttack },
    { 0xc08, (void*)EnCrow_Damaged },
    { 0xd30, (void*)EnCrow_Die },
    { 0xde0, (void*)EnCrow_TurnAway },
    { 0xe84, (void*)EnCrow_Respawn },
    { 0xf50, (void*)EnCrow_UpdateDamage },
    { 0x1000, (void*)EnCrow_Update },
    { 0x121c, NULL },
    { 0x1308, NULL },
    { 0x13c8, (void*)EnCrow_Draw },
};
const size_t gGzEnCrowFunctionCount = ARRAY_COUNT(gGzEnCrowFunctions);
