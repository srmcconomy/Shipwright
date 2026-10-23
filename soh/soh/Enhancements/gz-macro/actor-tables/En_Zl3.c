// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Zl3/z_en_zl3.h"

void func_80B533B0(void*, void*);
void func_80B533FC(void*, void*);
void EnZl3_Destroy(void*, void*);
void func_80B5357C(void*, void*);
void func_80B53614(void*, void*);
void func_80B5366C(void*, void*);
void func_80B53764(void*, void*);
void func_80B54DE0(void*, void*);
void func_80B54EA4(void*, void*);
void func_80B54F18(void*, void*);
void func_80B54FB4(void*, void*);
void func_80B553E8(void*, void*);
void func_80B55444(void*, void*);
void func_80B55550(void*, void*);
void func_80B555A4(void*, void*);
void func_80B55604(void*, void*);
void func_80B5566C(void*, void*);
void func_80B556CC(void*, void*);
void func_80B5572C(void*, void*);
void func_80B55780(void*, void*);
void func_80B55A58(void*, void*);
void func_80B55D00(void*, void*);
void func_80B55DB0(void*, void*);
void func_80B55F6C(void*, void*);
void func_80B56108(void*, void*);
void func_80B56214(void*, void*);
void func_80B562F4(void*, void*);
void func_80B564A8(void*, void*);
void func_80B56658(void*, void*);
void func_80B566AC(void*, void*);
void func_80B5670C(void*, void*);
void func_80B5676C(void*, void*);
void func_80B567CC(void*, void*);
void func_80B5682C(void*, void*);
void func_80B568B4(void*, void*);
void func_80B5691C(void*, void*);
void func_80B5697C(void*, void*);
void func_80B569E4(void*, void*);
void func_80B56A68(void*, void*);
void func_80B56AE0(void*, void*);
void func_80B56B54(void*, void*);
void func_80B56BA8(void*, void*);
void func_80B56C24(void*, void*);
void func_80B56C84(void*, void*);
void func_80B56CE4(void*, void*);
void func_80B56D44(void*, void*);
void func_80B56E38(void*, void*);
void func_80B56EB8(void*, void*);
void func_80B56F10(void*, void*);
void func_80B57350(void*, void*);
void func_80B5764C(void*, void*);
void func_80B57704(void*, void*);
void func_80B5772C(void*, void*);
void func_80B57754(void*, void*);
void func_80B577BC(void*, void*);
void func_80B57AE0(void*, void*);
void func_80B57CB4(void*, void*);
void func_80B57D60(void*, void*);
void func_80B57EAC(void*, void*);
void func_80B57EEC(void*, void*);
void func_80B57F1C(void*, void*);
void func_80B58014(void*, void*);
void func_80B58214(void*, void*);
void func_80B58268(void*, void*);
void func_80B582C8(void*, void*);
void func_80B584B4(void*, void*);
void func_80B58624(void*, void*);
void func_80B5884C(void*, void*);
void func_80B58898(void*, void*);
void func_80B588E8(void*, void*);
void func_80B58A1C(void*, void*);
void func_80B58A50(void*, void*);
void func_80B58AAC(void*, void*);
void func_80B58C08(void*, void*);
void func_80B58D50(void*, void*);
void func_80B58DB0(void*, void*);
void func_80B58E10(void*, void*);
void func_80B58E7C(void*, void*);
void func_80B58EF4(void*, void*);
void func_80B58F6C(void*, void*);
void func_80B58FDC(void*, void*);
void func_80B5904C(void*, void*);
void func_80B590BC(void*, void*);
void func_80B5912C(void*, void*);
void func_80B591BC(void*, void*);
void func_80B5922C(void*, void*);
void func_80B592A8(void*, void*);
void func_80B59340(void*, void*);
void func_80B593D0(void*, void*);
void func_80B59828(void*, void*);
void func_80B59A80(void*, void*);
void func_80B59AD0(void*, void*);
void func_80B59B6C(void*, void*);
void func_80B59DB8(void*, void*);
void EnZl3_Update(void*, void*);
void EnZl3_Init(void*, void*);
void func_80B59FE8(void*, void*);
void func_80B59FF4(void*, void*);
void func_80B5A1D0(void*, void*);
void EnZl3_Draw(void*, void*);

const GzActorSpan gGzEnZl3Spans[] = {
    { offsetof(EnZl3, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnZl3, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, jointTable[0].x), offsetof(EnZl3, jointTable[1].x) - offsetof(EnZl3, jointTable[0].x), 0x180, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, jointTable[0].y), offsetof(EnZl3, jointTable[1].y) - offsetof(EnZl3, jointTable[0].y), 0x182, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, jointTable[0].z), offsetof(EnZl3, jointTable[1].z) - offsetof(EnZl3, jointTable[0].z), 0x184, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, morphTable[0].x), offsetof(EnZl3, morphTable[1].x) - offsetof(EnZl3, morphTable[0].x), 0x1da, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, morphTable[0].y), offsetof(EnZl3, morphTable[1].y) - offsetof(EnZl3, morphTable[0].y), 0x1dc, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, morphTable[0].z), offsetof(EnZl3, morphTable[1].z) - offsetof(EnZl3, morphTable[0].z), 0x1de, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, eyeTexIndex), 0, 0x234, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, blinkTimer), 0, 0x236, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, mouthTexIndex), 0, 0x238, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, action), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, drawConfig), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_254[0]), offsetof(EnZl3, unk_254[1]) - offsetof(EnZl3, unk_254[0]), 0x244, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, alpha), 0, 0x248, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_25C[0]), offsetof(EnZl3, unk_25C[1]) - offsetof(EnZl3, unk_25C[0]), 0x24c, 0x2, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_28C[0]), offsetof(EnZl3, unk_28C[1]) - offsetof(EnZl3, unk_28C[0]), 0x27c, 0x2, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_2BC[0]), offsetof(EnZl3, unk_2BC[1]) - offsetof(EnZl3, unk_2BC[0]), 0x2ac, 0x2, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_2EC), 0, 0x2dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_2F0), 0, 0x2e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_2F4[0]), offsetof(EnZl3, unk_2F4[1]) - offsetof(EnZl3, unk_2F4[0]), 0x2e4, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_2F8), 0, 0x2e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_2FC), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_300[0]), offsetof(EnZl3, unk_300[1]) - offsetof(EnZl3, unk_300[0]), 0x2f0, 0x1, 8, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_308), 0, 0x2f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_30C), 0, 0x2fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, unk_310), 0, 0x300, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_314), 0, 0x304, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, zl2Anime2ObjectSlot), 0, 0x308, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_31C.x), 0, 0x30c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_31C.y), 0, 0x310, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_31C.z), 0, 0x314, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_328), 0, 0x318, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_32C.x), 0, 0x31c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_32C.y), 0, 0x320, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_32C.z), 0, 0x324, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_338.x), 0, 0x328, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_338.y), 0, 0x32c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_338.z), 0, 0x330, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_344), 0, 0x334, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_346), 0, 0x336, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_348.x), 0, 0x338, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_348.y), 0, 0x33c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_348.z), 0, 0x340, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_354.x), 0, 0x344, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_354.y), 0, 0x348, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_354.z), 0, 0x34c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_360), 0, 0x350, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_364), 0, 0x354, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_368), 0, 0x358, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_36C), 0, 0x35c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_370), 0, 0x360, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_374), 0, 0x364, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.base.actor), 0, 0x368, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, collider.base.at), 0, 0x36c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, collider.base.ac), 0, 0x370, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, collider.base.oc), 0, 0x374, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, collider.base.atFlags), 0, 0x378, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.base.acFlags), 0, 0x379, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.base.ocFlags1), 0, 0x37a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.base.ocFlags2), 0, 0x37b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.base.colType), 0, 0x37c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.base.shape), 0, 0x37d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.toucher.dmgFlags), 0, 0x380, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.toucher.effect), 0, 0x384, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.toucher.damage), 0, 0x385, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.bumper.dmgFlags), 0, 0x388, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.bumper.effect), 0, 0x38c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.bumper.defense), 0, 0x38d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.bumper.hitPos.x), 0, 0x38e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.bumper.hitPos.y), 0, 0x390, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.bumper.hitPos.z), 0, 0x392, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.elemType), 0, 0x394, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.toucherFlags), 0, 0x395, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.bumperFlags), 0, 0x396, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.ocElemFlags), 0, 0x397, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.info.atHit), 0, 0x398, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, collider.info.acHit), 0, 0x39c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, collider.info.atHitInfo), 0, 0x3a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, collider.info.acHitInfo), 0, 0x3a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, collider.dim.radius), 0, 0x3a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.dim.height), 0, 0x3aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.dim.yShift), 0, 0x3ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.dim.pos.x), 0, 0x3ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.dim.pos.y), 0, 0x3b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, collider.dim.pos.z), 0, 0x3b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3C4), 0, 0x3b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3C8), 0, 0x3b8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3CC), 0, 0x3bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3D0), 0, 0x3c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, ganon), 0, 0x3c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZl3, unk_3D8), 0, 0x3c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3DC), 0, 0x3cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3E0), 0, 0x3d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3E4), 0, 0x3d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3E8), 0, 0x3d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3EC), 0, 0x3dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3F0), 0, 0x3e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, unk_3F4), 0, 0x3e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.talkState), 0, 0x3e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.trackingMode), 0, 0x3ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.autoTurnTimer), 0, 0x3ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.autoTurnState), 0, 0x3ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.headRot.x), 0, 0x3f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.headRot.y), 0, 0x3f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.headRot.z), 0, 0x3f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.torsoRot.x), 0, 0x3f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.torsoRot.y), 0, 0x3f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.torsoRot.z), 0, 0x3fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.yOffset), 0, 0x3fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.trackPos.x), 0, 0x400, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.trackPos.y), 0, 0x404, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.trackPos.z), 0, 0x408, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZl3, interactInfo.unk_24[0]), offsetof(EnZl3, interactInfo.unk_24[1]) - offsetof(EnZl3, interactInfo.unk_24[0]), 0x40c, 0x1, 4, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnZl3SpanCount = ARRAY_COUNT(gGzEnZl3Spans);

const GzActorFunction gGzEnZl3Functions[] = {
    { 0x0, (void*)func_80B533B0 },
    { 0x4c, (void*)func_80B533FC },
    { 0x90, (void*)EnZl3_Destroy },
    { 0xbc, NULL },
    { 0xdc, NULL },
    { 0x128, NULL },
    { 0x1b0, NULL },
    { 0x1c8, NULL },
    { 0x1e0, (void*)func_80B5357C },
    { 0x27c, (void*)func_80B53614 },
    { 0x2d4, (void*)func_80B5366C },
    { 0x31c, NULL },
    { 0x330, NULL },
    { 0x3d4, (void*)func_80B53764 },
    { 0x45c, NULL },
    { 0x524, NULL },
    { 0x5c0, NULL },
    { 0x5e4, NULL },
    { 0x5f0, NULL },
    { 0x604, NULL },
    { 0x7ec, NULL },
    { 0xffc, NULL },
    { 0x122c, NULL },
    { 0x1928, NULL },
    { 0x19f4, NULL },
    { 0x1a08, NULL },
    { 0x1a1c, NULL },
    { 0x1a2c, (void*)func_80B54DE0 },
    { 0x1a64, NULL },
    { 0x1af4, (void*)func_80B54EA4 },
    { 0x1b48, NULL },
    { 0x1b70, (void*)func_80B54F18 },
    { 0x1c10, (void*)func_80B54FB4 },
    { 0x1c94, NULL },
    { 0x1d34, NULL },
    { 0x1d88, NULL },
    { 0x1e28, NULL },
    { 0x1e68, NULL },
    { 0x1eb0, NULL },
    { 0x1ef0, NULL },
    { 0x1f24, NULL },
    { 0x1f80, NULL },
    { 0x1fb4, NULL },
    { 0x2000, NULL },
    { 0x2034, (void*)func_80B553E8 },
    { 0x2054, NULL },
    { 0x2090, (void*)func_80B55444 },
    { 0x2194, (void*)func_80B55550 },
    { 0x21f0, (void*)func_80B555A4 },
    { 0x2258, (void*)func_80B55604 },
    { 0x22c8, (void*)func_80B5566C },
    { 0x2330, (void*)func_80B556CC },
    { 0x2398, (void*)func_80B5572C },
    { 0x23f4, (void*)func_80B55780 },
    { 0x2458, NULL },
    { 0x2480, NULL },
    { 0x24b0, NULL },
    { 0x24fc, NULL },
    { 0x261c, NULL },
    { 0x26ac, (void*)func_80B55A58 },
    { 0x26d8, NULL },
    { 0x2718, NULL },
    { 0x2758, NULL },
    { 0x278c, NULL },
    { 0x27cc, NULL },
    { 0x2800, NULL },
    { 0x2864, NULL },
    { 0x28a4, NULL },
    { 0x28cc, NULL },
    { 0x2924, NULL },
    { 0x2958, (void*)func_80B55D00 },
    { 0x2a0c, (void*)func_80B55DB0 },
    { 0x2a64, NULL },
    { 0x2aa4, NULL },
    { 0x2ad8, NULL },
    { 0x2b18, NULL },
    { 0x2b4c, NULL },
    { 0x2b94, NULL },
    { 0x2bc8, (void*)func_80B55F6C },
    { 0x2cac, NULL },
    { 0x2cf0, NULL },
    { 0x2d6c, (void*)func_80B56108 },
    { 0x2dc4, NULL },
    { 0x2e04, NULL },
    { 0x2e44, NULL },
    { 0x2e78, (void*)func_80B56214 },
    { 0x2f5c, (void*)func_80B562F4 },
    { 0x2fb4, NULL },
    { 0x2ff4, NULL },
    { 0x3028, NULL },
    { 0x3068, NULL },
    { 0x309c, NULL },
    { 0x30dc, NULL },
    { 0x3110, (void*)func_80B564A8 },
    { 0x32b0, (void*)func_80B56658 },
    { 0x330c, (void*)func_80B566AC },
    { 0x3374, (void*)func_80B5670C },
    { 0x33dc, (void*)func_80B5676C },
    { 0x3444, (void*)func_80B567CC },
    { 0x34ac, (void*)func_80B5682C },
    { 0x353c, (void*)func_80B568B4 },
    { 0x35ac, (void*)func_80B5691C },
    { 0x3614, (void*)func_80B5697C },
    { 0x3684, (void*)func_80B569E4 },
    { 0x3710, (void*)func_80B56A68 },
    { 0x3790, (void*)func_80B56AE0 },
    { 0x380c, (void*)func_80B56B54 },
    { 0x3868, (void*)func_80B56BA8 },
    { 0x38ec, (void*)func_80B56C24 },
    { 0x3954, (void*)func_80B56C84 },
    { 0x39bc, (void*)func_80B56CE4 },
    { 0x3a24, (void*)func_80B56D44 },
    { 0x3a8c, NULL },
    { 0x3ab0, NULL },
    { 0x3ad8, NULL },
    { 0x3b24, (void*)func_80B56E38 },
    { 0x3ba4, (void*)func_80B56EB8 },
    { 0x3bd4, NULL },
    { 0x3c04, (void*)func_80B56F10 },
    { 0x3c58, NULL },
    { 0x3c78, NULL },
    { 0x3d04, NULL },
    { 0x3dd8, NULL },
    { 0x3e80, NULL },
    { 0x3ed4, NULL },
    { 0x3f18, NULL },
    { 0x3f70, NULL },
    { 0x3fc8, NULL },
    { 0x4000, NULL },
    { 0x402c, (void*)func_80B57350 },
    { 0x40a4, NULL },
    { 0x40d8, NULL },
    { 0x4134, NULL },
    { 0x4244, NULL },
    { 0x4298, NULL },
    { 0x42b8, NULL },
    { 0x42d8, NULL },
    { 0x4334, (void*)func_80B5764C },
    { 0x43b4, NULL },
    { 0x43f8, (void*)func_80B57704 },
    { 0x4424, (void*)func_80B5772C },
    { 0x4450, (void*)func_80B57754 },
    { 0x44bc, (void*)func_80B577BC },
    { 0x455c, NULL },
    { 0x4598, NULL },
    { 0x4780, NULL },
    { 0x47b8, NULL },
    { 0x47ec, (void*)func_80B57AE0 },
    { 0x4964, NULL },
    { 0x498c, NULL },
    { 0x49a0, NULL },
    { 0x49c8, (void*)func_80B57CB4 },
    { 0x4a70, (void*)func_80B57D60 },
    { 0x4a94, NULL },
    { 0x4bcc, (void*)func_80B57EAC },
    { 0x4c14, (void*)func_80B57EEC },
    { 0x4c48, (void*)func_80B57F1C },
    { 0x4cb4, NULL },
    { 0x4d4c, (void*)func_80B58014 },
    { 0x4f58, (void*)func_80B58214 },
    { 0x4fb0, (void*)func_80B58268 },
    { 0x5010, (void*)func_80B582C8 },
    { 0x51fc, (void*)func_80B584B4 },
    { 0x536c, (void*)func_80B58624 },
    { 0x559c, (void*)func_80B5884C },
    { 0x55e8, (void*)func_80B58898 },
    { 0x5638, (void*)func_80B588E8 },
    { 0x5688, NULL },
    { 0x56f0, NULL },
    { 0x5770, (void*)func_80B58A1C },
    { 0x57ac, (void*)func_80B58A50 },
    { 0x580c, (void*)func_80B58AAC },
    { 0x5968, (void*)func_80B58C08 },
    { 0x5ab0, (void*)func_80B58D50 },
    { 0x5b18, (void*)func_80B58DB0 },
    { 0x5b80, (void*)func_80B58E10 },
    { 0x5bf4, (void*)func_80B58E7C },
    { 0x5c74, (void*)func_80B58EF4 },
    { 0x5cf4, (void*)func_80B58F6C },
    { 0x5d6c, (void*)func_80B58FDC },
    { 0x5de4, (void*)func_80B5904C },
    { 0x5e5c, (void*)func_80B590BC },
    { 0x5ed4, (void*)func_80B5912C },
    { 0x5f6c, (void*)func_80B591BC },
    { 0x5fe4, (void*)func_80B5922C },
    { 0x6068, (void*)func_80B592A8 },
    { 0x6108, (void*)func_80B59340 },
    { 0x61a0, (void*)func_80B593D0 },
    { 0x6224, NULL },
    { 0x6420, NULL },
    { 0x64f0, NULL },
    { 0x65b0, (void*)func_80B59828 },
    { 0x6810, (void*)func_80B59A80 },
    { 0x6860, (void*)func_80B59AD0 },
    { 0x68fc, (void*)func_80B59B6C },
    { 0x6b44, (void*)func_80B59DB8 },
    { 0x6bb4, (void*)EnZl3_Update },
    { 0x6bfc, (void*)EnZl3_Init },
    { 0x6cbc, NULL },
    { 0x6d24, (void*)func_80B59FE8 },
    { 0x6d34, (void*)func_80B59FF4 },
    { 0x6ee0, (void*)func_80B5A1D0 },
    { 0x7088, (void*)EnZl3_Draw },
};
const size_t gGzEnZl3FunctionCount = ARRAY_COUNT(gGzEnZl3Functions);
