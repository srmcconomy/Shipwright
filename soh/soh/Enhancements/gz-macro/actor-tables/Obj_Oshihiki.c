// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Oshihiki/z_obj_oshihiki.h"

void ObjOshihiki_CheckType(void*, void*);
void ObjOshihiki_SetScale(void*, void*);
void ObjOshihiki_SetTexture(void*, void*);
void ObjOshihiki_SetColor(void*, void*);
void ObjOshihiki_Init(void*, void*);
void ObjOshihiki_Destroy(void*, void*);
void ObjOshihiki_SetFloors(void*, void*);
void ObjOshihiki_SetGround(void*, void*);
s32 ObjOshihiki_CheckFloor(void*, void*);
s32 ObjOshihiki_CheckGround(void*, void*);
s32 ObjOshihiki_MoveWithBlockUnder(void*, void*);
void ObjOshihiki_SetupOnScene(void*, void*);
void ObjOshihiki_OnScene(void*, void*);
void ObjOshihiki_SetupOnActor(void*, void*);
void ObjOshihiki_OnActor(void*, void*);
void ObjOshihiki_SetupPush(void*, void*);
void ObjOshihiki_Push(void*, void*);
void ObjOshihiki_SetupFall(void*, void*);
void ObjOshihiki_Fall(void*, void*);
void ObjOshihiki_Update(void*, void*);
void ObjOshihiki_Draw(void*, void*);

const GzActorSpan gGzObjOshihikiSpans[] = {
    { offsetof(ObjOshihiki, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjOshihiki, stateFlags), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, timer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, yawSin), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, yawCos), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, pushSpeed), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, pushDist), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, direction), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, floorBgIds[0]), offsetof(ObjOshihiki, floorBgIds[1]) - offsetof(ObjOshihiki, floorBgIds[0]), 0x170, 0x4, 5, 4, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, floorPolys[0]), offsetof(ObjOshihiki, floorPolys[1]) - offsetof(ObjOshihiki, floorPolys[0]), 0x184, 0x4, 5, 4, GZ_SPAN_POINTER },
    { offsetof(ObjOshihiki, floorHeights[0]), offsetof(ObjOshihiki, floorHeights[1]) - offsetof(ObjOshihiki, floorHeights[0]), 0x198, 0x4, 5, 4, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, highestFloor), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, cantMove), 0, 0x1ae, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, blockUnder), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjOshihiki, underDistX), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, underDistZ), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, texture), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjOshihiki, color.r), 0, 0x1c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, color.g), 0, 0x1c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjOshihiki, color.b), 0, 0x1c2, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzObjOshihikiSpanCount = ARRAY_COUNT(gGzObjOshihikiSpans);

const GzActorFunction gGzObjOshihikiFunctions[] = {
    { 0x0, NULL },
    { 0x58, NULL },
    { 0xac, NULL },
    { 0x130, NULL },
    { 0x15c, NULL },
    { 0x1ec, NULL },
    { 0x31c, NULL },
    { 0x3e8, (void*)ObjOshihiki_CheckType },
    { 0x438, (void*)ObjOshihiki_SetScale },
    { 0x470, (void*)ObjOshihiki_SetTexture },
    { 0x4d0, (void*)ObjOshihiki_SetColor },
    { 0x578, (void*)ObjOshihiki_Init },
    { 0x6a0, (void*)ObjOshihiki_Destroy },
    { 0x6d4, (void*)ObjOshihiki_SetFloors },
    { 0x834, NULL },
    { 0x980, (void*)ObjOshihiki_SetGround },
    { 0x9d8, (void*)ObjOshihiki_CheckFloor },
    { 0xa30, (void*)ObjOshihiki_CheckGround },
    { 0xaa8, NULL },
    { 0xcfc, (void*)ObjOshihiki_MoveWithBlockUnder },
    { 0xdf8, (void*)ObjOshihiki_SetupOnScene },
    { 0xe30, (void*)ObjOshihiki_OnScene },
    { 0xf1c, (void*)ObjOshihiki_SetupOnActor },
    { 0xf5c, (void*)ObjOshihiki_OnActor },
    { 0x1154, (void*)ObjOshihiki_SetupPush },
    { 0x1180, (void*)ObjOshihiki_Push },
    { 0x139c, (void*)ObjOshihiki_SetupFall },
    { 0x13f4, (void*)ObjOshihiki_Fall },
    { 0x14f8, (void*)ObjOshihiki_Update },
    { 0x1580, (void*)ObjOshihiki_Draw },
};
const size_t gGzObjOshihikiFunctionCount = ARRAY_COUNT(gGzObjOshihikiFunctions);
