// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot18_Shutter/z_bg_spot18_shutter.h"

void BgSpot18Shutter_Init(void*, void*);
void BgSpot18Shutter_Destroy(void*, void*);
void func_808B95AC(void*, void*);
void func_808B95B8(void*, void*);
void func_808B9618(void*, void*);
void func_808B9698(void*, void*);
void func_808B971C(void*, void*);
void BgSpot18Shutter_Update(void*, void*);
void BgSpot18Shutter_Draw(void*, void*);

const GzActorSpan gGzBgSpot18ShutterSpans[] = {
    { offsetof(BgSpot18Shutter, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgSpot18ShutterSpanCount = ARRAY_COUNT(gGzBgSpot18ShutterSpans);

const GzActorFunction gGzBgSpot18ShutterFunctions[] = {
    { 0x0, (void*)BgSpot18Shutter_Init },
    { 0x1b0, (void*)BgSpot18Shutter_Destroy },
    { 0x1e4, (void*)func_808B95AC },
    { 0x1f4, (void*)func_808B95B8 },
    { 0x254, (void*)func_808B9618 },
    { 0x2dc, (void*)func_808B9698 },
    { 0x360, (void*)func_808B971C },
    { 0x43c, (void*)BgSpot18Shutter_Update },
    { 0x460, (void*)BgSpot18Shutter_Draw },
};
const size_t gGzBgSpot18ShutterFunctionCount = ARRAY_COUNT(gGzBgSpot18ShutterFunctions);
