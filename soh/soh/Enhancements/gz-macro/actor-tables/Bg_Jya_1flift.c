// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_1flift/z_bg_jya_1flift.h"

void BgJya1flift_InitCollision(void*, void*);
void BgJya1flift_Init(void*, void*);
void BgJya1flift_Destroy(void*, void*);
void BgJya1flift_WaitForSwitch(void*, void*);
void BgJya1flift_DoNothing(void*, void*);
void BgJya1flift_Move(void*, void*);
void BgJya1flift_DelayMove(void*, void*);
void BgJya1flift_Update(void*, void*);
void BgJya1flift_Draw(void*, void*);

const GzActorSpan gGzBgJya1fliftSpans[] = {
    { offsetof(BgJya1flift, collider.base.actor), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJya1flift, collider.base.at), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJya1flift, collider.base.ac), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJya1flift, collider.base.oc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJya1flift, collider.base.atFlags), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.base.acFlags), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.base.ocFlags1), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.base.ocFlags2), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.base.colType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.base.shape), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.toucher.dmgFlags), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.toucher.effect), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.toucher.damage), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.bumper.dmgFlags), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.bumper.effect), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.bumper.defense), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.bumper.hitPos.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.bumper.hitPos.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.bumper.hitPos.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.elemType), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.toucherFlags), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.bumperFlags), 0, 0x182, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.ocElemFlags), 0, 0x183, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.info.atHit), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJya1flift, collider.info.acHit), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJya1flift, collider.info.atHitInfo), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJya1flift, collider.info.acHitInfo), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJya1flift, collider.dim.radius), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.dim.height), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.dim.yShift), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.dim.pos.x), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.dim.pos.y), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, collider.dim.pos.z), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, actionFunc), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgJya1flift, moveDelay), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, isMovingDown), 0, 0x1a6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, hasInitialized), 0, 0x1a7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJya1flift, isLinkRiding), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgJya1fliftSpanCount = ARRAY_COUNT(gGzBgJya1fliftSpans);

const GzActorFunction gGzBgJya1fliftFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgJya1flift_InitCollision },
    { 0xac, (void*)BgJya1flift_Init },
    { 0x1a4, (void*)BgJya1flift_Destroy },
    { 0x1fc, NULL },
    { 0x21c, (void*)BgJya1flift_WaitForSwitch },
    { 0x260, NULL },
    { 0x280, (void*)BgJya1flift_DoNothing },
    { 0x290, NULL },
    { 0x2b8, (void*)BgJya1flift_Move },
    { 0x39c, NULL },
    { 0x3b4, (void*)BgJya1flift_DelayMove },
    { 0x3f4, (void*)BgJya1flift_Update },
    { 0x510, (void*)BgJya1flift_Draw },
};
const size_t gGzBgJya1fliftFunctionCount = ARRAY_COUNT(gGzBgJya1fliftFunctions);
