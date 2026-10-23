// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Haka_Ship/z_bg_haka_ship.h"

void BgHakaShip_Init(void*, void*);
void BgHakaShip_Destroy(void*, void*);
void BgHakaShip_ChildUpdatePosition(void*, void*);
void BgHakaShip_WaitForSong(void*, void*);
void BgHakaShip_CutsceneStationary(void*, void*);
void BgHakaShip_Move(void*, void*);
void BgHakaShip_SetupCrash(void*, void*);
void BgHakaShip_CrashShake(void*, void*);
void BgHakaShip_CrashFall(void*, void*);
void BgHakaShip_Update(void*, void*);
void BgHakaShip_Draw(void*, void*);

const GzActorSpan gGzBgHakaShipSpans[] = {
    { offsetof(BgHakaShip, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHakaShip, counter), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaShip, switchFlag), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaShip, yOffset), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaShip, bellSoundPos.x), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaShip, bellSoundPos.y), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaShip, bellSoundPos.z), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgHakaShipSpanCount = ARRAY_COUNT(gGzBgHakaShipSpans);

const GzActorFunction gGzBgHakaShipFunctions[] = {
    { 0x0, (void*)BgHakaShip_Init },
    { 0x144, (void*)BgHakaShip_Destroy },
    { 0x184, (void*)BgHakaShip_ChildUpdatePosition },
    { 0x1e0, (void*)BgHakaShip_WaitForSong },
    { 0x258, (void*)BgHakaShip_CutsceneStationary },
    { 0x2f4, (void*)BgHakaShip_Move },
    { 0x4b8, (void*)BgHakaShip_SetupCrash },
    { 0x514, (void*)BgHakaShip_CrashShake },
    { 0x5a4, (void*)BgHakaShip_CrashFall },
    { 0x664, (void*)BgHakaShip_Update },
    { 0x6a4, (void*)BgHakaShip_Draw },
};
const size_t gGzBgHakaShipFunctionCount = ARRAY_COUNT(gGzBgHakaShipFunctions);
