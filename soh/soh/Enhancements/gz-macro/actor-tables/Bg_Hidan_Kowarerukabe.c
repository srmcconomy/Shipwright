// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Kowarerukabe/z_bg_hidan_kowarerukabe.h"

void BgHidanKowarerukabe_InitDynaPoly(void*, void*);
void BgHidanKowarerukabe_InitColliderSphere(void*, void*);
void BgHidanKowarerukabe_Init(void*, void*);
void BgHidanKowarerukabe_Destroy(void*, void*);
void BgHidanKowarerukabe_SpawnDust(void*, void*);
void BgHidanKowarerukabe_FloorBreak(void*, void*);
void func_8088A67C(void*, void*);
void BgHidanKowarerukabe_LargeWallBreak(void*, void*);
void BgHidanKowarerukabe_Break(void*, void*);
void BgHidanKowarerukabe_Update(void*, void*);
void BgHidanKowarerukabe_Draw(void*, void*);

const GzActorSpan gGzBgHidanKowarerukabeSpans[] = {
    { offsetof(BgHidanKowarerukabe, collider.base.actor), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanKowarerukabe, collider.base.at), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanKowarerukabe, collider.base.ac), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanKowarerukabe, collider.base.oc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanKowarerukabe, collider.base.atFlags), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, collider.base.acFlags), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, collider.base.ocFlags1), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, collider.base.ocFlags2), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, collider.base.colType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, collider.base.shape), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, collider.count), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, collider.elements), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.toucher.dmgFlags), 0, 0x174, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.toucher.effect), 0, 0x178, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.toucher.damage), 0, 0x179, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.bumper.dmgFlags), 0, 0x17c, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.bumper.effect), 0, 0x180, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.bumper.defense), 0, 0x181, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.bumper.hitPos.x), 0, 0x182, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.bumper.hitPos.y), 0, 0x184, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.bumper.hitPos.z), 0, 0x186, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.elemType), 0, 0x188, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.toucherFlags), 0, 0x189, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.bumperFlags), 0, 0x18a, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.ocElemFlags), 0, 0x18b, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.atHit), 0, 0x18c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.acHit), 0, 0x190, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.atHitInfo), 0, 0x194, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].info.acHitInfo), 0, 0x198, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].dim.modelSphere.center.x), 0, 0x19c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].dim.modelSphere.center.y), 0, 0x19e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].dim.modelSphere.center.z), 0, 0x1a0, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].dim.modelSphere.radius), 0, 0x1a2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].dim.worldSphere.center.x), 0, 0x1a4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].dim.worldSphere.center.y), 0, 0x1a6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].dim.worldSphere.center.z), 0, 0x1a8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].dim.worldSphere.radius), 0, 0x1aa, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].dim.scale), 0, 0x1ac, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanKowarerukabe, colliderItems[0].dim.limb), 0, 0x1b0, 0x40, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanKowarerukabeSpanCount = ARRAY_COUNT(gGzBgHidanKowarerukabeSpans);

const GzActorFunction gGzBgHidanKowarerukabeFunctions[] = {
    { 0x0, (void*)BgHidanKowarerukabe_InitDynaPoly },
    { 0x9c, (void*)BgHidanKowarerukabe_InitColliderSphere },
    { 0x130, NULL },
    { 0x15c, (void*)BgHidanKowarerukabe_Init },
    { 0x20c, (void*)BgHidanKowarerukabe_Destroy },
    { 0x254, (void*)BgHidanKowarerukabe_SpawnDust },
    { 0x378, (void*)BgHidanKowarerukabe_FloorBreak },
    { 0x644, (void*)func_8088A67C },
    { 0x8dc, (void*)BgHidanKowarerukabe_LargeWallBreak },
    { 0xb68, (void*)BgHidanKowarerukabe_Break },
    { 0xbf8, (void*)BgHidanKowarerukabe_Update },
    { 0xcc8, (void*)BgHidanKowarerukabe_Draw },
};
const size_t gGzBgHidanKowarerukabeFunctionCount = ARRAY_COUNT(gGzBgHidanKowarerukabeFunctions);
