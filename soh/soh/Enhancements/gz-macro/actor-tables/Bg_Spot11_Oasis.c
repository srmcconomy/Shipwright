// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot11_Oasis/z_bg_spot11_oasis.h"

void BgSpot11Oasis_Init(void*, void*);
void func_808B2980(void*, void*);
void func_808B29F0(void*, void*);
void func_808B2AB8(void*, void*);
void BgSpot11Oasis_Update(void*, void*);
void BgSpot11Oasis_Draw(void*, void*);

const GzActorSpan gGzBgSpot11OasisSpans[] = {
    { offsetof(BgSpot11Oasis, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot11Oasis, unk_150), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot11Oasis, unk_151), 0, 0x141, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot11OasisSpanCount = ARRAY_COUNT(gGzBgSpot11OasisSpans);

const GzActorFunction gGzBgSpot11OasisFunctions[] = {
    { 0x0, NULL },
    { 0x20, NULL },
    { 0x134, (void*)BgSpot11Oasis_Init },
    { 0x188, NULL },
    { 0x19c, (void*)func_808B2980 },
    { 0x1fc, NULL },
    { 0x210, (void*)func_808B29F0 },
    { 0x2c8, NULL },
    { 0x2dc, (void*)func_808B2AB8 },
    { 0x2ec, (void*)BgSpot11Oasis_Update },
    { 0x4e0, (void*)BgSpot11Oasis_Draw },
};
const size_t gGzBgSpot11OasisFunctionCount = ARRAY_COUNT(gGzBgSpot11OasisFunctions);
