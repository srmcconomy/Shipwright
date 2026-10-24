// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Fish/z_en_fish.h"

void EnFish_Init(void*, void*);
void EnFish_Destroy(void*, void*);
s32 EnFish_InBottleRange(void*, void*);
s32 EnFish_CheckXZDistanceToPlayer(void*, void*);
void EnFish_Respawning_SlowDown(void*, void*);
void EnFish_Respawning_FollowChild(void*, void*);
void EnFish_Respawning_FleePlayer(void*, void*);
void EnFish_Respawning_ApproachPlayer(void*, void*);
void EnFish_Dropped_Fall(void*, void*);
void EnFish_Dropped_FlopOnGround(void*, void*);
void EnFish_Dropped_SwimAway(void*, void*);
void EnFish_Unique_SwimIdle(void*, void*);
void EnFish_Cutscene_FlopOnGround(void*, void*);
void EnFish_Cutscene_WiggleFlyingThroughAir(void*, void*);
void EnFish_UpdateCutscene(void*, void*);
void EnFish_OrdinaryUpdate(void*, void*);
void EnFish_RespawningUpdate(void*, void*);
void EnFish_Update(void*, void*);
void EnFish_Draw(void*, void*);

const GzActorSpan gGzEnFishSpans[] = {
    { offsetof(EnFish, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, collider.count), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, collider.elements), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, colliderItems[0].info.toucher.dmgFlags), 0, 0x15c, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.toucher.effect), 0, 0x160, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.toucher.damage), 0, 0x161, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.bumper.dmgFlags), 0, 0x164, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.bumper.effect), 0, 0x168, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.bumper.defense), 0, 0x169, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.bumper.hitPos.x), 0, 0x16a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.bumper.hitPos.y), 0, 0x16c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.bumper.hitPos.z), 0, 0x16e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.elemType), 0, 0x170, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.toucherFlags), 0, 0x171, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.bumperFlags), 0, 0x172, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.ocElemFlags), 0, 0x173, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].info.atHit), 0, 0x174, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, colliderItems[0].info.acHit), 0, 0x178, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, colliderItems[0].info.atHitInfo), 0, 0x17c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, colliderItems[0].info.acHitInfo), 0, 0x180, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, colliderItems[0].dim.modelSphere.center.x), 0, 0x184, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].dim.modelSphere.center.y), 0, 0x186, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].dim.modelSphere.center.z), 0, 0x188, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].dim.modelSphere.radius), 0, 0x18a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].dim.worldSphere.center.x), 0, 0x18c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].dim.worldSphere.center.y), 0, 0x18e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].dim.worldSphere.center.z), 0, 0x190, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].dim.worldSphere.radius), 0, 0x192, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].dim.scale), 0, 0x194, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, colliderItems[0].dim.limb), 0, 0x198, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.limbCount), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.mode), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.dListCount), 0, 0x19e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.taper), 0, 0x19f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.skeleton), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, skelAnime.animation), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnFish, skelAnime.startFrame), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.endFrame), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.animLength), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.curFrame), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.playSpeed), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.jointTable), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, skelAnime.morphTable), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFish, skelAnime.morphWeight), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.morphRate), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.update.normal), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFish, skelAnime.initFlags), 0, 0x1d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.movementFlags), 0, 0x1d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.prevRot), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.prevTransl.x), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.prevTransl.y), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.prevTransl.z), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.baseTransl.x), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.baseTransl.y), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, skelAnime.baseTransl.z), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, jointTable[0].x), offsetof(EnFish, jointTable[1].x) - offsetof(EnFish, jointTable[0].x), 0x1e0, 0x6, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, jointTable[0].y), offsetof(EnFish, jointTable[1].y) - offsetof(EnFish, jointTable[0].y), 0x1e2, 0x6, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, jointTable[0].z), offsetof(EnFish, jointTable[1].z) - offsetof(EnFish, jointTable[0].z), 0x1e4, 0x6, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, morphTable[0].x), offsetof(EnFish, morphTable[1].x) - offsetof(EnFish, morphTable[0].x), 0x20a, 0x6, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, morphTable[0].y), offsetof(EnFish, morphTable[1].y) - offsetof(EnFish, morphTable[0].y), 0x20c, 0x6, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, morphTable[0].z), offsetof(EnFish, morphTable[1].z) - offsetof(EnFish, morphTable[0].z), 0x20e, 0x6, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, actionFunc), 0, 0x234, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFish, timer), 0, 0x238, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, respawnTimer), 0, 0x23a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, slowPhase), 0, 0x23c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, fastPhase), 0, 0x23e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFish, unk_250), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnFishSpanCount = ARRAY_COUNT(gGzEnFishSpans);

const GzActorFunction gGzEnFishFunctions[] = {
    { 0x0, NULL },
    { 0x30, NULL },
    { 0x94, NULL },
    { 0xf8, NULL },
    { 0x12c, NULL },
    { 0x1c4, NULL },
    { 0x1ec, (void*)EnFish_Init },
    { 0x330, (void*)EnFish_Destroy },
    { 0x35c, NULL },
    { 0x414, (void*)EnFish_InBottleRange },
    { 0x504, (void*)EnFish_CheckXZDistanceToPlayer },
    { 0x534, NULL },
    { 0x58c, (void*)EnFish_Respawning_SlowDown },
    { 0x680, NULL },
    { 0x6d8, (void*)EnFish_Respawning_FollowChild },
    { 0x86c, NULL },
    { 0x8c4, (void*)EnFish_Respawning_FleePlayer },
    { 0xab4, NULL },
    { 0xb0c, (void*)EnFish_Respawning_ApproachPlayer },
    { 0xcd0, NULL },
    { 0xd30, (void*)EnFish_Dropped_Fall },
    { 0xe38, NULL },
    { 0xf7c, (void*)EnFish_Dropped_FlopOnGround },
    { 0x1158, NULL },
    { 0x11cc, (void*)EnFish_Dropped_SwimAway },
    { 0x1394, NULL },
    { 0x13ec, (void*)EnFish_Unique_SwimIdle },
    { 0x1614, (void*)EnFish_Cutscene_FlopOnGround },
    { 0x1744, (void*)EnFish_Cutscene_WiggleFlyingThroughAir },
    { 0x17e0, (void*)EnFish_UpdateCutscene },
    { 0x19a0, (void*)EnFish_OrdinaryUpdate },
    { 0x1b24, (void*)EnFish_RespawningUpdate },
    { 0x1c38, (void*)EnFish_Update },
    { 0x1ce4, (void*)EnFish_Draw },
};
const size_t gGzEnFishFunctionCount = ARRAY_COUNT(gGzEnFishFunctions);
