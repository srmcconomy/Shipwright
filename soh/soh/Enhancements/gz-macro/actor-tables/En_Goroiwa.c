// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Goroiwa/z_en_goroiwa.h"

void EnGoroiwa_InitCollider(void*, void*);
s32 EnGoroiwa_Vec3fNormalize(void*, void*);
void EnGoroiwa_SetSpeed(void*, void*);
void EnGoroiwa_FaceNextWaypoint(void*, void*);
void EnGoroiwa_InitPath(void*, void*);
s32 EnGoroiwa_GetAscendDirection(void*, void*);
void EnGoroiwa_SpawnDust(void*, void*);
void EnGoroiwa_SpawnWaterEffects(void*, void*);
s32 EnGoroiwa_MoveAndFall(void*, void*);
s32 EnGoroiwa_Move(void*, void*);
s32 EnGoroiwa_MoveUpToNextWaypoint(void*, void*);
s32 EnGoroiwa_MoveDownToNextWaypoint(void*, void*);
void EnGoroiwa_UpdateRotation(void*, void*);
void EnGoroiwa_NextWaypoint(void*, void*);
void EnGoroiwa_SpawnFragments(void*, void*);
void EnGoroiwa_Init(void*, void*);
void EnGoroiwa_Destroy(void*, void*);
void EnGoroiwa_Roll(void*, void*);
void EnGoroiwa_MoveAndFallToGround(void*, void*);
void EnGoroiwa_Wait(void*, void*);
void EnGoroiwa_MoveUp(void*, void*);
void EnGoroiwa_MoveDown(void*, void*);
void EnGoroiwa_Update(void*, void*);
void EnGoroiwa_Draw(void*, void*);

const GzActorSpan gGzEnGoroiwaSpans[] = {
    { offsetof(EnGoroiwa, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGoroiwa, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoroiwa, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoroiwa, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoroiwa, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoroiwa, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, collider.count), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, collider.elements), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoroiwa, colliderItems[0].info.toucher.dmgFlags), 0, 0x160, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.toucher.effect), 0, 0x164, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.toucher.damage), 0, 0x165, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.bumper.dmgFlags), 0, 0x168, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.bumper.effect), 0, 0x16c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.bumper.defense), 0, 0x16d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.bumper.hitPos.x), 0, 0x16e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.bumper.hitPos.y), 0, 0x170, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.bumper.hitPos.z), 0, 0x172, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.elemType), 0, 0x174, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.toucherFlags), 0, 0x175, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.bumperFlags), 0, 0x176, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.ocElemFlags), 0, 0x177, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].info.atHit), 0, 0x178, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoroiwa, colliderItems[0].info.acHit), 0, 0x17c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoroiwa, colliderItems[0].info.atHitInfo), 0, 0x180, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoroiwa, colliderItems[0].info.acHitInfo), 0, 0x184, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoroiwa, colliderItems[0].dim.modelSphere.center.x), 0, 0x188, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].dim.modelSphere.center.y), 0, 0x18a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].dim.modelSphere.center.z), 0, 0x18c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].dim.modelSphere.radius), 0, 0x18e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].dim.worldSphere.center.x), 0, 0x190, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].dim.worldSphere.center.y), 0, 0x192, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].dim.worldSphere.center.z), 0, 0x194, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].dim.worldSphere.radius), 0, 0x196, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].dim.scale), 0, 0x198, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, colliderItems[0].dim.limb), 0, 0x19c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, prevUnitRollAxis.x), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, prevUnitRollAxis.y), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, prevUnitRollAxis.z), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, prevRollAngleDiff), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, rollRotSpeed), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, waitTimer), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, bounceCount), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, collisionDisabledTimer), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, endWaypoint), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, currentWaypoint), 0, 0x1bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, nextWaypoint), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, pathDirection), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, isInKokiri), 0, 0x1c2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoroiwa, stateFlags), 0, 0x1c3, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnGoroiwaSpanCount = ARRAY_COUNT(gGzEnGoroiwaSpans);

const GzActorFunction gGzEnGoroiwaFunctions[] = {
    { 0x0, NULL },
    { 0x6c, (void*)EnGoroiwa_InitCollider },
    { 0xd4, NULL },
    { 0xf8, (void*)EnGoroiwa_Vec3fNormalize },
    { 0x17c, (void*)EnGoroiwa_SetSpeed },
    { 0x1a4, (void*)EnGoroiwa_FaceNextWaypoint },
    { 0x27c, NULL },
    { 0x3d8, NULL },
    { 0x48c, NULL },
    { 0x4bc, NULL },
    { 0x4e4, (void*)EnGoroiwa_InitPath },
    { 0x524, NULL },
    { 0x5c8, NULL },
    { 0x5e4, (void*)EnGoroiwa_GetAscendDirection },
    { 0x6a8, (void*)EnGoroiwa_SpawnDust },
    { 0x898, (void*)EnGoroiwa_SpawnWaterEffects },
    { 0x9cc, (void*)EnGoroiwa_MoveAndFall },
    { 0xb00, (void*)EnGoroiwa_Move },
    { 0xd2c, (void*)EnGoroiwa_MoveUpToNextWaypoint },
    { 0xe4c, (void*)EnGoroiwa_MoveDownToNextWaypoint },
    { 0x11ac, (void*)EnGoroiwa_UpdateRotation },
    { 0x134c, (void*)EnGoroiwa_NextWaypoint },
    { 0x13d4, (void*)EnGoroiwa_SpawnFragments },
    { 0x16f0, (void*)EnGoroiwa_Init },
    { 0x1820, (void*)EnGoroiwa_Destroy },
    { 0x184c, NULL },
    { 0x188c, (void*)EnGoroiwa_Roll },
    { 0x1b10, NULL },
    { 0x1b84, (void*)EnGoroiwa_MoveAndFallToGround },
    { 0x1c24, NULL },
    { 0x1c80, (void*)EnGoroiwa_Wait },
    { 0x1cc0, NULL },
    { 0x1d10, (void*)EnGoroiwa_MoveUp },
    { 0x1dd0, NULL },
    { 0x1e3c, (void*)EnGoroiwa_MoveDown },
    { 0x1f04, (void*)EnGoroiwa_Update },
    { 0x2064, (void*)EnGoroiwa_Draw },
};
const size_t gGzEnGoroiwaFunctionCount = ARRAY_COUNT(gGzEnGoroiwaFunctions);
