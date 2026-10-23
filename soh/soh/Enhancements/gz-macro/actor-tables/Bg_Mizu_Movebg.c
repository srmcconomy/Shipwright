// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mizu_Movebg/z_bg_mizu_movebg.h"

void BgMizuMovebg_Init(void*, void*);
void BgMizuMovebg_Destroy(void*, void*);
void BgMizuMovebg_SetScrollAlphas(void*, void*);
void BgMizuMovebg_UpdateMain(void*, void*);
void BgMizuMovebg_UpdateHookshotPlatform(void*, void*);
void BgMizuMovebg_Update(void*, void*);
void BgMizuMovebg_Draw(void*, void*);

const GzActorSpan gGzBgMizuMovebgSpans[] = {
    { offsetof(BgMizuMovebg, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMizuMovebg, homeY), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuMovebg, scrollAlpha1), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuMovebg, scrollAlpha2), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuMovebg, scrollAlpha3), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuMovebg, scrollAlpha4), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMizuMovebg, sfxFlags), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMizuMovebg, dlist), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgMizuMovebg, waypointId), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgMizuMovebgSpanCount = ARRAY_COUNT(gGzBgMizuMovebgSpans);

const GzActorFunction gGzBgMizuMovebgFunctions[] = {
    { 0x0, NULL },
    { 0x6c, (void*)BgMizuMovebg_Init },
    { 0x434, (void*)BgMizuMovebg_Destroy },
    { 0x4e8, NULL },
    { 0x57c, (void*)BgMizuMovebg_SetScrollAlphas },
    { 0x700, (void*)BgMizuMovebg_UpdateMain },
    { 0xa3c, (void*)BgMizuMovebg_UpdateHookshotPlatform },
    { 0xbf8, (void*)BgMizuMovebg_Update },
    { 0xc1c, (void*)BgMizuMovebg_Draw },
};
const size_t gGzBgMizuMovebgFunctionCount = ARRAY_COUNT(gGzBgMizuMovebgFunctions);
