// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Kousi/z_bg_hidan_kousi.h"

void BgHidanKousi_Init(void*, void*);
void BgHidanKousi_Destroy(void*, void*);
void func_80889B5C(void*, void*);
void func_80889BC0(void*, void*);
void func_80889C90(void*, void*);
void func_80889D28(void*, void*);
void BgHidanKousi_Update(void*, void*);
void BgHidanKousi_Draw(void*, void*);

const GzActorSpan gGzBgHidanKousiSpans[] = {
    { offsetof(BgHidanKousi, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHidanKousi, unk_168), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanKousiSpanCount = ARRAY_COUNT(gGzBgHidanKousiSpans);

const GzActorFunction gGzBgHidanKousiFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgHidanKousi_Init },
    { 0x104, (void*)BgHidanKousi_Destroy },
    { 0x138, NULL },
    { 0x1c4, (void*)func_80889B5C },
    { 0x228, (void*)func_80889BC0 },
    { 0x280, (void*)func_80889C18 },
    { 0x2f8, (void*)func_80889C90 },
    { 0x394, (void*)func_80889D28 },
    { 0x3a4, (void*)BgHidanKousi_Update },
    { 0x3c8, (void*)BgHidanKousi_Draw },
};
const size_t gGzBgHidanKousiFunctionCount = ARRAY_COUNT(gGzBgHidanKousiFunctions);
