// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot01_Idosoko/z_bg_spot01_idosoko.h"

void BgSpot01Idosoko_Init(void*, void*);
void BgSpot01Idosoko_Destroy(void*, void*);
void func_808ABF54(void*, void*);
void BgSpot01Idosoko_Update(void*, void*);
void BgSpot01Idosoko_Draw(void*, void*);

const GzActorSpan gGzBgSpot01IdosokoSpans[] = {
    { offsetof(BgSpot01Idosoko, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgSpot01IdosokoSpanCount = ARRAY_COUNT(gGzBgSpot01IdosokoSpans);

const GzActorFunction gGzBgSpot01IdosokoFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgSpot01Idosoko_Init },
    { 0xac, (void*)BgSpot01Idosoko_Destroy },
    { 0xe0, (void*)func_808ABF54 },
    { 0xf0, (void*)BgSpot01Idosoko_Update },
    { 0x114, (void*)BgSpot01Idosoko_Draw },
};
const size_t gGzBgSpot01IdosokoFunctionCount = ARRAY_COUNT(gGzBgSpot01IdosokoFunctions);
