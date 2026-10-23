// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mizu_Uzu/z_bg_mizu_uzu.h"

void BgMizuUzu_Init(void*, void*);
void BgMizuUzu_Destroy(void*, void*);
void func_8089F788(void*, void*);
void BgMizuUzu_Update(void*, void*);
void BgMizuUzu_Draw(void*, void*);

const GzActorSpan gGzBgMizuUzuSpans[] = {
    { offsetof(BgMizuUzu, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgMizuUzuSpanCount = ARRAY_COUNT(gGzBgMizuUzuSpans);

const GzActorFunction gGzBgMizuUzuFunctions[] = {
    { 0x0, (void*)BgMizuUzu_Init },
    { 0x7c, (void*)BgMizuUzu_Destroy },
    { 0xb0, (void*)func_8089F788 },
    { 0x128, (void*)BgMizuUzu_Update },
    { 0x14c, (void*)BgMizuUzu_Draw },
};
const size_t gGzBgMizuUzuFunctionCount = ARRAY_COUNT(gGzBgMizuUzuFunctions);
