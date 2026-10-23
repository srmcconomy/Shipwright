// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Treemouth/z_bg_treemouth.h"

void BgTreemouth_Init(void*, void*);
void BgTreemouth_Destroy(void*, void*);
void func_808BC65C(void*, void*);
void func_808BC80C(void*, void*);
void func_808BC864(void*, void*);
void func_808BC8B8(void*, void*);
void func_808BC9EC(void*, void*);
void func_808BCAF0(void*, void*);
void BgTreemouth_DoNothing(void*, void*);
void BgTreemouth_Update(void*, void*);
void BgTreemouth_Draw(void*, void*);

const GzActorSpan gGzBgTreemouthSpans[] = {
    { offsetof(BgTreemouth, unk_164[0]), offsetof(BgTreemouth, unk_164[1]) - offsetof(BgTreemouth, unk_164[0]), 0x154, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(BgTreemouth, unk_168), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgTreemouth, actionFunc), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgTreemouthSpanCount = ARRAY_COUNT(gGzBgTreemouthSpans);

const GzActorFunction gGzBgTreemouthFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgTreemouth_Init },
    { 0x134, (void*)BgTreemouth_Destroy },
    { 0x168, (void*)func_808BC65C },
    { 0x204, (void*)func_808BC6F8 },
    { 0x318, (void*)func_808BC80C },
    { 0x370, (void*)func_808BC864 },
    { 0x3c4, (void*)func_808BC8B8 },
    { 0x4f8, (void*)func_808BC9EC },
    { 0x600, (void*)func_808BCAF0 },
    { 0x69c, (void*)BgTreemouth_DoNothing },
    { 0x6ac, (void*)BgTreemouth_Update },
    { 0x72c, (void*)BgTreemouth_Draw },
};
const size_t gGzBgTreemouthFunctionCount = ARRAY_COUNT(gGzBgTreemouthFunctions);
