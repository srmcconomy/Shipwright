// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Zl2/z_en_zl2.h"

void EnZl2_Destroy(void*, void*);
void func_80B4ED2C(void*, void*);
void func_80B4FCCC(void*, void*);
void func_80B4FD90(void*, void*);
void EnZl2_GiveLightArrows(void*, void*);
void func_80B4FF84(void*, void*);
void func_80B4FFF0(void*, void*);
void func_80B500E0(void*, void*);
void func_80B501E8(void*, void*);
void func_80B50260(void*, void*);
void func_80B50278(void*, void*);
void func_80B50304(void*, void*);
void func_80B503DC(void*, void*);
void func_80B5042C(void*, void*);
void func_80B504D4(void*, void*);
void func_80B50580(void*, void*);
void func_80B50618(void*, void*);
void func_80B50644(void*, void*);
void func_80B50670(void*, void*);
void func_80B506C4(void*, void*);
void func_80B50780(void*, void*);
void func_80B5082C(void*, void*);
void func_80B508C8(void*, void*);
void func_80B50970(void*, void*);
void func_80B50980(void*, void*);
void func_80B509A0(void*, void*);
void func_80B50A04(void*, void*);
void func_80B50BBC(void*, void*);
void func_80B50BEC(void*, void*);
void func_80B50C40(void*, void*);
void func_80B50CA8(void*, void*);
void func_80B50CFC(void*, void*);
void func_80B50D50(void*, void*);
void func_80B50D94(void*, void*);
void func_80B50DE8(void*, void*);
void func_80B50E3C(void*, void*);
void func_80B50E90(void*, void*);
void func_80B50EE4(void*, void*);
void func_80B50F38(void*, void*);
void func_80B50F8C(void*, void*);
void func_80B50FE8(void*, void*);
void func_80B51034(void*, void*);
void func_80B51080(void*, void*);
void func_80B510CC(void*, void*);
void func_80B51118(void*, void*);
void func_80B51164(void*, void*);
void func_80B511B0(void*, void*);
void func_80B511FC(void*, void*);
void func_80B51250(void*, void*);
void func_80B512B8(void*, void*);
void func_80B51310(void*, void*);
void func_80B5135C(void*, void*);
void func_80B513A8(void*, void*);
void func_80B51418(void*, void*);
void func_80B5146C(void*, void*);
void func_80B5149C(void*, void*);
void func_80B514F8(void*, void*);
void func_80B5154C(void*, void*);
void func_80B515D8(void*, void*);
void func_80B51948(void*, void*);
void func_80B51A5C(void*, void*);
void func_80B51A8C(void*, void*);
void func_80B51AE4(void*, void*);
void func_80B51B44(void*, void*);
void func_80B51BA8(void*, void*);
void func_80B51C0C(void*, void*);
void func_80B51C64(void*, void*);
void func_80B51CA8(void*, void*);
void func_80B51D0C(void*, void*);
void func_80B51D24(void*, void*);
void func_80B51DA4(void*, void*);
void func_80B51EBC(void*, void*);
void func_80B51F38(void*, void*);
void func_80B51FA8(void*, void*);
void func_80B52068(void*, void*);
void func_80B52098(void*, void*);
void func_80B52108(void*, void*);
void func_80B52114(void*, void*);
void func_80B521A0(void*, void*);
void EnZl2_Update(void*, void*);
void EnZl2_Init(void*, void*);
void func_80B523BC(void*, void*);
void func_80B523C8(void*, void*);
void func_80B525D4(void*, void*);
void EnZl2_Draw(void*, void*);

const GzActorSpan gGzEnZl2Spans[] = {
    { offsetof(EnZl2, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl2, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnZl2, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl2, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl2, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnZl2, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, eyeTexIndex), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, blinkTimer), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, eyeTexIndex2), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_196[0]), offsetof(EnZl2, unk_196[1]) - offsetof(EnZl2, unk_196[0]), 0x186, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, mouthTexIndex), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_19A[0]), offsetof(EnZl2, unk_19A[1]) - offsetof(EnZl2, unk_19A[0]), 0x18a, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, action), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, drawConfig), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_1A4[0]), offsetof(EnZl2, unk_1A4[1]) - offsetof(EnZl2, unk_1A4[0]), 0x194, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, alpha), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_1AC[0]), offsetof(EnZl2, unk_1AC[1]) - offsetof(EnZl2, unk_1AC[0]), 0x19c, 0x2, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_1DC[0]), offsetof(EnZl2, unk_1DC[1]) - offsetof(EnZl2, unk_1DC[0]), 0x1cc, 0x2, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_20C[0]), offsetof(EnZl2, unk_20C[1]) - offsetof(EnZl2, unk_20C[0]), 0x1fc, 0x2, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_23C), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, cueId), 0, 0x230, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_244), 0, 0x234, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_248), 0, 0x238, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_24C), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_250), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_254), 0, 0x244, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_258[0]), offsetof(EnZl2, unk_258[1]) - offsetof(EnZl2, unk_258[0]), 0x248, 0x1, 12, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, overrideLimbDrawConfig), 0, 0x254, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_268[0]), offsetof(EnZl2, unk_268[1]) - offsetof(EnZl2, unk_268[0]), 0x258, 0x1, 12, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl2, zl2Anime1ObjectSlot), 0, 0x264, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_278), 0, 0x268, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl2, unk_27C), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnZl2SpanCount = ARRAY_COUNT(gGzEnZl2Spans);

const GzActorFunction gGzEnZl2Functions[] = {
    { 0x0, (void*)EnZl2_Destroy },
    { 0x24, NULL },
    { 0xb4, NULL },
    { 0x168, NULL },
    { 0x22c, NULL },
    { 0x2bc, NULL },
    { 0x35c, NULL },
    { 0x37c, NULL },
    { 0x394, NULL },
    { 0x3ac, (void*)func_80B4ED2C },
    { 0x3f4, NULL },
    { 0x418, NULL },
    { 0x440, NULL },
    { 0x4c0, NULL },
    { 0x5f0, NULL },
    { 0x8c0, NULL },
    { 0xaf0, NULL },
    { 0x11ec, NULL },
    { 0x1338, (void*)func_80B4FCCC },
    { 0x1370, NULL },
    { 0x1400, (void*)func_80B4FD90 },
    { 0x1444, NULL },
    { 0x1484, NULL },
    { 0x14bc, NULL },
    { 0x14e4, NULL },
    { 0x150c, NULL },
    { 0x1534, NULL },
    { 0x155c, NULL },
    { 0x1584, (void*)EnZl2_GiveLightArrows },
    { 0x1614, (void*)func_80B4FF84 },
    { 0x1680, (void*)func_80B4FFF0 },
    { 0x1720, NULL },
    { 0x1774, (void*)func_80B500E0 },
    { 0x1858, NULL },
    { 0x187c, (void*)func_80B501E8 },
    { 0x18f4, (void*)func_80B50260 },
    { 0x1910, (void*)func_80B50278 },
    { 0x199c, (void*)func_80B50304 },
    { 0x1a74, (void*)func_80B503DC },
    { 0x1ac4, (void*)func_80B5042C },
    { 0x1b20, NULL },
    { 0x1b6c, (void*)func_80B504D4 },
    { 0x1bd0, NULL },
    { 0x1c18, (void*)func_80B50580 },
    { 0x1c6c, NULL },
    { 0x1cb4, (void*)func_80B50618 },
    { 0x1ce0, (void*)func_80B50644 },
    { 0x1d0c, (void*)func_80B50670 },
    { 0x1d60, (void*)func_80B506C4 },
    { 0x1ddc, NULL },
    { 0x1e24, (void*)func_80B50780 },
    { 0x1e8c, NULL },
    { 0x1ed4, (void*)func_80B5082C },
    { 0x1f28, NULL },
    { 0x1f70, (void*)func_80B508C8 },
    { 0x1fcc, NULL },
    { 0x2014, (void*)func_80B50970 },
    { 0x2028, (void*)func_80B50980 },
    { 0x204c, (void*)func_80B509A0 },
    { 0x20b0, (void*)func_80B50A04 },
    { 0x2254, (void*)func_80B50BBC },
    { 0x228c, (void*)func_80B50BEC },
    { 0x22e8, (void*)func_80B50C40 },
    { 0x2358, (void*)func_80B50CA8 },
    { 0x23b4, (void*)func_80B50CFC },
    { 0x2410, (void*)func_80B50D50 },
    { 0x245c, (void*)func_80B50D94 },
    { 0x24b8, (void*)func_80B50DE8 },
    { 0x2514, (void*)func_80B50E3C },
    { 0x2570, (void*)func_80B50E90 },
    { 0x25cc, (void*)func_80B50EE4 },
    { 0x2628, (void*)func_80B50F38 },
    { 0x2684, (void*)func_80B50F8C },
    { 0x26e8, (void*)func_80B50FE8 },
    { 0x273c, (void*)func_80B51034 },
    { 0x2790, (void*)func_80B51080 },
    { 0x27e4, (void*)func_80B510CC },
    { 0x2838, (void*)func_80B51118 },
    { 0x288c, (void*)func_80B51164 },
    { 0x28e0, (void*)func_80B511B0 },
    { 0x2934, (void*)func_80B511FC },
    { 0x2990, (void*)func_80B51250 },
    { 0x2a00, (void*)func_80B512B8 },
    { 0x2a60, (void*)func_80B51310 },
    { 0x2ab0, (void*)func_80B5135C },
    { 0x2afc, (void*)func_80B513A8 },
    { 0x2b70, (void*)func_80B51418 },
    { 0x2bc4, (void*)func_80B5146C },
    { 0x2bf8, (void*)func_80B5149C },
    { 0x2c58, (void*)func_80B514F8 },
    { 0x2cac, (void*)func_80B5154C },
    { 0x2d24, NULL },
    { 0x2d3c, (void*)func_80B515D8 },
    { 0x2da8, NULL },
    { 0x2ddc, NULL },
    { 0x2e34, NULL },
    { 0x2e68, NULL },
    { 0x2ec0, NULL },
    { 0x2ef4, NULL },
    { 0x2f44, NULL },
    { 0x2f8c, NULL },
    { 0x2fe4, NULL },
    { 0x302c, NULL },
    { 0x30b4, (void*)func_80B51948 },
    { 0x31b4, (void*)func_80B51A5C },
    { 0x31ec, (void*)func_80B51A8C },
    { 0x324c, (void*)func_80B51AE4 },
    { 0x32b4, (void*)func_80B51B44 },
    { 0x3320, (void*)func_80B51BA8 },
    { 0x338c, (void*)func_80B51C0C },
    { 0x33ec, (void*)func_80B51C64 },
    { 0x3438, (void*)func_80B51CA8 },
    { 0x34a4, (void*)func_80B51D0C },
    { 0x34c0, (void*)func_80B51D24 },
    { 0x3540, (void*)func_80B51DA4 },
    { 0x3644, NULL },
    { 0x365c, (void*)func_80B51EBC },
    { 0x36dc, (void*)func_80B51F38 },
    { 0x374c, (void*)func_80B51FA8 },
    { 0x37f8, (void*)func_80B52068 },
    { 0x3830, (void*)func_80B52098 },
    { 0x38a8, (void*)func_80B52108 },
    { 0x38b8, (void*)func_80B52114 },
    { 0x3918, (void*)func_80B521A0 },
    { 0x39a4, (void*)EnZl2_Update },
    { 0x39ec, (void*)EnZl2_Init },
    { 0x3a98, NULL },
    { 0x3b00, (void*)func_80B523BC },
    { 0x3b10, (void*)func_80B523C8 },
    { 0x3cec, (void*)func_80B525D4 },
    { 0x3e94, (void*)EnZl2_Draw },
};
const size_t gGzEnZl2FunctionCount = ARRAY_COUNT(gGzEnZl2Functions);
