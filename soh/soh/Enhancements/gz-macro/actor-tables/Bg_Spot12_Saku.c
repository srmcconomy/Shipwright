// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot12_Saku/z_bg_spot12_saku.h"

void BgSpot12Saku_Init(void*, void*);
void BgSpot12Saku_Destroy(void*, void*);
void func_808B357C(void*, void*);
void func_808B3604(void*, void*);
void func_808B37AC(void*, void*);
void BgSpot12Saku_Update(void*, void*);
void BgSpot12Saku_Draw(void*, void*);

const GzActorSpan gGzBgSpot12SakuSpans[] = {
    { offsetof(BgSpot12Saku, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot12Saku, timer), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot12SakuSpanCount = ARRAY_COUNT(gGzBgSpot12SakuSpans);

const GzActorFunction gGzBgSpot12SakuFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgSpot12Saku_Init },
    { 0xd8, (void*)BgSpot12Saku_Destroy },
    { 0x10c, NULL },
    { 0x13c, (void*)func_808B357C },
    { 0x1a4, NULL },
    { 0x1c4, (void*)func_808B3604 },
    { 0x2d4, NULL },
    { 0x368, (void*)func_808B37AC },
    { 0x378, (void*)BgSpot12Saku_Update },
    { 0x3ac, (void*)BgSpot12Saku_Draw },
};
const size_t gGzBgSpot12SakuFunctionCount = ARRAY_COUNT(gGzBgSpot12SakuFunctions);
