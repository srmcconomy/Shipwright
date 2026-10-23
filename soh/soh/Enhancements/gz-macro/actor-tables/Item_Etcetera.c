// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Item_Etcetera/z_item_etcetera.h"

void ItemEtcetera_Init(void*, void*);
void ItemEtcetera_Destroy(void*, void*);
void ItemEtcetera_WaitForObject(void*, void*);
void func_80B85824(void*, void*);
void func_80B858B4(void*, void*);
void ItemEtcetera_MoveFireArrowDown(void*, void*);
void func_80B85B28(void*, void*);
void ItemEtcetera_UpdateFireArrow(void*, void*);
void ItemEtcetera_Update(void*, void*);
void ItemEtcetera_DrawThroughLens(void*, void*);
void ItemEtcetera_Draw(void*, void*);

const GzActorSpan gGzItemEtceteraSpans[] = {
    { offsetof(ItemEtcetera, futureActionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ItemEtcetera, giDrawId), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemEtcetera, getItemId), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ItemEtcetera, objBankIndex), 0, 0x144, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ItemEtcetera, drawFunc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ItemEtcetera, actionFunc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzItemEtceteraSpanCount = ARRAY_COUNT(gGzItemEtceteraSpans);

const GzActorFunction gGzItemEtceteraFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)ItemEtcetera_Init },
    { 0x18c, (void*)ItemEtcetera_Destroy },
    { 0x19c, (void*)ItemEtcetera_WaitForObject },
    { 0x1f4, (void*)func_80B85824 },
    { 0x28c, (void*)func_80B858B4 },
    { 0x36c, (void*)ItemEtcetera_SpawnSparkles },
    { 0x47c, (void*)ItemEtcetera_MoveFireArrowDown },
    { 0x50c, (void*)func_80B85B28 },
    { 0x554, (void*)ItemEtcetera_UpdateFireArrow },
    { 0x5d4, (void*)ItemEtcetera_Update },
    { 0x5f8, (void*)ItemEtcetera_DrawThroughLens },
    { 0x650, (void*)ItemEtcetera_Draw },
};
const size_t gGzItemEtceteraFunctionCount = ARRAY_COUNT(gGzItemEtceteraFunctions);
