// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Blockstop/z_obj_blockstop.h"

void ObjBlockstop_Init(void*, void*);
void ObjBlockstop_Destroy(void*, void*);
void ObjBlockstop_Update(void*, void*);

const GzActorSpan gGzObjBlockstopSpans[] = {
};
const size_t gGzObjBlockstopSpanCount = ARRAY_COUNT(gGzObjBlockstopSpans);

const GzActorFunction gGzObjBlockstopFunctions[] = {
    { 0x0, (void*)ObjBlockstop_Init },
    { 0x5c, (void*)ObjBlockstop_Destroy },
    { 0x6c, (void*)ObjBlockstop_Update },
};
const size_t gGzObjBlockstopFunctionCount = ARRAY_COUNT(gGzObjBlockstopFunctions);
