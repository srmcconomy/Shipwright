// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Fslift/z_bg_hidan_fslift.h"

void BgHidanFslift_Init(void*, void*);
void BgHidanFslift_Destroy(void*, void*);
void BgHidanFslift_Idle(void*, void*);
void BgHidanFslift_Descend(void*, void*);
void BgHidanFslift_Ascend(void*, void*);
void BgHidanFslift_Update(void*, void*);
void BgHidanFslift_Draw(void*, void*);

const GzActorSpan gGzBgHidanFsliftSpans[] = {
    { offsetof(BgHidanFslift, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHidanFslift, timer), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFslift, cameraSetting), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanFsliftSpanCount = ARRAY_COUNT(gGzBgHidanFsliftSpans);

const GzActorFunction gGzBgHidanFsliftFunctions[] = {
    { 0x0, (void*)BgHidanFslift_Init },
    { 0xe8, NULL },
    { 0x148, (void*)BgHidanFslift_Destroy },
    { 0x17c, NULL },
    { 0x198, (void*)BgHidanFslift_Idle },
    { 0x238, (void*)BgHidanFslift_Descend },
    { 0x2a4, (void*)BgHidanFslift_Ascend },
    { 0x340, (void*)BgHidanFslift_Update },
    { 0x3e8, (void*)BgHidanFslift_Draw },
};
const size_t gGzBgHidanFsliftFunctionCount = ARRAY_COUNT(gGzBgHidanFsliftFunctions);
