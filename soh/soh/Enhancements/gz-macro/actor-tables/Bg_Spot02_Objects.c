// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot02_Objects/z_bg_spot02_objects.h"

void BgSpot02Objects_Init(void*, void*);
void BgSpot02Objects_Destroy(void*, void*);
void func_808AC8FC(void*, void*);
void func_808ACA08(void*, void*);
void func_808ACAFC(void*, void*);
void func_808ACB58(void*, void*);
void BgSpot02Objects_Update(void*, void*);
void BgSpot02Objects_Draw(void*, void*);
void func_808ACCB8(void*, void*);
void func_808AD3D4(void*, void*);
void func_808AD450(void*, void*);

const GzActorSpan gGzBgSpot02ObjectsSpans[] = {
    { offsetof(BgSpot02Objects, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot02Objects, timer), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot02Objects, unk_16A), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot02Objects, unk_16B), 0, 0x15b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot02Objects, unk_16C[0]), offsetof(BgSpot02Objects, unk_16C[1]) - offsetof(BgSpot02Objects, unk_16C[0]), 0x15c, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot02Objects, unk_170), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot02Objects, unk_172), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot02ObjectsSpanCount = ARRAY_COUNT(gGzBgSpot02ObjectsSpans);

const GzActorFunction gGzBgSpot02ObjectsFunctions[] = {
    { 0x0, (void*)BgSpot02Objects_Init },
    { 0x270, (void*)BgSpot02Objects_Destroy },
    { 0x2a4, (void*)func_808AC8FC },
    { 0x2b4, (void*)func_808AC908 },
    { 0x3b4, (void*)func_808ACA08 },
    { 0x4ac, (void*)func_808ACAFC },
    { 0x508, (void*)func_808ACB58 },
    { 0x588, (void*)BgSpot02Objects_Update },
    { 0x5ac, (void*)BgSpot02Objects_Draw },
    { 0x5e8, (void*)func_808ACC34 },
    { 0x66c, (void*)func_808ACCB8 },
    { 0xd4c, (void*)func_808AD3D4 },
    { 0xdc8, (void*)func_808AD450 },
};
const size_t gGzBgSpot02ObjectsFunctionCount = ARRAY_COUNT(gGzBgSpot02ObjectsFunctions);
