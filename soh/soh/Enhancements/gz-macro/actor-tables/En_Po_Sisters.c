// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Po_Sisters/z_en_po_sisters.h"

void EnPoSisters_Init(void*, void*);
void EnPoSisters_Destroy(void*, void*);
void func_80AD97C8(void*, void*);
void func_80AD98F4(void*, void*);
void func_80AD99D4(void*, void*);
void func_80AD9A54(void*, void*);
void func_80AD9AA8(void*, void*);
void func_80AD9C24(void*, void*);
void func_80AD9DF0(void*, void*);
void func_80ADA094(void*, void*);
void func_80ADA2BC(void*, void*);
void func_80ADA35C(void*, void*);
void func_80ADA4A8(void*, void*);
void func_80ADA530(void*, void*);
void func_80ADA6A0(void*, void*);
void func_80ADA7F0(void*, void*);
void func_80ADA8C0(void*, void*);
void func_80ADA9E8(void*, void*);
void func_80ADAAA4(void*, void*);
void func_80ADAC70(void*, void*);
void func_80ADAD54(void*, void*);
void func_80ADAE6C(void*, void*);
void func_80ADAFC0(void*, void*);
void func_80ADB17C(void*, void*);
void func_80ADB2B8(void*, void*);
void func_80ADB4B0(void*, void*);
void func_80ADB51C(void*, void*);
void func_80ADB770(void*, void*);
void func_80ADB9F0(void*, void*);
void func_80ADBB6C(void*, void*);
void func_80ADBBF4(void*, void*);
void func_80ADBC88(void*, void*);
void func_80ADBD38(void*, void*);
void func_80ADBD8C(void*, void*);
void func_80ADBEE8(void*, void*);
void func_80ADBF58(void*, void*);
void func_80ADC034(void*, void*);
void func_80ADC10C(void*, void*);
void EnPoSisters_Update(void*, void*);
void EnPoSisters_Draw(void*, void*);

const GzActorSpan gGzEnPoSistersSpans[] = {
    { offsetof(EnPoSisters, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnPoSisters, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnPoSisters, unk_194), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_195), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_196), 0, 0x186, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_197), 0, 0x187, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_198), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_199), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_19A), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_19C), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, jointTable[0].x), offsetof(EnPoSisters, jointTable[1].x) - offsetof(EnPoSisters, jointTable[0].x), 0x18e, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, jointTable[0].y), offsetof(EnPoSisters, jointTable[1].y) - offsetof(EnPoSisters, jointTable[0].y), 0x190, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, jointTable[0].z), offsetof(EnPoSisters, jointTable[1].z) - offsetof(EnPoSisters, jointTable[0].z), 0x192, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, morphTable[0].x), offsetof(EnPoSisters, morphTable[1].x) - offsetof(EnPoSisters, morphTable[0].x), 0x1d6, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, morphTable[0].y), offsetof(EnPoSisters, morphTable[1].y) - offsetof(EnPoSisters, morphTable[0].y), 0x1d8, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, morphTable[0].z), offsetof(EnPoSisters, morphTable[1].z) - offsetof(EnPoSisters, morphTable[0].z), 0x1da, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_22E.r), 0, 0x21e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_22E.g), 0, 0x21f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_22E.b), 0, 0x220, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_22E.a), 0, 0x221, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_234[0].x), offsetof(EnPoSisters, unk_234[1].x) - offsetof(EnPoSisters, unk_234[0].x), 0x224, 0xc, 8, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_234[0].y), offsetof(EnPoSisters, unk_234[1].y) - offsetof(EnPoSisters, unk_234[0].y), 0x228, 0xc, 8, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_234[0].z), offsetof(EnPoSisters, unk_234[1].z) - offsetof(EnPoSisters, unk_234[0].z), 0x22c, 0xc, 8, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_294), 0, 0x284, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, lightNode), 0, 0x288, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, lightInfo.type), 0, 0x28c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, lightInfo.params.point.x), 0, 0x28e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, lightInfo.params.point.y), 0, 0x290, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, lightInfo.params.point.z), 0, 0x292, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, lightInfo.params.point.color[0]), offsetof(EnPoSisters, lightInfo.params.point.color[1]) - offsetof(EnPoSisters, lightInfo.params.point.color[0]), 0x294, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, lightInfo.params.point.drawGlow), 0, 0x297, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, lightInfo.params.point.radius), 0, 0x298, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.base.actor), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, collider.base.at), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, collider.base.ac), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, collider.base.oc), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, collider.base.atFlags), 0, 0x2ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.base.acFlags), 0, 0x2ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.base.ocFlags1), 0, 0x2ae, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.base.ocFlags2), 0, 0x2af, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.base.colType), 0, 0x2b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.base.shape), 0, 0x2b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.toucher.dmgFlags), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.toucher.effect), 0, 0x2b8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.toucher.damage), 0, 0x2b9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.bumper.dmgFlags), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.bumper.effect), 0, 0x2c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.bumper.defense), 0, 0x2c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.bumper.hitPos.x), 0, 0x2c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.bumper.hitPos.y), 0, 0x2c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.bumper.hitPos.z), 0, 0x2c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.elemType), 0, 0x2c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.toucherFlags), 0, 0x2c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.bumperFlags), 0, 0x2ca, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.ocElemFlags), 0, 0x2cb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.info.atHit), 0, 0x2cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, collider.info.acHit), 0, 0x2d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, collider.info.atHitInfo), 0, 0x2d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, collider.info.acHitInfo), 0, 0x2d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoSisters, collider.dim.radius), 0, 0x2dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.dim.height), 0, 0x2de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.dim.yShift), 0, 0x2e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.dim.pos.x), 0, 0x2e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.dim.pos.y), 0, 0x2e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, collider.dim.pos.z), 0, 0x2e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_2F8.mf[0][0]), offsetof(EnPoSisters, unk_2F8.mf[0][1]) - offsetof(EnPoSisters, unk_2F8.mf[0][0]), 0x2e8, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_2F8.mf[1][0]), offsetof(EnPoSisters, unk_2F8.mf[1][1]) - offsetof(EnPoSisters, unk_2F8.mf[1][0]), 0x2f8, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_2F8.mf[2][0]), offsetof(EnPoSisters, unk_2F8.mf[2][1]) - offsetof(EnPoSisters, unk_2F8.mf[2][0]), 0x308, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoSisters, unk_2F8.mf[3][0]), offsetof(EnPoSisters, unk_2F8.mf[3][1]) - offsetof(EnPoSisters, unk_2F8.mf[3][0]), 0x318, 0x4, 4, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnPoSistersSpanCount = ARRAY_COUNT(gGzEnPoSistersSpans);

const GzActorFunction gGzEnPoSistersFunctions[] = {
    { 0x0, (void*)EnPoSisters_Init },
    { 0x24c, (void*)EnPoSisters_Destroy },
    { 0x2b4, NULL },
    { 0x3e0, NULL },
    { 0x43c, NULL },
    { 0x4b4, NULL },
    { 0x4c8, NULL },
    { 0x55c, NULL },
    { 0x5e4, NULL },
    { 0x654, NULL },
    { 0x720, NULL },
    { 0x794, NULL },
    { 0x844, (void*)func_80AD97C8 },
    { 0x970, (void*)func_80AD98F4 },
    { 0xa50, (void*)func_80AD99D4 },
    { 0xad0, (void*)func_80AD9A54 },
    { 0xb24, (void*)func_80AD9AA8 },
    { 0xca0, (void*)func_80AD9C24 },
    { 0xdc0, NULL },
    { 0xe6c, (void*)func_80AD9DF0 },
    { 0xedc, NULL },
    { 0xf98, NULL },
    { 0x100c, NULL },
    { 0x10a4, NULL },
    { 0x1110, (void*)func_80ADA094 },
    { 0x1188, NULL },
    { 0x1238, NULL },
    { 0x12dc, NULL },
    { 0x133c, (void*)func_80ADA2BC },
    { 0x13dc, (void*)func_80ADA35C },
    { 0x1528, (void*)func_80ADA4A8 },
    { 0x15b0, (void*)func_80ADA530 },
    { 0x1720, (void*)func_80ADA6A0 },
    { 0x1870, (void*)func_80ADA7F0 },
    { 0x1940, (void*)func_80ADA8C0 },
    { 0x1a68, (void*)func_80ADA9E8 },
    { 0x1b24, (void*)func_80ADAAA4 },
    { 0x1cf0, (void*)func_80ADAC70 },
    { 0x1dd4, (void*)func_80ADAD54 },
    { 0x1eec, (void*)func_80ADAE6C },
    { 0x2040, (void*)func_80ADAFC0 },
    { 0x21fc, (void*)func_80ADB17C },
    { 0x2338, (void*)func_80ADB2B8 },
    { 0x23b4, (void*)func_80ADB338 },
    { 0x2530, (void*)func_80ADB4B0 },
    { 0x259c, (void*)func_80ADB51C },
    { 0x27f0, (void*)func_80ADB770 },
    { 0x2a70, (void*)func_80ADB9F0 },
    { 0x2bec, (void*)func_80ADBB6C },
    { 0x2c74, (void*)func_80ADBBF4 },
    { 0x2d08, (void*)func_80ADBC88 },
    { 0x2dbc, (void*)func_80ADBD38 },
    { 0x2e10, (void*)func_80ADBD8C },
    { 0x2f70, (void*)func_80ADBEE8 },
    { 0x2fe0, (void*)func_80ADBF58 },
    { 0x30bc, (void*)func_80ADC034 },
    { 0x3194, (void*)func_80ADC10C },
    { 0x3358, (void*)EnPoSisters_Update },
    { 0x35ec, NULL },
    { 0x380c, NULL },
    { 0x39fc, NULL },
    { 0x40cc, (void*)EnPoSisters_Draw },
};
const size_t gGzEnPoSistersFunctionCount = ARRAY_COUNT(gGzEnPoSistersFunctions);
