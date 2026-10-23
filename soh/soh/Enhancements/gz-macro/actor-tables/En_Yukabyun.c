// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Yukabyun/z_en_yukabyun.h"

void EnYukabyun_Init(void*, void*);
void EnYukabyun_Destroy(void*, void*);
void func_80B43A94(void*, void*);
void func_80B43AD4(void*, void*);
void func_80B43B6C(void*, void*);
void EnYukabyun_Break(void*, void*);
void EnYukabyun_Update(void*, void*);
void EnYukabyun_Draw(void*, void*);

const GzActorSpan gGzEnYukabyunSpans[] = {
    { offsetof(EnYukabyun, actionfunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnYukabyun, unk_150), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, unk_152), 0, 0x142, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.base.actor), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYukabyun, collider.base.at), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYukabyun, collider.base.ac), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYukabyun, collider.base.oc), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYukabyun, collider.base.atFlags), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.base.acFlags), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.base.ocFlags1), 0, 0x156, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.base.ocFlags2), 0, 0x157, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.base.colType), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.base.shape), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.toucher.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.toucher.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.toucher.damage), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.bumper.dmgFlags), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.bumper.effect), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.bumper.defense), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.bumper.hitPos.x), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.bumper.hitPos.y), 0, 0x16c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.bumper.hitPos.z), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.elemType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.toucherFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.bumperFlags), 0, 0x172, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.ocElemFlags), 0, 0x173, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.info.atHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYukabyun, collider.info.acHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYukabyun, collider.info.atHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYukabyun, collider.info.acHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYukabyun, collider.dim.radius), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.dim.height), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.dim.yShift), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.dim.pos.x), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.dim.pos.y), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYukabyun, collider.dim.pos.z), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnYukabyunSpanCount = ARRAY_COUNT(gGzEnYukabyunSpans);

const GzActorFunction gGzEnYukabyunFunctions[] = {
    { 0x0, (void*)EnYukabyun_Init },
    { 0xb0, (void*)EnYukabyun_Destroy },
    { 0xdc, (void*)func_80B43A94 },
    { 0x11c, (void*)func_80B43AD4 },
    { 0x1b4, (void*)func_80B43B6C },
    { 0x214, (void*)EnYukabyun_Break },
    { 0x288, (void*)EnYukabyun_Update },
    { 0x428, (void*)EnYukabyun_Draw },
};
const size_t gGzEnYukabyunFunctionCount = ARRAY_COUNT(gGzEnYukabyunFunctions);
