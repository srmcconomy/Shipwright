// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot15_Saku/z_bg_spot15_saku.h"

void BgSpot15Saku_Init(void*, void*);
void BgSpot15Saku_Destroy(void*, void*);
void func_808B4930(void*, void*);
void func_808B4978(void*, void*);
void func_808B4A04(void*, void*);
void BgSpot15Saku_Update(void*, void*);
void BgSpot15Saku_Draw(void*, void*);

const GzActorSpan gGzBgSpot15SakuSpans[] = {
    { offsetof(BgSpot15Saku, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot15Saku, unk_168), 0, 0x158, 0x0, 1, 8, GZ_SPAN_VALUE },
    { offsetof(BgSpot15Saku, unk_170.x), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot15Saku, unk_170.y), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot15Saku, unk_170.z), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot15Saku, timer), 0, 0x16c, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot15SakuSpanCount = ARRAY_COUNT(gGzBgSpot15SakuSpans);

const GzActorFunction gGzBgSpot15SakuFunctions[] = {
    { 0x0, (void*)BgSpot15Saku_Init },
    { 0xb4, (void*)BgSpot15Saku_Destroy },
    { 0xe8, (void*)func_808B4930 },
    { 0x130, (void*)func_808B4978 },
    { 0x1bc, (void*)func_808B4A04 },
    { 0x1ec, (void*)BgSpot15Saku_Update },
    { 0x220, (void*)BgSpot15Saku_Draw },
};
const size_t gGzBgSpot15SakuFunctionCount = ARRAY_COUNT(gGzBgSpot15SakuFunctions);
