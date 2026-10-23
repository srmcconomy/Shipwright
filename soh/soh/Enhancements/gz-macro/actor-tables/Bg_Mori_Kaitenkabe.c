// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mori_Kaitenkabe/z_bg_mori_kaitenkabe.h"

void BgMoriKaitenkabe_Init(void*, void*);
void BgMoriKaitenkabe_Destroy(void*, void*);
void BgMoriKaitenkabe_WaitForMoriTex(void*, void*);
void BgMoriKaitenkabe_Wait(void*, void*);
void BgMoriKaitenkabe_Rotate(void*, void*);
void BgMoriKaitenkabe_Update(void*, void*);
void BgMoriKaitenkabe_Draw(void*, void*);

const GzActorSpan gGzBgMoriKaitenkabeSpans[] = {
    { offsetof(BgMoriKaitenkabe, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMoriKaitenkabe, timer), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriKaitenkabe, rotDirection), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriKaitenkabe, rotSpeed), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriKaitenkabe, rotYdeg), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriKaitenkabe, lockedPlayerPos.x), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriKaitenkabe, lockedPlayerPos.y), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriKaitenkabe, lockedPlayerPos.z), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriKaitenkabe, moriTexObjIndex), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgMoriKaitenkabeSpanCount = ARRAY_COUNT(gGzBgMoriKaitenkabeSpans);

const GzActorFunction gGzBgMoriKaitenkabeFunctions[] = {
    { 0x0, NULL },
    { 0x74, (void*)BgMoriKaitenkabe_Init },
    { 0x128, (void*)BgMoriKaitenkabe_Destroy },
    { 0x15c, (void*)BgMoriKaitenkabe_WaitForMoriTex },
    { 0x1b4, NULL },
    { 0x1cc, (void*)BgMoriKaitenkabe_Wait },
    { 0x32c, NULL },
    { 0x34c, (void*)BgMoriKaitenkabe_Rotate },
    { 0x4b8, (void*)BgMoriKaitenkabe_Update },
    { 0x4dc, (void*)BgMoriKaitenkabe_Draw },
};
const size_t gGzBgMoriKaitenkabeFunctionCount = ARRAY_COUNT(gGzBgMoriKaitenkabeFunctions);
