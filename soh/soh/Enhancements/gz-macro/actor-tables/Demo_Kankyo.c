// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_Kankyo/z_demo_kankyo.h"

void DemoKankyo_Init(void*, void*);
void DemoKankyo_Destroy(void*, void*);
void DemoKankyo_SetupType(void*, void*);
void DemoKankyo_DoNothing(void*, void*);
void DemoKankyo_DoNothing2(void*, void*);
void DemoKankyo_UpdateRock(void*, void*);
void DemoKankyo_UpdateClouds(void*, void*);
void DemoKankyo_UpdateDoorOfTime(void*, void*);
void DemoKankyo_KillDoorOfTimeCollision(void*, void*);
void DemoKankyo_Update(void*, void*);
void DemoKankyo_Draw(void*, void*);
void DemoKankyo_DrawRain(void*, void*);
void DemoKankyo_DrawRock(void*, void*);
void DemoKankyo_DrawClouds(void*, void*);
void DemoKankyo_DrawDoorOfTime(void*, void*);
void DemoKankyo_DrawLightPlane(void*, void*);
void DemoKankyo_Vec3fCopy(void*, void*);
void DemoKankyo_DrawWarpSparkles(void*, void*);
void DemoKankyo_DrawSparkles(void*, void*);

const GzActorSpan gGzDemoKankyoSpans[] = {
    { offsetof(DemoKankyo, objBankIndex), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, sparkleCounter), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, warpTimer), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_0.x), offsetof(DemoKankyo, unk_150[1].unk_0.x) - offsetof(DemoKankyo, unk_150[0].unk_0.x), 0x140, 0x28, 30, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_0.y), offsetof(DemoKankyo, unk_150[1].unk_0.y) - offsetof(DemoKankyo, unk_150[0].unk_0.y), 0x144, 0x28, 30, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_0.z), offsetof(DemoKankyo, unk_150[1].unk_0.z) - offsetof(DemoKankyo, unk_150[0].unk_0.z), 0x148, 0x28, 30, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_C.x), offsetof(DemoKankyo, unk_150[1].unk_C.x) - offsetof(DemoKankyo, unk_150[0].unk_C.x), 0x14c, 0x28, 30, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_C.y), offsetof(DemoKankyo, unk_150[1].unk_C.y) - offsetof(DemoKankyo, unk_150[0].unk_C.y), 0x150, 0x28, 30, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_C.z), offsetof(DemoKankyo, unk_150[1].unk_C.z) - offsetof(DemoKankyo, unk_150[0].unk_C.z), 0x154, 0x28, 30, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_18), offsetof(DemoKankyo, unk_150[1].unk_18) - offsetof(DemoKankyo, unk_150[0].unk_18), 0x158, 0x28, 30, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_1C), offsetof(DemoKankyo, unk_150[1].unk_1C) - offsetof(DemoKankyo, unk_150[0].unk_1C), 0x15c, 0x28, 30, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_20), offsetof(DemoKankyo, unk_150[1].unk_20) - offsetof(DemoKankyo, unk_150[0].unk_20), 0x160, 0x28, 30, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_22), offsetof(DemoKankyo, unk_150[1].unk_22) - offsetof(DemoKankyo, unk_150[0].unk_22), 0x162, 0x28, 30, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_23), offsetof(DemoKankyo, unk_150[1].unk_23) - offsetof(DemoKankyo, unk_150[0].unk_23), 0x163, 0x28, 30, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, unk_150[0].unk_24), offsetof(DemoKankyo, unk_150[1].unk_24) - offsetof(DemoKankyo, unk_150[0].unk_24), 0x164, 0x28, 30, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKankyo, actionFunc), 0, 0x5f0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzDemoKankyoSpanCount = ARRAY_COUNT(gGzDemoKankyoSpans);

const GzActorFunction gGzDemoKankyoFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)DemoKankyo_Init },
    { 0x3f0, (void*)DemoKankyo_Destroy },
    { 0x3fc, (void*)DemoKankyo_SetupType },
    { 0x834, (void*)DemoKankyo_DoNothing },
    { 0x844, (void*)DemoKankyo_DoNothing2 },
    { 0x86c, NULL },
    { 0x95c, (void*)DemoKankyo_UpdateRock },
    { 0x9d4, (void*)DemoKankyo_UpdateClouds },
    { 0xa20, (void*)DemoKankyo_UpdateDoorOfTime },
    { 0xabc, (void*)DemoKankyo_KillDoorOfTimeCollision },
    { 0xae8, (void*)DemoKankyo_Update },
    { 0xb0c, (void*)DemoKankyo_Draw },
    { 0xcb4, NULL },
    { 0xe84, (void*)DemoKankyo_DrawRain },
    { 0x1484, (void*)DemoKankyo_DrawRock },
    { 0x15c4, (void*)DemoKankyo_DrawClouds },
    { 0x1904, (void*)DemoKankyo_DrawDoorOfTime },
    { 0x1a18, (void*)DemoKankyo_DrawLightPlane },
    { 0x1b00, (void*)DemoKankyo_Vec3fCopy },
    { 0x1b20, NULL },
    { 0x1ba0, NULL },
    { 0x1bfc, (void*)DemoKankyo_DrawWarpSparkles },
    { 0x235c, (void*)DemoKankyo_DrawSparkles },
};
const size_t gGzDemoKankyoFunctionCount = ARRAY_COUNT(gGzDemoKankyoFunctions);
