// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Hsblock/z_obj_hsblock.h"

void func_80B93BF0(void*, void*);
void ObjHsblock_Init(void*, void*);
void ObjHsblock_Destroy(void*, void*);
void func_80B93DF4(void*, void*);
void func_80B93E5C(void*, void*);
void ObjHsblock_Update(void*, void*);
void ObjHsblock_Draw(void*, void*);

const GzActorSpan gGzObjHsblockSpans[] = {
    { offsetof(ObjHsblock, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzObjHsblockSpanCount = ARRAY_COUNT(gGzObjHsblockSpans);

const GzActorFunction gGzObjHsblockFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x64, (void*)func_80B93BF0 },
    { 0xe8, (void*)ObjHsblock_Init },
    { 0x1b8, (void*)ObjHsblock_Destroy },
    { 0x1ec, NULL },
    { 0x20c, NULL },
    { 0x250, (void*)func_80B93DF4 },
    { 0x298, NULL },
    { 0x2bc, (void*)func_80B93E5C },
    { 0x364, (void*)ObjHsblock_Update },
    { 0x3b0, (void*)ObjHsblock_Draw },
};
const size_t gGzObjHsblockFunctionCount = ARRAY_COUNT(gGzObjHsblockFunctions);
