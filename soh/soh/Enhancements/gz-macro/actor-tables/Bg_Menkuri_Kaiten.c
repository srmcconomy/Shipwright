// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Menkuri_Kaiten/z_bg_menkuri_kaiten.h"

void BgMenkuriKaiten_Init(void*, void*);
void BgMenkuriKaiten_Destroy(void*, void*);
void BgMenkuriKaiten_Update(void*, void*);
void BgMenkuriKaiten_Draw(void*, void*);

const GzActorSpan gGzBgMenkuriKaitenSpans[] = {
};
const size_t gGzBgMenkuriKaitenSpanCount = ARRAY_COUNT(gGzBgMenkuriKaitenSpans);

const GzActorFunction gGzBgMenkuriKaitenFunctions[] = {
    { 0x0, (void*)BgMenkuriKaiten_Init },
    { 0x68, (void*)BgMenkuriKaiten_Destroy },
    { 0x9c, (void*)BgMenkuriKaiten_Update },
    { 0xfc, (void*)BgMenkuriKaiten_Draw },
};
const size_t gGzBgMenkuriKaitenFunctionCount = ARRAY_COUNT(gGzBgMenkuriKaitenFunctions);
