// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Haka_Megane/z_bg_haka_megane.h"

void BgHakaMegane_Init(void*, void*);
void BgHakaMegane_Destroy(void*, void*);
void BgHakaMegane_WaitForObject(void*, void*);
void BgHakaMegane_UpdateState(void*, void*);
void BgHakaMegane_DoNothing(void*, void*);
void BgHakaMegane_Update(void*, void*);
void BgHakaMegane_Draw(void*, void*);

const GzActorSpan gGzBgHakaMeganeSpans[] = {
    { offsetof(BgHakaMegane, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHakaMegane, unk_168[0]), 0, 0x158, 0x1, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaMegane, objBankIndex), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaMegane, unk_16A[0]), offsetof(BgHakaMegane, unk_16A[1]) - offsetof(BgHakaMegane, unk_16A[0]), 0x15a, 0x1, 2, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgHakaMeganeSpanCount = ARRAY_COUNT(gGzBgHakaMeganeSpans);

const GzActorFunction gGzBgHakaMeganeFunctions[] = {
    { 0x0, (void*)BgHakaMegane_Init },
    { 0xb8, (void*)BgHakaMegane_Destroy },
    { 0xec, (void*)BgHakaMegane_WaitForObject },
    { 0x1bc, (void*)BgHakaMegane_UpdateState },
    { 0x230, (void*)BgHakaMegane_DoNothing },
    { 0x240, (void*)BgHakaMegane_Update },
    { 0x264, (void*)BgHakaMegane_Draw },
};
const size_t gGzBgHakaMeganeFunctionCount = ARRAY_COUNT(gGzBgHakaMeganeFunctions);
