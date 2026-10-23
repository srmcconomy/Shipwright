// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Rsekizou/z_bg_hidan_rsekizou.h"

void BgHidanRsekizou_Init(void*, void*);
void BgHidanRsekizou_Destroy(void*, void*);
void BgHidanRsekizou_Update(void*, void*);
void BgHidanRsekizou_Draw(void*, void*);

const GzActorSpan gGzBgHidanRsekizouSpans[] = {
    { offsetof(BgHidanRsekizou, bendFrame), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, burnFrame), 0, 0x156, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, collider.base.actor), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRsekizou, collider.base.at), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRsekizou, collider.base.ac), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRsekizou, collider.base.oc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRsekizou, collider.base.atFlags), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, collider.base.acFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, collider.base.ocFlags1), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, collider.base.ocFlags2), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, collider.base.colType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, collider.base.shape), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, collider.count), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, collider.elements), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.toucher.dmgFlags), offsetof(BgHidanRsekizou, colliderItems[1].info.toucher.dmgFlags) - offsetof(BgHidanRsekizou, colliderItems[0].info.toucher.dmgFlags), 0x178, 0x40, 6, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.toucher.effect), offsetof(BgHidanRsekizou, colliderItems[1].info.toucher.effect) - offsetof(BgHidanRsekizou, colliderItems[0].info.toucher.effect), 0x17c, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.toucher.damage), offsetof(BgHidanRsekizou, colliderItems[1].info.toucher.damage) - offsetof(BgHidanRsekizou, colliderItems[0].info.toucher.damage), 0x17d, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.dmgFlags), offsetof(BgHidanRsekizou, colliderItems[1].info.bumper.dmgFlags) - offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.dmgFlags), 0x180, 0x40, 6, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.effect), offsetof(BgHidanRsekizou, colliderItems[1].info.bumper.effect) - offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.effect), 0x184, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.defense), offsetof(BgHidanRsekizou, colliderItems[1].info.bumper.defense) - offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.defense), 0x185, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.hitPos.x), offsetof(BgHidanRsekizou, colliderItems[1].info.bumper.hitPos.x) - offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.hitPos.x), 0x186, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.hitPos.y), offsetof(BgHidanRsekizou, colliderItems[1].info.bumper.hitPos.y) - offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.hitPos.y), 0x188, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.hitPos.z), offsetof(BgHidanRsekizou, colliderItems[1].info.bumper.hitPos.z) - offsetof(BgHidanRsekizou, colliderItems[0].info.bumper.hitPos.z), 0x18a, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.elemType), offsetof(BgHidanRsekizou, colliderItems[1].info.elemType) - offsetof(BgHidanRsekizou, colliderItems[0].info.elemType), 0x18c, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.toucherFlags), offsetof(BgHidanRsekizou, colliderItems[1].info.toucherFlags) - offsetof(BgHidanRsekizou, colliderItems[0].info.toucherFlags), 0x18d, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.bumperFlags), offsetof(BgHidanRsekizou, colliderItems[1].info.bumperFlags) - offsetof(BgHidanRsekizou, colliderItems[0].info.bumperFlags), 0x18e, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.ocElemFlags), offsetof(BgHidanRsekizou, colliderItems[1].info.ocElemFlags) - offsetof(BgHidanRsekizou, colliderItems[0].info.ocElemFlags), 0x18f, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.atHit), offsetof(BgHidanRsekizou, colliderItems[1].info.atHit) - offsetof(BgHidanRsekizou, colliderItems[0].info.atHit), 0x190, 0x40, 6, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.acHit), offsetof(BgHidanRsekizou, colliderItems[1].info.acHit) - offsetof(BgHidanRsekizou, colliderItems[0].info.acHit), 0x194, 0x40, 6, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.atHitInfo), offsetof(BgHidanRsekizou, colliderItems[1].info.atHitInfo) - offsetof(BgHidanRsekizou, colliderItems[0].info.atHitInfo), 0x198, 0x40, 6, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRsekizou, colliderItems[0].info.acHitInfo), offsetof(BgHidanRsekizou, colliderItems[1].info.acHitInfo) - offsetof(BgHidanRsekizou, colliderItems[0].info.acHitInfo), 0x19c, 0x40, 6, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanRsekizou, colliderItems[0].dim.modelSphere.center.x), offsetof(BgHidanRsekizou, colliderItems[1].dim.modelSphere.center.x) - offsetof(BgHidanRsekizou, colliderItems[0].dim.modelSphere.center.x), 0x1a0, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].dim.modelSphere.center.y), offsetof(BgHidanRsekizou, colliderItems[1].dim.modelSphere.center.y) - offsetof(BgHidanRsekizou, colliderItems[0].dim.modelSphere.center.y), 0x1a2, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].dim.modelSphere.center.z), offsetof(BgHidanRsekizou, colliderItems[1].dim.modelSphere.center.z) - offsetof(BgHidanRsekizou, colliderItems[0].dim.modelSphere.center.z), 0x1a4, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].dim.modelSphere.radius), offsetof(BgHidanRsekizou, colliderItems[1].dim.modelSphere.radius) - offsetof(BgHidanRsekizou, colliderItems[0].dim.modelSphere.radius), 0x1a6, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].dim.worldSphere.center.x), offsetof(BgHidanRsekizou, colliderItems[1].dim.worldSphere.center.x) - offsetof(BgHidanRsekizou, colliderItems[0].dim.worldSphere.center.x), 0x1a8, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].dim.worldSphere.center.y), offsetof(BgHidanRsekizou, colliderItems[1].dim.worldSphere.center.y) - offsetof(BgHidanRsekizou, colliderItems[0].dim.worldSphere.center.y), 0x1aa, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].dim.worldSphere.center.z), offsetof(BgHidanRsekizou, colliderItems[1].dim.worldSphere.center.z) - offsetof(BgHidanRsekizou, colliderItems[0].dim.worldSphere.center.z), 0x1ac, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].dim.worldSphere.radius), offsetof(BgHidanRsekizou, colliderItems[1].dim.worldSphere.radius) - offsetof(BgHidanRsekizou, colliderItems[0].dim.worldSphere.radius), 0x1ae, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].dim.scale), offsetof(BgHidanRsekizou, colliderItems[1].dim.scale) - offsetof(BgHidanRsekizou, colliderItems[0].dim.scale), 0x1b0, 0x40, 6, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanRsekizou, colliderItems[0].dim.limb), offsetof(BgHidanRsekizou, colliderItems[1].dim.limb) - offsetof(BgHidanRsekizou, colliderItems[0].dim.limb), 0x1b4, 0x40, 6, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanRsekizouSpanCount = ARRAY_COUNT(gGzBgHidanRsekizouSpans);

const GzActorFunction gGzBgHidanRsekizouFunctions[] = {
    { 0x0, (void*)BgHidanRsekizou_Init },
    { 0x104, (void*)BgHidanRsekizou_Destroy },
    { 0x14c, (void*)BgHidanRsekizou_Update },
    { 0x510, NULL },
    { 0x830, (void*)BgHidanRsekizou_Draw },
};
const size_t gGzBgHidanRsekizouFunctionCount = ARRAY_COUNT(gGzBgHidanRsekizouFunctions);
