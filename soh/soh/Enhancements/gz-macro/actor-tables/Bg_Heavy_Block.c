// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Heavy_Block/z_bg_heavy_block.h"

void BgHeavyBlock_SetupDynapoly(void*, void*);
void BgHeavyBlock_Init(void*, void*);
void BgHeavyBlock_Destroy(void*, void*);
void BgHeavyBlock_MovePiece(void*, void*);
void BgHeavyBlock_SpawnPieces(void*, void*);
void BgHeavyBlock_Wait(void*, void*);
void BgHeavyBlock_LiftedUp(void*, void*);
void BgHeavyBlock_Fly(void*, void*);
void BgHeavyBlock_DoNothing(void*, void*);
void BgHeavyBlock_Land(void*, void*);
void BgHeavyBlock_Update(void*, void*);
void BgHeavyBlock_Draw(void*, void*);
void BgHeavyBlock_DrawPiece(void*, void*);

const GzActorSpan gGzBgHeavyBlockSpans[] = {
    { offsetof(BgHeavyBlock, unk_164.x), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHeavyBlock, unk_164.y), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHeavyBlock, unk_164.z), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHeavyBlock, timer), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHeavyBlock, pieceFlags), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHeavyBlock, actionFunc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgHeavyBlockSpanCount = ARRAY_COUNT(gGzBgHeavyBlockSpans);

const GzActorFunction gGzBgHeavyBlockFunctions[] = {
    { 0x0, NULL },
    { 0x90, NULL },
    { 0x20c, (void*)BgHeavyBlock_SetupDynapoly },
    { 0x280, (void*)BgHeavyBlock_Init },
    { 0x4c4, (void*)BgHeavyBlock_Destroy },
    { 0x50c, (void*)BgHeavyBlock_MovePiece },
    { 0x6d0, NULL },
    { 0xa34, (void*)BgHeavyBlock_SpawnPieces },
    { 0xc2c, (void*)BgHeavyBlock_Wait },
    { 0xd54, (void*)BgHeavyBlock_LiftedUp },
    { 0xebc, (void*)BgHeavyBlock_Fly },
    { 0x11d4, (void*)BgHeavyBlock_DoNothing },
    { 0x11e4, (void*)BgHeavyBlock_Land },
    { 0x1454, (void*)BgHeavyBlock_Update },
    { 0x1478, (void*)BgHeavyBlock_Draw },
    { 0x15dc, (void*)BgHeavyBlock_DrawPiece },
};
const size_t gGzBgHeavyBlockFunctionCount = ARRAY_COUNT(gGzBgHeavyBlockFunctions);
