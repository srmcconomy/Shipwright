// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mori_Rakkatenjo/z_bg_mori_rakkatenjo.h"

void BgMoriRakkatenjo_Init(void*, void*);
void BgMoriRakkatenjo_Destroy(void*, void*);
s32 BgMoriRakkatenjo_IsLinkUnder(void*, void*);
s32 BgMoriRakkatenjo_IsLinkClose(void*, void*);
void BgMoriRakkatenjo_WaitForMoriTex(void*, void*);
void BgMoriRakkatenjo_Wait(void*, void*);
void BgMoriRakkatenjo_Fall(void*, void*);
void BgMoriRakkatenjo_Rest(void*, void*);
void BgMoriRakkatenjo_Rise(void*, void*);
void BgMoriRakkatenjo_Update(void*, void*);
void BgMoriRakkatenjo_Draw(void*, void*);

const GzActorSpan gGzBgMoriRakkatenjoSpans[] = {
    { offsetof(BgMoriRakkatenjo, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMoriRakkatenjo, timer), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriRakkatenjo, bounceCount), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriRakkatenjo, fallCount), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriRakkatenjo, moriTexObjIndex), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgMoriRakkatenjoSpanCount = ARRAY_COUNT(gGzBgMoriRakkatenjoSpans);

const GzActorFunction gGzBgMoriRakkatenjoFunctions[] = {
    { 0x0, (void*)BgMoriRakkatenjo_Init },
    { 0xb8, (void*)BgMoriRakkatenjo_Destroy },
    { 0xec, (void*)BgMoriRakkatenjo_IsLinkUnder },
    { 0x19c, (void*)BgMoriRakkatenjo_IsLinkClose },
    { 0x24c, NULL },
    { 0x260, (void*)BgMoriRakkatenjo_WaitForMoriTex },
    { 0x2b8, NULL },
    { 0x2f4, (void*)BgMoriRakkatenjo_Wait },
    { 0x3c4, NULL },
    { 0x3e4, (void*)BgMoriRakkatenjo_Fall },
    { 0x55c, NULL },
    { 0x584, (void*)BgMoriRakkatenjo_Rest },
    { 0x5b4, NULL },
    { 0x5d4, (void*)BgMoriRakkatenjo_Rise },
    { 0x654, (void*)BgMoriRakkatenjo_Update },
    { 0x72c, (void*)BgMoriRakkatenjo_Draw },
};
const size_t gGzBgMoriRakkatenjoFunctionCount = ARRAY_COUNT(gGzBgMoriRakkatenjoFunctions);
