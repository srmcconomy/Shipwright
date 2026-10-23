// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mori_Hashira4/z_bg_mori_hashira4.h"

void BgMoriHashira4_Init(void*, void*);
void BgMoriHashira4_Destroy(void*, void*);
void BgMoriHashira4_WaitForMoriTex(void*, void*);
void BgMoriHashira4_PillarsRotate(void*, void*);
void BgMoriHashira4_GateWait(void*, void*);
void BgMoriHashira4_GateOpen(void*, void*);
void BgMoriHashira4_Update(void*, void*);
void BgMoriHashira4_Draw(void*, void*);

const GzActorSpan gGzBgMoriHashira4Spans[] = {
    { offsetof(BgMoriHashira4, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMoriHashira4, moriTexObjIndex), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashira4, switchFlag), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHashira4, gateTimer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgMoriHashira4SpanCount = ARRAY_COUNT(gGzBgMoriHashira4Spans);

const GzActorFunction gGzBgMoriHashira4Functions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x64, (void*)BgMoriHashira4_Init },
    { 0x178, (void*)BgMoriHashira4_Destroy },
    { 0x1ac, NULL },
    { 0x1d0, (void*)BgMoriHashira4_WaitForMoriTex },
    { 0x24c, NULL },
    { 0x270, (void*)BgMoriHashira4_PillarsRotate },
    { 0x2a8, (void*)BgMoriHashira4_GateWait },
    { 0x354, (void*)BgMoriHashira4_GateOpen },
    { 0x3ac, (void*)BgMoriHashira4_Update },
    { 0x3d8, (void*)BgMoriHashira4_Draw },
};
const size_t gGzBgMoriHashira4FunctionCount = ARRAY_COUNT(gGzBgMoriHashira4Functions);
