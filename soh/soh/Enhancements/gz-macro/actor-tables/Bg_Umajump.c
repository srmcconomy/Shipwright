// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Umajump/z_bg_umajump.h"

void BgUmaJump_Init(void*, void*);
void BgUmaJump_Destroy(void*, void*);
void BgUmaJump_Update(void*, void*);
void BgUmaJump_Draw(void*, void*);

const GzActorSpan gGzBgUmaJumpSpans[] = {
};
const size_t gGzBgUmaJumpSpanCount = ARRAY_COUNT(gGzBgUmaJumpSpans);

const GzActorFunction gGzBgUmaJumpFunctions[] = {
    { 0x0, (void*)BgUmaJump_Init },
    { 0xbc, (void*)BgUmaJump_Destroy },
    { 0xf0, (void*)BgUmaJump_Update },
    { 0x100, (void*)BgUmaJump_Draw },
};
const size_t gGzBgUmaJumpFunctionCount = ARRAY_COUNT(gGzBgUmaJumpFunctions);
