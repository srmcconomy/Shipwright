// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_Go/z_demo_go.h"

void func_8097C8A8(void*, void*);
void DemoGo_Destroy(void*, void*);
void func_8097CA30(void*, void*);
void func_8097CA78(void*, void*);
void func_8097CB0C(void*, void*);
void func_8097CCE0(void*, void*);
void func_8097CE10(void*, void*);
void func_8097CE20(void*, void*);
void func_8097CE78(void*, void*);
void func_8097CEEC(void*, void*);
void func_8097CFDC(void*, void*);
void func_8097CFFC(void*, void*);
void func_8097D01C(void*, void*);
void func_8097D058(void*, void*);
void func_8097D088(void*, void*);
void func_8097D0D0(void*, void*);
void func_8097D130(void*, void*);
void DemoGo_Update(void*, void*);
void DemoGo_Init(void*, void*);
void func_8097D290(void*, void*);
void func_8097D29C(void*, void*);
void DemoGo_Draw(void*, void*);

const GzActorSpan gGzDemoGoSpans[] = {
    { offsetof(DemoGo, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoGo, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(DemoGo, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoGo, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoGo, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(DemoGo, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGo, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGo, unk_190), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGo, unk_192), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGo, action), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGo, drawConfig), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGo, unk_19C), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzDemoGoSpanCount = ARRAY_COUNT(gGzDemoGoSpans);

const GzActorFunction gGzDemoGoFunctions[] = {
    { 0x0, NULL },
    { 0x3c, (void*)func_8097C8A8 },
    { 0xa8, (void*)DemoGo_Destroy },
    { 0xcc, NULL },
    { 0x154, NULL },
    { 0x17c, NULL },
    { 0x1d4, (void*)func_8097CA30 },
    { 0x21c, (void*)func_8097CA78 },
    { 0x2b4, (void*)func_8097CB0C },
    { 0x3b4, NULL },
    { 0x46c, NULL },
    { 0x48c, (void*)func_8097CCE0 },
    { 0x544, NULL },
    { 0x568, NULL },
    { 0x5d4, (void*)func_8097CE10 },
    { 0x5e8, (void*)func_8097CE20 },
    { 0x644, (void*)func_8097CE78 },
    { 0x6bc, (void*)func_8097CEEC },
    { 0x6f4, NULL },
    { 0x770, NULL },
    { 0x7b0, (void*)func_8097CFDC },
    { 0x7d0, (void*)func_8097CFFC },
    { 0x7f0, (void*)func_8097D01C },
    { 0x834, (void*)func_8097D058 },
    { 0x86c, (void*)func_8097D088 },
    { 0x8bc, (void*)func_8097D0D0 },
    { 0x924, (void*)func_8097D130 },
    { 0x984, (void*)DemoGo_Update },
    { 0x9cc, (void*)DemoGo_Init },
    { 0xa78, (void*)func_8097D290 },
    { 0xa88, (void*)func_8097D29C },
    { 0xb9c, (void*)DemoGo_Draw },
};
const size_t gGzDemoGoFunctionCount = ARRAY_COUNT(gGzDemoGoFunctions);
