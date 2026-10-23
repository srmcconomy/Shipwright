// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Item_Ocarina/z_item_ocarina.h"

void ItemOcarina_Init(void*, void*);
void ItemOcarina_Destroy(void*, void*);
void ItemOcarina_Fly(void*, void*);
void ItemOcarina_GetThrown(void*, void*);
void func_80B864EC(void*, void*);
void func_80B865E0(void*, void*);
void ItemOcarina_DoNothing(void*, void*);
void ItemOcarina_StartSoTCutscene(void*, void*);
void ItemOcarina_WaitInWater(void*, void*);
void ItemOcarina_Update(void*, void*);
void ItemOcarina_Draw(void*, void*);

const GzActorSpan gGzItemOcarinaSpans[] = {
    { offsetof(ItemOcarina, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ItemOcarina, spinRotOffset), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzItemOcarinaSpanCount = ARRAY_COUNT(gGzItemOcarinaSpans);

const GzActorFunction gGzItemOcarinaFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)ItemOcarina_Init },
    { 0x194, (void*)ItemOcarina_Destroy },
    { 0x1a4, (void*)ItemOcarina_Fly },
    { 0x350, (void*)ItemOcarina_GetThrown },
    { 0x3a8, (void*)func_80B864EC },
    { 0x49c, (void*)func_80B865E0 },
    { 0x4fc, (void*)ItemOcarina_DoNothing },
    { 0x50c, (void*)ItemOcarina_StartSoTCutscene },
    { 0x580, (void*)ItemOcarina_WaitInWater },
    { 0x654, (void*)ItemOcarina_Update },
    { 0x678, (void*)ItemOcarina_Draw },
};
const size_t gGzItemOcarinaFunctionCount = ARRAY_COUNT(gGzItemOcarinaFunctions);
