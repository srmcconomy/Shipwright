// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Bdan_Switch/z_bg_bdan_switch.h"

void BgBdanSwitch_InitCollision(void*, void*);
void BgBdanSwitch_Init(void*, void*);
void BgBdanSwitch_Destroy(void*, void*);
void func_8086D4B4(void*, void*);
void func_8086D548(void*, void*);
void func_8086D5E0(void*, void*);
void func_8086D694(void*, void*);
void func_8086D754(void*, void*);
void func_8086D80C(void*, void*);
void func_8086D888(void*, void*);
void func_8086D8CC(void*, void*);
void func_8086D95C(void*, void*);
void func_8086DA1C(void*, void*);
void func_8086DAC4(void*, void*);
void func_8086DB40(void*, void*);
void func_8086DB68(void*, void*);
void func_8086DC48(void*, void*);
void func_8086DCE8(void*, void*);
void func_8086DDC0(void*, void*);
void BgBdanSwitch_Update(void*, void*);
void BgBdanSwitch_Draw(void*, void*);

const GzActorSpan gGzBgBdanSwitchSpans[] = {
    { offsetof(BgBdanSwitch, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgBdanSwitch, collider.base.actor), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanSwitch, collider.base.at), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanSwitch, collider.base.ac), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanSwitch, collider.base.oc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanSwitch, collider.base.atFlags), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, collider.base.acFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, collider.base.ocFlags1), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, collider.base.ocFlags2), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, collider.base.colType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, collider.base.shape), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, collider.count), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, collider.elements), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanSwitch, colliderItems[0].info.toucher.dmgFlags), 0, 0x178, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.toucher.effect), 0, 0x17c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.toucher.damage), 0, 0x17d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.bumper.dmgFlags), 0, 0x180, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.bumper.effect), 0, 0x184, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.bumper.defense), 0, 0x185, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.bumper.hitPos.x), 0, 0x186, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.bumper.hitPos.y), 0, 0x188, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.bumper.hitPos.z), 0, 0x18a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.elemType), 0, 0x18c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.toucherFlags), 0, 0x18d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.bumperFlags), 0, 0x18e, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.ocElemFlags), 0, 0x18f, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].info.atHit), 0, 0x190, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanSwitch, colliderItems[0].info.acHit), 0, 0x194, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanSwitch, colliderItems[0].info.atHitInfo), 0, 0x198, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanSwitch, colliderItems[0].info.acHitInfo), 0, 0x19c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanSwitch, colliderItems[0].dim.modelSphere.center.x), 0, 0x1a0, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].dim.modelSphere.center.y), 0, 0x1a2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].dim.modelSphere.center.z), 0, 0x1a4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].dim.modelSphere.radius), 0, 0x1a6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].dim.worldSphere.center.x), 0, 0x1a8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].dim.worldSphere.center.y), 0, 0x1aa, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].dim.worldSphere.center.z), 0, 0x1ac, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].dim.worldSphere.radius), 0, 0x1ae, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].dim.scale), 0, 0x1b0, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, colliderItems[0].dim.limb), 0, 0x1b4, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, unk_1C8), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, unk_1CC), 0, 0x1bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, unk_1CE[0]), offsetof(BgBdanSwitch, unk_1CE[1]) - offsetof(BgBdanSwitch, unk_1CE[0]), 0x1be, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, unk_1D0), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, unk_1D4), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, unk_1D8), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, unk_1DA), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, unk_1DC), 0, 0x1cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanSwitch, unk_1DD[0]), offsetof(BgBdanSwitch, unk_1DD[1]) - offsetof(BgBdanSwitch, unk_1DD[0]), 0x1cd, 0x1, 3, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgBdanSwitchSpanCount = ARRAY_COUNT(gGzBgBdanSwitchSpans);

const GzActorFunction gGzBgBdanSwitchFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgBdanSwitch_InitCollision },
    { 0xac, NULL },
    { 0x218, (void*)BgBdanSwitch_Init },
    { 0x3d4, (void*)BgBdanSwitch_Destroy },
    { 0x440, (void*)func_8086D4B4 },
    { 0x4d4, (void*)func_8086D548 },
    { 0x550, NULL },
    { 0x570, (void*)func_8086D5E0 },
    { 0x60c, NULL },
    { 0x628, (void*)func_8086D694 },
    { 0x6c8, NULL },
    { 0x6f0, (void*)func_8086D754 },
    { 0x798, NULL },
    { 0x7ac, (void*)func_8086D80C },
    { 0x80c, NULL },
    { 0x82c, (void*)func_8086D888 },
    { 0x864, NULL },
    { 0x878, (void*)func_8086D8CC },
    { 0x8f0, NULL },
    { 0x90c, (void*)func_8086D95C },
    { 0x9ac, NULL },
    { 0x9d4, (void*)func_8086DA1C },
    { 0xa70, NULL },
    { 0xa84, (void*)func_8086DAC4 },
    { 0xae4, NULL },
    { 0xb04, (void*)func_8086DB40 },
    { 0xb14, NULL },
    { 0xb34, (void*)func_8086DB68 },
    { 0xbfc, NULL },
    { 0xc18, (void*)func_8086DC48 },
    { 0xc9c, NULL },
    { 0xcbc, (void*)func_8086DCE8 },
    { 0xd7c, NULL },
    { 0xd98, (void*)func_8086DDC0 },
    { 0xe2c, (void*)BgBdanSwitch_Update },
    { 0xf30, NULL },
    { 0xfa0, (void*)BgBdanSwitch_Draw },
};
const size_t gGzBgBdanSwitchFunctionCount = ARRAY_COUNT(gGzBgBdanSwitchFunctions);
