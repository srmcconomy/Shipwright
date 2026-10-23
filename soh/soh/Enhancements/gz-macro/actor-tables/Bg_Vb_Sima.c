// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Vb_Sima/z_bg_vb_sima.h"

void BgVbSima_Init(void*, void*);
void BgVbSima_Destroy(void*, void*);
void BgVbSima_Update(void*, void*);
void BgVbSima_Draw(void*, void*);

const GzActorSpan gGzBgVbSimaSpans[] = {
    { offsetof(BgVbSima, unk_164[0]), offsetof(BgVbSima, unk_164[1]) - offsetof(BgVbSima, unk_164[0]), 0x154, 0x1, 16, 1, GZ_SPAN_VALUE },
    { offsetof(BgVbSima, shakeTimer), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgVbSima, unk_176[0]), offsetof(BgVbSima, unk_176[1]) - offsetof(BgVbSima, unk_176[0]), 0x166, 0x1, 6, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgVbSimaSpanCount = ARRAY_COUNT(gGzBgVbSimaSpans);

const GzActorFunction gGzBgVbSimaFunctions[] = {
    { 0x0, (void*)BgVbSima_Init },
    { 0x68, (void*)BgVbSima_Destroy },
    { 0x9c, NULL },
    { 0x168, (void*)BgVbSima_Update },
    { 0x5c8, (void*)BgVbSima_Draw },
};
const size_t gGzBgVbSimaFunctionCount = ARRAY_COUNT(gGzBgVbSimaFunctions);
