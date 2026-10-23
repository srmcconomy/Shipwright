// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Syoku/z_bg_hidan_syoku.h"

void BgHidanSyoku_Init(void*, void*);
void BgHidanSyoku_Destroy(void*, void*);
void func_8088F4B8(void*, void*);
void func_8088F514(void*, void*);
void func_8088F5A0(void*, void*);
void func_8088F62C(void*, void*);
void BgHidanSyoku_Update(void*, void*);
void BgHidanSyoku_Draw(void*, void*);

const GzActorSpan gGzBgHidanSyokuSpans[] = {
    { offsetof(BgHidanSyoku, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHidanSyoku, unk_168), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanSyoku, timer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanSyokuSpanCount = ARRAY_COUNT(gGzBgHidanSyokuSpans);

const GzActorFunction gGzBgHidanSyokuFunctions[] = {
    { 0x0, (void*)BgHidanSyoku_Init },
    { 0x8c, (void*)BgHidanSyoku_Destroy },
    { 0xc0, NULL },
    { 0xfc, (void*)func_8088F4B8 },
    { 0x15c, (void*)func_8088F514 },
    { 0x1e8, (void*)func_8088F5A0 },
    { 0x274, (void*)func_8088F62C },
    { 0x2d0, (void*)BgHidanSyoku_Update },
    { 0x378, (void*)BgHidanSyoku_Draw },
};
const size_t gGzBgHidanSyokuFunctionCount = ARRAY_COUNT(gGzBgHidanSyokuFunctions);
