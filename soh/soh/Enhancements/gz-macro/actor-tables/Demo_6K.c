// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_6K/z_demo_6k.h"

void Demo6K_Init(void*, void*);
void Demo6K_Destroy(void*, void*);
void Demo6K_WaitForObject(void*, void*);
void func_80966E04(void*, void*);
void func_80966E98(void*, void*);
void func_80966F84(void*, void*);
void func_809670AC(void*, void*);
void func_8096712C(void*, void*);
void func_80967244(void*, void*);
void func_80967410(void*, void*);
void func_809674E0(void*, void*);
void func_809676A4(void*, void*);
void func_8096784C(void*, void*);
void func_80967AD0(void*, void*);
void func_80967BF8(void*, void*);
void func_80967DBC(void*, void*);
void func_80967F10(void*, void*);
void Demo6K_Update(void*, void*);
void func_80967FFC(void*, void*);
void func_80968298(void*, void*);
void func_8096865C(void*, void*);
void func_809688C4(void*, void*);
void func_80968B70(void*, void*);
void func_80968FB0(void*, void*);

const GzActorSpan gGzDemo6KSpans[] = {
    { offsetof(Demo6K, initActionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(Demo6K, lightInfo.type), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Demo6K, lightInfo.params.point.x), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Demo6K, lightInfo.params.point.y), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Demo6K, lightInfo.params.point.z), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Demo6K, lightInfo.params.point.color[0]), offsetof(Demo6K, lightInfo.params.point.color[1]) - offsetof(Demo6K, lightInfo.params.point.color[0]), 0x148, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(Demo6K, lightInfo.params.point.drawGlow), 0, 0x14b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Demo6K, lightInfo.params.point.radius), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Demo6K, lightNode), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Demo6K, unk_164), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Demo6K, unk_168), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Demo6K, unk_16C), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Demo6K, unk_170), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Demo6K, unk_174[0]), offsetof(Demo6K, unk_174[1]) - offsetof(Demo6K, unk_174[0]), 0x164, 0x4, 16, 4, GZ_SPAN_VALUE },
    { offsetof(Demo6K, unk_1B4[0]), offsetof(Demo6K, unk_1B4[1]) - offsetof(Demo6K, unk_1B4[0]), 0x1a4, 0x4, 16, 4, GZ_SPAN_VALUE },
    { offsetof(Demo6K, unk_1F4[0]), offsetof(Demo6K, unk_1F4[1]) - offsetof(Demo6K, unk_1F4[0]), 0x1e4, 0x4, 16, 4, GZ_SPAN_VALUE },
    { offsetof(Demo6K, unk_234[0]), offsetof(Demo6K, unk_234[1]) - offsetof(Demo6K, unk_234[0]), 0x224, 0x4, 16, 4, GZ_SPAN_VALUE },
    { offsetof(Demo6K, unk_274[0]), offsetof(Demo6K, unk_274[1]) - offsetof(Demo6K, unk_274[0]), 0x264, 0x1, 16, 1, GZ_SPAN_VALUE },
    { offsetof(Demo6K, drawFunc), 0, 0x274, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(Demo6K, actionFunc), 0, 0x278, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(Demo6K, flags), 0, 0x27c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Demo6K, timer1), 0, 0x27e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Demo6K, timer2), 0, 0x280, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Demo6K, objBankIndex), 0, 0x282, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Demo6K, unk_293), 0, 0x283, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzDemo6KSpanCount = ARRAY_COUNT(gGzDemo6KSpans);

const GzActorFunction gGzDemo6KFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)Demo6K_Init },
    { 0x3f4, (void*)Demo6K_Destroy },
    { 0x428, (void*)Demo6K_WaitForObject },
    { 0x480, (void*)func_80966E04 },
    { 0x518, (void*)func_80966E98 },
    { 0x60c, (void*)func_80966F84 },
    { 0x734, (void*)func_809670AC },
    { 0x7b4, (void*)func_8096712C },
    { 0x8cc, (void*)func_80967244 },
    { 0xa98, (void*)func_80967410 },
    { 0xb68, (void*)func_809674E0 },
    { 0xd2c, (void*)func_809676A4 },
    { 0xed4, (void*)func_8096784C },
    { 0x1090, NULL },
    { 0x115c, (void*)func_80967AD0 },
    { 0x1288, (void*)func_80967BF8 },
    { 0x144c, (void*)func_80967DBC },
    { 0x1598, (void*)func_80967F10 },
    { 0x1664, (void*)Demo6K_Update },
    { 0x1688, (void*)func_80967FFC },
    { 0x18d4, (void*)func_80968298 },
    { 0x1c34, (void*)func_8096865C },
    { 0x1e40, (void*)func_809688C4 },
    { 0x20bc, (void*)func_80968B70 },
    { 0x24bc, (void*)func_80968FB0 },
    { 0x2674, NULL },
};
const size_t gGzDemo6KFunctionCount = ARRAY_COUNT(gGzDemo6KFunctions);
