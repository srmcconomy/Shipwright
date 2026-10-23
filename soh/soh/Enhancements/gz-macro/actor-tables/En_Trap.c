// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Trap/z_en_trap.h"

void EnTrap_Init(void*, void*);
void EnTrap_Destroy(void*, void*);
void EnTrap_Update(void*, void*);
void EnTrap_Draw(void*, void*);

const GzActorSpan gGzEnTrapSpans[] = {
    { offsetof(EnTrap, playerDmgTimer), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, upperParams), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTrap, genericVar1), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTrap, genericVar2), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosLeft.x), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosLeft.y), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosLeft.z), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosRight.x), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosRight.y), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosRight.z), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosFwd.x), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosFwd.y), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosFwd.z), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosBack.x), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosBack.y), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, targetPosBack.z), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, moveSpeedLeftRight.x), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, moveSpeedLeftRight.y), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, moveSpeedLeftRight.z), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, moveSpeedForwardBack.x), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, moveSpeedForwardBack.y), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, moveSpeedForwardBack.z), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.base.actor), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTrap, collider.base.at), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTrap, collider.base.ac), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTrap, collider.base.oc), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTrap, collider.base.atFlags), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.base.acFlags), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.base.ocFlags1), 0, 0x1a2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.base.ocFlags2), 0, 0x1a3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.base.colType), 0, 0x1a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.base.shape), 0, 0x1a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.toucher.dmgFlags), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.toucher.effect), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.toucher.damage), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.bumper.dmgFlags), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.bumper.effect), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.bumper.defense), 0, 0x1b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.bumper.hitPos.x), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.bumper.hitPos.y), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.bumper.hitPos.z), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.elemType), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.toucherFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.bumperFlags), 0, 0x1be, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.ocElemFlags), 0, 0x1bf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.info.atHit), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTrap, collider.info.acHit), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTrap, collider.info.atHitInfo), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTrap, collider.info.acHitInfo), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnTrap, collider.dim.radius), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.dim.height), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.dim.yShift), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.dim.pos.x), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.dim.pos.y), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnTrap, collider.dim.pos.z), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnTrapSpanCount = ARRAY_COUNT(gGzEnTrapSpans);

const GzActorFunction gGzEnTrapFunctions[] = {
    { 0x0, (void*)EnTrap_Init },
    { 0x3bc, (void*)EnTrap_Destroy },
    { 0x3e8, (void*)EnTrap_Update },
    { 0x117c, (void*)EnTrap_Draw },
};
const size_t gGzEnTrapFunctionCount = ARRAY_COUNT(gGzEnTrapFunctions);
