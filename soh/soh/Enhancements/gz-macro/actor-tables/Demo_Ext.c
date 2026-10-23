// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_Ext/z_demo_ext.h"

void DemoExt_Destroy(void*, void*);
void DemoExt_Init(void*, void*);
void DemoExt_SetupMaintainVortex(void*, void*);
void DemoExt_CheckCsMode(void*, void*);
void DemoExt_Wait(void*, void*);
void DemoExt_MaintainVortex(void*, void*);
void DemoExt_DispellVortex(void*, void*);
void DemoExt_Update(void*, void*);
void DemoExt_DrawNothing(void*, void*);
void DemoExt_DrawVortex(void*, void*);
void DemoExt_Draw(void*, void*);

const GzActorSpan gGzDemoExtSpans[] = {
    { offsetof(DemoExt, action), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoExt, drawMode), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoExt, previousCsAction), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoExt, scrollIncr[0]), offsetof(DemoExt, scrollIncr[1]) - offsetof(DemoExt, scrollIncr[0]), 0x148, 0x2, 4, 2, GZ_SPAN_VALUE },
    { offsetof(DemoExt, curScroll[0]), offsetof(DemoExt, curScroll[1]) - offsetof(DemoExt, curScroll[0]), 0x150, 0x2, 4, 2, GZ_SPAN_VALUE },
    { offsetof(DemoExt, rotationPitch), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoExt, alphaTimer), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoExt, primAlpha), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoExt, envAlpha), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoExt, scale.x), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoExt, scale.y), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoExt, scale.z), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzDemoExtSpanCount = ARRAY_COUNT(gGzDemoExtSpans);

const GzActorFunction gGzDemoExtFunctions[] = {
    { 0x0, (void*)DemoExt_Destroy },
    { 0x10, (void*)DemoExt_Init },
    { 0xc8, NULL },
    { 0x150, NULL },
    { 0x178, NULL },
    { 0x188, (void*)DemoExt_SetupMaintainVortex },
    { 0x214, NULL },
    { 0x22c, NULL },
    { 0x298, (void*)DemoExt_CheckCsMode },
    { 0x344, NULL },
    { 0x394, NULL },
    { 0x4d0, (void*)DemoExt_Wait },
    { 0x4f0, (void*)DemoExt_MaintainVortex },
    { 0x52c, (void*)DemoExt_DispellVortex },
    { 0x56c, (void*)DemoExt_Update },
    { 0x5b4, (void*)DemoExt_DrawNothing },
    { 0x5c4, (void*)DemoExt_DrawVortex },
    { 0x834, (void*)DemoExt_Draw },
};
const size_t gGzDemoExtFunctionCount = ARRAY_COUNT(gGzDemoExtFunctions);
