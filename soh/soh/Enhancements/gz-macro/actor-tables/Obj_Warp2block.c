// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Warp2block/z_obj_warp2block.h"

void ObjWarp2block_Spawn(void*, void*);
s32 func_80BA1ECC(void*, void*);
void ObjWarp2block_SwapWithChild(void*, void*);
s32 func_80BA2218(void*, void*);
s32 func_80BA228C(void*, void*);
s32 func_80BA2304(void*, void*);
void ObjWarp2block_Init(void*, void*);
void ObjWarp2block_Destroy(void*, void*);
void ObjWarp2block_DoNothing(void*, void*);
void func_80BA24F8(void*, void*);
void func_80BA2610(void*, void*);
void ObjWarp2block_Update(void*, void*);
void ObjWarp2block_Draw(void*, void*);

const GzActorSpan gGzObjWarp2blockSpans[] = {
    { offsetof(ObjWarp2block, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjWarp2block, func_168), 0, 0x158, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjWarp2block, unk_16C), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjWarp2block, unk_16E), 0, 0x15e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjWarp2block, unk_170), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjWarp2block, unk_172), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjWarp2block, unk_174), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzObjWarp2blockSpanCount = ARRAY_COUNT(gGzObjWarp2blockSpans);

const GzActorFunction gGzObjWarp2blockFunctions[] = {
    { 0x0, (void*)ObjWarp2block_Spawn },
    { 0xdc, (void*)func_80BA1ECC },
    { 0x25c, (void*)ObjWarp2block_SwapWithChild },
    { 0x42c, (void*)func_80BA2218 },
    { 0x4ac, (void*)func_80BA228C },
    { 0x524, (void*)func_80BA2304 },
    { 0x568, (void*)ObjWarp2block_Init },
    { 0x688, (void*)ObjWarp2block_Destroy },
    { 0x6c8, NULL },
    { 0x6e0, (void*)ObjWarp2block_DoNothing },
    { 0x6f0, NULL },
    { 0x704, (void*)func_80BA24F8 },
    { 0x7e8, NULL },
    { 0x7fc, (void*)func_80BA2610 },
    { 0x8ac, (void*)ObjWarp2block_Update },
    { 0x8e8, (void*)ObjWarp2block_Draw },
};
const size_t gGzObjWarp2blockFunctionCount = ARRAY_COUNT(gGzObjWarp2blockFunctions);
