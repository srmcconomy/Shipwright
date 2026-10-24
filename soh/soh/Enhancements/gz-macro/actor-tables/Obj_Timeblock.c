// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Timeblock/z_obj_timeblock.h"

void ObjTimeblock_SpawnDemoEffect(void*, void*);
void ObjTimeblock_Init(void*, void*);
void ObjTimeblock_Destroy(void*, void*);
s32 ObjTimeblock_WaitForOcarina(void*, void*);
s32 ObjTimeblock_WaitForSong(void*, void*);
void ObjTimeblock_DoNothing(void*, void*);
void ObjTimeblock_Normal(void*, void*);
void func_80BA06AC(void*, void*);
void ObjTimeblock_AltBehaviorVisible(void*, void*);
void ObjTimeblock_AltBehaviourNotVisible(void*, void*);
void ObjTimeblock_Update(void*, void*);
void ObjTimeblock_Draw(void*, void*);

const GzActorSpan gGzObjTimeblockSpans[] = {
    { offsetof(ObjTimeblock, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjTimeblock, songObserverFunc), 0, 0x158, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjTimeblock, demoEffectTimer), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTimeblock, songEndTimer), 0, 0x15e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTimeblock, demoEffectFirstPartTimer), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTimeblock, unk_172), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjTimeblock, unk_174), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTimeblock, unk_175), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTimeblock, unk_176), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTimeblock, unk_177), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjTimeblock, isVisible), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzObjTimeblockSpanCount = ARRAY_COUNT(gGzObjTimeblockSpans);

const GzActorFunction gGzObjTimeblockFunctions[] = {
    { 0x0, NULL },
    { 0xc0, (void*)ObjTimeblock_SpawnDemoEffect },
    { 0x134, NULL },
    { 0x17c, (void*)ObjTimeblock_Init },
    { 0x330, (void*)ObjTimeblock_Destroy },
    { 0x364, NULL },
    { 0x444, (void*)ObjTimeblock_WaitForOcarina },
    { 0x4c4, (void*)ObjTimeblock_WaitForSong },
    { 0x53c, NULL },
    { 0x550, (void*)ObjTimeblock_DoNothing },
    { 0x560, NULL },
    { 0x574, (void*)ObjTimeblock_Normal },
    { 0x6f0, (void*)func_80BA06AC },
    { 0x7a0, NULL },
    { 0x7b4, (void*)ObjTimeblock_AltBehaviorVisible },
    { 0x880, NULL },
    { 0x894, (void*)ObjTimeblock_AltBehaviourNotVisible },
    { 0x964, (void*)ObjTimeblock_Update },
    { 0x9ec, (void*)ObjTimeblock_Draw },
};
const size_t gGzObjTimeblockFunctionCount = ARRAY_COUNT(gGzObjTimeblockFunctions);
