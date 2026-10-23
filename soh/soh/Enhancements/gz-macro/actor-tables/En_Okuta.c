// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Okuta/z_en_okuta.h"

void EnOkuta_Init(void*, void*);
void EnOkuta_Destroy(void*, void*);
void EnOkuta_SpawnBubbles(void*, void*);
void EnOkuta_SpawnSplash(void*, void*);
void EnOkuta_SpawnRipple(void*, void*);
void EnOkuta_SetupAppear(void*, void*);
void EnOkuta_SetupShoot(void*, void*);
void EnOkuta_SpawnProjectile(void*, void*);
void EnOkuta_WaitToAppear(void*, void*);
void EnOkuta_Appear(void*, void*);
void EnOkuta_Hide(void*, void*);
void EnOkuta_WaitToShoot(void*, void*);
void EnOkuta_Shoot(void*, void*);
void EnOkuta_WaitToDie(void*, void*);
void EnOkuta_Die(void*, void*);
void EnOkuta_Freeze(void*, void*);
void EnOkuta_ProjectileFly(void*, void*);
void EnOkuta_ColliderCheck(void*, void*);
void EnOkuta_Update(void*, void*);
void EnOkuta_Draw(void*, void*);

const GzActorSpan gGzEnOkutaSpans[] = {
    { offsetof(EnOkuta, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnOkuta, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnOkuta, timer), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, numShots), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, jointTable[0].x), offsetof(EnOkuta, jointTable[1].x) - offsetof(EnOkuta, jointTable[0].x), 0x188, 0x6, 38, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, jointTable[0].y), offsetof(EnOkuta, jointTable[1].y) - offsetof(EnOkuta, jointTable[0].y), 0x18a, 0x6, 38, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, jointTable[0].z), offsetof(EnOkuta, jointTable[1].z) - offsetof(EnOkuta, jointTable[0].z), 0x18c, 0x6, 38, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, morphTable[0].x), offsetof(EnOkuta, morphTable[1].x) - offsetof(EnOkuta, morphTable[0].x), 0x26c, 0x6, 38, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, morphTable[0].y), offsetof(EnOkuta, morphTable[1].y) - offsetof(EnOkuta, morphTable[0].y), 0x26e, 0x6, 38, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, morphTable[0].z), offsetof(EnOkuta, morphTable[1].z) - offsetof(EnOkuta, morphTable[0].z), 0x270, 0x6, 38, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, jumpHeight), 0, 0x350, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, headScale.x), 0, 0x354, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, headScale.y), 0, 0x358, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, headScale.z), 0, 0x35c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.base.actor), 0, 0x360, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, collider.base.at), 0, 0x364, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, collider.base.ac), 0, 0x368, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, collider.base.oc), 0, 0x36c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, collider.base.atFlags), 0, 0x370, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.base.acFlags), 0, 0x371, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.base.ocFlags1), 0, 0x372, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.base.ocFlags2), 0, 0x373, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.base.colType), 0, 0x374, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.base.shape), 0, 0x375, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.toucher.dmgFlags), 0, 0x378, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.toucher.effect), 0, 0x37c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.toucher.damage), 0, 0x37d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.bumper.dmgFlags), 0, 0x380, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.bumper.effect), 0, 0x384, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.bumper.defense), 0, 0x385, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.bumper.hitPos.x), 0, 0x386, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.bumper.hitPos.y), 0, 0x388, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.bumper.hitPos.z), 0, 0x38a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.elemType), 0, 0x38c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.toucherFlags), 0, 0x38d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.bumperFlags), 0, 0x38e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.ocElemFlags), 0, 0x38f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.info.atHit), 0, 0x390, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, collider.info.acHit), 0, 0x394, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, collider.info.atHitInfo), 0, 0x398, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, collider.info.acHitInfo), 0, 0x39c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOkuta, collider.dim.radius), 0, 0x3a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.dim.height), 0, 0x3a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.dim.yShift), 0, 0x3a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.dim.pos.x), 0, 0x3a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.dim.pos.y), 0, 0x3a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkuta, collider.dim.pos.z), 0, 0x3aa, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnOkutaSpanCount = ARRAY_COUNT(gGzEnOkutaSpans);

const GzActorFunction gGzEnOkutaFunctions[] = {
    { 0x0, (void*)EnOkuta_Init },
    { 0x20c, (void*)EnOkuta_Destroy },
    { 0x238, (void*)EnOkuta_SpawnBubbles },
    { 0x2e4, NULL },
    { 0x34c, (void*)EnOkuta_SpawnSplash },
    { 0x390, (void*)EnOkuta_SpawnRipple },
    { 0x434, NULL },
    { 0x464, (void*)EnOkuta_SetupAppear },
    { 0x4d4, NULL },
    { 0x514, NULL },
    { 0x574, (void*)EnOkuta_SetupShoot },
    { 0x660, NULL },
    { 0x6e8, NULL },
    { 0x730, NULL },
    { 0x77c, (void*)EnOkuta_SpawnProjectile },
    { 0x8bc, (void*)EnOkuta_WaitToAppear },
    { 0x918, (void*)EnOkuta_Appear },
    { 0xa5c, (void*)EnOkuta_Hide },
    { 0xb5c, (void*)EnOkuta_WaitToShoot },
    { 0xc8c, (void*)EnOkuta_Shoot },
    { 0xe0c, (void*)EnOkuta_WaitToDie },
    { 0xe60, (void*)EnOkuta_Die },
    { 0x1174, (void*)EnOkuta_Freeze },
    { 0x12f0, (void*)EnOkuta_ProjectileFly },
    { 0x153c, NULL },
    { 0x18e4, (void*)EnOkuta_ColliderCheck },
    { 0x1994, (void*)EnOkuta_Update },
    { 0x1d14, NULL },
    { 0x1f9c, NULL },
    { 0x2098, (void*)EnOkuta_Draw },
};
const size_t gGzEnOkutaFunctionCount = ARRAY_COUNT(gGzEnOkutaFunctions);
