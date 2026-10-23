// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_Geff/z_demo_geff.h"

void DemoGeff_Destroy(void*, void*);
void DemoGeff_Init(void*, void*);
void func_80977EA8(void*, void*);
void func_80977F80(void*, void*);
void func_80978030(void*, void*);
void func_809781FC(void*, void*);
void func_809782A0(void*, void*);
void func_80978308(void*, void*);
void func_80978344(void*, void*);
void func_80978370(void*, void*);
void func_809783D4(void*, void*);
void DemoGeff_Update(void*, void*);
void func_809784D4(void*, void*);
void DemoGeff_Draw(void*, void*);

const GzActorSpan gGzDemoGeffSpans[] = {
    { offsetof(DemoGeff, action), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGeff, drawConfig), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGeff, objBankIndex), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGeff, demoGt), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoGeff, deltaPosX), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGeff, deltaPosY), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGeff, deltaPosZ), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzDemoGeffSpanCount = ARRAY_COUNT(gGzDemoGeffSpans);

const GzActorFunction gGzDemoGeffFunctions[] = {
    { 0x0, (void*)DemoGeff_Destroy },
    { 0x10, (void*)DemoGeff_Init },
    { 0x58, (void*)func_80977EA8 },
    { 0xf0, (void*)func_80977F80 },
    { 0x14c, (void*)func_80978030 },
    { 0x318, (void*)func_809781FC },
    { 0x3bc, (void*)func_809782A0 },
    { 0x424, (void*)func_80978308 },
    { 0x45c, (void*)func_80978344 },
    { 0x48c, (void*)func_80978370 },
    { 0x4d8, (void*)func_809783D4 },
    { 0x574, (void*)DemoGeff_Update },
    { 0x5bc, (void*)func_809784D4 },
    { 0x5cc, (void*)DemoGeff_Draw },
};
const size_t gGzDemoGeffFunctionCount = ARRAY_COUNT(gGzDemoGeffFunctions);
