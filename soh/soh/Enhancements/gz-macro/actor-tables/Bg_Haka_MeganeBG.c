// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Haka_MeganeBG/z_bg_haka_meganebg.h"

void BgHakaMeganeBG_Init(void*, void*);
void BgHakaMeganeBG_Destroy(void*, void*);
void BgHakaMeganeBG_HiddenMovingPlatform_Idle(void*, void*);
void BgHakaMeganeBG_HiddenMovingPlatform_Move(void*, void*);
void BgHakaMeganeBG_ElevatorPlatform_Drop(void*, void*);
void BgHakaMeganeBG_ElevatorPlatform_Raise(void*, void*);
void BgHakaMeganeBG_RotatingPlatform_Spin(void*, void*);
void BgHakaMeganeBG_Gate_WaitForSwitchFlag(void*, void*);
void BgHakaMeganeBG_Gate_Open(void*, void*);
void BgHakaMeganeBG_DoNothing(void*, void*);
void BgHakaMeganeBG_Update(void*, void*);
void BgHakaMeganeBG_Draw(void*, void*);

const GzActorSpan gGzBgHakaMeganeBGSpans[] = {
    { offsetof(BgHakaMeganeBG, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHakaMeganeBG, switchFlag), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaMeganeBG, timer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHakaMeganeBGSpanCount = ARRAY_COUNT(gGzBgHakaMeganeBGSpans);

const GzActorFunction gGzBgHakaMeganeBGFunctions[] = {
    { 0x0, (void*)BgHakaMeganeBG_Init },
    { 0x19c, (void*)BgHakaMeganeBG_Destroy },
    { 0x1d0, (void*)BgHakaMeganeBG_HiddenMovingPlatform_Idle },
    { 0x218, (void*)BgHakaMeganeBG_HiddenMovingPlatform_Move },
    { 0x2e4, (void*)BgHakaMeganeBG_ElevatorPlatform_Drop },
    { 0x3b8, (void*)BgHakaMeganeBG_ElevatorPlatform_Raise },
    { 0x430, (void*)BgHakaMeganeBG_RotatingPlatform_Spin },
    { 0x460, (void*)BgHakaMeganeBG_Gate_WaitForSwitchFlag },
    { 0x4b0, (void*)BgHakaMeganeBG_Gate_Open },
    { 0x524, (void*)BgHakaMeganeBG_DoNothing },
    { 0x534, (void*)BgHakaMeganeBG_Update },
    { 0x558, (void*)BgHakaMeganeBG_Draw },
};
const size_t gGzBgHakaMeganeBGFunctionCount = ARRAY_COUNT(gGzBgHakaMeganeBGFunctions);
