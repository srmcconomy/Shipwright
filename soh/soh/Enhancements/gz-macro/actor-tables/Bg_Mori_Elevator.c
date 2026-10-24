// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mori_Elevator/z_bg_mori_elevator.h"

void BgMoriElevator_Init(void*, void*);
void BgMoriElevator_Destroy(void*, void*);
s32 BgMoriElevator_IsPlayerRiding(void*, void*);
void BgMoriElevator_WaitAfterInit(void*, void*);
void BgMoriElevator_MoveIntoGround(void*, void*);
void func_808A1CF4(void*, void*);
void BgMoriElevator_MoveAboveGround(void*, void*);
void BgMoriElevator_SetPosition(void*, void*);
void func_808A2008(void*, void*);
void BgMoriElevator_Update(void*, void*);
void BgMoriElevator_Draw(void*, void*);

const GzActorSpan gGzBgMoriElevatorSpans[] = {
    { offsetof(BgMoriElevator, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMoriElevator, targetY), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriElevator, unk_16C), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgMoriElevator, unk_170), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriElevator, moriTexObjIndex), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriElevator, unk_172), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgMoriElevatorSpanCount = ARRAY_COUNT(gGzBgMoriElevatorSpans);

const GzActorFunction gGzBgMoriElevatorFunctions[] = {
    { 0x0, NULL },
    { 0xf8, NULL },
    { 0x180, (void*)BgMoriElevator_Init },
    { 0x264, (void*)BgMoriElevator_Destroy },
    { 0x2a4, (void*)BgMoriElevator_IsPlayerRiding },
    { 0x304, NULL },
    { 0x318, (void*)BgMoriElevator_WaitAfterInit },
    { 0x3bc, NULL },
    { 0x3d0, (void*)BgMoriElevator_MoveIntoGround },
    { 0x484, (void*)func_808A1CF4 },
    { 0x4e0, (void*)BgMoriElevator_MoveAboveGround },
    { 0x594, NULL },
    { 0x5a8, (void*)BgMoriElevator_SetPosition },
    { 0x770, NULL },
    { 0x78c, (void*)func_808A2008 },
    { 0x840, (void*)BgMoriElevator_Update },
    { 0x898, (void*)BgMoriElevator_Draw },
};
const size_t gGzBgMoriElevatorFunctionCount = ARRAY_COUNT(gGzBgMoriElevatorFunctions);
