// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Ddan_Jd/z_bg_ddan_jd.h"

void BgDdanJd_Init(void*, void*);
void BgDdanJd_Destroy(void*, void*);
void BgDdanJd_Idle(void*, void*);
void BgDdanJd_MoveEffects(void*, void*);
void BgDdanJd_Move(void*, void*);
void BgDdanJd_Update(void*, void*);
void BgDdanJd_Draw(void*, void*);

const GzActorSpan gGzBgDdanJdSpans[] = {
    { offsetof(BgDdanJd, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgDdanJd, state), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanJd, ySpeed), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDdanJd, idleTimer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDdanJd, targetY), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgDdanJdSpanCount = ARRAY_COUNT(gGzBgDdanJdSpans);

const GzActorFunction gGzBgDdanJdFunctions[] = {
    { 0x0, (void*)BgDdanJd_Init },
    { 0xac, (void*)BgDdanJd_Destroy },
    { 0xe0, (void*)BgDdanJd_Idle },
    { 0x284, (void*)BgDdanJd_MoveEffects },
    { 0x45c, (void*)BgDdanJd_Move },
    { 0x560, (void*)BgDdanJd_Update },
    { 0x584, (void*)BgDdanJd_Draw },
};
const size_t gGzBgDdanJdFunctionCount = ARRAY_COUNT(gGzBgDdanJdFunctions);
