// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Sekizou/z_bg_hidan_sekizou.h"

void BgHidanSekizou_Init(void*, void*);
void BgHidanSekizou_Destroy(void*, void*);
void func_8088D434(void*, void*);
void func_8088D720(void*, void*);
void func_8088D750(void*, void*);
void BgHidanSekizou_Update(void*, void*);
void BgHidanSekizou_Draw(void*, void*);

const GzActorSpan gGzBgHidanSekizouSpans[] = {
    { offsetof(BgHidanSekizou, updateFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHidanSekizou, unk_168[0]), offsetof(BgHidanSekizou, unk_168[1]) - offsetof(BgHidanSekizou, unk_168[0]), 0x158, 0x2, 4, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, unk_170), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, collider.base.actor), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSekizou, collider.base.at), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSekizou, collider.base.ac), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSekizou, collider.base.oc), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSekizou, collider.base.atFlags), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, collider.base.acFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, collider.base.ocFlags1), 0, 0x176, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, collider.base.ocFlags2), 0, 0x177, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, collider.base.colType), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, collider.base.shape), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, collider.count), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, collider.elements), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSekizou, elements[0].info.toucher.dmgFlags), offsetof(BgHidanSekizou, elements[1].info.toucher.dmgFlags) - offsetof(BgHidanSekizou, elements[0].info.toucher.dmgFlags), 0x184, 0x40, 6, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.toucher.effect), offsetof(BgHidanSekizou, elements[1].info.toucher.effect) - offsetof(BgHidanSekizou, elements[0].info.toucher.effect), 0x188, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.toucher.damage), offsetof(BgHidanSekizou, elements[1].info.toucher.damage) - offsetof(BgHidanSekizou, elements[0].info.toucher.damage), 0x189, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.bumper.dmgFlags), offsetof(BgHidanSekizou, elements[1].info.bumper.dmgFlags) - offsetof(BgHidanSekizou, elements[0].info.bumper.dmgFlags), 0x18c, 0x40, 6, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.bumper.effect), offsetof(BgHidanSekizou, elements[1].info.bumper.effect) - offsetof(BgHidanSekizou, elements[0].info.bumper.effect), 0x190, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.bumper.defense), offsetof(BgHidanSekizou, elements[1].info.bumper.defense) - offsetof(BgHidanSekizou, elements[0].info.bumper.defense), 0x191, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.bumper.hitPos.x), offsetof(BgHidanSekizou, elements[1].info.bumper.hitPos.x) - offsetof(BgHidanSekizou, elements[0].info.bumper.hitPos.x), 0x192, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.bumper.hitPos.y), offsetof(BgHidanSekizou, elements[1].info.bumper.hitPos.y) - offsetof(BgHidanSekizou, elements[0].info.bumper.hitPos.y), 0x194, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.bumper.hitPos.z), offsetof(BgHidanSekizou, elements[1].info.bumper.hitPos.z) - offsetof(BgHidanSekizou, elements[0].info.bumper.hitPos.z), 0x196, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.elemType), offsetof(BgHidanSekizou, elements[1].info.elemType) - offsetof(BgHidanSekizou, elements[0].info.elemType), 0x198, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.toucherFlags), offsetof(BgHidanSekizou, elements[1].info.toucherFlags) - offsetof(BgHidanSekizou, elements[0].info.toucherFlags), 0x199, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.bumperFlags), offsetof(BgHidanSekizou, elements[1].info.bumperFlags) - offsetof(BgHidanSekizou, elements[0].info.bumperFlags), 0x19a, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.ocElemFlags), offsetof(BgHidanSekizou, elements[1].info.ocElemFlags) - offsetof(BgHidanSekizou, elements[0].info.ocElemFlags), 0x19b, 0x40, 6, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].info.atHit), offsetof(BgHidanSekizou, elements[1].info.atHit) - offsetof(BgHidanSekizou, elements[0].info.atHit), 0x19c, 0x40, 6, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSekizou, elements[0].info.acHit), offsetof(BgHidanSekizou, elements[1].info.acHit) - offsetof(BgHidanSekizou, elements[0].info.acHit), 0x1a0, 0x40, 6, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSekizou, elements[0].info.atHitInfo), offsetof(BgHidanSekizou, elements[1].info.atHitInfo) - offsetof(BgHidanSekizou, elements[0].info.atHitInfo), 0x1a4, 0x40, 6, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSekizou, elements[0].info.acHitInfo), offsetof(BgHidanSekizou, elements[1].info.acHitInfo) - offsetof(BgHidanSekizou, elements[0].info.acHitInfo), 0x1a8, 0x40, 6, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanSekizou, elements[0].dim.modelSphere.center.x), offsetof(BgHidanSekizou, elements[1].dim.modelSphere.center.x) - offsetof(BgHidanSekizou, elements[0].dim.modelSphere.center.x), 0x1ac, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].dim.modelSphere.center.y), offsetof(BgHidanSekizou, elements[1].dim.modelSphere.center.y) - offsetof(BgHidanSekizou, elements[0].dim.modelSphere.center.y), 0x1ae, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].dim.modelSphere.center.z), offsetof(BgHidanSekizou, elements[1].dim.modelSphere.center.z) - offsetof(BgHidanSekizou, elements[0].dim.modelSphere.center.z), 0x1b0, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].dim.modelSphere.radius), offsetof(BgHidanSekizou, elements[1].dim.modelSphere.radius) - offsetof(BgHidanSekizou, elements[0].dim.modelSphere.radius), 0x1b2, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].dim.worldSphere.center.x), offsetof(BgHidanSekizou, elements[1].dim.worldSphere.center.x) - offsetof(BgHidanSekizou, elements[0].dim.worldSphere.center.x), 0x1b4, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].dim.worldSphere.center.y), offsetof(BgHidanSekizou, elements[1].dim.worldSphere.center.y) - offsetof(BgHidanSekizou, elements[0].dim.worldSphere.center.y), 0x1b6, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].dim.worldSphere.center.z), offsetof(BgHidanSekizou, elements[1].dim.worldSphere.center.z) - offsetof(BgHidanSekizou, elements[0].dim.worldSphere.center.z), 0x1b8, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].dim.worldSphere.radius), offsetof(BgHidanSekizou, elements[1].dim.worldSphere.radius) - offsetof(BgHidanSekizou, elements[0].dim.worldSphere.radius), 0x1ba, 0x40, 6, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].dim.scale), offsetof(BgHidanSekizou, elements[1].dim.scale) - offsetof(BgHidanSekizou, elements[0].dim.scale), 0x1bc, 0x40, 6, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanSekizou, elements[0].dim.limb), offsetof(BgHidanSekizou, elements[1].dim.limb) - offsetof(BgHidanSekizou, elements[0].dim.limb), 0x1c0, 0x40, 6, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanSekizouSpanCount = ARRAY_COUNT(gGzBgHidanSekizouSpans);

const GzActorFunction gGzBgHidanSekizouFunctions[] = {
    { 0x0, NULL },
    { 0x3bc, (void*)BgHidanSekizou_Init },
    { 0x530, (void*)BgHidanSekizou_Destroy },
    { 0x578, (void*)func_8088D434 },
    { 0x864, (void*)func_8088D720 },
    { 0x894, (void*)func_8088D750 },
    { 0xa00, (void*)BgHidanSekizou_Update },
    { 0xb3c, NULL },
    { 0xd84, NULL },
    { 0xf3c, NULL },
    { 0x101c, (void*)BgHidanSekizou_Draw },
};
const size_t gGzBgHidanSekizouFunctionCount = ARRAY_COUNT(gGzBgHidanSekizouFunctions);
