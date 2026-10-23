// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Nutsball/z_en_nutsball.h"

void EnNutsball_Init(void*, void*);
void EnNutsball_Destroy(void*, void*);
void func_80ABBB34(void*, void*);
void func_80ABBBA8(void*, void*);
void EnNutsball_Update(void*, void*);
void EnNutsball_Draw(void*, void*);

const GzActorSpan gGzEnNutsballSpans[] = {
    { offsetof(EnNutsball, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnNutsball, objBankIndex), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, timer), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.base.actor), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNutsball, collider.base.at), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNutsball, collider.base.ac), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNutsball, collider.base.oc), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNutsball, collider.base.atFlags), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.base.acFlags), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.base.ocFlags1), 0, 0x156, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.base.ocFlags2), 0, 0x157, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.base.colType), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.base.shape), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.toucher.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.toucher.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.toucher.damage), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.bumper.dmgFlags), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.bumper.effect), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.bumper.defense), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.bumper.hitPos.x), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.bumper.hitPos.y), 0, 0x16c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.bumper.hitPos.z), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.elemType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.toucherFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.bumperFlags), 0, 0x172, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.ocElemFlags), 0, 0x173, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.info.atHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNutsball, collider.info.acHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNutsball, collider.info.atHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNutsball, collider.info.acHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNutsball, collider.dim.radius), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.dim.height), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.dim.yShift), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.dim.pos.x), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.dim.pos.y), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNutsball, collider.dim.pos.z), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnNutsballSpanCount = ARRAY_COUNT(gGzEnNutsballSpans);

const GzActorFunction gGzEnNutsballFunctions[] = {
    { 0x0, (void*)EnNutsball_Init },
    { 0xbc, (void*)EnNutsball_Destroy },
    { 0xe8, (void*)func_80ABBB34 },
    { 0x160, (void*)func_80ABBBA8 },
    { 0x330, (void*)EnNutsball_Update },
    { 0x44c, (void*)EnNutsball_Draw },
};
const size_t gGzEnNutsballFunctionCount = ARRAY_COUNT(gGzEnNutsballFunctions);
