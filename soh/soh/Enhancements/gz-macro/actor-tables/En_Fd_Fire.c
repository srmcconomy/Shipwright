// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Fd_Fire/z_en_fd_fire.h"

void EnFdFire_UpdatePos(void*, void*);
void EnFdFire_Init(void*, void*);
void EnFdFire_Destroy(void*, void*);
void func_80A0E70C(void*, void*);
void EnFdFire_WaitToDie(void*, void*);
void EnFdFire_DanceTowardsPlayer(void*, void*);
void EnFdFire_Disappear(void*, void*);
void EnFdFire_Update(void*, void*);
void EnFdFire_Draw(void*, void*);

const GzActorSpan gGzEnFdFireSpans[] = {
    { offsetof(EnFdFire, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFdFire, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFdFire, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFdFire, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFdFire, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFdFire, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.toucher.dmgFlags), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.toucher.effect), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.toucher.damage), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.bumper.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.bumper.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.bumper.defense), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.bumper.hitPos.x), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.bumper.hitPos.y), 0, 0x168, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.bumper.hitPos.z), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.elemType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.toucherFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.bumperFlags), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.ocElemFlags), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.info.atHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFdFire, collider.info.acHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFdFire, collider.info.atHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFdFire, collider.info.acHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFdFire, collider.dim.radius), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.dim.height), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.dim.yShift), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.dim.pos.x), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.dim.pos.y), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, collider.dim.pos.z), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, spawnRadius), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, scale), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, unk_1A4[0]), offsetof(EnFdFire, unk_1A4[1]) - offsetof(EnFdFire, unk_1A4[0]), 0x194, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, deathTimer), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFdFire, tile2Y), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnFdFireSpanCount = ARRAY_COUNT(gGzEnFdFireSpans);

const GzActorFunction gGzEnFdFireFunctions[] = {
    { 0x0, (void*)EnFdFire_UpdatePos },
    { 0xc8, NULL },
    { 0x12c, (void*)EnFdFire_Init },
    { 0x234, (void*)EnFdFire_Destroy },
    { 0x260, (void*)func_80A0E70C },
    { 0x39c, (void*)EnFdFire_WaitToDie },
    { 0x3d8, (void*)EnFdFire_DanceTowardsPlayer },
    { 0x588, (void*)EnFdFire_Disappear },
    { 0x63c, (void*)EnFdFire_Update },
    { 0x738, (void*)EnFdFire_Draw },
};
const size_t gGzEnFdFireFunctionCount = ARRAY_COUNT(gGzEnFdFireFunctions);
