// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Zurerukabe/z_bg_jya_zurerukabe.h"

void func_8089B4C8(void*, void*);
void BgJyaZurerukabe_Init(void*, void*);
void BgJyaZurerukabe_Destroy(void*, void*);
void func_8089B7C4(void*, void*);
void func_8089B870(void*, void*);
void BgJyaZurerukabe_Update(void*, void*);
void BgJyaZurerukabe_Draw(void*, void*);

const GzActorSpan gGzBgJyaZurerukabeSpans[] = {
    { offsetof(BgJyaZurerukabe, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgJyaZurerukabe, unk_168), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaZurerukabe, unk_16A), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaZurerukabe, unk_16C), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaZurerukabe, unk_16E), 0, 0x15e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaZurerukabeSpanCount = ARRAY_COUNT(gGzBgJyaZurerukabeSpans);

const GzActorFunction gGzBgJyaZurerukabeFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)func_8089B4C8 },
    { 0x1f4, (void*)BgJyaZurerukabe_Init },
    { 0x2b4, (void*)BgJyaZurerukabe_Destroy },
    { 0x300, NULL },
    { 0x314, (void*)func_8089B7C4 },
    { 0x360, NULL },
    { 0x3c8, (void*)func_8089B870 },
    { 0x490, (void*)BgJyaZurerukabe_Update },
    { 0x4e8, (void*)BgJyaZurerukabe_Draw },
};
const size_t gGzBgJyaZurerukabeFunctionCount = ARRAY_COUNT(gGzBgJyaZurerukabeFunctions);
