// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Ice_Shutter/z_bg_ice_shutter.h"

void BgIceShutter_Init(void*, void*);
void BgIceShutter_Destroy(void*, void*);
void func_80891CF4(void*, void*);
void func_80891D6C(void*, void*);
void func_80891DD4(void*, void*);
void BgIceShutter_Update(void*, void*);
void BgIceShutter_Draw(void*, void*);

const GzActorSpan gGzBgIceShutterSpans[] = {
    { offsetof(BgIceShutter, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgIceShutterSpanCount = ARRAY_COUNT(gGzBgIceShutterSpans);

const GzActorFunction gGzBgIceShutterFunctions[] = {
    { 0x0, NULL },
    { 0x88, (void*)BgIceShutter_Init },
    { 0x208, (void*)BgIceShutter_Destroy },
    { 0x23c, (void*)func_80891CF4 },
    { 0x2b4, (void*)func_80891D6C },
    { 0x31c, (void*)func_80891DD4 },
    { 0x384, (void*)BgIceShutter_Update },
    { 0x3a8, (void*)BgIceShutter_Draw },
};
const size_t gGzBgIceShutterFunctionCount = ARRAY_COUNT(gGzBgIceShutterFunctions);
