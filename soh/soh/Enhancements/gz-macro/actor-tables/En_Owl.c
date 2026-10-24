// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Owl/z_en_owl.h"

void EnOwl_Init(void*, void*);
void EnOwl_Destroy(void*, void*);
void EnOwl_LookAtLink(void*, void*);
void func_80ACA690(void*, void*);
void func_80ACA76C(void*, void*);
void func_80ACA7E0(void*, void*);
void EnOwl_ConfirmKokiriMessage(void*, void*);
void EnOwl_WaitOutsideKokiri(void*, void*);
void func_80ACA998(void*, void*);
void func_80ACAA54(void*, void*);
void func_80ACAAC0(void*, void*);
void EnOwl_WaitHyruleCastle(void*, void*);
void func_80ACAB88(void*, void*);
void func_80ACAC6C(void*, void*);
void EnOwl_WaitKakariko(void*, void*);
void func_80ACAD34(void*, void*);
void func_80ACADF0(void*, void*);
void EnOwl_WaitGerudo(void*, void*);
void func_80ACAEB8(void*, void*);
void func_80ACAF74(void*, void*);
void EnOwl_WaitLakeHylia(void*, void*);
void func_80ACB03C(void*, void*);
void EnOwl_WaitZoraRiver(void*, void*);
void func_80ACB148(void*, void*);
void EnOwl_WaitHyliaShortcut(void*, void*);
void func_80ACB22C(void*, void*);
void func_80ACB274(void*, void*);
void EnOwl_WaitDeathMountainShortcut(void*, void*);
void func_80ACB344(void*, void*);
void func_80ACB3E0(void*, void*);
void func_80ACB440(void*, void*);
void func_80ACB4FC(void*, void*);
void EnOwl_WaitLWPreSaria(void*, void*);
void func_80ACB5C4(void*, void*);
void func_80ACB680(void*, void*);
void EnOwl_WaitLWPostSaria(void*, void*);
void func_80ACB748(void*, void*);
void func_80ACB904(void*, void*);
void func_80ACB994(void*, void*);
void EnOwl_WaitDefault(void*, void*);
void func_80ACBAB8(void*, void*);
void func_80ACBC0C(void*, void*);
void func_80ACBD4C(void*, void*);
void func_80ACBEA0(void*, void*);
void func_80ACBF50(void*, void*);
void func_80ACC00C(void*, void*);
void func_80ACC23C(void*, void*);
void func_80ACC30C(void*, void*);
s32 func_80ACC624(void*, void*);
void EnOwl_Update(void*, void*);
void EnOwl_Draw(void*, void*);
void func_80ACD2CC(void*, void*);
void func_80ACD4D4(void*, void*);

const GzActorSpan gGzEnOwlSpans[] = {
    { offsetof(EnOwl, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnOwl, skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnOwl, skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, jointTable[0].x), offsetof(EnOwl, jointTable[1].x) - offsetof(EnOwl, jointTable[0].x), 0x1cc, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, jointTable[0].y), offsetof(EnOwl, jointTable[1].y) - offsetof(EnOwl, jointTable[0].y), 0x1ce, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, jointTable[0].z), offsetof(EnOwl, jointTable[1].z) - offsetof(EnOwl, jointTable[0].z), 0x1d0, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, morphTable[0].x), offsetof(EnOwl, morphTable[1].x) - offsetof(EnOwl, morphTable[0].x), 0x24a, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, morphTable[0].y), offsetof(EnOwl, morphTable[1].y) - offsetof(EnOwl, morphTable[0].y), 0x24c, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, morphTable[0].z), offsetof(EnOwl, morphTable[1].z) - offsetof(EnOwl, morphTable[0].z), 0x24e, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.limbCount), 0, 0x2c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.mode), 0, 0x2c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.dListCount), 0, 0x2ca, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.taper), 0, 0x2cb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.skeleton), 0, 0x2cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, skelAnime2.animation), 0, 0x2d0, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnOwl, skelAnime2.startFrame), 0, 0x2d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.endFrame), 0, 0x2d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.animLength), 0, 0x2dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.curFrame), 0, 0x2e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.playSpeed), 0, 0x2e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.jointTable), 0, 0x2e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, skelAnime2.morphTable), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, skelAnime2.morphWeight), 0, 0x2f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.morphRate), 0, 0x2f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.update.normal), 0, 0x2f8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnOwl, skelAnime2.initFlags), 0, 0x2fc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.movementFlags), 0, 0x2fd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.prevRot), 0, 0x2fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.prevTransl.x), 0, 0x300, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.prevTransl.y), 0, 0x302, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.prevTransl.z), 0, 0x304, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.baseTransl.x), 0, 0x306, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.baseTransl.y), 0, 0x308, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, skelAnime2.baseTransl.z), 0, 0x30a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, jointTable2[0].x), offsetof(EnOwl, jointTable2[1].x) - offsetof(EnOwl, jointTable2[0].x), 0x30c, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, jointTable2[0].y), offsetof(EnOwl, jointTable2[1].y) - offsetof(EnOwl, jointTable2[0].y), 0x30e, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, jointTable2[0].z), offsetof(EnOwl, jointTable2[1].z) - offsetof(EnOwl, jointTable2[0].z), 0x310, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, morphTable2[0].x), offsetof(EnOwl, morphTable2[1].x) - offsetof(EnOwl, morphTable2[0].x), 0x36c, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, morphTable2[0].y), offsetof(EnOwl, morphTable2[1].y) - offsetof(EnOwl, morphTable2[0].y), 0x36e, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, morphTable2[0].z), offsetof(EnOwl, morphTable2[1].z) - offsetof(EnOwl, morphTable2[0].z), 0x370, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, curSkelAnime), 0, 0x3cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnOwl, eye.x), 0, 0x3d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, eye.y), 0, 0x3d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, eye.z), 0, 0x3d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_3EC), 0, 0x3dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_3EE), 0, 0x3de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_3F0), 0, 0x3e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_3F2), 0, 0x3e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, eyeTexIndex), 0, 0x3e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, blinkTimer), 0, 0x3e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_3F8), 0, 0x3e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnOwl, actionFlags), 0, 0x3ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_3FE), 0, 0x3ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_400), 0, 0x3f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, cameraIdx), 0, 0x3f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_404), 0, 0x3f4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_405), 0, 0x3f5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_406), 0, 0x3f6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_407), 0, 0x3f7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_408), 0, 0x3f8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_409), 0, 0x3f9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_40A), 0, 0x3fa, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, unk_40B), 0, 0x3fb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnOwl, actionFunc), 0, 0x3fc, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnOwl, unk_410), 0, 0x400, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnOwlSpanCount = ARRAY_COUNT(gGzEnOwlSpans);

const GzActorFunction gGzEnOwlFunctions[] = {
    { 0x0, (void*)EnOwl_Init },
    { 0x3e4, (void*)EnOwl_Destroy },
    { 0x410, (void*)EnOwl_LookAtLink },
    { 0x44c, NULL },
    { 0x5b8, NULL },
    { 0x62c, NULL },
    { 0x68c, (void*)func_80ACA62C },
    { 0x6d8, (void*)func_80ACA690 },
    { 0x708, NULL },
    { 0x764, NULL },
    { 0x7b0, (void*)func_80ACA76C },
    { 0x824, (void*)func_80ACA7E0 },
    { 0x8d0, (void*)EnOwl_ConfirmKokiriMessage },
    { 0x970, (void*)EnOwl_WaitOutsideKokiri },
    { 0x9e8, (void*)func_80ACA998 },
    { 0xaa8, (void*)func_80ACAA54 },
    { 0xb18, (void*)func_80ACAAC0 },
    { 0xb88, (void*)EnOwl_WaitHyruleCastle },
    { 0xbec, (void*)func_80ACAB88 },
    { 0xcd4, (void*)func_80ACAC6C },
    { 0xd44, (void*)EnOwl_WaitKakariko },
    { 0xda8, (void*)func_80ACAD34 },
    { 0xe68, (void*)func_80ACADF0 },
    { 0xed8, (void*)EnOwl_WaitGerudo },
    { 0xf3c, (void*)func_80ACAEB8 },
    { 0xffc, (void*)func_80ACAF74 },
    { 0x106c, (void*)EnOwl_WaitLakeHylia },
    { 0x10d0, (void*)func_80ACB03C },
    { 0x1144, (void*)EnOwl_WaitZoraRiver },
    { 0x11e4, (void*)func_80ACB148 },
    { 0x1244, (void*)EnOwl_WaitHyliaShortcut },
    { 0x12d0, (void*)func_80ACB22C },
    { 0x131c, (void*)func_80ACB274 },
    { 0x1360, (void*)EnOwl_WaitDeathMountainShortcut },
    { 0x13f4, (void*)func_80ACB344 },
    { 0x1494, (void*)func_80ACB3E0 },
    { 0x14fc, (void*)func_80ACB440 },
    { 0x15bc, (void*)func_80ACB4FC },
    { 0x162c, (void*)EnOwl_WaitLWPreSaria },
    { 0x1690, (void*)func_80ACB5C4 },
    { 0x1750, (void*)func_80ACB680 },
    { 0x17c0, (void*)EnOwl_WaitLWPostSaria },
    { 0x1824, (void*)func_80ACB748 },
    { 0x19e0, (void*)func_80ACB904 },
    { 0x1a78, (void*)func_80ACB994 },
    { 0x1b10, (void*)EnOwl_WaitDefault },
    { 0x1ba4, (void*)func_80ACBAB8 },
    { 0x1cf8, (void*)func_80ACBC0C },
    { 0x1e34, (void*)func_80ACBD4C },
    { 0x1f88, (void*)func_80ACBEA0 },
    { 0x2038, (void*)func_80ACBF50 },
    { 0x20f4, (void*)func_80ACC00C },
    { 0x22b8, (void*)func_80ACC23C },
    { 0x2384, (void*)func_80ACC30C },
    { 0x2408, NULL },
    { 0x24d8, NULL },
    { 0x25b8, NULL },
    { 0x2644, NULL },
    { 0x269c, (void*)func_80ACC624 },
    { 0x2718, (void*)EnOwl_Update },
    { 0x2e68, NULL },
    { 0x2f94, NULL },
    { 0x3018, (void*)EnOwl_Draw },
    { 0x30e4, NULL },
    { 0x315c, NULL },
    { 0x31f0, NULL },
    { 0x3250, NULL },
    { 0x32fc, (void*)func_80ACD2CC },
    { 0x3504, (void*)func_80ACD4D4 },
};
const size_t gGzEnOwlFunctionCount = ARRAY_COUNT(gGzEnOwlFunctions);
