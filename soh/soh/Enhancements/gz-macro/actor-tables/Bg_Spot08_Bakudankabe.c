// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot08_Bakudankabe/z_bg_spot08_bakudankabe.h"

void func_808B02D0(void*, void*);
void func_808B0324(void*, void*);
void BgSpot08Bakudankabe_Init(void*, void*);
void BgSpot08Bakudankabe_Destroy(void*, void*);
void BgSpot08Bakudankabe_Update(void*, void*);
void BgSpot08Bakudankabe_Draw(void*, void*);

const GzActorSpan gGzBgSpot08BakudankabeSpans[] = {
    { offsetof(BgSpot08Bakudankabe, collider.base.actor), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot08Bakudankabe, collider.base.at), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot08Bakudankabe, collider.base.ac), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot08Bakudankabe, collider.base.oc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot08Bakudankabe, collider.base.atFlags), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, collider.base.acFlags), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, collider.base.ocFlags1), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, collider.base.ocFlags2), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, collider.base.colType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, collider.base.shape), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, collider.count), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, collider.elements), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.toucher.dmgFlags), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.toucher.dmgFlags) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.toucher.dmgFlags), 0x174, 0x40, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.toucher.effect), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.toucher.effect) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.toucher.effect), 0x178, 0x40, 3, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.toucher.damage), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.toucher.damage) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.toucher.damage), 0x179, 0x40, 3, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.dmgFlags), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.bumper.dmgFlags) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.dmgFlags), 0x17c, 0x40, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.effect), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.bumper.effect) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.effect), 0x180, 0x40, 3, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.defense), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.bumper.defense) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.defense), 0x181, 0x40, 3, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.hitPos.x), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.bumper.hitPos.x) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.hitPos.x), 0x182, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.hitPos.y), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.bumper.hitPos.y) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.hitPos.y), 0x184, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.hitPos.z), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.bumper.hitPos.z) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumper.hitPos.z), 0x186, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.elemType), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.elemType) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.elemType), 0x188, 0x40, 3, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.toucherFlags), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.toucherFlags) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.toucherFlags), 0x189, 0x40, 3, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumperFlags), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.bumperFlags) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.bumperFlags), 0x18a, 0x40, 3, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.ocElemFlags), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.ocElemFlags) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.ocElemFlags), 0x18b, 0x40, 3, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.atHit), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.atHit) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.atHit), 0x18c, 0x40, 3, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.acHit), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.acHit) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.acHit), 0x190, 0x40, 3, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.atHitInfo), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.atHitInfo) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.atHitInfo), 0x194, 0x40, 3, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].info.acHitInfo), offsetof(BgSpot08Bakudankabe, colliderItems[1].info.acHitInfo) - offsetof(BgSpot08Bakudankabe, colliderItems[0].info.acHitInfo), 0x198, 0x40, 3, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.modelSphere.center.x), offsetof(BgSpot08Bakudankabe, colliderItems[1].dim.modelSphere.center.x) - offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.modelSphere.center.x), 0x19c, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.modelSphere.center.y), offsetof(BgSpot08Bakudankabe, colliderItems[1].dim.modelSphere.center.y) - offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.modelSphere.center.y), 0x19e, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.modelSphere.center.z), offsetof(BgSpot08Bakudankabe, colliderItems[1].dim.modelSphere.center.z) - offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.modelSphere.center.z), 0x1a0, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.modelSphere.radius), offsetof(BgSpot08Bakudankabe, colliderItems[1].dim.modelSphere.radius) - offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.modelSphere.radius), 0x1a2, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.worldSphere.center.x), offsetof(BgSpot08Bakudankabe, colliderItems[1].dim.worldSphere.center.x) - offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.worldSphere.center.x), 0x1a4, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.worldSphere.center.y), offsetof(BgSpot08Bakudankabe, colliderItems[1].dim.worldSphere.center.y) - offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.worldSphere.center.y), 0x1a6, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.worldSphere.center.z), offsetof(BgSpot08Bakudankabe, colliderItems[1].dim.worldSphere.center.z) - offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.worldSphere.center.z), 0x1a8, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.worldSphere.radius), offsetof(BgSpot08Bakudankabe, colliderItems[1].dim.worldSphere.radius) - offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.worldSphere.radius), 0x1aa, 0x40, 3, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.scale), offsetof(BgSpot08Bakudankabe, colliderItems[1].dim.scale) - offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.scale), 0x1ac, 0x40, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.limb), offsetof(BgSpot08Bakudankabe, colliderItems[1].dim.limb) - offsetof(BgSpot08Bakudankabe, colliderItems[0].dim.limb), 0x1b0, 0x40, 3, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot08BakudankabeSpanCount = ARRAY_COUNT(gGzBgSpot08BakudankabeSpans);

const GzActorFunction gGzBgSpot08BakudankabeFunctions[] = {
    { 0x0, (void*)func_808B02D0 },
    { 0x54, (void*)func_808B0324 },
    { 0x34c, (void*)BgSpot08Bakudankabe_Init },
    { 0x3ec, (void*)BgSpot08Bakudankabe_Destroy },
    { 0x434, (void*)BgSpot08Bakudankabe_Update },
    { 0x4e8, (void*)BgSpot08Bakudankabe_Draw },
};
const size_t gGzBgSpot08BakudankabeFunctionCount = ARRAY_COUNT(gGzBgSpot08BakudankabeFunctions);
