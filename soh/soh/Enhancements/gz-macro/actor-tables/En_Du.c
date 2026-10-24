// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Du/z_en_du.h"

s32 func_809FDDB4(void*, void*);
void func_809FDE24(void*, void*);
void func_809FDFC0(void*, void*);
void func_809FE000(void*, void*);
void EnDu_Init(void*, void*);
void EnDu_Destroy(void*, void*);
void func_809FE3B4(void*, void*);
void func_809FE3C0(void*, void*);
void func_809FE4A4(void*, void*);
void func_809FE638(void*, void*);
void func_809FE6CC(void*, void*);
void func_809FE740(void*, void*);
void func_809FE798(void*, void*);
void func_809FE890(void*, void*);
void func_809FEB08(void*, void*);
void func_809FEC14(void*, void*);
void func_809FEC70(void*, void*);
void func_809FECE4(void*, void*);
void EnDu_Update(void*, void*);
void EnDu_Draw(void*, void*);

const GzActorSpan gGzEnDuSpans[] = {
    { offsetof(EnDu, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnDu, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDu, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDu, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDu, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, unk_1E0[0]), offsetof(EnDu, unk_1E0[1]) - offsetof(EnDu, unk_1E0[0]), 0x1d0, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, unk_1E2), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, unk_1E4[0]), offsetof(EnDu, unk_1E4[1]) - offsetof(EnDu, unk_1E4[0]), 0x1d4, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, unk_1E6), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, unk_1E8), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, unk_1EA), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, unk_1EC), 0, 0x1dc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, unk_1ED), 0, 0x1dd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, unk_1EE), 0, 0x1de, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, eyeTexIndex), 0, 0x1df, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, mouthTexIndex), 0, 0x1e0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, noseTexIndex), 0, 0x1e1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDu, blinkTimer), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.talkState), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.trackingMode), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.autoTurnTimer), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.autoTurnState), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.headRot.x), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.headRot.y), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.headRot.z), 0, 0x1f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.torsoRot.x), 0, 0x1f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.torsoRot.y), 0, 0x1f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.torsoRot.z), 0, 0x1f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.yOffset), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.trackPos.x), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.trackPos.y), 0, 0x200, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.trackPos.z), 0, 0x204, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDu, interactInfo.unk_24[0]), offsetof(EnDu, interactInfo.unk_24[1]) - offsetof(EnDu, interactInfo.unk_24[0]), 0x208, 0x1, 4, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnDuSpanCount = ARRAY_COUNT(gGzEnDuSpans);

const GzActorFunction gGzEnDuFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0xb0, NULL },
    { 0x18c, (void*)func_809FDDB4 },
    { 0x1fc, (void*)func_809FDE24 },
    { 0x274, NULL },
    { 0x398, (void*)func_809FDFC0 },
    { 0x3dc, (void*)func_809FE000 },
    { 0x420, NULL },
    { 0x4e4, NULL },
    { 0x58c, (void*)EnDu_Init },
    { 0x75c, (void*)EnDu_Destroy },
    { 0x79c, (void*)func_809FE3B4 },
    { 0x7ac, (void*)func_809FE3C0 },
    { 0x894, (void*)func_809FE4A4 },
    { 0xa2c, (void*)func_809FE638 },
    { 0xac4, (void*)func_809FE6CC },
    { 0xb38, (void*)func_809FE740 },
    { 0xb90, (void*)func_809FE798 },
    { 0xc88, (void*)func_809FE890 },
    { 0xf04, (void*)func_809FEB08 },
    { 0x1010, (void*)func_809FEC14 },
    { 0x106c, (void*)func_809FEC70 },
    { 0x10e4, (void*)func_809FECE4 },
    { 0x111c, (void*)EnDu_Update },
    { 0x12a8, NULL },
    { 0x1424, NULL },
    { 0x1480, (void*)EnDu_Draw },
};
const size_t gGzEnDuFunctionCount = ARRAY_COUNT(gGzEnDuFunctions);
