// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Makekinsuta/z_obj_makekinsuta.h"

void ObjMakekinsuta_Init(void*, void*);
void func_80B98320(void*, void*);
void ObjMakekinsuta_DoNothing(void*, void*);
void ObjMakekinsuta_Update(void*, void*);

const GzActorSpan gGzObjMakekinsutaSpans[] = {
    { offsetof(ObjMakekinsuta, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjMakekinsuta, timer), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjMakekinsuta, unk_152), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzObjMakekinsutaSpanCount = ARRAY_COUNT(gGzObjMakekinsutaSpans);

const GzActorFunction gGzObjMakekinsutaFunctions[] = {
    { 0x0, (void*)ObjMakekinsuta_Init },
    { 0x18, (void*)func_80B98320 },
    { 0xcc, (void*)ObjMakekinsuta_DoNothing },
    { 0xdc, (void*)ObjMakekinsuta_Update },
};
const size_t gGzObjMakekinsutaFunctionCount = ARRAY_COUNT(gGzObjMakekinsutaFunctions);
