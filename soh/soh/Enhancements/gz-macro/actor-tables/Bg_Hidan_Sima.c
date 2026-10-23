// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Sima/z_bg_hidan_sima.h"

void BgHidanSima_Init(void*, void*);
void BgHidanSima_Destroy(void*, void*);
void func_8088E518(void*, void*);
void func_8088E5D0(void*, void*);
void func_8088E6D0(void*, void*);
void func_8088E760(void*, void*);
void func_8088E7A8(void*, void*);
void BgHidanSima_Update(void*, void*);
void BgHidanSima_Draw(void*, void*);

const GzActorSpan gGzBgHidanSimaSpans[] = {
    { offsetof(BgHidanSima, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHidanSima, timer), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, collider.base.actor), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSima, collider.base.at), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSima, collider.base.ac), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSima, collider.base.oc), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSima, collider.base.atFlags), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, collider.base.acFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, collider.base.ocFlags1), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, collider.base.ocFlags2), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, collider.base.colType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, collider.base.shape), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, collider.count), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, collider.elements), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSima, elements[0].info.toucher.dmgFlags), offsetof(BgHidanSima, elements[1].info.toucher.dmgFlags) - offsetof(BgHidanSima, elements[0].info.toucher.dmgFlags), 0x17c, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.toucher.effect), offsetof(BgHidanSima, elements[1].info.toucher.effect) - offsetof(BgHidanSima, elements[0].info.toucher.effect), 0x180, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.toucher.damage), offsetof(BgHidanSima, elements[1].info.toucher.damage) - offsetof(BgHidanSima, elements[0].info.toucher.damage), 0x181, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.bumper.dmgFlags), offsetof(BgHidanSima, elements[1].info.bumper.dmgFlags) - offsetof(BgHidanSima, elements[0].info.bumper.dmgFlags), 0x184, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.bumper.effect), offsetof(BgHidanSima, elements[1].info.bumper.effect) - offsetof(BgHidanSima, elements[0].info.bumper.effect), 0x188, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.bumper.defense), offsetof(BgHidanSima, elements[1].info.bumper.defense) - offsetof(BgHidanSima, elements[0].info.bumper.defense), 0x189, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.bumper.hitPos.x), offsetof(BgHidanSima, elements[1].info.bumper.hitPos.x) - offsetof(BgHidanSima, elements[0].info.bumper.hitPos.x), 0x18a, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.bumper.hitPos.y), offsetof(BgHidanSima, elements[1].info.bumper.hitPos.y) - offsetof(BgHidanSima, elements[0].info.bumper.hitPos.y), 0x18c, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.bumper.hitPos.z), offsetof(BgHidanSima, elements[1].info.bumper.hitPos.z) - offsetof(BgHidanSima, elements[0].info.bumper.hitPos.z), 0x18e, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.elemType), offsetof(BgHidanSima, elements[1].info.elemType) - offsetof(BgHidanSima, elements[0].info.elemType), 0x190, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.toucherFlags), offsetof(BgHidanSima, elements[1].info.toucherFlags) - offsetof(BgHidanSima, elements[0].info.toucherFlags), 0x191, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.bumperFlags), offsetof(BgHidanSima, elements[1].info.bumperFlags) - offsetof(BgHidanSima, elements[0].info.bumperFlags), 0x192, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.ocElemFlags), offsetof(BgHidanSima, elements[1].info.ocElemFlags) - offsetof(BgHidanSima, elements[0].info.ocElemFlags), 0x193, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].info.atHit), offsetof(BgHidanSima, elements[1].info.atHit) - offsetof(BgHidanSima, elements[0].info.atHit), 0x194, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSima, elements[0].info.acHit), offsetof(BgHidanSima, elements[1].info.acHit) - offsetof(BgHidanSima, elements[0].info.acHit), 0x198, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSima, elements[0].info.atHitInfo), offsetof(BgHidanSima, elements[1].info.atHitInfo) - offsetof(BgHidanSima, elements[0].info.atHitInfo), 0x19c, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSima, elements[0].info.acHitInfo), offsetof(BgHidanSima, elements[1].info.acHitInfo) - offsetof(BgHidanSima, elements[0].info.acHitInfo), 0x1a0, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSima, elements[0].dim.modelSphere.center.x), offsetof(BgHidanSima, elements[1].dim.modelSphere.center.x) - offsetof(BgHidanSima, elements[0].dim.modelSphere.center.x), 0x1a4, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].dim.modelSphere.center.y), offsetof(BgHidanSima, elements[1].dim.modelSphere.center.y) - offsetof(BgHidanSima, elements[0].dim.modelSphere.center.y), 0x1a6, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].dim.modelSphere.center.z), offsetof(BgHidanSima, elements[1].dim.modelSphere.center.z) - offsetof(BgHidanSima, elements[0].dim.modelSphere.center.z), 0x1a8, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].dim.modelSphere.radius), offsetof(BgHidanSima, elements[1].dim.modelSphere.radius) - offsetof(BgHidanSima, elements[0].dim.modelSphere.radius), 0x1aa, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].dim.worldSphere.center.x), offsetof(BgHidanSima, elements[1].dim.worldSphere.center.x) - offsetof(BgHidanSima, elements[0].dim.worldSphere.center.x), 0x1ac, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].dim.worldSphere.center.y), offsetof(BgHidanSima, elements[1].dim.worldSphere.center.y) - offsetof(BgHidanSima, elements[0].dim.worldSphere.center.y), 0x1ae, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].dim.worldSphere.center.z), offsetof(BgHidanSima, elements[1].dim.worldSphere.center.z) - offsetof(BgHidanSima, elements[0].dim.worldSphere.center.z), 0x1b0, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].dim.worldSphere.radius), offsetof(BgHidanSima, elements[1].dim.worldSphere.radius) - offsetof(BgHidanSima, elements[0].dim.worldSphere.radius), 0x1b2, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].dim.scale), offsetof(BgHidanSima, elements[1].dim.scale) - offsetof(BgHidanSima, elements[0].dim.scale), 0x1b4, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanSima, elements[0].dim.limb), offsetof(BgHidanSima, elements[1].dim.limb) - offsetof(BgHidanSima, elements[0].dim.limb), 0x1b8, 0x40, 2, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanSimaSpanCount = ARRAY_COUNT(gGzBgHidanSimaSpans);

const GzActorFunction gGzBgHidanSimaFunctions[] = {
    { 0x0, (void*)BgHidanSima_Init },
    { 0x104, (void*)BgHidanSima_Destroy },
    { 0x14c, (void*)func_8088E518 },
    { 0x208, (void*)func_8088E5D0 },
    { 0x30c, (void*)func_8088E6D0 },
    { 0x3a4, (void*)func_8088E760 },
    { 0x3ec, (void*)func_8088E7A8 },
    { 0x550, NULL },
    { 0x6b0, (void*)BgHidanSima_Update },
    { 0x7a0, NULL },
    { 0xc38, (void*)BgHidanSima_Draw },
};
const size_t gGzBgHidanSimaFunctionCount = ARRAY_COUNT(gGzBgHidanSimaFunctions);
