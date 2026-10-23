// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Curtain/z_bg_hidan_curtain.h"

void BgHidanCurtain_Init(void*, void*);
void BgHidanCurtain_Destroy(void*, void*);
void BgHidanCurtain_WaitForSwitchOn(void*, void*);
void BgHidanCurtain_WaitForCutscene(void*, void*);
void BgHidanCurtain_WaitForClear(void*, void*);
void BgHidanCurtain_WaitForSwitchOff(void*, void*);
void BgHidanCurtain_TurnOn(void*, void*);
void BgHidanCurtain_TurnOff(void*, void*);
void BgHidanCurtain_WaitForTimer(void*, void*);
void BgHidanCurtain_Update(void*, void*);
void BgHidanCurtain_Draw(void*, void*);

const GzActorSpan gGzBgHidanCurtainSpans[] = {
    { offsetof(BgHidanCurtain, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHidanCurtain, type), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, treasureFlag), 0, 0x141, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, size), 0, 0x142, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, alpha), 0, 0x143, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, timer), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, texScroll), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.base.actor), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanCurtain, collider.base.at), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanCurtain, collider.base.ac), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanCurtain, collider.base.oc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanCurtain, collider.base.atFlags), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.base.acFlags), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.base.ocFlags1), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.base.ocFlags2), 0, 0x15b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.base.colType), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.base.shape), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.toucher.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.toucher.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.toucher.damage), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.bumper.dmgFlags), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.bumper.effect), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.bumper.defense), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.bumper.hitPos.x), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.bumper.hitPos.y), 0, 0x170, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.bumper.hitPos.z), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.elemType), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.toucherFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.bumperFlags), 0, 0x176, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.ocElemFlags), 0, 0x177, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.info.atHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanCurtain, collider.info.acHit), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanCurtain, collider.info.atHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanCurtain, collider.info.acHitInfo), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanCurtain, collider.dim.radius), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.dim.height), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.dim.yShift), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.dim.pos.x), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.dim.pos.y), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanCurtain, collider.dim.pos.z), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanCurtainSpanCount = ARRAY_COUNT(gGzBgHidanCurtainSpans);

const GzActorFunction gGzBgHidanCurtainFunctions[] = {
    { 0x0, (void*)BgHidanCurtain_Init },
    { 0x214, (void*)BgHidanCurtain_Destroy },
    { 0x240, (void*)BgHidanCurtain_WaitForSwitchOn },
    { 0x2f4, (void*)BgHidanCurtain_WaitForCutscene },
    { 0x320, (void*)BgHidanCurtain_WaitForClear },
    { 0x364, (void*)BgHidanCurtain_WaitForSwitchOff },
    { 0x3a8, (void*)BgHidanCurtain_TurnOn },
    { 0x41c, (void*)BgHidanCurtain_TurnOff },
    { 0x50c, (void*)BgHidanCurtain_WaitForTimer },
    { 0x570, (void*)BgHidanCurtain_Update },
    { 0x804, (void*)BgHidanCurtain_Draw },
};
const size_t gGzBgHidanCurtainFunctionCount = ARRAY_COUNT(gGzBgHidanCurtainFunctions);
