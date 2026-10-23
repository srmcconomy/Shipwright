// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Lift/z_bg_jya_lift.h"

void BgJyaLift_Init(void*, void*);
void BgJyaLift_Destroy(void*, void*);
void BgJyaLift_DelayMove(void*, void*);
void BgJyaLift_Move(void*, void*);
void BgJyaLift_Update(void*, void*);
void BgJyaLift_Draw(void*, void*);

const GzActorSpan gGzBgJyaLiftSpans[] = {
    { offsetof(BgJyaLift, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgJyaLift, moveDelay), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaLift, isSpawned), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaLift, unk_16B), 0, 0x15b, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaLiftSpanCount = ARRAY_COUNT(gGzBgJyaLiftSpans);

const GzActorFunction gGzBgJyaLiftFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgJyaLift_Init },
    { 0x114, (void*)BgJyaLift_Destroy },
    { 0x158, NULL },
    { 0x17c, (void*)BgJyaLift_DelayMove },
    { 0x200, NULL },
    { 0x214, (void*)BgJyaLift_Move },
    { 0x338, NULL },
    { 0x350, (void*)BgJyaLift_Update },
    { 0x440, (void*)BgJyaLift_Draw },
};
const size_t gGzBgJyaLiftFunctionCount = ARRAY_COUNT(gGzBgJyaLiftFunctions);
