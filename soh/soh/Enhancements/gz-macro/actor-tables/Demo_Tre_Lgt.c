// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_Tre_Lgt/z_demo_tre_lgt.h"

void DemoTreLgt_Init(void*, void*);
void DemoTreLgt_Destroy(void*, void*);
void func_8099375C(void*, void*);
void func_80993848(void*, void*);
void DemoTreLgt_Update(void*, void*);
void DemoTreLgt_Draw(void*, void*);

const GzActorSpan gGzDemoTreLgtSpans[] = {
    { offsetof(DemoTreLgt, skelCurve.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoTreLgt, skelCurve.limbList), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoTreLgt, skelCurve.transUpdIdx), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoTreLgt, skelCurve.unk_0C), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoTreLgt, skelCurve.animFinalFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoTreLgt, skelCurve.animSpeed), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoTreLgt, skelCurve.animCurFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoTreLgt, skelCurve.transforms), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoTreLgt, action), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoTreLgt, unk_170), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoTreLgt, unk_174), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoTreLgt, status), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzDemoTreLgtSpanCount = ARRAY_COUNT(gGzDemoTreLgtSpans);

const GzActorFunction gGzDemoTreLgtFunctions[] = {
    { 0x0, (void*)DemoTreLgt_Init },
    { 0x5c, (void*)DemoTreLgt_Destroy },
    { 0x88, NULL },
    { 0x94, (void*)func_8099375C },
    { 0xec, NULL },
    { 0x184, (void*)func_80993848 },
    { 0x438, (void*)DemoTreLgt_Update },
    { 0x46c, NULL },
    { 0x5c0, (void*)DemoTreLgt_Draw },
};
const size_t gGzDemoTreLgtFunctionCount = ARRAY_COUNT(gGzDemoTreLgtFunctions);
