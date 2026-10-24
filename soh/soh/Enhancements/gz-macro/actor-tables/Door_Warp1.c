// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Door_Warp1/z_door_warp1.h"

void DoorWarp1_Init(void*, void*);
void DoorWarp1_Destroy(void*, void*);
void DoorWarp1_SetupWarp(void*, void*);
void DoorWarp1_SetupAdultDungeonWarp(void*, void*);
void DoorWarp1_SetupBlueCrystal(void*, void*);
void DoorWarp1_SetupPurpleCrystal(void*, void*);
void DoorWarp1_SetPlayerPos(void*, void*);
void DoorWarp1_BlueCrystal(void*, void*);
void func_80999214(void*, void*);
void func_80999348(void*, void*);
void DoorWarp1_FloatPlayer(void*, void*);
void DoorWarp1_PurpleCrystal(void*, void*);
void DoorWarp1_ChooseInitialAction(void*, void*);
void DoorWarp1_AwaitClearFlag(void*, void*);
void func_809995D4(void*, void*);
void DoorWarp1_WarpAppear(void*, void*);
void func_809998A4(void*, void*);
s32 DoorWarp1_PlayerInRange(void*, void*);
void DoorWarp1_ChildWarpIdle(void*, void*);
void DoorWarp1_ChildWarpOut(void*, void*);
void DoorWarp1_RutoWarpIdle(void*, void*);
void func_80999EE0(void*, void*);
void func_80999FE4(void*, void*);
void DoorWarp1_RutoWarpOut(void*, void*);
void func_8099A3A4(void*, void*);
void DoorWarp1_AdultWarpIdle(void*, void*);
void func_8099A508(void*, void*);
void DoorWarp1_AdultWarpOut(void*, void*);
void DoorWarp1_Destination(void*, void*);
void DoorWarp1_DoNothing(void*, void*);
void func_8099B020(void*, void*);
void DoorWarp1_Update(void*, void*);
void DoorWarp1_DrawBlueCrystal(void*, void*);
void DoorWarp1_DrawPurpleCrystal(void*, void*);
void DoorWarp1_DrawWarp(void*, void*);
void DoorWarp1_Draw(void*, void*);

const GzActorSpan gGzDoorWarp1Spans[] = {
    { offsetof(DoorWarp1, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorWarp1, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(DoorWarp1, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorWarp1, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorWarp1, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(DoorWarp1, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_190[0]), offsetof(DoorWarp1, unk_190[1]) - offsetof(DoorWarp1, unk_190[0]), 0x180, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, warpTimer), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_194), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_198), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_19C), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, lightRayAlpha), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, warpAlpha), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, crystalAlpha), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, scale), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_1AE), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_1B0), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_1B2), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_1B4), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_1B8), 0, 0x1a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_1BA), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, unk_1BC), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, actionFunc), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(DoorWarp1, upperLight), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorWarp1, upperLightInfo.type), 0, 0x1b8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, upperLightInfo.params.point.x), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, upperLightInfo.params.point.y), 0, 0x1bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, upperLightInfo.params.point.z), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, upperLightInfo.params.point.color[0]), offsetof(DoorWarp1, upperLightInfo.params.point.color[1]) - offsetof(DoorWarp1, upperLightInfo.params.point.color[0]), 0x1c0, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, upperLightInfo.params.point.drawGlow), 0, 0x1c3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, upperLightInfo.params.point.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, lowerLight), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorWarp1, lowerLightInfo.type), 0, 0x1cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, lowerLightInfo.params.point.x), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, lowerLightInfo.params.point.y), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, lowerLightInfo.params.point.z), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, lowerLightInfo.params.point.color[0]), offsetof(DoorWarp1, lowerLightInfo.params.point.color[1]) - offsetof(DoorWarp1, lowerLightInfo.params.point.color[0]), 0x1d4, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, lowerLightInfo.params.point.drawGlow), 0, 0x1d7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, lowerLightInfo.params.point.radius), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorWarp1, rutoWarpState), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzDoorWarp1SpanCount = ARRAY_COUNT(gGzDoorWarp1Spans);

const GzActorFunction gGzDoorWarp1Functions[] = {
    { 0x0, NULL },
    { 0xc, (void*)DoorWarp1_Init },
    { 0x17c, (void*)DoorWarp1_Destroy },
    { 0x204, (void*)DoorWarp1_SetupWarp },
    { 0x50c, (void*)DoorWarp1_SetupAdultDungeonWarp },
    { 0x6d8, (void*)DoorWarp1_SetupBlueCrystal },
    { 0x870, (void*)DoorWarp1_SetupPurpleCrystal },
    { 0xa10, (void*)DoorWarp1_SetPlayerPos },
    { 0xa48, (void*)DoorWarp1_BlueCrystal },
    { 0xa94, (void*)func_80999214 },
    { 0xbc8, (void*)func_80999348 },
    { 0xc90, (void*)DoorWarp1_FloatPlayer },
    { 0xcac, (void*)DoorWarp1_PurpleCrystal },
    { 0xd8c, (void*)DoorWarp1_ChooseInitialAction },
    { 0xe04, (void*)DoorWarp1_AwaitClearFlag },
    { 0xe5c, (void*)func_809995D4 },
    { 0xfac, (void*)DoorWarp1_WarpAppear },
    { 0x1130, (void*)func_809998A4 },
    { 0x11c8, (void*)DoorWarp1_PlayerInRange },
    { 0x1234, (void*)DoorWarp1_ChildWarpIdle },
    { 0x1300, (void*)DoorWarp1_ChildWarpOut },
    { 0x16f4, (void*)DoorWarp1_RutoWarpIdle },
    { 0x1774, (void*)func_80999EE0 },
    { 0x187c, (void*)func_80999FE4 },
    { 0x1934, (void*)DoorWarp1_RutoWarpOut },
    { 0x1c40, (void*)func_8099A3A4 },
    { 0x1d0c, (void*)DoorWarp1_AdultWarpIdle },
    { 0x1dac, (void*)func_8099A508 },
    { 0x1e90, (void*)DoorWarp1_AdultWarpOut },
    { 0x2774, (void*)DoorWarp1_Destination },
    { 0x28a4, (void*)DoorWarp1_DoNothing },
    { 0x28b4, (void*)func_8099B020 },
    { 0x2970, (void*)DoorWarp1_Update },
    { 0x29d4, (void*)DoorWarp1_DrawBlueCrystal },
    { 0x2ba0, (void*)DoorWarp1_DrawPurpleCrystal },
    { 0x2e24, (void*)DoorWarp1_DrawWarp },
    { 0x3c6c, (void*)DoorWarp1_Draw },
};
const size_t gGzDoorWarp1FunctionCount = ARRAY_COUNT(gGzDoorWarp1Functions);
