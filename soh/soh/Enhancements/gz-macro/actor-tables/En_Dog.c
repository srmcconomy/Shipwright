// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Dog/z_en_dog.h"

void EnDog_Init(void*, void*);
void EnDog_Destroy(void*, void*);
void EnDog_FollowPath(void*, void*);
void EnDog_ChooseMovement(void*, void*);
void EnDog_FollowPlayer(void*, void*);
void EnDog_RunAway(void*, void*);
void EnDog_FaceLink(void*, void*);
void EnDog_Wait(void*, void*);
void EnDog_Update(void*, void*);
void EnDog_Draw(void*, void*);

const GzActorSpan gGzEnDogSpans[] = {
    { offsetof(EnDog, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDog, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDog, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, path), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDog, reverse), 0, 0x1d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDog, waypoint), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, unusedAngle), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, pad1), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, behaviorTimer), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, pad2), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, nextBehavior), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, behavior), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, jointTable[0].x), offsetof(EnDog, jointTable[1].x) - offsetof(EnDog, jointTable[0].x), 0x1e4, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, jointTable[0].y), offsetof(EnDog, jointTable[1].y) - offsetof(EnDog, jointTable[0].y), 0x1e6, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, jointTable[0].z), offsetof(EnDog, jointTable[1].z) - offsetof(EnDog, jointTable[0].z), 0x1e8, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, morphTable[0].x), offsetof(EnDog, morphTable[1].x) - offsetof(EnDog, morphTable[0].x), 0x232, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, morphTable[0].y), offsetof(EnDog, morphTable[1].y) - offsetof(EnDog, morphTable[0].y), 0x234, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnDog, morphTable[0].z), offsetof(EnDog, morphTable[1].z) - offsetof(EnDog, morphTable[0].z), 0x236, 0x6, 13, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnDogSpanCount = ARRAY_COUNT(gGzEnDogSpans);

const GzActorFunction gGzEnDogFunctions[] = {
    { 0x0, NULL },
    { 0x68, NULL },
    { 0xd0, NULL },
    { 0x138, NULL },
    { 0x2d0, NULL },
    { 0x354, NULL },
    { 0x3e0, NULL },
    { 0x484, (void*)EnDog_Init },
    { 0x6d4, (void*)EnDog_Destroy },
    { 0x700, (void*)EnDog_FollowPath },
    { 0x898, (void*)EnDog_ChooseMovement },
    { 0x988, (void*)EnDog_FollowPlayer },
    { 0xb08, (void*)EnDog_RunAway },
    { 0xbac, (void*)EnDog_FaceLink },
    { 0xcb4, (void*)EnDog_Wait },
    { 0xd0c, (void*)EnDog_Update },
    { 0xdd8, NULL },
    { 0xdf4, NULL },
    { 0xe0c, (void*)EnDog_Draw },
};
const size_t gGzEnDogFunctionCount = ARRAY_COUNT(gGzEnDogFunctions);
