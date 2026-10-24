// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot15_Rrbox/z_bg_spot15_rrbox.h"

s32 func_808B3A40(void*, void*);
s32 func_808B3AAC(void*, void*);
void BgSpot15Rrbox_Init(void*, void*);
void BgSpot15Rrbox_Destroy(void*, void*);
s32 BgSpot15Rrbox_TrySnapToFloor(void*, void*);
s32 func_808B4010(void*, void*);
void func_808B4084(void*, void*);
void func_808B40AC(void*, void*);
void func_808B4178(void*, void*);
void func_808B4194(void*, void*);
void func_808B4380(void*, void*);
void func_808B43D0(void*, void*);
void func_808B44B8(void*, void*);
void func_808B44CC(void*, void*);
void BgSpot15Rrbox_Update(void*, void*);
void BgSpot15Rrbox_Draw(void*, void*);

const GzActorSpan gGzBgSpot15RrboxSpans[] = {
    { offsetof(BgSpot15Rrbox, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot15Rrbox, unk_168), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot15Rrbox, unk_16C), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot15Rrbox, unk_170), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot15Rrbox, unk_174), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot15Rrbox, unk_178), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot15Rrbox, unk_17C), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot15Rrbox, bgId), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot15RrboxSpanCount = ARRAY_COUNT(gGzBgSpot15RrboxSpans);

const GzActorFunction gGzBgSpot15RrboxFunctions[] = {
    { 0x0, NULL },
    { 0x58, NULL },
    { 0xac, NULL },
    { 0xbc, (void*)func_808B3A40 },
    { 0x12c, (void*)func_808B3AAC },
    { 0x214, (void*)BgSpot15Rrbox_Init },
    { 0x2e4, (void*)BgSpot15Rrbox_Destroy },
    { 0x320, NULL },
    { 0x460, NULL },
    { 0x5e0, (void*)BgSpot15Rrbox_TrySnapToFloor },
    { 0x6a0, (void*)func_808B4010 },
    { 0x714, (void*)func_808B4084 },
    { 0x740, (void*)func_808B40AC },
    { 0x80c, (void*)func_808B4178 },
    { 0x82c, (void*)func_808B4194 },
    { 0xa18, (void*)func_808B4380 },
    { 0xa68, (void*)func_808B43D0 },
    { 0xb34, (void*)func_808B44B8 },
    { 0xb4c, (void*)func_808B44CC },
    { 0xb70, (void*)BgSpot15Rrbox_Update },
    { 0xbdc, (void*)BgSpot15Rrbox_Draw },
};
const size_t gGzBgSpot15RrboxFunctionCount = ARRAY_COUNT(gGzBgSpot15RrboxFunctions);
