// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Bom_Guard/z_bg_bom_guard.h"

void BgBomGuard_Init(void*, void*);
void BgBomGuard_Destroy(void*, void*);
void func_8086E638(void*, void*);
void BgBomGuard_Update(void*, void*);

const GzActorSpan gGzBgBomGuardSpans[] = {
    { offsetof(BgBomGuard, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgBomGuard, unk_168), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBomGuard, unk_16C.x), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBomGuard, unk_16C.y), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBomGuard, unk_16C.z), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgBomGuardSpanCount = ARRAY_COUNT(gGzBgBomGuardSpans);

const GzActorFunction gGzBgBomGuardFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgBomGuard_Init },
    { 0xa8, (void*)BgBomGuard_Destroy },
    { 0xdc, (void*)func_8086E638 },
    { 0x1a8, (void*)BgBomGuard_Update },
};
const size_t gGzBgBomGuardFunctionCount = ARRAY_COUNT(gGzBgBomGuardFunctions);
