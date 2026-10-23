// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Bombiwa/z_bg_jya_bombiwa.h"

void BgJyaBombiwa_InitCollider(void*, void*);
void BgJyaBombiwa_Init(void*, void*);
void BgJyaBombiwa_Destroy(void*, void*);
void BgJyaBombiwa_Break(void*, void*);
void BgJyaBombiwa_Update(void*, void*);
void BgJyaBombiwa_Draw(void*, void*);

const GzActorSpan gGzBgJyaBombiwaSpans[] = {
    { offsetof(BgJyaBombiwa, unk_164), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, collider.base.actor), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombiwa, collider.base.at), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombiwa, collider.base.ac), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombiwa, collider.base.oc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombiwa, collider.base.atFlags), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, collider.base.acFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, collider.base.ocFlags1), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, collider.base.ocFlags2), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, collider.base.colType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, collider.base.shape), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, collider.count), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, collider.elements), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.toucher.dmgFlags), 0, 0x178, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.toucher.effect), 0, 0x17c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.toucher.damage), 0, 0x17d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.bumper.dmgFlags), 0, 0x180, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.bumper.effect), 0, 0x184, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.bumper.defense), 0, 0x185, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.bumper.hitPos.x), 0, 0x186, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.bumper.hitPos.y), 0, 0x188, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.bumper.hitPos.z), 0, 0x18a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.elemType), 0, 0x18c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.toucherFlags), 0, 0x18d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.bumperFlags), 0, 0x18e, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.ocElemFlags), 0, 0x18f, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.atHit), 0, 0x190, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.acHit), 0, 0x194, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.atHitInfo), 0, 0x198, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombiwa, colliderItems[0].info.acHitInfo), 0, 0x19c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaBombiwa, colliderItems[0].dim.modelSphere.center.x), 0, 0x1a0, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].dim.modelSphere.center.y), 0, 0x1a2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].dim.modelSphere.center.z), 0, 0x1a4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].dim.modelSphere.radius), 0, 0x1a6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].dim.worldSphere.center.x), 0, 0x1a8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].dim.worldSphere.center.y), 0, 0x1aa, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].dim.worldSphere.center.z), 0, 0x1ac, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].dim.worldSphere.radius), 0, 0x1ae, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].dim.scale), 0, 0x1b0, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaBombiwa, colliderItems[0].dim.limb), 0, 0x1b4, 0x40, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaBombiwaSpanCount = ARRAY_COUNT(gGzBgJyaBombiwaSpans);

const GzActorFunction gGzBgJyaBombiwaFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgJyaBombiwa_InitCollider },
    { 0xac, (void*)BgJyaBombiwa_Init },
    { 0x12c, (void*)BgJyaBombiwa_Destroy },
    { 0x174, (void*)BgJyaBombiwa_Break },
    { 0x408, (void*)BgJyaBombiwa_Update },
    { 0x498, (void*)BgJyaBombiwa_Draw },
};
const size_t gGzBgJyaBombiwaFunctionCount = ARRAY_COUNT(gGzBgJyaBombiwaFunctions);
