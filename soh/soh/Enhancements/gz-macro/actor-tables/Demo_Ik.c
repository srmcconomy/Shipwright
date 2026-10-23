// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_Ik/z_demo_ik.h"

void DemoIk_Destroy(void*, void*);
void DemoIk_BgCheck(void*, void*);
void DemoIk_SetMove(void*, void*);
void DemoIk_SpawnDeadDb(void*, void*);
void DemoIk_Type1Init(void*, void*);
void func_8098394C(void*, void*);
void func_809839D0(void*, void*);
void DemoIk_Type1Action0(void*, void*);
void DemoIk_Type1Action1(void*, void*);
void DemoIk_Type1Action2(void*, void*);
void DemoIk_Type1Draw(void*, void*);
void DemoIk_Type2Init(void*, void*);
void func_80983FEC(void*, void*);
void func_80984048(void*, void*);
void DemoIk_Type2Action0(void*, void*);
void DemoIk_Type2Action1(void*, void*);
void DemoIk_Type2Action2(void*, void*);
void DemoIk_Type2Draw(void*, void*);
void DemoIk_Update(void*, void*);
void DemoIk_DrawNothing(void*, void*);
void DemoIk_Draw(void*, void*);
void DemoIk_Init(void*, void*);

const GzActorSpan gGzDemoIkSpans[] = {
    { offsetof(DemoIk, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoIk, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoIk, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoIk, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoIk, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(DemoIk, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, jointTable[0].x), offsetof(DemoIk, jointTable[1].x) - offsetof(DemoIk, jointTable[0].x), 0x180, 0x6, 2, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, jointTable[0].y), offsetof(DemoIk, jointTable[1].y) - offsetof(DemoIk, jointTable[0].y), 0x182, 0x6, 2, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, jointTable[0].z), offsetof(DemoIk, jointTable[1].z) - offsetof(DemoIk, jointTable[0].z), 0x184, 0x6, 2, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, morphTable[0].x), offsetof(DemoIk, morphTable[1].x) - offsetof(DemoIk, morphTable[0].x), 0x18c, 0x6, 2, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, morphTable[0].y), offsetof(DemoIk, morphTable[1].y) - offsetof(DemoIk, morphTable[0].y), 0x18e, 0x6, 2, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, morphTable[0].z), offsetof(DemoIk, morphTable[1].z) - offsetof(DemoIk, morphTable[0].z), 0x190, 0x6, 2, 2, GZ_SPAN_VALUE },
    { offsetof(DemoIk, actionMode), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoIk, drawMode), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoIk, csAction), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzDemoIkSpanCount = ARRAY_COUNT(gGzDemoIkSpans);

const GzActorFunction gGzDemoIkFunctions[] = {
    { 0x0, (void*)DemoIk_Destroy },
    { 0x10, (void*)DemoIk_BgCheck },
    { 0x58, NULL },
    { 0x7c, NULL },
    { 0xa4, NULL },
    { 0xe4, (void*)DemoIk_SetMove },
    { 0x124, NULL },
    { 0x138, NULL },
    { 0x144, NULL },
    { 0x1dc, NULL },
    { 0x208, NULL },
    { 0x308, (void*)DemoIk_SpawnDeadDb },
    { 0x4ac, NULL },
    { 0x52c, (void*)DemoIk_Type1Init },
    { 0x648, NULL },
    { 0x65c, (void*)func_8098394C },
    { 0x6c0, NULL },
    { 0x6e8, (void*)func_809839D0 },
    { 0x7a8, (void*)DemoIk_Type1Action0 },
    { 0x7c8, (void*)DemoIk_Type1Action1 },
    { 0x800, (void*)DemoIk_Type1Action2 },
    { 0x868, NULL },
    { 0x964, (void*)DemoIk_Type1Draw },
    { 0xabc, (void*)DemoIk_Type2Init },
    { 0xbc4, NULL },
    { 0xc24, NULL },
    { 0xc74, NULL },
    { 0xc88, (void*)func_80983FEC },
    { 0xcc8, NULL },
    { 0xce8, (void*)func_80984048 },
    { 0xdb0, (void*)DemoIk_Type2Action0 },
    { 0xdd0, (void*)DemoIk_Type2Action1 },
    { 0xdf0, (void*)DemoIk_Type2Action2 },
    { 0xe2c, NULL },
    { 0xe88, NULL },
    { 0x1060, (void*)DemoIk_Type2Draw },
    { 0x11c4, (void*)DemoIk_Update },
    { 0x120c, (void*)DemoIk_DrawNothing },
    { 0x121c, (void*)DemoIk_Draw },
    { 0x1264, (void*)DemoIk_Init },
};
const size_t gGzDemoIkFunctionCount = ARRAY_COUNT(gGzDemoIkFunctions);
