// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Mure3/z_obj_mure3.h"

void func_80B9A9D0(void*, void*);
void func_80B9AA90(void*, void*);
void func_80B9ABA0(void*, void*);
void func_80B9ACE4(void*, void*);
void func_80B9ADCC(void*, void*);
void ObjMure3_Init(void*, void*);
void ObjMure3_Destroy(void*, void*);
void func_80B9AF34(void*, void*);
void func_80B9AF64(void*, void*);
void func_80B9AFFC(void*, void*);
void ObjMure3_Update(void*, void*);

const GzActorSpan gGzObjMure3Spans[] = {
    { offsetof(ObjMure3, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjMure3, unk_150[0]), offsetof(ObjMure3, unk_150[1]) - offsetof(ObjMure3, unk_150[0]), 0x140, 0x4, 7, 4, GZ_SPAN_POINTER },
    { offsetof(ObjMure3, unk_16C), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzObjMure3SpanCount = ARRAY_COUNT(gGzObjMure3Spans);

const GzActorFunction gGzObjMure3Functions[] = {
    { 0x0, (void*)func_80B9A9D0 },
    { 0xc0, (void*)func_80B9AA90 },
    { 0x1d0, (void*)func_80B9ABA0 },
    { 0x314, (void*)func_80B9ACE4 },
    { 0x400, (void*)func_80B9ADCC },
    { 0x4f4, (void*)ObjMure3_Init },
    { 0x554, (void*)ObjMure3_Destroy },
    { 0x564, NULL },
    { 0x578, (void*)func_80B9AF34 },
    { 0x59c, NULL },
    { 0x5b0, (void*)func_80B9AF64 },
    { 0x638, NULL },
    { 0x64c, (void*)func_80B9AFFC },
    { 0x6c8, (void*)ObjMure3_Update },
};
const size_t gGzObjMure3FunctionCount = ARRAY_COUNT(gGzObjMure3Functions);
