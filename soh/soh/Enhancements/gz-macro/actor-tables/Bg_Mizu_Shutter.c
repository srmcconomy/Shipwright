// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mizu_Shutter/z_bg_mizu_shutter.h"

void BgMizuShutter_Init(void*, void*);
void BgMizuShutter_Destroy(void*, void*);
void BgMizuShutter_WaitForSwitch(void*, void*);
void BgMizuShutter_WaitForCutscene(void*, void*);
void BgMizuShutter_Move(void*, void*);
void BgMizuShutter_WaitForTimer(void*, void*);
void BgMizuShutter_Update(void*, void*);
void BgMizuShutter_Draw(void*, void*);

const GzActorSpan gGzBgMizuShutterSpans[] = {
    { offsetof(BgMizuShutter, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMizuShutter, timer), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuShutter, timerMax), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuShutter, displayList), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMizuShutter, maxSpeed), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuShutter, closedPos.x), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuShutter, closedPos.y), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuShutter, closedPos.z), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuShutter, openPos.x), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuShutter, openPos.y), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuShutter, openPos.z), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgMizuShutterSpanCount = ARRAY_COUNT(gGzBgMizuShutterSpans);

const GzActorFunction gGzBgMizuShutterFunctions[] = {
    { 0x0, (void*)BgMizuShutter_Init },
    { 0x260, (void*)BgMizuShutter_Destroy },
    { 0x294, (void*)BgMizuShutter_WaitForSwitch },
    { 0x328, (void*)BgMizuShutter_WaitForCutscene },
    { 0x374, (void*)BgMizuShutter_Move },
    { 0x560, (void*)BgMizuShutter_WaitForTimer },
    { 0x5e0, (void*)BgMizuShutter_Update },
    { 0x604, (void*)BgMizuShutter_Draw },
};
const size_t gGzBgMizuShutterFunctionCount = ARRAY_COUNT(gGzBgMizuShutterFunctions);
