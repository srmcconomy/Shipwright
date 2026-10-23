// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Block/z_bg_jya_block.h"

void BgJyaBlock_Init(void*, void*);
void BgJyaBlock_Destroy(void*, void*);
void BgJyaBlock_Update(void*, void*);
void BgJyaBlock_Draw(void*, void*);

const GzActorSpan gGzBgJyaBlockSpans[] = {
};
const size_t gGzBgJyaBlockSpanCount = ARRAY_COUNT(gGzBgJyaBlockSpans);

const GzActorFunction gGzBgJyaBlockFunctions[] = {
    { 0x0, (void*)BgJyaBlock_Init },
    { 0xb8, (void*)BgJyaBlock_Destroy },
    { 0xec, (void*)BgJyaBlock_Update },
    { 0x110, (void*)BgJyaBlock_Draw },
};
const size_t gGzBgJyaBlockFunctionCount = ARRAY_COUNT(gGzBgJyaBlockFunctions);
