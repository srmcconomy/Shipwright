// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Kanaami/z_bg_jya_kanaami.h"

void BgJyaKanaami_Init(void*, void*);
void BgJyaKanaami_Destroy(void*, void*);
void func_80899894(void*, void*);
void func_80899950(void*, void*);
void BgJyaKanaami_Update(void*, void*);
void BgJyaKanaami_Draw(void*, void*);

const GzActorSpan gGzBgJyaKanaamiSpans[] = {
    { offsetof(BgJyaKanaami, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgJyaKanaami, unk_168), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaKanaami, unk_16A), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaKanaamiSpanCount = ARRAY_COUNT(gGzBgJyaKanaamiSpans);

const GzActorFunction gGzBgJyaKanaamiFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgJyaKanaami_Init },
    { 0xd8, (void*)BgJyaKanaami_Destroy },
    { 0x10c, NULL },
    { 0x124, (void*)func_80899894 },
    { 0x1cc, NULL },
    { 0x1e4, (void*)func_80899950 },
    { 0x29c, NULL },
    { 0x2b0, (void*)BgJyaKanaami_Update },
    { 0x2e4, (void*)BgJyaKanaami_Draw },
};
const size_t gGzBgJyaKanaamiFunctionCount = ARRAY_COUNT(gGzBgJyaKanaamiFunctions);
