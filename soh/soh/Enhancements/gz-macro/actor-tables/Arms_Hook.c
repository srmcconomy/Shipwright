// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Arms_Hook/z_arms_hook.h"

void ArmsHook_Init(void*, void*);
void ArmsHook_Destroy(void*, void*);
void ArmsHook_Wait(void*, void*);
void ArmsHook_AttachHookToActor(void*, void*);
void ArmsHook_Shoot(void*, void*);
void ArmsHook_Update(void*, void*);
void ArmsHook_Draw(void*, void*);

const GzActorSpan gGzArmsHookSpans[] = {
    { offsetof(ArmsHook, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ArmsHook, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ArmsHook, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ArmsHook, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ArmsHook, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ArmsHook, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ArmsHook, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ArmsHook, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ArmsHook, collider.dim.quad[0].x), offsetof(ArmsHook, collider.dim.quad[1].x) - offsetof(ArmsHook, collider.dim.quad[0].x), 0x17c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.dim.quad[0].y), offsetof(ArmsHook, collider.dim.quad[1].y) - offsetof(ArmsHook, collider.dim.quad[0].y), 0x180, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.dim.quad[0].z), offsetof(ArmsHook, collider.dim.quad[1].z) - offsetof(ArmsHook, collider.dim.quad[0].z), 0x184, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.dim.dcMid.x), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.dim.dcMid.y), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.dim.dcMid.z), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.dim.baMid.x), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.dim.baMid.y), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.dim.baMid.z), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, collider.dim.acDist), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, hookInfo.active), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, hookInfo.tip.x), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, hookInfo.tip.y), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, hookInfo.tip.z), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, hookInfo.base.x), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, hookInfo.base.y), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, hookInfo.base.z), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, unk_1E8.x), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, unk_1E8.y), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, unk_1E8.z), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, unk_1F4.x), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, unk_1F4.y), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, unk_1F4.z), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, grabbed), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ArmsHook, grabbedDistDiff.x), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, grabbedDistDiff.y), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, grabbedDistDiff.z), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, timer), 0, 0x200, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ArmsHook, actionFunc), 0, 0x204, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzArmsHookSpanCount = ARRAY_COUNT(gGzArmsHookSpans);

const GzActorFunction gGzArmsHookFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)ArmsHook_Init },
    { 0x80, (void*)ArmsHook_Destroy },
    { 0xc8, (void*)ArmsHook_Wait },
    { 0x148, NULL },
    { 0x15c, NULL },
    { 0x18c, NULL },
    { 0x1b4, NULL },
    { 0x250, (void*)ArmsHook_AttachHookToActor },
    { 0x298, (void*)ArmsHook_Shoot },
    { 0x904, (void*)ArmsHook_Update },
    { 0x944, (void*)ArmsHook_Draw },
};
const size_t gGzArmsHookFunctionCount = ARRAY_COUNT(gGzArmsHookFunctions);
