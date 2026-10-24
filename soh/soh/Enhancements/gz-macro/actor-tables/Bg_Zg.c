// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Zg/z_bg_zg.h"

void BgZg_Destroy(void*, void*);
s32 func_808C0C98(void*, void*);
void func_808C0CD4(void*, void*);
void func_808C0D08(void*, void*);
void BgZg_Update(void*, void*);
void BgZg_Init(void*, void*);
void func_808C0EEC(void*, void*);
void BgZg_Draw(void*, void*);

const GzActorSpan gGzBgZgSpans[] = {
    { offsetof(BgZg, action), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgZg, drawConfig), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgZgSpanCount = ARRAY_COUNT(gGzBgZgSpans);

const GzActorFunction gGzBgZgFunctions[] = {
    { 0x0, (void*)BgZg_Destroy },
    { 0x34, NULL },
    { 0x7c, (void*)func_808C0C98 },
    { 0xb0, NULL },
    { 0xc0, (void*)func_808C0CD4 },
    { 0x10c, (void*)func_808C0D08 },
    { 0x1b0, (void*)BgZg_Update },
    { 0x1f8, (void*)BgZg_Init },
    { 0x2e4, (void*)func_808C0EEC },
    { 0x35c, (void*)BgZg_Draw },
};
const size_t gGzBgZgFunctionCount = ARRAY_COUNT(gGzBgZgFunctions);
