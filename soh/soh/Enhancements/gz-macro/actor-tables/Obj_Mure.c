// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Mure/z_obj_mure.h"

void ObjMure_Init(void*, void*);
void ObjMure_Destroy(void*, void*);
void ObjMure_SpawnActors0(void*, void*);
void ObjMure_SpawnActors1(void*, void*);
void ObjMure_SpawnActors(void*, void*);
void ObjMure_KillActorsImpl(void*, void*);
void ObjMure_KillActors(void*, void*);
void ObjMure_CheckChildren(void*, void*);
void ObjMure_InitialAction(void*, void*);
void ObjMure_CulledState(void*, void*);
void ObjMure_GroupBehavior0(void*, void*);
void ObjMure_GroupBehavior1(void*, void*);
void ObjMure_ActiveState(void*, void*);
void ObjMure_Update(void*, void*);

const GzActorSpan gGzObjMureSpans[] = {
    { offsetof(ObjMure, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjMure, chNum), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjMure, ptn), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjMure, svNum), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjMure, type), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjMure, children[0]), offsetof(ObjMure, children[1]) - offsetof(ObjMure, children[0]), 0x148, 0x4, 15, 4, GZ_SPAN_POINTER },
    { offsetof(ObjMure, childrenStates[0]), offsetof(ObjMure, childrenStates[1]) - offsetof(ObjMure, childrenStates[0]), 0x184, 0x1, 15, 1, GZ_SPAN_VALUE },
    { offsetof(ObjMure, unk_1A4), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjMure, unk_1A6), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjMure, unk_1A8), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzObjMureSpanCount = ARRAY_COUNT(gGzObjMureSpans);

const GzActorFunction gGzObjMureFunctions[] = {
    { 0x0, NULL },
    { 0x58, NULL },
    { 0x84, (void*)ObjMure_Init },
    { 0x134, (void*)ObjMure_Destroy },
    { 0x144, NULL },
    { 0x170, NULL },
    { 0x198, (void*)ObjMure_SpawnActors0 },
    { 0x360, (void*)ObjMure_SpawnActors1 },
    { 0x4ac, (void*)ObjMure_SpawnActors },
    { 0x4fc, (void*)ObjMure_KillActorsImpl },
    { 0x5f4, (void*)ObjMure_KillActors },
    { 0x614, (void*)ObjMure_CheckChildren },
    { 0x6d8, (void*)ObjMure_InitialAction },
    { 0x6f0, (void*)ObjMure_CulledState },
    { 0x750, NULL },
    { 0x828, NULL },
    { 0x9a8, (void*)ObjMure_GroupBehavior0 },
    { 0xbd0, (void*)ObjMure_GroupBehavior1 },
    { 0xd54, (void*)ObjMure_ActiveState },
    { 0xdfc, (void*)ObjMure_Update },
};
const size_t gGzObjMureFunctionCount = ARRAY_COUNT(gGzObjMureFunctions);
