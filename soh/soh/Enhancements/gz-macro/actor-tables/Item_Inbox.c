// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Item_Inbox/z_item_inbox.h"

void ItemInbox_Init(void*, void*);
void ItemInbox_Destroy(void*, void*);
void ItemInbox_Wait(void*, void*);
void ItemInbox_Update(void*, void*);
void ItemInbox_Draw(void*, void*);

const GzActorSpan gGzItemInboxSpans[] = {
    { offsetof(ItemInbox, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzItemInboxSpanCount = ARRAY_COUNT(gGzItemInboxSpans);

const GzActorFunction gGzItemInboxFunctions[] = {
    { 0x0, (void*)ItemInbox_Init },
    { 0x34, (void*)ItemInbox_Destroy },
    { 0x44, (void*)ItemInbox_Wait },
    { 0x8c, (void*)ItemInbox_Update },
    { 0xb0, (void*)ItemInbox_Draw },
};
const size_t gGzItemInboxFunctionCount = ARRAY_COUNT(gGzItemInboxFunctions);
