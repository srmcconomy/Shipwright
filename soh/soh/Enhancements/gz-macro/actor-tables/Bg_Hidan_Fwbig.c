// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Fwbig/z_bg_hidan_fwbig.h"

void BgHidanFwbig_Init(void*, void*);
void BgHidanFwbig_Destroy(void*, void*);
void BgHidanFwbig_WaitForSwitch(void*, void*);
void BgHidanFwbig_WaitForCs(void*, void*);
void BgHidanFwbig_Rise(void*, void*);
void BgHidanFwbig_Lower(void*, void*);
void BgHidanFwbig_WaitForTimer(void*, void*);
void BgHidanFwbig_WaitForPlayer(void*, void*);
void BgHidanFwbig_Move(void*, void*);
void BgHidanFwbig_MoveCollider(void*, void*);
void BgHidanFwbig_Update(void*, void*);
void BgHidanFwbig_Draw(void*, void*);

const GzActorSpan gGzBgHidanFwbigSpans[] = {
    { offsetof(BgHidanFwbig, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHidanFwbig, direction), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, moveState), 0, 0x141, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, timer), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.base.actor), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFwbig, collider.base.at), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFwbig, collider.base.ac), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFwbig, collider.base.oc), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFwbig, collider.base.atFlags), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.base.acFlags), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.base.ocFlags1), 0, 0x156, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.base.ocFlags2), 0, 0x157, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.base.colType), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.base.shape), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.toucher.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.toucher.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.toucher.damage), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.bumper.dmgFlags), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.bumper.effect), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.bumper.defense), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.bumper.hitPos.x), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.bumper.hitPos.y), 0, 0x16c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.bumper.hitPos.z), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.elemType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.toucherFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.bumperFlags), 0, 0x172, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.ocElemFlags), 0, 0x173, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.info.atHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFwbig, collider.info.acHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFwbig, collider.info.atHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFwbig, collider.info.acHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFwbig, collider.dim.radius), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.dim.height), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.dim.yShift), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.dim.pos.x), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.dim.pos.y), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFwbig, collider.dim.pos.z), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanFwbigSpanCount = ARRAY_COUNT(gGzBgHidanFwbigSpans);

const GzActorFunction gGzBgHidanFwbigFunctions[] = {
    { 0x0, (void*)BgHidanFwbig_Init },
    { 0x1a0, (void*)BgHidanFwbig_Destroy },
    { 0x1cc, NULL },
    { 0x24c, (void*)BgHidanFwbig_WaitForSwitch },
    { 0x2b0, (void*)BgHidanFwbig_WaitForCs },
    { 0x2dc, (void*)BgHidanFwbig_Rise },
    { 0x350, (void*)BgHidanFwbig_Lower },
    { 0x430, (void*)BgHidanFwbig_WaitForTimer },
    { 0x480, (void*)BgHidanFwbig_WaitForPlayer },
    { 0x4e4, (void*)BgHidanFwbig_Move },
    { 0x584, (void*)BgHidanFwbig_MoveCollider },
    { 0x784, (void*)BgHidanFwbig_Update },
    { 0x8fc, (void*)BgHidanFwbig_Draw },
};
const size_t gGzBgHidanFwbigFunctionCount = ARRAY_COUNT(gGzBgHidanFwbigFunctions);
