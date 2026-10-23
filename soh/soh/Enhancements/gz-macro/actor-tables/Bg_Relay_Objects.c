// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Relay_Objects/z_bg_relay_objects.h"

void BgRelayObjects_Init(void*, void*);
void BgRelayObjects_Destroy(void*, void*);
void func_808A90F4(void*, void*);
void func_808A91AC(void*, void*);
void func_808A9234(void*, void*);
void BgRelayObjects_DoNothing(void*, void*);
void func_808A932C(void*, void*);
void func_808A939C(void*, void*);
void BgRelayObjects_Update(void*, void*);
void BgRelayObjects_Draw(void*, void*);

const GzActorSpan gGzBgRelayObjectsSpans[] = {
    { offsetof(BgRelayObjects, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgRelayObjects, switchFlag), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgRelayObjects, unk_169), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgRelayObjects, timer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgRelayObjectsSpanCount = ARRAY_COUNT(gGzBgRelayObjectsSpans);

const GzActorFunction gGzBgRelayObjectsFunctions[] = {
    { 0x0, (void*)BgRelayObjects_Init },
    { 0x240, (void*)BgRelayObjects_Destroy },
    { 0x2ac, (void*)func_808A90F4 },
    { 0x368, (void*)func_808A91AC },
    { 0x3f0, (void*)func_808A9234 },
    { 0x4dc, (void*)BgRelayObjects_DoNothing },
    { 0x4ec, (void*)func_808A932C },
    { 0x55c, (void*)func_808A939C },
    { 0x630, (void*)BgRelayObjects_Update },
    { 0x654, (void*)BgRelayObjects_Draw },
};
const size_t gGzBgRelayObjectsFunctionCount = ARRAY_COUNT(gGzBgRelayObjectsFunctions);
