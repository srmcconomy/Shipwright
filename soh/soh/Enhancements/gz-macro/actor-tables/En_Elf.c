// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Elf/z_en_elf.h"

void func_80A01FE0(void*, void*);
void func_80A020A4(void*, void*);
void func_80A0214C(void*, void*);
void func_80A0232C(void*, void*);
void EnElf_Init(void*, void*);
void EnElf_Destroy(void*, void*);
void func_80A02A20(void*, void*);
void func_80A02AA4(void*, void*);
void func_80A02B38(void*, void*);
void func_80A02E30(void*, void*);
void func_80A02EC0(void*, void*);
void func_80A02F2C(void*, void*);
void func_80A03018(void*, void*);
void func_80A0329C(void*, void*);
void func_80A0353C(void*, void*);
void func_80A03604(void*, void*);
void func_80A03610(void*, void*);
void func_80A03814(void*, void*);
void func_80A03990(void*, void*);
void func_80A03AB0(void*, void*);
void EnElf_UpdateLights(void*, void*);
void func_80A03CF8(void*, void*);
void func_80A04414(void*, void*);
void func_80A0461C(void*, void*);
void func_80A04D90(void*, void*);
void func_80A04DE4(void*, void*);
void func_80A04F94(void*, void*);
void func_80A05040(void*, void*);
void func_80A05114(void*, void*);
void func_80A05188(void*, void*);
void func_80A05208(void*, void*);
void func_80A052F4(void*, void*);
void func_80A053F0(void*, void*);
void EnElf_Update(void*, void*);
void EnElf_Draw(void*, void*);

const GzActorSpan gGzEnElfSpans[] = {
    { offsetof(EnElf, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnElf, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnElf, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnElf, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnElf, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnElf, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, jointTable[0].x), offsetof(EnElf, jointTable[1].x) - offsetof(EnElf, jointTable[0].x), 0x180, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, jointTable[0].y), offsetof(EnElf, jointTable[1].y) - offsetof(EnElf, jointTable[0].y), 0x182, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, jointTable[0].z), offsetof(EnElf, jointTable[1].z) - offsetof(EnElf, jointTable[0].z), 0x184, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, morphTable[0].x), offsetof(EnElf, morphTable[1].x) - offsetof(EnElf, morphTable[0].x), 0x1da, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, morphTable[0].y), offsetof(EnElf, morphTable[1].y) - offsetof(EnElf, morphTable[0].y), 0x1dc, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, morphTable[0].z), offsetof(EnElf, morphTable[1].z) - offsetof(EnElf, morphTable[0].z), 0x1de, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, innerColor.r), 0, 0x234, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, innerColor.g), 0, 0x238, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, innerColor.b), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, innerColor.a), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, outerColor.r), 0, 0x244, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, outerColor.g), 0, 0x248, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, outerColor.b), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, outerColor.a), 0, 0x250, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoGlow.type), 0, 0x254, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoGlow.params.point.x), 0, 0x256, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoGlow.params.point.y), 0, 0x258, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoGlow.params.point.z), 0, 0x25a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoGlow.params.point.color[0]), offsetof(EnElf, lightInfoGlow.params.point.color[1]) - offsetof(EnElf, lightInfoGlow.params.point.color[0]), 0x25c, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoGlow.params.point.drawGlow), 0, 0x25f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoGlow.params.point.radius), 0, 0x260, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightNodeGlow), 0, 0x264, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnElf, lightInfoNoGlow.type), 0, 0x268, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoNoGlow.params.point.x), 0, 0x26a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoNoGlow.params.point.y), 0, 0x26c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoNoGlow.params.point.z), 0, 0x26e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoNoGlow.params.point.color[0]), offsetof(EnElf, lightInfoNoGlow.params.point.color[1]) - offsetof(EnElf, lightInfoNoGlow.params.point.color[0]), 0x270, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoNoGlow.params.point.drawGlow), 0, 0x273, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightInfoNoGlow.params.point.radius), 0, 0x274, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, lightNodeNoGlow), 0, 0x278, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnElf, unk_28C.x), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_28C.y), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_28C.z), 0, 0x284, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, elfMsg), 0, 0x288, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnElf, unk_29C), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2A0), 0, 0x290, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2A4), 0, 0x294, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2A8), 0, 0x298, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2AA), 0, 0x29a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2AC), 0, 0x29c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2AE), 0, 0x29e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2B0), 0, 0x2a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2B4), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2B8), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2BC), 0, 0x2ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, timer), 0, 0x2ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2C0), 0, 0x2b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, disappearTimer), 0, 0x2b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, fairyFlags), 0, 0x2b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2C6), 0, 0x2b6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, unk_2C7), 0, 0x2b7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnElf, func_2C8), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnElf, actionFunc), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnElfSpanCount = ARRAY_COUNT(gGzEnElfSpans);

const GzActorFunction gGzEnElfFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x364, NULL },
    { 0x3b8, (void*)func_80A01FE0 },
    { 0x480, (void*)func_80A020A4 },
    { 0x52c, (void*)func_80A0214C },
    { 0x70c, (void*)func_80A0232C },
    { 0x784, NULL },
    { 0x7f4, (void*)EnElf_Init },
    { 0xd60, NULL },
    { 0xd70, NULL },
    { 0xd98, (void*)EnElf_Destroy },
    { 0xde8, (void*)func_80A02A20 },
    { 0xe6c, (void*)func_80A02AA4 },
    { 0xf00, (void*)func_80A02B38 },
    { 0xf9c, NULL },
    { 0x105c, NULL },
    { 0x11f4, (void*)func_80A02E30 },
    { 0x1280, (void*)func_80A02EC0 },
    { 0x12ec, (void*)func_80A02F2C },
    { 0x13d8, (void*)func_80A03018 },
    { 0x150c, NULL },
    { 0x1664, (void*)func_80A0329C },
    { 0x1908, (void*)func_80A0353C },
    { 0x19d0, (void*)func_80A03604 },
    { 0x19e0, (void*)func_80A03610 },
    { 0x1be8, (void*)func_80A03814 },
    { 0x1d68, (void*)func_80A03990 },
    { 0x1e8c, (void*)func_80A03AB0 },
    { 0x1ef0, (void*)EnElf_UpdateLights },
    { 0x20c4, (void*)func_80A03CF8 },
    { 0x275c, NULL },
    { 0x27e8, (void*)func_80A04414 },
    { 0x29f4, (void*)func_80A0461C },
    { 0x2d90, NULL },
    { 0x3170, (void*)func_80A04D90 },
    { 0x31c4, (void*)func_80A04DE4 },
    { 0x3378, (void*)func_80A04F94 },
    { 0x3428, (void*)func_80A05040 },
    { 0x3504, (void*)func_80A05114 },
    { 0x3580, (void*)func_80A05188 },
    { 0x3608, (void*)func_80A05208 },
    { 0x36fc, (void*)func_80A052F4 },
    { 0x3800, (void*)func_80A053F0 },
    { 0x3a7c, (void*)EnElf_Update },
    { 0x3ad8, NULL },
    { 0x3bfc, (void*)EnElf_Draw },
    { 0x4280, NULL },
};
const size_t gGzEnElfFunctionCount = ARRAY_COUNT(gGzEnElfFunctions);
