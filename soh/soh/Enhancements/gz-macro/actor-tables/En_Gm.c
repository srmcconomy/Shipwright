// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Gm/z_en_gm.h"

void EnGm_Init(void*, void*);
void EnGm_Destroy(void*, void*);
void func_80A3D838(void*, void*);
void func_80A3DB04(void*, void*);
void func_80A3DBF4(void*, void*);
void func_80A3DD7C(void*, void*);
void EnGm_ProcessChoiceIndex(void*, void*);
void func_80A3DF00(void*, void*);
void func_80A3DF60(void*, void*);
void func_80A3DFBC(void*, void*);
void EnGm_Update(void*, void*);
void EnGm_Draw(void*, void*);

const GzActorSpan gGzEnGmSpans[] = {
    { offsetof(EnGm, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnGm, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGm, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, jointTable[0].x), offsetof(EnGm, jointTable[1].x) - offsetof(EnGm, jointTable[0].x), 0x180, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, jointTable[0].y), offsetof(EnGm, jointTable[1].y) - offsetof(EnGm, jointTable[0].y), 0x182, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, jointTable[0].z), offsetof(EnGm, jointTable[1].z) - offsetof(EnGm, jointTable[0].z), 0x184, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, morphTable[0].x), offsetof(EnGm, morphTable[1].x) - offsetof(EnGm, morphTable[0].x), 0x1ec, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, morphTable[0].y), offsetof(EnGm, morphTable[1].y) - offsetof(EnGm, morphTable[0].y), 0x1ee, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, morphTable[0].z), offsetof(EnGm, morphTable[1].z) - offsetof(EnGm, morphTable[0].z), 0x1f0, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, updateFunc), 0, 0x258, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGm, actionFunc), 0, 0x25c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGm, collider.base.actor), 0, 0x260, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, collider.base.at), 0, 0x264, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, collider.base.ac), 0, 0x268, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, collider.base.oc), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, collider.base.atFlags), 0, 0x270, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.base.acFlags), 0, 0x271, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.base.ocFlags1), 0, 0x272, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.base.ocFlags2), 0, 0x273, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.base.colType), 0, 0x274, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.base.shape), 0, 0x275, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.toucher.dmgFlags), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.toucher.effect), 0, 0x27c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.toucher.damage), 0, 0x27d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.bumper.dmgFlags), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.bumper.effect), 0, 0x284, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.bumper.defense), 0, 0x285, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.bumper.hitPos.x), 0, 0x286, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.bumper.hitPos.y), 0, 0x288, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.bumper.hitPos.z), 0, 0x28a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.elemType), 0, 0x28c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.toucherFlags), 0, 0x28d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.bumperFlags), 0, 0x28e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.ocElemFlags), 0, 0x28f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.info.atHit), 0, 0x290, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, collider.info.acHit), 0, 0x294, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, collider.info.atHitInfo), 0, 0x298, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, collider.info.acHitInfo), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGm, collider.dim.radius), 0, 0x2a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.dim.height), 0, 0x2a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.dim.yShift), 0, 0x2a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.dim.pos.x), 0, 0x2a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.dim.pos.y), 0, 0x2a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, collider.dim.pos.z), 0, 0x2aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, objGmBankIndex), 0, 0x2ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, timer), 0, 0x2ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, blinkTimer), 0, 0x2b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGm, eyeTexIndex), 0, 0x2b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGm, talkPos.x), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, talkPos.y), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGm, talkPos.z), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnGmSpanCount = ARRAY_COUNT(gGzEnGmSpans);

const GzActorFunction gGzEnGmFunctions[] = {
    { 0x0, (void*)EnGm_Init },
    { 0x60, (void*)EnGm_Destroy },
    { 0x8c, NULL },
    { 0xfc, (void*)func_80A3D838 },
    { 0x29c, NULL },
    { 0x314, NULL },
    { 0x3c8, (void*)func_80A3DB04 },
    { 0x4b8, (void*)func_80A3DBF4 },
    { 0x50c, (void*)func_80A3DC44 },
    { 0x648, (void*)func_80A3DD7C },
    { 0x6e0, (void*)EnGm_ProcessChoiceIndex },
    { 0x7d0, (void*)func_80A3DF00 },
    { 0x834, (void*)func_80A3DF60 },
    { 0x894, (void*)func_80A3DFBC },
    { 0x948, (void*)EnGm_Update },
    { 0x96c, NULL },
    { 0xacc, (void*)EnGm_Draw },
};
const size_t gGzEnGmFunctionCount = ARRAY_COUNT(gGzEnGmFunctions);
