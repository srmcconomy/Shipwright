// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot18_Obj/z_bg_spot18_obj.h"

void BgSpot18Obj_Init(void*, void*);
void BgSpot18Obj_Destroy(void*, void*);
void func_808B8DD0(void*, void*);
void func_808B8DDC(void*, void*);
void func_808B8E20(void*, void*);
void func_808B8E7C(void*, void*);
void func_808B8F08(void*, void*);
void func_808B9040(void*, void*);
void BgSpot18Obj_Update(void*, void*);
void BgSpot18Obj_Draw(void*, void*);

const GzActorSpan gGzBgSpot18ObjSpans[] = {
    { offsetof(BgSpot18Obj, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot18Obj, unk_168), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot18ObjSpanCount = ARRAY_COUNT(gGzBgSpot18ObjSpans);

const GzActorFunction gGzBgSpot18ObjFunctions[] = {
    { 0x0, NULL },
    { 0xb8, NULL },
    { 0xf4, NULL },
    { 0x164, NULL },
    { 0x198, NULL },
    { 0x214, NULL },
    { 0x2f8, NULL },
    { 0x334, NULL },
    { 0x388, (void*)BgSpot18Obj_Init },
    { 0x3e4, (void*)BgSpot18Obj_Destroy },
    { 0x418, NULL },
    { 0x42c, (void*)func_808B8DD0 },
    { 0x43c, (void*)func_808B8DDC },
    { 0x480, (void*)func_808B8E20 },
    { 0x4c4, NULL },
    { 0x4e0, (void*)func_808B8E7C },
    { 0x544, NULL },
    { 0x570, (void*)func_808B8F08 },
    { 0x69c, NULL },
    { 0x6b0, (void*)func_808B9040 },
    { 0x6d0, (void*)BgSpot18Obj_Update },
    { 0x704, (void*)BgSpot18Obj_Draw },
};
const size_t gGzBgSpot18ObjFunctionCount = ARRAY_COUNT(gGzBgSpot18ObjFunctions);
