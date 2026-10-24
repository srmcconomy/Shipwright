// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Zf/z_en_zf.h"

void EnZf_Init(void*, void*);
void EnZf_Destroy(void*, void*);
s32 EnZf_CanAttack(void*, void*);
void func_80B44DC4(void*, void*);
s32 EnZf_ChooseAction(void*, void*);
void EnZf_DropIn(void*, void*);
void func_80B4543C(void*, void*);
void EnZf_SetupApproachPlayer(void*, void*);
void EnZf_ApproachPlayer(void*, void*);
void EnZf_JumpForward(void*, void*);
void func_80B46098(void*, void*);
void func_80B462E4(void*, void*);
void func_80B463E4(void*, void*);
void EnZf_Slash(void*, void*);
void EnZf_RecoilFromBlockedSlash(void*, void*);
void EnZf_JumpBack(void*, void*);
void EnZf_Stunned(void*, void*);
void EnZf_SetupSheatheSword(void*, void*);
void EnZf_SheatheSword(void*, void*);
void EnZf_HopAndTaunt(void*, void*);
void EnZf_SetupHopAway(void*, void*);
void EnZf_HopAway(void*, void*);
void EnZf_SetupDrawSword(void*, void*);
void EnZf_DrawSword(void*, void*);
void EnZf_Damaged(void*, void*);
void EnZf_JumpUp(void*, void*);
void func_80B483E4(void*, void*);
void EnZf_CircleAroundPlayer(void*, void*);
void EnZf_Die(void*, void*);
void EnZf_UpdateHeadRotation(void*, void*);
void EnZf_UpdateDamage(void*, void*);
void EnZf_Update(void*, void*);
void EnZf_Draw(void*, void*);
s32 EnZf_DodgeRangedEngaging(void*, void*);
s32 EnZf_DodgeRangedWaiting(void*, void*);

const GzActorSpan gGzEnZfSpans[] = {
    { offsetof(EnZf, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnZf, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnZf, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, jointTable[0].x), offsetof(EnZf, jointTable[1].x) - offsetof(EnZf, jointTable[0].x), 0x180, 0x6, 49, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, jointTable[0].y), offsetof(EnZf, jointTable[1].y) - offsetof(EnZf, jointTable[0].y), 0x182, 0x6, 49, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, jointTable[0].z), offsetof(EnZf, jointTable[1].z) - offsetof(EnZf, jointTable[0].z), 0x184, 0x6, 49, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, morphTable[0].x), offsetof(EnZf, morphTable[1].x) - offsetof(EnZf, morphTable[0].x), 0x2a6, 0x6, 49, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, morphTable[0].y), offsetof(EnZf, morphTable[1].y) - offsetof(EnZf, morphTable[0].y), 0x2a8, 0x6, 49, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, morphTable[0].z), offsetof(EnZf, morphTable[1].z) - offsetof(EnZf, morphTable[0].z), 0x2aa, 0x6, 49, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, action), 0, 0x3cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, unk_3E0), 0, 0x3d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, hopAnimIndex), 0, 0x3d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, actionFunc), 0, 0x3d8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnZf, headRot), 0, 0x3dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, headRotTemp), 0, 0x3de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, unk_3F0), 0, 0x3e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, unk_3F4), 0, 0x3e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, iceTimer), 0, 0x3e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, unk_3F8), 0, 0x3e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordSheathed), 0, 0x3ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, clearFlag), 0, 0x3ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, curPlatform), 0, 0x3ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, homePlatform), 0, 0x3f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, nextPlatform), 0, 0x3f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, alpha), 0, 0x3f4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, unk_408), 0, 0x3f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, unk_40C), 0, 0x3fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, damageEffect), 0, 0x400, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, blureIndex), 0, 0x404, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.base.actor), 0, 0x408, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, bodyCollider.base.at), 0, 0x40c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, bodyCollider.base.ac), 0, 0x410, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, bodyCollider.base.oc), 0, 0x414, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, bodyCollider.base.atFlags), 0, 0x418, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.base.acFlags), 0, 0x419, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.base.ocFlags1), 0, 0x41a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.base.ocFlags2), 0, 0x41b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.base.colType), 0, 0x41c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.base.shape), 0, 0x41d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.toucher.dmgFlags), 0, 0x420, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.toucher.effect), 0, 0x424, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.toucher.damage), 0, 0x425, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.bumper.dmgFlags), 0, 0x428, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.bumper.effect), 0, 0x42c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.bumper.defense), 0, 0x42d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.bumper.hitPos.x), 0, 0x42e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.bumper.hitPos.y), 0, 0x430, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.bumper.hitPos.z), 0, 0x432, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.elemType), 0, 0x434, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.toucherFlags), 0, 0x435, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.bumperFlags), 0, 0x436, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.ocElemFlags), 0, 0x437, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.info.atHit), 0, 0x438, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, bodyCollider.info.acHit), 0, 0x43c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, bodyCollider.info.atHitInfo), 0, 0x440, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, bodyCollider.info.acHitInfo), 0, 0x444, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, bodyCollider.dim.radius), 0, 0x448, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.dim.height), 0, 0x44a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.dim.yShift), 0, 0x44c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.dim.pos.x), 0, 0x44e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.dim.pos.y), 0, 0x450, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyCollider.dim.pos.z), 0, 0x452, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.base.actor), 0, 0x454, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, swordCollider.base.at), 0, 0x458, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, swordCollider.base.ac), 0, 0x45c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, swordCollider.base.oc), 0, 0x460, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, swordCollider.base.atFlags), 0, 0x464, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.base.acFlags), 0, 0x465, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.base.ocFlags1), 0, 0x466, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.base.ocFlags2), 0, 0x467, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.base.colType), 0, 0x468, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.base.shape), 0, 0x469, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.toucher.dmgFlags), 0, 0x46c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.toucher.effect), 0, 0x470, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.toucher.damage), 0, 0x471, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.bumper.dmgFlags), 0, 0x474, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.bumper.effect), 0, 0x478, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.bumper.defense), 0, 0x479, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.bumper.hitPos.x), 0, 0x47a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.bumper.hitPos.y), 0, 0x47c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.bumper.hitPos.z), 0, 0x47e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.elemType), 0, 0x480, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.toucherFlags), 0, 0x481, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.bumperFlags), 0, 0x482, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.ocElemFlags), 0, 0x483, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.info.atHit), 0, 0x484, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, swordCollider.info.acHit), 0, 0x488, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, swordCollider.info.atHitInfo), 0, 0x48c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, swordCollider.info.acHitInfo), 0, 0x490, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnZf, swordCollider.dim.quad[0].x), offsetof(EnZf, swordCollider.dim.quad[1].x) - offsetof(EnZf, swordCollider.dim.quad[0].x), 0x494, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.dim.quad[0].y), offsetof(EnZf, swordCollider.dim.quad[1].y) - offsetof(EnZf, swordCollider.dim.quad[0].y), 0x498, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.dim.quad[0].z), offsetof(EnZf, swordCollider.dim.quad[1].z) - offsetof(EnZf, swordCollider.dim.quad[0].z), 0x49c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.dim.dcMid.x), 0, 0x4c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.dim.dcMid.y), 0, 0x4c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.dim.dcMid.z), 0, 0x4c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.dim.baMid.x), 0, 0x4ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.dim.baMid.y), 0, 0x4cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.dim.baMid.z), 0, 0x4ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnZf, swordCollider.dim.acDist), 0, 0x4d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, rightFootPos.x), 0, 0x4d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, rightFootPos.y), 0, 0x4d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, rightFootPos.z), 0, 0x4dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, leftFootPos.x), 0, 0x4e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, leftFootPos.y), 0, 0x4e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, leftFootPos.z), 0, 0x4e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyPartsPos[0].x), offsetof(EnZf, bodyPartsPos[1].x) - offsetof(EnZf, bodyPartsPos[0].x), 0x4ec, 0xc, 9, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyPartsPos[0].y), offsetof(EnZf, bodyPartsPos[1].y) - offsetof(EnZf, bodyPartsPos[0].y), 0x4f0, 0xc, 9, 4, GZ_SPAN_VALUE },
    { offsetof(EnZf, bodyPartsPos[0].z), offsetof(EnZf, bodyPartsPos[1].z) - offsetof(EnZf, bodyPartsPos[0].z), 0x4f4, 0xc, 9, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnZfSpanCount = ARRAY_COUNT(gGzEnZfSpans);

const GzActorFunction gGzEnZfFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x17c, NULL },
    { 0x2ac, (void*)EnZf_Init },
    { 0x5e4, (void*)EnZf_Destroy },
    { 0x668, NULL },
    { 0x830, NULL },
    { 0xad4, NULL },
    { 0xcb0, (void*)EnZf_CanAttack },
    { 0xd84, (void*)func_80B44DC4 },
    { 0xe50, (void*)EnZf_ChooseAction },
    { 0x1070, NULL },
    { 0x1138, (void*)EnZf_DropIn },
    { 0x1348, NULL },
    { 0x1400, (void*)func_80B4543C },
    { 0x167c, (void*)EnZf_SetupApproachPlayer },
    { 0x1710, (void*)EnZf_ApproachPlayer },
    { 0x1dfc, NULL },
    { 0x1ebc, (void*)EnZf_JumpForward },
    { 0x2018, NULL },
    { 0x2064, (void*)func_80B46098 },
    { 0x22b0, (void*)func_80B462E4 },
    { 0x23b8, (void*)func_80B463E4 },
    { 0x29fc, NULL },
    { 0x2ab8, (void*)EnZf_Slash },
    { 0x2d44, NULL },
    { 0x2db8, (void*)EnZf_RecoilFromBlockedSlash },
    { 0x2e70, NULL },
    { 0x2f10, (void*)EnZf_JumpBack },
    { 0x3034, NULL },
    { 0x3104, (void*)EnZf_Stunned },
    { 0x3344, (void*)EnZf_SetupSheatheSword },
    { 0x3420, (void*)EnZf_SheatheSword },
    { 0x34cc, NULL },
    { 0x352c, (void*)EnZf_HopAndTaunt },
    { 0x3784, (void*)EnZf_SetupHopAway },
    { 0x3804, (void*)EnZf_HopAway },
    { 0x3c50, (void*)EnZf_SetupDrawSword },
    { 0x3ce4, (void*)EnZf_DrawSword },
    { 0x3d94, NULL },
    { 0x3ea0, (void*)EnZf_Damaged },
    { 0x4200, NULL },
    { 0x42a8, (void*)EnZf_JumpUp },
    { 0x43d4, (void*)func_80B483E4 },
    { 0x4570, (void*)EnZf_CircleAroundPlayer },
    { 0x4cf0, NULL },
    { 0x4e54, (void*)EnZf_Die },
    { 0x4f94, (void*)EnZf_UpdateHeadRotation },
    { 0x50b8, (void*)EnZf_UpdateDamage },
    { 0x5250, (void*)EnZf_Update },
    { 0x5608, NULL },
    { 0x5694, NULL },
    { 0x58e8, (void*)EnZf_Draw },
    { 0x5b3c, NULL },
    { 0x5c08, (void*)EnZf_DodgeRangedEngaging },
    { 0x5e34, (void*)EnZf_DodgeRangedWaiting },
};
const size_t gGzEnZfFunctionCount = ARRAY_COUNT(gGzEnZfFunctions);
