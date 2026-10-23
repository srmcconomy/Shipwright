// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Rock/z_bg_hidan_rock.h"

void BgHidanRock_Init(void*, void*);
void BgHidanRock_Destroy(void*, void*);
void func_8088B268(void*, void*);
void func_8088B5F4(void*, void*);
void func_8088B634(void*, void*);
void func_8088B69C(void*, void*);
void func_8088B79C(void*, void*);
void func_8088B90C(void*, void*);
void func_8088B954(void*, void*);
void func_8088B990(void*, void*);
void BgHidanRock_Update(void*, void*);
void func_8088BC40(void*, void*);
void BgHidanRock_Draw(void*, void*);

const GzActorSpan gGzBgHidanRockSpans[] = {
    { offsetof(BgHidanRock, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHidanRock, type), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, unk_169), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, timer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, unk_16C), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, unk_170.x), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, unk_170.y), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, unk_170.z), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.base.actor), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRock, collider.base.at), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRock, collider.base.ac), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRock, collider.base.oc), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRock, collider.base.atFlags), 0, 0x17c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.base.acFlags), 0, 0x17d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.base.ocFlags1), 0, 0x17e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.base.ocFlags2), 0, 0x17f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.base.colType), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.base.shape), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.toucher.dmgFlags), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.toucher.effect), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.toucher.damage), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.bumper.dmgFlags), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.bumper.effect), 0, 0x190, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.bumper.defense), 0, 0x191, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.bumper.hitPos.x), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.bumper.hitPos.y), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.bumper.hitPos.z), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.elemType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.toucherFlags), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.bumperFlags), 0, 0x19a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.ocElemFlags), 0, 0x19b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.info.atHit), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRock, collider.info.acHit), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRock, collider.info.atHitInfo), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRock, collider.info.acHitInfo), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRock, collider.dim.radius), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.dim.height), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.dim.yShift), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.dim.pos.x), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.dim.pos.y), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRock, collider.dim.pos.z), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanRockSpanCount = ARRAY_COUNT(gGzBgHidanRockSpans);

const GzActorFunction gGzBgHidanRockFunctions[] = {
    { 0x0, (void*)BgHidanRock_Init },
    { 0x17c, (void*)BgHidanRock_Destroy },
    { 0x1d0, NULL },
    { 0x1f0, (void*)func_8088B268 },
    { 0x580, (void*)func_8088B5F4 },
    { 0x5c0, (void*)func_8088B634 },
    { 0x62c, (void*)func_8088B69C },
    { 0x72c, (void*)func_8088B79C },
    { 0x89c, (void*)func_8088B90C },
    { 0x8e4, (void*)func_8088B954 },
    { 0x920, (void*)func_8088B990 },
    { 0xb0c, (void*)BgHidanRock_Update },
    { 0xbdc, (void*)func_8088BC40 },
    { 0xdd8, (void*)BgHidanRock_Draw },
};
const size_t gGzBgHidanRockFunctionCount = ARRAY_COUNT(gGzBgHidanRockFunctions);
