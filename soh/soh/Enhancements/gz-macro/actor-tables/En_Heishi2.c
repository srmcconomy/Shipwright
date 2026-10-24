// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Heishi2/z_en_heishi2.h"

void EnHeishi2_Init(void*, void*);
void EnHeishi2_Destroy(void*, void*);
void EnHeishi2_DoNothing1(void*, void*);
void EnHeishi_DoNothing2(void*, void*);
void func_80A531E4(void*, void*);
void func_80A53278(void*, void*);
void func_80A5344C(void*, void*);
void func_80A53538(void*, void*);
void func_80A535BC(void*, void*);
void func_80A53638(void*, void*);
void func_80A5372C(void*, void*);
void func_80A53850(void*, void*);
void func_80A53908(void*, void*);
void func_80A5399C(void*, void*);
void func_80A53AD4(void*, void*);
void func_80A53C0C(void*, void*);
void func_80A53C90(void*, void*);
void func_80A53D0C(void*, void*);
void func_80A53DF8(void*, void*);
void func_80A53F30(void*, void*);
void func_80A54038(void*, void*);
void func_80A540C0(void*, void*);
void func_80A541FC(void*, void*);
void func_80A5427C(void*, void*);
void func_80A54320(void*, void*);
void func_80A543A0(void*, void*);
void func_80A544AC(void*, void*);
void func_80A5455C(void*, void*);
void func_80A546DC(void*, void*);
void func_80A5475C(void*, void*);
void func_80A54954(void*, void*);
void func_80A549E8(void*, void*);
void EnHeishi2_Update(void*, void*);
void EnHeishi2_DrawKingGuard(void*, void*);
void EnHeishi2_Draw(void*, void*);

const GzActorSpan gGzEnHeishi2Spans[] = {
    { offsetof(EnHeishi2, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnHeishi2, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHeishi2, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, jointTable[0].x), offsetof(EnHeishi2, jointTable[1].x) - offsetof(EnHeishi2, jointTable[0].x), 0x180, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, jointTable[0].y), offsetof(EnHeishi2, jointTable[1].y) - offsetof(EnHeishi2, jointTable[0].y), 0x182, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, jointTable[0].z), offsetof(EnHeishi2, jointTable[1].z) - offsetof(EnHeishi2, jointTable[0].z), 0x184, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, morphTable[0].x), offsetof(EnHeishi2, morphTable[1].x) - offsetof(EnHeishi2, morphTable[0].x), 0x1e6, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, morphTable[0].y), offsetof(EnHeishi2, morphTable[1].y) - offsetof(EnHeishi2, morphTable[0].y), 0x1e8, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, morphTable[0].z), offsetof(EnHeishi2, morphTable[1].z) - offsetof(EnHeishi2, morphTable[0].z), 0x1ea, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, actionFunc), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHeishi2, unk_260.x), 0, 0x250, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_260.y), 0, 0x252, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_260.z), 0, 0x254, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_266[0]), offsetof(EnHeishi2, unk_266[1]) - offsetof(EnHeishi2, unk_266[0]), 0x256, 0x1, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_26C.x), 0, 0x25c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_26C.y), 0, 0x25e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_26C.z), 0, 0x260, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_274.x), 0, 0x264, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_274.y), 0, 0x268, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_274.z), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamEye.x), 0, 0x270, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamEye.y), 0, 0x274, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamEye.z), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamAt.x), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamAt.y), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamAt.z), 0, 0x284, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamAtInit.x), 0, 0x288, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamAtInit.y), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamAtInit.z), 0, 0x290, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_2A4[0]), offsetof(EnHeishi2, unk_2A4[1]) - offsetof(EnHeishi2, unk_2A4[0]), 0x294, 0x1, 24, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamEyeInit.x), 0, 0x2ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamEyeInit.y), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, subCamEyeInit.z), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_2C8[0]), offsetof(EnHeishi2, unk_2C8[1]) - offsetof(EnHeishi2, unk_2C8[0]), 0x2b8, 0x1, 24, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_2E0), 0, 0x2d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_2E4), 0, 0x2d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_2E8[0]), offsetof(EnHeishi2, unk_2E8[1]) - offsetof(EnHeishi2, unk_2E8[0]), 0x2d8, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_2EC), 0, 0x2dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_2F0), 0, 0x2e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_2F2[0]), offsetof(EnHeishi2, unk_2F2[1]) - offsetof(EnHeishi2, unk_2F2[0]), 0x2e2, 0x2, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_2FC), 0, 0x2ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, type), 0, 0x2ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_300), 0, 0x2f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_302[0]), offsetof(EnHeishi2, unk_302[1]) - offsetof(EnHeishi2, unk_302[0]), 0x2f2, 0x1, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, audioFlag), 0, 0x2f8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_309), 0, 0x2f9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_30A), 0, 0x2fa, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_30B), 0, 0x2fb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_30C), 0, 0x2fc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_30D), 0, 0x2fd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_30E), 0, 0x2fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, cameraId), 0, 0x300, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, gate), 0, 0x304, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, unk_318[0]), offsetof(EnHeishi2, unk_318[1]) - offsetof(EnHeishi2, unk_318[0]), 0x308, 0x1, 24, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, mtxf_330.mf[0][0]), offsetof(EnHeishi2, mtxf_330.mf[0][1]) - offsetof(EnHeishi2, mtxf_330.mf[0][0]), 0x320, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, mtxf_330.mf[1][0]), offsetof(EnHeishi2, mtxf_330.mf[1][1]) - offsetof(EnHeishi2, mtxf_330.mf[1][0]), 0x330, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, mtxf_330.mf[2][0]), offsetof(EnHeishi2, mtxf_330.mf[2][1]) - offsetof(EnHeishi2, mtxf_330.mf[2][0]), 0x340, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, mtxf_330.mf[3][0]), offsetof(EnHeishi2, mtxf_330.mf[3][1]) - offsetof(EnHeishi2, mtxf_330.mf[3][0]), 0x350, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, unk_370[0]), offsetof(EnHeishi2, unk_370[1]) - offsetof(EnHeishi2, unk_370[0]), 0x360, 0x1, 40, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.base.actor), 0, 0x388, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, collider.base.at), 0, 0x38c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, collider.base.ac), 0, 0x390, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, collider.base.oc), 0, 0x394, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, collider.base.atFlags), 0, 0x398, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.base.acFlags), 0, 0x399, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.base.ocFlags1), 0, 0x39a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.base.ocFlags2), 0, 0x39b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.base.colType), 0, 0x39c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.base.shape), 0, 0x39d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.toucher.dmgFlags), 0, 0x3a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.toucher.effect), 0, 0x3a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.toucher.damage), 0, 0x3a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.bumper.dmgFlags), 0, 0x3a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.bumper.effect), 0, 0x3ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.bumper.defense), 0, 0x3ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.bumper.hitPos.x), 0, 0x3ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.bumper.hitPos.y), 0, 0x3b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.bumper.hitPos.z), 0, 0x3b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.elemType), 0, 0x3b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.toucherFlags), 0, 0x3b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.bumperFlags), 0, 0x3b6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.ocElemFlags), 0, 0x3b7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.info.atHit), 0, 0x3b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, collider.info.acHit), 0, 0x3bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, collider.info.atHitInfo), 0, 0x3c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, collider.info.acHitInfo), 0, 0x3c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi2, collider.dim.radius), 0, 0x3c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.dim.height), 0, 0x3ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.dim.yShift), 0, 0x3cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.dim.pos.x), 0, 0x3ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.dim.pos.y), 0, 0x3d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi2, collider.dim.pos.z), 0, 0x3d2, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnHeishi2SpanCount = ARRAY_COUNT(gGzEnHeishi2Spans);

const GzActorFunction gGzEnHeishi2Functions[] = {
    { 0x0, (void*)EnHeishi2_Init },
    { 0x280, (void*)EnHeishi2_Destroy },
    { 0x2c4, (void*)EnHeishi2_DoNothing1 },
    { 0x2d4, (void*)EnHeishi_DoNothing2 },
    { 0x2e4, (void*)func_80A531E4 },
    { 0x378, (void*)func_80A53278 },
    { 0x4f8, (void*)func_80A5344C },
    { 0x5e4, (void*)func_80A53538 },
    { 0x66c, (void*)func_80A535BC },
    { 0x6e8, (void*)func_80A53638 },
    { 0x7d4, (void*)func_80A5372C },
    { 0x8f8, (void*)func_80A53850 },
    { 0x9b0, (void*)func_80A53908 },
    { 0xa44, (void*)func_80A5399C },
    { 0xb68, (void*)func_80A53AD4 },
    { 0xca4, (void*)func_80A53C0C },
    { 0xd2c, (void*)func_80A53C90 },
    { 0xda8, (void*)func_80A53D0C },
    { 0xe8c, (void*)func_80A53DF8 },
    { 0xfc4, (void*)func_80A53F30 },
    { 0x10cc, (void*)func_80A54038 },
    { 0x1158, (void*)func_80A540C0 },
    { 0x1294, (void*)func_80A541FC },
    { 0x1318, (void*)func_80A5427C },
    { 0x13bc, (void*)func_80A54320 },
    { 0x143c, (void*)func_80A543A0 },
    { 0x1548, (void*)func_80A544AC },
    { 0x15f8, (void*)func_80A5455C },
    { 0x176c, (void*)func_80A546DC },
    { 0x17ec, (void*)func_80A5475C },
    { 0x19e4, (void*)func_80A54954 },
    { 0x1a78, (void*)func_80A549E8 },
    { 0x1b08, (void*)EnHeishi2_Update },
    { 0x1c54, NULL },
    { 0x1ccc, NULL },
    { 0x1d04, (void*)EnHeishi2_DrawKingGuard },
    { 0x1d78, (void*)EnHeishi2_Draw },
};
const size_t gGzEnHeishi2FunctionCount = ARRAY_COUNT(gGzEnHeishi2Functions);
