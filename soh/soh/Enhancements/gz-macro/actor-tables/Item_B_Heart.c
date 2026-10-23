// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Item_B_Heart/z_item_b_heart.h"

void ItemBHeart_Init(void*, void*);
void ItemBHeart_Destroy(void*, void*);
void ItemBHeart_Update(void*, void*);
void ItemBHeart_Draw(void*, void*);

const GzActorSpan gGzItemBHeartSpans[] = {
    { offsetof(ItemBHeart, unk_14C[0]), offsetof(ItemBHeart, unk_14C[1]) - offsetof(ItemBHeart, unk_14C[0]), 0x13c, 0x1, 12, 1, GZ_SPAN_VALUE },
    { offsetof(ItemBHeart, unk_158), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ItemBHeart, unk_15C[0]), offsetof(ItemBHeart, unk_15C[1]) - offsetof(ItemBHeart, unk_15C[0]), 0x14c, 0x1, 8, 1, GZ_SPAN_VALUE },
    { offsetof(ItemBHeart, unk_164), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemBHeart, unk_166[0]), offsetof(ItemBHeart, unk_166[1]) - offsetof(ItemBHeart, unk_166[0]), 0x156, 0x1, 6, 1, GZ_SPAN_VALUE },
};
const size_t gGzItemBHeartSpanCount = ARRAY_COUNT(gGzItemBHeartSpans);

const GzActorFunction gGzItemBHeartFunctions[] = {
    { 0x0, (void*)ItemBHeart_Init },
    { 0x6c, (void*)ItemBHeart_Destroy },
    { 0x7c, (void*)ItemBHeart_Update },
    { 0x124, (void*)func_80B85264 },
    { 0x210, (void*)ItemBHeart_Draw },
};
const size_t gGzItemBHeartFunctionCount = ARRAY_COUNT(gGzItemBHeartFunctions);
