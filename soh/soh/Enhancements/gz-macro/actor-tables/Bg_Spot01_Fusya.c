// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot01_Fusya/z_bg_spot01_fusya.h"

void BgSpot01Fusya_Init(void*, void*);
void BgSpot01Fusya_Destroy(void*, void*);
void func_808AAA50(void*, void*);
void BgSpot01Fusya_Update(void*, void*);
void BgSpot01Fusya_Draw(void*, void*);

const GzActorSpan gGzBgSpot01FusyaSpans[] = {
    { offsetof(BgSpot01Fusya, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot01Fusya, unk_150[0]), offsetof(BgSpot01Fusya, unk_150[1]) - offsetof(BgSpot01Fusya, unk_150[0]), 0x140, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot01Fusya, unk_154), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot01Fusya, unk_158), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot01Fusya, unk_15C), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot01FusyaSpanCount = ARRAY_COUNT(gGzBgSpot01FusyaSpans);

const GzActorFunction gGzBgSpot01FusyaFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgSpot01Fusya_Init },
    { 0x88, (void*)BgSpot01Fusya_Destroy },
    { 0x98, (void*)func_808AAA50 },
    { 0x158, (void*)BgSpot01Fusya_Update },
    { 0x17c, (void*)BgSpot01Fusya_Draw },
};
const size_t gGzBgSpot01FusyaFunctionCount = ARRAY_COUNT(gGzBgSpot01FusyaFunctions);
