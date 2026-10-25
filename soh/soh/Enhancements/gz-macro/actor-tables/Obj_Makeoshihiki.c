// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Makeoshihiki/z_obj_makeoshihiki.h"

void ObjMakeoshihiki_Init(void*, void*);
void ObjMakeoshihiki_Draw(void*, void*);

const GzActorSpan gGzObjMakeoshihikiSpans[] = {
};
const size_t gGzObjMakeoshihikiSpanCount = ARRAY_COUNT(gGzObjMakeoshihikiSpans);

const GzActorFunction gGzObjMakeoshihikiFunctions[] = {
    { 0x0, (void*)ObjMakeoshihiki_Init },
    { 0x174, (void*)ObjMakeoshihiki_Draw },
};
const size_t gGzObjMakeoshihikiFunctionCount = ARRAY_COUNT(gGzObjMakeoshihikiFunctions);
