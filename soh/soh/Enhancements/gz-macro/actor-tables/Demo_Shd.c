// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_Shd/z_demo_shd.h"

void DemoShd_Init(void*, void*);
void DemoShd_Destroy(void*, void*);
void func_80991298(void*, void*);
void DemoShd_Update(void*, void*);
void DemoShd_Draw(void*, void*);

const GzActorSpan gGzDemoShdSpans[] = {
    { offsetof(DemoShd, unk_14C), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoShd, unk_14E), 0, 0x13e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoShd, actionFunc), 0, 0x140, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzDemoShdSpanCount = ARRAY_COUNT(gGzDemoShdSpans);

const GzActorFunction gGzDemoShdFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)DemoShd_Init },
    { 0x5c, (void*)DemoShd_Destroy },
    { 0x6c, (void*)func_80991298 },
    { 0x1c4, (void*)DemoShd_Update },
    { 0x1e8, (void*)DemoShd_Draw },
};
const size_t gGzDemoShdFunctionCount = ARRAY_COUNT(gGzDemoShdFunctions);
