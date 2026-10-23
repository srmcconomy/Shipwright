// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Toki_Hikari/z_bg_toki_hikari.h"

void BgTokiHikari_Init(void*, void*);
void BgTokiHikari_Destroy(void*, void*);
void BgTokiHikari_DoNothing(void*, void*);
void BgTokiHikari_Update(void*, void*);
void BgTokiHikari_Draw(void*, void*);
void func_808BA018(void*, void*);
void func_808BA204(void*, void*);
void func_808BA22C(void*, void*);
void func_808BA274(void*, void*);
void func_808BA2CC(void*, void*);

const GzActorSpan gGzBgTokiHikariSpans[] = {
    { offsetof(BgTokiHikari, unk_14C), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgTokiHikari, actionFunc), 0, 0x140, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgTokiHikariSpanCount = ARRAY_COUNT(gGzBgTokiHikariSpans);

const GzActorFunction gGzBgTokiHikariFunctions[] = {
    { 0x0, (void*)BgTokiHikari_Init },
    { 0x8c, (void*)BgTokiHikari_Destroy },
    { 0x9c, (void*)BgTokiHikari_DoNothing },
    { 0xac, (void*)BgTokiHikari_Update },
    { 0xd0, (void*)BgTokiHikari_Draw },
    { 0x120, (void*)func_808BA018 },
    { 0x2cc, (void*)func_808BA204 },
    { 0x2f4, (void*)func_808BA22C },
    { 0x33c, (void*)func_808BA274 },
    { 0x394, (void*)func_808BA2CC },
};
const size_t gGzBgTokiHikariFunctionCount = ARRAY_COUNT(gGzBgTokiHikariFunctions);
