// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot09_Obj/z_bg_spot09_obj.h"

void BgSpot09Obj_Init(void*, void*);
void BgSpot09Obj_Destroy(void*, void*);
void BgSpot09Obj_Update(void*, void*);
void BgSpot09Obj_Draw(void*, void*);

const GzActorSpan gGzBgSpot09ObjSpans[] = {
    { offsetof(BgSpot09Obj, unk_164[0]), offsetof(BgSpot09Obj, unk_164[1]) - offsetof(BgSpot09Obj, unk_164[0]), 0x154, 0x1, 4, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot09ObjSpanCount = ARRAY_COUNT(gGzBgSpot09ObjSpans);

const GzActorFunction gGzBgSpot09ObjFunctions[] = {
    { 0x0, NULL },
    { 0xc0, NULL },
    { 0x10c, NULL },
    { 0x198, NULL },
    { 0x214, NULL },
    { 0x240, NULL },
    { 0x26c, NULL },
    { 0x2ac, (void*)BgSpot09Obj_Init },
    { 0x314, (void*)BgSpot09Obj_Destroy },
    { 0x354, (void*)BgSpot09Obj_Update },
    { 0x364, (void*)BgSpot09Obj_Draw },
};
const size_t gGzBgSpot09ObjFunctionCount = ARRAY_COUNT(gGzBgSpot09ObjFunctions);
