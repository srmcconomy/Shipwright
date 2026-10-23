// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Ydan_Hasi/z_bg_ydan_hasi.h"

void BgYdanHasi_Init(void*, void*);
void BgYdanHasi_Destroy(void*, void*);
void BgYdanHasi_UpdateFloatingBlock(void*, void*);
void BgYdanHasi_InitWater(void*, void*);
void BgYdanHasi_MoveWater(void*, void*);
void BgYdanHasi_DecWaterTimer(void*, void*);
void BgYdanHasi_SetupThreeBlocks(void*, void*);
void BgYdanHasi_UpdateThreeBlocks(void*, void*);
void BgYdanHasi_Update(void*, void*);
void BgYdanHasi_Draw(void*, void*);

const GzActorSpan gGzBgYdanHasiSpans[] = {
    { offsetof(BgYdanHasi, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgYdanHasi, type), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanHasi, timer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgYdanHasiSpanCount = ARRAY_COUNT(gGzBgYdanHasiSpans);

const GzActorFunction gGzBgYdanHasiFunctions[] = {
    { 0x0, (void*)BgYdanHasi_Init },
    { 0x164, (void*)BgYdanHasi_Destroy },
    { 0x198, (void*)BgYdanHasi_UpdateFloatingBlock },
    { 0x2d0, (void*)BgYdanHasi_InitWater },
    { 0x31c, (void*)BgYdanHasi_MoveWater },
    { 0x3ec, (void*)BgYdanHasi_DecWaterTimer },
    { 0x440, (void*)BgYdanHasi_SetupThreeBlocks },
    { 0x4ac, (void*)BgYdanHasi_UpdateThreeBlocks },
    { 0x57c, (void*)BgYdanHasi_Update },
    { 0x5a0, (void*)BgYdanHasi_Draw },
};
const size_t gGzBgYdanHasiFunctionCount = ARRAY_COUNT(gGzBgYdanHasiFunctions);
