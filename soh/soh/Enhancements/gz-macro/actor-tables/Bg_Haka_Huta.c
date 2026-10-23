// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Haka_Huta/z_bg_haka_huta.h"

void BgHakaHuta_Init(void*, void*);
void BgHakaHuta_Destroy(void*, void*);
void BgHakaHuta_SpawnDust(void*, void*);
void BgHakaHuta_SpawnEnemies(void*, void*);
void BgHakaHuta_Open(void*, void*);
void BgHakaHuta_SlideOpen(void*, void*);
void func_8087D720(void*, void*);
void BgHakaHuta_DoNothing(void*, void*);
void BgHakaHuta_Update(void*, void*);
void BgHakaHuta_Draw(void*, void*);

const GzActorSpan gGzBgHakaHutaSpans[] = {
    { offsetof(BgHakaHuta, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHakaHuta, counter), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaHuta, unk_16A), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHakaHutaSpanCount = ARRAY_COUNT(gGzBgHakaHutaSpans);

const GzActorFunction gGzBgHakaHutaFunctions[] = {
    { 0x0, (void*)BgHakaHuta_Init },
    { 0xc0, (void*)BgHakaHuta_Destroy },
    { 0xf4, (void*)BgHakaHuta_SpawnDust },
    { 0x2b0, NULL },
    { 0x33c, (void*)BgHakaHuta_SpawnEnemies },
    { 0x604, (void*)BgHakaHuta_Open },
    { 0x6b8, (void*)BgHakaHuta_SlideOpen },
    { 0x76c, (void*)func_8087D720 },
    { 0x910, (void*)BgHakaHuta_DoNothing },
    { 0x920, (void*)BgHakaHuta_Update },
    { 0x944, (void*)BgHakaHuta_Draw },
};
const size_t gGzBgHakaHutaFunctionCount = ARRAY_COUNT(gGzBgHakaHutaFunctions);
