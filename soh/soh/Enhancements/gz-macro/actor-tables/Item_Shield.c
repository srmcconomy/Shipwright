// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Item_Shield/z_item_shield.h"

void ItemShield_Init(void*, void*);
void ItemShield_Destroy(void*, void*);
void func_80B86AC8(void*, void*);
void func_80B86BC8(void*, void*);
void func_80B86CA8(void*, void*);
void func_80B86F68(void*, void*);
void ItemShield_Update(void*, void*);
void ItemShield_Draw(void*, void*);

const GzActorSpan gGzItemShieldSpans[] = {
    { offsetof(ItemShield, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ItemShield, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ItemShield, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ItemShield, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ItemShield, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ItemShield, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ItemShield, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ItemShield, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ItemShield, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, unk_198), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, timer), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, unk_19C), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemShield, unk_19E[0]), offsetof(ItemShield, unk_19E[1]) - offsetof(ItemShield, unk_19E[0]), 0x18e, 0x1, 8, 1, GZ_SPAN_VALUE },
    { offsetof(ItemShield, unk_1A8[0].x), offsetof(ItemShield, unk_1A8[1].x) - offsetof(ItemShield, unk_1A8[0].x), 0x198, 0xc, 8, 4, GZ_SPAN_VALUE },
    { offsetof(ItemShield, unk_1A8[0].y), offsetof(ItemShield, unk_1A8[1].y) - offsetof(ItemShield, unk_1A8[0].y), 0x19c, 0xc, 8, 4, GZ_SPAN_VALUE },
    { offsetof(ItemShield, unk_1A8[0].z), offsetof(ItemShield, unk_1A8[1].z) - offsetof(ItemShield, unk_1A8[0].z), 0x1a0, 0xc, 8, 4, GZ_SPAN_VALUE },
    { offsetof(ItemShield, actionFunc), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzItemShieldSpanCount = ARRAY_COUNT(gGzItemShieldSpans);

const GzActorFunction gGzItemShieldFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)ItemShield_Init },
    { 0x174, (void*)ItemShield_Destroy },
    { 0x1a0, (void*)func_80B86AC8 },
    { 0x2a4, (void*)func_80B86BC8 },
    { 0x38c, (void*)func_80B86CA8 },
    { 0x650, (void*)func_80B86F68 },
    { 0x75c, (void*)ItemShield_Update },
    { 0x780, (void*)ItemShield_Draw },
};
const size_t gGzItemShieldFunctionCount = ARRAY_COUNT(gGzItemShieldFunctions);
