// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Amishutter/z_bg_jya_amishutter.h"

void BgJyaAmishutter_Init(void*, void*);
void BgJyaAmishutter_Destroy(void*, void*);
void BgJyaAmishutter_Update(void*, void*);
void BgJyaAmishutter_Draw(void*, void*);

const GzActorSpan gGzBgJyaAmishutterSpans[] = {
    { offsetof(BgJyaAmishutter, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgJyaAmishutterSpanCount = ARRAY_COUNT(gGzBgJyaAmishutterSpans);

const GzActorFunction gGzBgJyaAmishutterFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgJyaAmishutter_Init },
    { 0xa0, (void*)BgJyaAmishutter_Destroy },
    { 0xd4, NULL },
    { 0xe8, NULL },
    { 0x144, NULL },
    { 0x158, NULL },
    { 0x1d0, NULL },
    { 0x1e4, NULL },
    { 0x220, NULL },
    { 0x234, NULL },
    { 0x298, (void*)BgJyaAmishutter_Update },
    { 0x2c0, (void*)BgJyaAmishutter_Draw },
};
const size_t gGzBgJyaAmishutterFunctionCount = ARRAY_COUNT(gGzBgJyaAmishutterFunctions);
