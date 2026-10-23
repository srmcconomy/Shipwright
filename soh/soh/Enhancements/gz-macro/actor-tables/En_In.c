// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_In/z_en_in.h"

void func_80A795C8(void*, void*);
void func_80A79AB4(void*, void*);
void func_80A79C78(void*, void*);
void EnIn_Init(void*, void*);
void EnIn_Destroy(void*, void*);
void EnIn_WaitForObject(void*, void*);
void func_80A7A304(void*, void*);
void func_80A7A4BC(void*, void*);
void func_80A7A4C8(void*, void*);
void func_80A7A568(void*, void*);
void func_80A7A770(void*, void*);
void func_80A7A848(void*, void*);
void func_80A7A940(void*, void*);
void func_80A7AA40(void*, void*);
void func_80A7ABD4(void*, void*);
void func_80A7AE84(void*, void*);
void func_80A7AEF0(void*, void*);
void func_80A7B018(void*, void*);
void func_80A7B024(void*, void*);
void EnIn_Update(void*, void*);
void EnIn_Draw(void*, void*);

const GzActorSpan gGzEnInSpans[] = {
    { offsetof(EnIn, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnIn, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnIn, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIn, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_1E0), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, ingoObjBankIndex), 0, 0x1d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, animationIdx), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_1E8), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, blinkTimer), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_1EC), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, eyeIndex), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, camId), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, activeCamId), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_1F4[0]), offsetof(EnIn, unk_1F4[1]) - offsetof(EnIn, unk_1F4[0]), 0x1e4, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_1F8), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_1FA), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_1FC), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, jointTable[0].x), offsetof(EnIn, jointTable[1].x) - offsetof(EnIn, jointTable[0].x), 0x1ee, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, jointTable[0].y), offsetof(EnIn, jointTable[1].y) - offsetof(EnIn, jointTable[0].y), 0x1f0, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, jointTable[0].z), offsetof(EnIn, jointTable[1].z) - offsetof(EnIn, jointTable[0].z), 0x1f2, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, morphTable[0].x), offsetof(EnIn, morphTable[1].x) - offsetof(EnIn, morphTable[0].x), 0x266, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, morphTable[0].y), offsetof(EnIn, morphTable[1].y) - offsetof(EnIn, morphTable[0].y), 0x268, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, morphTable[0].z), offsetof(EnIn, morphTable[1].z) - offsetof(EnIn, morphTable[0].z), 0x26a, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, subCamAtOffset), 0, 0x2e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_2F4), 0, 0x2e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_2F8), 0, 0x2e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, subCamEyeOffset), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_300), 0, 0x2f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_304), 0, 0x2f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.talkState), 0, 0x2f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.trackingMode), 0, 0x2fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.autoTurnTimer), 0, 0x2fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.autoTurnState), 0, 0x2fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.headRot.x), 0, 0x300, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.headRot.y), 0, 0x302, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.headRot.z), 0, 0x304, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.torsoRot.x), 0, 0x306, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.torsoRot.y), 0, 0x308, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.torsoRot.z), 0, 0x30a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.yOffset), 0, 0x30c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.trackPos.x), 0, 0x310, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.trackPos.y), 0, 0x314, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.trackPos.z), 0, 0x318, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIn, interactInfo.unk_24[0]), offsetof(EnIn, interactInfo.unk_24[1]) - offsetof(EnIn, interactInfo.unk_24[0]), 0x31c, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_330[0].x), offsetof(EnIn, unk_330[1].x) - offsetof(EnIn, unk_330[0].x), 0x320, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_330[0].y), offsetof(EnIn, unk_330[1].y) - offsetof(EnIn, unk_330[0].y), 0x322, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnIn, unk_330[0].z), offsetof(EnIn, unk_330[1].z) - offsetof(EnIn, unk_330[0].z), 0x324, 0x6, 20, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnInSpanCount = ARRAY_COUNT(gGzEnInSpans);

const GzActorFunction gGzEnInFunctions[] = {
    { 0x0, NULL },
    { 0x60, NULL },
    { 0x1b8, NULL },
    { 0x21c, NULL },
    { 0x290, NULL },
    { 0x4e0, NULL },
    { 0x54c, NULL },
    { 0x614, (void*)func_80A795C8 },
    { 0x6dc, NULL },
    { 0x738, NULL },
    { 0x7a8, NULL },
    { 0x87c, NULL },
    { 0xa78, NULL },
    { 0xb00, (void*)func_80A79AB4 },
    { 0xbf8, NULL },
    { 0xcc4, (void*)func_80A79C78 },
    { 0xeb8, (void*)EnIn_Init },
    { 0xfc4, (void*)EnIn_Destroy },
    { 0x1008, (void*)EnIn_WaitForObject },
    { 0x1360, (void*)func_80A7A304 },
    { 0x1518, (void*)func_80A7A4BC },
    { 0x1528, (void*)func_80A7A4C8 },
    { 0x15cc, (void*)func_80A7A568 },
    { 0x17d4, (void*)func_80A7A770 },
    { 0x18ac, (void*)func_80A7A848 },
    { 0x19a4, (void*)func_80A7A940 },
    { 0x1aa4, (void*)func_80A7AA40 },
    { 0x1c38, (void*)func_80A7ABD4 },
    { 0x1eec, (void*)func_80A7AE84 },
    { 0x1f58, (void*)func_80A7AEF0 },
    { 0x2084, (void*)func_80A7B018 },
    { 0x2094, (void*)func_80A7B024 },
    { 0x2180, (void*)EnIn_Update },
    { 0x2394, NULL },
    { 0x25e8, NULL },
    { 0x26f8, (void*)EnIn_Draw },
};
const size_t gGzEnInFunctionCount = ARRAY_COUNT(gGzEnInFunctions);
