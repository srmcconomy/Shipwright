// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot01_Objects2/z_bg_spot01_objects2.h"

void BgSpot01Objects2_Init(void*, void*);
void BgSpot01Objects2_Destroy(void*, void*);
void func_808AC2BC(void*, void*);
void func_808AC474(void*, void*);
void BgSpot01Objects2_Update(void*, void*);
void func_808AC4A4(void*, void*);

const GzActorSpan gGzBgSpot01Objects2Spans[] = {
    { offsetof(BgSpot01Objects2, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot01Objects2, unk_168[0]), offsetof(BgSpot01Objects2, unk_168[1]) - offsetof(BgSpot01Objects2, unk_168[0]), 0x158, 0x1, 16, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot01Objects2, objectId), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot01Objects2, objBankIndex), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot01Objects2SpanCount = ARRAY_COUNT(gGzBgSpot01Objects2Spans);

const GzActorFunction gGzBgSpot01Objects2Functions[] = {
    { 0x0, (void*)BgSpot01Objects2_Init },
    { 0xdc, (void*)BgSpot01Objects2_Destroy },
    { 0xec, NULL },
    { 0x180, (void*)func_808AC2BC },
    { 0x330, (void*)func_808AC474 },
    { 0x340, (void*)BgSpot01Objects2_Update },
    { 0x364, (void*)func_808AC4A4 },
};
const size_t gGzBgSpot01Objects2FunctionCount = ARRAY_COUNT(gGzBgSpot01Objects2Functions);
