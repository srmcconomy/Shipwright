// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Dy_Extra/z_en_dy_extra.h"

void EnDyExtra_Destroy(void*, void*);
void EnDyExtra_Init(void*, void*);
void EnDyExtra_WaitForTrigger(void*, void*);
void EnDyExtra_FallAndKill(void*, void*);
void EnDyExtra_Update(void*, void*);
void EnDyExtra_Draw(void*, void*);

const GzActorSpan gGzEnDyExtraSpans[] = {
    { offsetof(EnDyExtra, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDyExtra, type), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDyExtra, trigger), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDyExtra, timer), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDyExtra, unk_158), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDyExtra, scale.x), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDyExtra, scale.y), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDyExtra, scale.z), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDyExtra, unk_168.x), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDyExtra, unk_168.y), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDyExtra, unk_168.z), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnDyExtraSpanCount = ARRAY_COUNT(gGzEnDyExtraSpans);

const GzActorFunction gGzEnDyExtraFunctions[] = {
    { 0x0, (void*)EnDyExtra_Destroy },
    { 0x10, (void*)EnDyExtra_Init },
    { 0x84, (void*)EnDyExtra_WaitForTrigger },
    { 0x118, (void*)EnDyExtra_FallAndKill },
    { 0x1d0, (void*)EnDyExtra_Update },
    { 0x23c, (void*)EnDyExtra_Draw },
};
const size_t gGzEnDyExtraFunctionCount = ARRAY_COUNT(gGzEnDyExtraFunctions);
