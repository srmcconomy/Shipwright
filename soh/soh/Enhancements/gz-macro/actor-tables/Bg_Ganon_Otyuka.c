// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Ganon_Otyuka/z_bg_ganon_otyuka.h"

void BgGanonOtyuka_Init(void*, void*);
void BgGanonOtyuka_Destroy(void*, void*);
void BgGanonOtyuka_WaitToFall(void*, void*);
void BgGanonOtyuka_Fall(void*, void*);
void BgGanonOtyuka_DoNothing(void*, void*);
void BgGanonOtyuka_Update(void*, void*);
void BgGanonOtyuka_Draw(void*, void*);

const GzActorSpan gGzBgGanonOtyukaSpans[] = {
    { offsetof(BgGanonOtyuka, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgGanonOtyuka, dropTimer), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, isFalling), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, unwalledSides), 0, 0x15b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, visibleSides), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, flashTimer), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, flashState), 0, 0x15e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, flashYScale), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, flashPrimColorR), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, flashPrimColorG), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, flashPrimColorB), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, flashEnvColorR), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, flashEnvColorG), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGanonOtyuka, flashEnvColorB), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgGanonOtyukaSpanCount = ARRAY_COUNT(gGzBgGanonOtyukaSpans);

const GzActorFunction gGzBgGanonOtyukaFunctions[] = {
    { 0x0, (void*)BgGanonOtyuka_Init },
    { 0x9c, (void*)BgGanonOtyuka_Destroy },
    { 0xd0, (void*)BgGanonOtyuka_WaitToFall },
    { 0x320, (void*)BgGanonOtyuka_Fall },
    { 0x760, (void*)BgGanonOtyuka_DoNothing },
    { 0x770, (void*)BgGanonOtyuka_Update },
    { 0x7b8, (void*)BgGanonOtyuka_Draw },
};
const size_t gGzBgGanonOtyukaFunctionCount = ARRAY_COUNT(gGzBgGanonOtyukaFunctions);
