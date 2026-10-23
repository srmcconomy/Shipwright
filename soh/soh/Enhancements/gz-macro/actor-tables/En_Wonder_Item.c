// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Wonder_Item/z_en_wonder_item.h"

void EnWonderItem_Destroy(void*, void*);
void EnWonderItem_Init(void*, void*);
void EnWonderItem_MultitagFree(void*, void*);
void EnWonderItem_ProximityDrop(void*, void*);
void EnWonderItem_InteractSwitch(void*, void*);
void EnWonderItem_ProximitySwitch(void*, void*);
void EnWonderItem_MultitagOrdered(void*, void*);
void EnWonderItem_BombSoldier(void*, void*);
void EnWonderItem_RollDrop(void*, void*);
void EnWonderItem_Update(void*, void*);

const GzActorSpan gGzEnWonderItemSpans[] = {
    { offsetof(EnWonderItem, updateFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnWonderItem, unkHeight), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, wonderMode), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, itemDrop), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, numTagPoints), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, dropCount), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, timer), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, tagFlags), 0, 0x14e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, tagCount), 0, 0x150, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, switchFlag), 0, 0x152, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, unk_164[0]), offsetof(EnWonderItem, unk_164[1]) - offsetof(EnWonderItem, unk_164[0]), 0x154, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, nextTag), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, timerMod), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, unkPos.x), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, unkPos.y), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, unkPos.z), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, unk_178[0]), offsetof(EnWonderItem, unk_178[1]) - offsetof(EnWonderItem, unk_178[0]), 0x168, 0x1, 8, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.base.actor), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWonderItem, collider.base.at), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWonderItem, collider.base.ac), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWonderItem, collider.base.oc), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWonderItem, collider.base.atFlags), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.base.acFlags), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.base.ocFlags1), 0, 0x182, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.base.ocFlags2), 0, 0x183, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.base.colType), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.base.shape), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.toucher.dmgFlags), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.toucher.effect), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.toucher.damage), 0, 0x18d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.bumper.dmgFlags), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.bumper.effect), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.bumper.defense), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.bumper.hitPos.x), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.bumper.hitPos.y), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.bumper.hitPos.z), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.elemType), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.toucherFlags), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.bumperFlags), 0, 0x19e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.ocElemFlags), 0, 0x19f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.info.atHit), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWonderItem, collider.info.acHit), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWonderItem, collider.info.atHitInfo), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWonderItem, collider.info.acHitInfo), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWonderItem, collider.dim.radius), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.dim.height), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.dim.yShift), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.dim.pos.x), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.dim.pos.y), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, collider.dim.pos.z), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderItem, unk_1CC[0]), offsetof(EnWonderItem, unk_1CC[1]) - offsetof(EnWonderItem, unk_1CC[0]), 0x1bc, 0x1, 4, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnWonderItemSpanCount = ARRAY_COUNT(gGzEnWonderItemSpans);

const GzActorFunction gGzEnWonderItemFunctions[] = {
    { 0x0, (void*)EnWonderItem_Destroy },
    { 0x44, NULL },
    { 0x1a0, (void*)EnWonderItem_Init },
    { 0x4ec, (void*)EnWonderItem_MultitagFree },
    { 0x634, (void*)EnWonderItem_ProximityDrop },
    { 0x69c, (void*)EnWonderItem_InteractSwitch },
    { 0x6d0, (void*)EnWonderItem_ProximitySwitch },
    { 0x75c, (void*)EnWonderItem_MultitagOrdered },
    { 0x8b8, (void*)EnWonderItem_BombSoldier },
    { 0x948, (void*)EnWonderItem_RollDrop },
    { 0x9bc, (void*)EnWonderItem_Update },
};
const size_t gGzEnWonderItemFunctionCount = ARRAY_COUNT(gGzEnWonderItemFunctions);
