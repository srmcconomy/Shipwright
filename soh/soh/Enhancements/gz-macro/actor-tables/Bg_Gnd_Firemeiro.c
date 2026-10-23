// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Gnd_Firemeiro/z_bg_gnd_firemeiro.h"

void BgGndFiremeiro_Init(void*, void*);
void BgGndFiremeiro_Destroy(void*, void*);
void BgGndFiremeiro_Sink(void*, void*);
void BgGndFiremeiro_Shake(void*, void*);
void BgGndFiremeiro_Rise(void*, void*);
void BgGndFiremeiro_Update(void*, void*);
void BgGndFiremeiro_Draw(void*, void*);

const GzActorSpan gGzBgGndFiremeiroSpans[] = {
    { offsetof(BgGndFiremeiro, initPos.x), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGndFiremeiro, initPos.y), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGndFiremeiro, initPos.z), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGndFiremeiro, timer), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndFiremeiro, actionFunc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgGndFiremeiroSpanCount = ARRAY_COUNT(gGzBgGndFiremeiroSpans);

const GzActorFunction gGzBgGndFiremeiroFunctions[] = {
    { 0x0, (void*)BgGndFiremeiro_Init },
    { 0xb4, (void*)BgGndFiremeiro_Destroy },
    { 0xf4, (void*)BgGndFiremeiro_Sink },
    { 0x1b0, (void*)BgGndFiremeiro_Shake },
    { 0x354, (void*)BgGndFiremeiro_Rise },
    { 0x414, (void*)BgGndFiremeiro_Update },
    { 0x438, (void*)BgGndFiremeiro_Draw },
};
const size_t gGzBgGndFiremeiroFunctionCount = ARRAY_COUNT(gGzBgGndFiremeiroFunctions);
