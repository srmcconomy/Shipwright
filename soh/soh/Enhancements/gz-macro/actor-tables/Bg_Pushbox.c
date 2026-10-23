// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Pushbox/z_bg_pushbox.h"

void BgPushbox_Init(void*, void*);
void BgPushbox_Destroy(void*, void*);
void BgPushbox_UpdateImpl(void*, void*);
void BgPushbox_Update(void*, void*);
void BgPushbox_Draw(void*, void*);

const GzActorSpan gGzBgPushboxSpans[] = {
    { offsetof(BgPushbox, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgPushboxSpanCount = ARRAY_COUNT(gGzBgPushboxSpans);

const GzActorFunction gGzBgPushboxFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)BgPushbox_Init },
    { 0xa4, (void*)BgPushbox_Destroy },
    { 0xd8, (void*)BgPushbox_UpdateImpl },
    { 0x1b4, (void*)BgPushbox_Update },
    { 0x1e4, (void*)BgPushbox_Draw },
};
const size_t gGzBgPushboxFunctionCount = ARRAY_COUNT(gGzBgPushboxFunctions);
