// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Jsjutan/z_en_jsjutan.h"

void EnJsjutan_Init(void*, void*);
void EnJsjutan_Destroy(void*, void*);
void func_80A89860(void*, void*);
void func_80A89A6C(void*, void*);
void EnJsjutan_Update(void*, void*);
void EnJsjutan_Draw(void*, void*);

const GzActorSpan gGzEnJsjutanSpans[] = {
    { offsetof(EnJsjutan, unk_164), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJsjutan, unk_168), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJsjutan, shadowAlpha), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJsjutan, unk_170), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJsjutan, unk_174), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJsjutan, unk_175), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnJsjutanSpanCount = ARRAY_COUNT(gGzEnJsjutanSpans);

const GzActorFunction gGzEnJsjutanFunctions[] = {
    { 0x0, (void*)EnJsjutan_Init },
    { 0x94, (void*)EnJsjutan_Destroy },
    { 0xc8, (void*)func_80A89860 },
    { 0x2d4, (void*)func_80A89A6C },
    { 0xdb4, (void*)EnJsjutan_Update },
    { 0xe8c, (void*)EnJsjutan_Draw },
};
const size_t gGzEnJsjutanFunctionCount = ARRAY_COUNT(gGzEnJsjutanFunctions);
