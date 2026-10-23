// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_Gt/z_demo_gt.h"

void DemoGt_Destroy(void*, void*);
void DemoGt_PlayExplosion1Sfx(void*, void*);
void DemoGt_PlayExplosion2Sfx(void*, void*);
void func_8097EEA8_Init0(void*, void*);
void func_8097EF00(void*, void*);
void func_8097EF34(void*, void*);
void func_8097EF40(void*, void*);
void func_8097F0AC(void*, void*);
void func_8097F19C(void*, void*);
void func_8097F280(void*, void*);
void func_8097F3EC(void*, void*);
void DemoGt_Update0(void*, void*);
void DemoGt_Update8(void*, void*);
void DemoGt_Draw1(void*, void*);
void func_8097F904_Init1(void*, void*);
void func_8097F960(void*, void*);
void func_8097F96C(void*, void*);
void func_8097FA1C(void*, void*);
void func_8097FAFC(void*, void*);
void func_8097FC1C(void*, void*);
void func_8097FCE4(void*, void*);
void func_8097FD70(void*, void*);
void func_8097FDDC(void*, void*);
void func_8097FED8(void*, void*);
void DemoGt_Update1(void*, void*);
void DemoGt_Update9(void*, void*);
void DemoGt_Draw2(void*, void*);
void func_80980110_Init2(void*, void*);
void func_8098016C(void*, void*);
void func_80980178(void*, void*);
void func_80980184(void*, void*);
void func_80980218(void*, void*);
void func_809802AC(void*, void*);
void func_8098036C(void*, void*);
void func_80980430(void*, void*);
void func_80980504(void*, void*);
void func_809805D8(void*, void*);
void func_809806B8(void*, void*);
void func_8098078C(void*, void*);
void func_8098085C(void*, void*);
void func_809809C0(void*, void*);
void func_80980AD4(void*, void*);
void func_80980B68(void*, void*);
void func_80980BFC(void*, void*);
void func_80980C90(void*, void*);
void func_80980D74(void*, void*);
void DemoGt_Update2(void*, void*);
void DemoGt_Update10(void*, void*);
void DemoGt_Draw3(void*, void*);
void func_80980F00_Init5(void*, void*);
void func_80980F58(void*, void*);
void func_80980F8C(void*, void*);
void func_8098103C(void*, void*);
void DemoGt_Update3(void*, void*);
void DemoGt_Update11(void*, void*);
void DemoGt_Update16(void*, void*);
void DemoGt_Draw4(void*, void*);
void func_809813CC_Init6(void*, void*);
void func_80981424(void*, void*);
void func_80981458(void*, void*);
void func_80981524(void*, void*);
void DemoGt_Update4(void*, void*);
void DemoGt_Update12(void*, void*);
void DemoGt_Update17(void*, void*);
void DemoGt_Draw5(void*, void*);
void func_809818A4_Init7(void*, void*);
void func_809818FC(void*, void*);
void func_80981930(void*, void*);
void DemoGt_Update5(void*, void*);
void DemoGt_Update13(void*, void*);
void DemoGt_Update18(void*, void*);
void DemoGt_Draw6(void*, void*);
void func_80981C94_Init23(void*, void*);
void func_80981CEC(void*, void*);
void func_80981DC8(void*, void*);
void DemoGt_Update6(void*, void*);
void DemoGt_Update14(void*, void*);
void DemoGt_Draw7(void*, void*);
void func_80982054_Init24(void*, void*);
void func_809820AC(void*, void*);
void func_80982188(void*, void*);
void DemoGt_Update7(void*, void*);
void DemoGt_Update15(void*, void*);
void DemoGt_Draw8(void*, void*);
void DemoGt_Update(void*, void*);
void DemoGt_Init(void*, void*);
void DemoGt_Draw0(void*, void*);
void DemoGt_Draw(void*, void*);

const GzActorSpan gGzDemoGtSpans[] = {
    { offsetof(DemoGt, updateMode), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGt, drawConfig), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGt, unk_16C.x), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGt, unk_16C.y), 0, 0x15e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGt, unk_16C.z), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGt, unk_172), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGt, unk_174), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoGt, unk_178[0]), offsetof(DemoGt, unk_178[1]) - offsetof(DemoGt, unk_178[0]), 0x168, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGt, unk_188[0]), offsetof(DemoGt, unk_188[1]) - offsetof(DemoGt, unk_188[0]), 0x178, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(DemoGt, unk_198[0]), offsetof(DemoGt, unk_198[1]) - offsetof(DemoGt, unk_198[0]), 0x188, 0x4, 4, 4, GZ_SPAN_VALUE },
};
const size_t gGzDemoGtSpanCount = ARRAY_COUNT(gGzDemoGtSpans);

const GzActorFunction gGzDemoGtFunctions[] = {
    { 0x0, (void*)DemoGt_Destroy },
    { 0x48, NULL },
    { 0x68, (void*)DemoGt_PlayExplosion1Sfx },
    { 0x8c, (void*)DemoGt_PlayExplosion2Sfx },
    { 0xb0, NULL },
    { 0xe0, NULL },
    { 0x170, NULL },
    { 0x2f8, NULL },
    { 0x358, NULL },
    { 0x40c, NULL },
    { 0x460, NULL },
    { 0x6c0, NULL },
    { 0x908, NULL },
    { 0xb6c, NULL },
    { 0xdec, NULL },
    { 0x103c, NULL },
    { 0x105c, NULL },
    { 0x10a8, NULL },
    { 0x10e8, NULL },
    { 0x11c8, NULL },
    { 0x1704, NULL },
    { 0x173c, NULL },
    { 0x1764, NULL },
    { 0x17dc, NULL },
    { 0x1840, (void*)func_8097EEA8_Init0 },
    { 0x1898, (void*)func_8097EF00 },
    { 0x18cc, (void*)func_8097EF34 },
    { 0x18dc, (void*)func_8097EF40 },
    { 0x1a34, (void*)func_8097F0AC },
    { 0x1b18, (void*)func_8097F19C },
    { 0x1b5c, NULL },
    { 0x1c04, (void*)func_8097F280 },
    { 0x1d78, (void*)func_8097F3EC },
    { 0x1db8, (void*)DemoGt_Update0 },
    { 0x1e30, (void*)DemoGt_Update8 },
    { 0x1ea8, (void*)DemoGt_Draw1 },
    { 0x2258, (void*)func_8097F904_Init1 },
    { 0x22b4, (void*)func_8097F960 },
    { 0x22c4, (void*)func_8097F96C },
    { 0x2358, (void*)func_8097FA1C },
    { 0x2420, (void*)func_8097FAFC },
    { 0x2528, (void*)func_8097FC1C },
    { 0x25dc, (void*)func_8097FCE4 },
    { 0x2658, (void*)func_8097FD70 },
    { 0x26cc, (void*)func_8097FDDC },
    { 0x27cc, (void*)func_8097FED8 },
    { 0x280c, (void*)DemoGt_Update1 },
    { 0x285c, (void*)DemoGt_Update9 },
    { 0x28a4, (void*)DemoGt_Draw2 },
    { 0x29d8, (void*)func_80980110_Init2 },
    { 0x2a34, (void*)func_8098016C },
    { 0x2a44, (void*)func_80980178 },
    { 0x2a54, (void*)func_80980184 },
    { 0x2ae8, (void*)func_80980218 },
    { 0x2b7c, (void*)func_809802AC },
    { 0x2c40, (void*)func_8098036C },
    { 0x2d08, (void*)func_80980430 },
    { 0x2dc8, (void*)func_80980504 },
    { 0x2e88, (void*)func_809805D8 },
    { 0x2f50, (void*)func_809806B8 },
    { 0x3010, (void*)func_8098078C },
    { 0x30cc, (void*)func_8098085C },
    { 0x3218, (void*)func_809809C0 },
    { 0x331c, (void*)func_80980AD4 },
    { 0x339c, (void*)func_80980B68 },
    { 0x341c, (void*)func_80980BFC },
    { 0x349c, (void*)func_80980C90 },
    { 0x3588, (void*)func_80980D74 },
    { 0x35c8, (void*)DemoGt_Update2 },
    { 0x360c, (void*)DemoGt_Update10 },
    { 0x3648, (void*)DemoGt_Draw3 },
    { 0x36e0, (void*)func_80980F00_Init5 },
    { 0x3738, (void*)func_80980F58 },
    { 0x3770, (void*)func_80980F8C },
    { 0x3824, (void*)func_8098103C },
    { 0x3888, (void*)DemoGt_Update3 },
    { 0x38cc, (void*)DemoGt_Update11 },
    { 0x3908, (void*)DemoGt_Update16 },
    { 0x39a0, (void*)DemoGt_Draw4 },
    { 0x3b88, (void*)func_809813CC_Init6 },
    { 0x3be0, (void*)func_80981424 },
    { 0x3c18, (void*)func_80981458 },
    { 0x3cd0, (void*)func_80981524 },
    { 0x3d34, (void*)DemoGt_Update4 },
    { 0x3d78, (void*)DemoGt_Update12 },
    { 0x3db4, (void*)DemoGt_Update17 },
    { 0x3e4c, (void*)DemoGt_Draw5 },
    { 0x4028, (void*)func_809818A4_Init7 },
    { 0x4080, (void*)func_809818FC },
    { 0x40b8, (void*)func_80981930 },
    { 0x411c, (void*)DemoGt_Update5 },
    { 0x4160, (void*)DemoGt_Update13 },
    { 0x419c, (void*)DemoGt_Update18 },
    { 0x4234, (void*)DemoGt_Draw6 },
    { 0x43ec, (void*)func_80981C94_Init23 },
    { 0x4444, (void*)func_80981CEC },
    { 0x447c, NULL },
    { 0x4524, (void*)func_80981DC8 },
    { 0x4564, (void*)DemoGt_Update6 },
    { 0x45a8, (void*)DemoGt_Update14 },
    { 0x45ec, (void*)DemoGt_Draw7 },
    { 0x4784, (void*)func_80982054_Init24 },
    { 0x47dc, (void*)func_809820AC },
    { 0x4814, NULL },
    { 0x48bc, (void*)func_80982188 },
    { 0x48fc, (void*)DemoGt_Update7 },
    { 0x4940, (void*)DemoGt_Update15 },
    { 0x4984, (void*)DemoGt_Draw8 },
    { 0x4b20, (void*)DemoGt_Update },
    { 0x4b68, (void*)DemoGt_Init },
    { 0x4c2c, (void*)DemoGt_Draw0 },
    { 0x4c3c, (void*)DemoGt_Draw },
};
const size_t gGzDemoGtFunctionCount = ARRAY_COUNT(gGzDemoGtFunctions);
