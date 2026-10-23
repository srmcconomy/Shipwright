// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Fire_Rock/z_en_fire_rock.h"

void EnFireRock_Init(void*, void*);
void EnFireRock_Destroy(void*, void*);
void EnFireRock_Fall(void*, void*);
void EnFireRock_SpawnMoreBrokenPieces(void*, void*);
void FireRock_WaitSpawnRocksFromCeiling(void*, void*);
void FireRock_WaitOnFloor(void*, void*);
void EnFireRock_Update(void*, void*);
void EnFireRock_Draw(void*, void*);

const GzActorSpan gGzEnFireRockSpans[] = {
    { offsetof(EnFireRock, angularVelocity.x), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, angularVelocity.y), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, angularVelocity.z), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, rockRotation.x), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, rockRotation.y), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, rockRotation.z), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, unk164[0]), offsetof(EnFireRock, unk164[1]) - offsetof(EnFireRock, unk164[0]), 0x154, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, actionFunc), 0, 0x158, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFireRock, scale), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, relativePos.x), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, relativePos.y), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, relativePos.z), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, unk_17C.x), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, unk_17C.y), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, unk_17C.z), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, timer), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, timer2), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, type), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, playerNearby), 0, 0x17e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, spawner), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFireRock, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFireRock, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFireRock, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFireRock, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFireRock, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFireRock, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFireRock, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFireRock, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFireRock, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFireRock, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnFireRockSpanCount = ARRAY_COUNT(gGzEnFireRockSpans);

const GzActorFunction gGzEnFireRockFunctions[] = {
    { 0x0, (void*)EnFireRock_Init },
    { 0x3f0, (void*)EnFireRock_Destroy },
    { 0x454, (void*)EnFireRock_Fall },
    { 0x7a8, (void*)EnFireRock_SpawnMoreBrokenPieces },
    { 0x928, (void*)FireRock_WaitSpawnRocksFromCeiling },
    { 0xa18, (void*)FireRock_WaitOnFloor },
    { 0xafc, (void*)EnFireRock_Update },
    { 0xda8, (void*)EnFireRock_Draw },
};
const size_t gGzEnFireRockFunctionCount = ARRAY_COUNT(gGzEnFireRockFunctions);
