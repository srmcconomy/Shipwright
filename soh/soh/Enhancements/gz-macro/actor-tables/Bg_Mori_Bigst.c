// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mori_Bigst/z_bg_mori_bigst.h"

void BgMoriBigst_Init(void*, void*);
void BgMoriBigst_Destroy(void*, void*);
void BgMoriBigst_SetupWaitForMoriTex(void*, void*);
void BgMoriBigst_WaitForMoriTex(void*, void*);
void BgMoriBigst_SetupNoop(void*, void*);
void BgMoriBigst_SetupStalfosFight(void*, void*);
void BgMoriBigst_StalfosFight(void*, void*);
void BgMoriBigst_SetupFall(void*, void*);
void BgMoriBigst_Fall(void*, void*);
void BgMoriBigst_SetupLanding(void*, void*);
void BgMoriBigst_Landing(void*, void*);
void BgMoriBigst_SetupStalfosPairFight(void*, void*);
void BgMoriBigst_StalfosPairFight(void*, void*);
void BgMoriBigst_SetupDone(void*, void*);
void BgMoriBigst_Update(void*, void*);
void BgMoriBigst_Draw(void*, void*);

const GzActorSpan gGzBgMoriBigstSpans[] = {
    { offsetof(BgMoriBigst, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMoriBigst, waitTimer), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgMoriBigst, moriTexObjIndex), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgMoriBigstSpanCount = ARRAY_COUNT(gGzBgMoriBigstSpans);

const GzActorFunction gGzBgMoriBigstFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x64, (void*)BgMoriBigst_Init },
    { 0x13c, (void*)BgMoriBigst_Destroy },
    { 0x170, (void*)BgMoriBigst_SetupWaitForMoriTex },
    { 0x198, (void*)BgMoriBigst_WaitForMoriTex },
    { 0x264, (void*)BgMoriBigst_SetupNoop },
    { 0x288, (void*)BgMoriBigst_SetupStalfosFight },
    { 0x33c, (void*)BgMoriBigst_StalfosFight },
    { 0x3b4, (void*)BgMoriBigst_SetupFall },
    { 0x3dc, (void*)BgMoriBigst_Fall },
    { 0x468, (void*)BgMoriBigst_SetupLanding },
    { 0x4fc, (void*)BgMoriBigst_Landing },
    { 0x528, (void*)BgMoriBigst_SetupStalfosPairFight },
    { 0x640, (void*)BgMoriBigst_StalfosPairFight },
    { 0x6a0, (void*)BgMoriBigst_SetupDone },
    { 0x6c4, (void*)BgMoriBigst_Update },
    { 0x738, (void*)BgMoriBigst_Draw },
};
const size_t gGzBgMoriBigstFunctionCount = ARRAY_COUNT(gGzBgMoriBigstFunctions);
