// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot01_Idohashira/z_bg_spot01_idohashira.h"

void BgSpot01Idohashira_PlayBreakSfx2(void*, void*);
void func_808AAE6C(void*, void*);
void func_808AAF34(void*, void*);
void BgSpot01Idohashira_Destroy(void*, void*);
void func_808AB3F8(void*, void*);
void func_808AB414(void*, void*);
void func_808AB444(void*, void*);
void func_808AB504(void*, void*);
void func_808AB510(void*, void*);
void func_808AB530(void*, void*);
void func_808AB570(void*, void*);
void BgSpot01Idohashira_Update(void*, void*);
void BgSpot01Idohashira_Init(void*, void*);
void func_808AB700(void*, void*);
void BgSpot01Idohashira_Draw(void*, void*);

const GzActorSpan gGzBgSpot01IdohashiraSpans[] = {
    { offsetof(BgSpot01Idohashira, action), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot01Idohashira, drawConfig), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot01Idohashira, npcAction), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot01Idohashira, unk_170), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot01IdohashiraSpanCount = ARRAY_COUNT(gGzBgSpot01IdohashiraSpans);

const GzActorFunction gGzBgSpot01IdohashiraFunctions[] = {
    { 0x0, NULL },
    { 0x28, (void*)BgSpot01Idohashira_PlayBreakSfx2 },
    { 0x60, NULL },
    { 0x198, (void*)func_808AAE6C },
    { 0x264, (void*)func_808AAF34 },
    { 0x428, (void*)BgSpot01Idohashira_Destroy },
    { 0x45c, NULL },
    { 0x47c, NULL },
    { 0x4c8, NULL },
    { 0x51c, NULL },
    { 0x5c0, NULL },
    { 0x70c, NULL },
    { 0x720, (void*)func_808AB3F8 },
    { 0x740, (void*)func_808AB414 },
    { 0x76c, (void*)func_808AB444 },
    { 0x818, (void*)func_808AB504 },
    { 0x828, (void*)func_808AB510 },
    { 0x848, (void*)func_808AB530 },
    { 0x88c, (void*)func_808AB570 },
    { 0x8ac, (void*)BgSpot01Idohashira_Update },
    { 0x8f4, (void*)BgSpot01Idohashira_Init },
    { 0xa0c, (void*)func_808AB700 },
    { 0xa9c, (void*)BgSpot01Idohashira_Draw },
};
const size_t gGzBgSpot01IdohashiraFunctionCount = ARRAY_COUNT(gGzBgSpot01IdohashiraFunctions);
