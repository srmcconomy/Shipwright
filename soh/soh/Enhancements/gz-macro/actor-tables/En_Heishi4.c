// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Heishi4/z_en_heishi4.h"

void EnHeishi4_Init(void*, void*);
void EnHeishi4_Destroy(void*, void*);
void func_80A56328(void*, void*);
void func_80A563BC(void*, void*);
void func_80A56544(void*, void*);
void func_80A56614(void*, void*);
void func_80A5673C(void*, void*);
void func_80A56874(void*, void*);
void func_80A56900(void*, void*);
void func_80A56994(void*, void*);
void func_80A56A50(void*, void*);
void func_80A56ACC(void*, void*);
void func_80A56B40(void*, void*);
void EnHeishi4_Update(void*, void*);
void EnHeishi4_Draw(void*, void*);

const GzActorSpan gGzEnHeishi4Spans[] = {
    { offsetof(EnHeishi4, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnHeishi4, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHeishi4, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, jointTable[0].x), offsetof(EnHeishi4, jointTable[1].x) - offsetof(EnHeishi4, jointTable[0].x), 0x180, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, jointTable[0].y), offsetof(EnHeishi4, jointTable[1].y) - offsetof(EnHeishi4, jointTable[0].y), 0x182, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, jointTable[0].z), offsetof(EnHeishi4, jointTable[1].z) - offsetof(EnHeishi4, jointTable[0].z), 0x184, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, morphTable[0].x), offsetof(EnHeishi4, morphTable[1].x) - offsetof(EnHeishi4, morphTable[0].x), 0x1e6, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, morphTable[0].y), offsetof(EnHeishi4, morphTable[1].y) - offsetof(EnHeishi4, morphTable[0].y), 0x1e8, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, morphTable[0].z), offsetof(EnHeishi4, morphTable[1].z) - offsetof(EnHeishi4, morphTable[0].z), 0x1ea, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, actionFunc), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHeishi4, headRot.x), 0, 0x250, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, headRot.y), 0, 0x252, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, headRot.z), 0, 0x254, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, torsoRot.x), 0, 0x256, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, torsoRot.y), 0, 0x258, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, torsoRot.z), 0, 0x25a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, pos.x), 0, 0x25c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, pos.y), 0, 0x260, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, pos.z), 0, 0x264, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, height), 0, 0x268, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, unk_27C), 0, 0x26c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, unk_27E), 0, 0x26e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, type), 0, 0x270, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, unk_282), 0, 0x272, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, unk_284), 0, 0x274, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, unk_288), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.talkState), 0, 0x27c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.trackingMode), 0, 0x27e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.autoTurnTimer), 0, 0x280, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.autoTurnState), 0, 0x282, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.headRot.x), 0, 0x284, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.headRot.y), 0, 0x286, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.headRot.z), 0, 0x288, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.torsoRot.x), 0, 0x28a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.torsoRot.y), 0, 0x28c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.torsoRot.z), 0, 0x28e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.yOffset), 0, 0x290, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.trackPos.x), 0, 0x294, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.trackPos.y), 0, 0x298, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.trackPos.z), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, interactInfo.unk_24[0]), offsetof(EnHeishi4, interactInfo.unk_24[1]) - offsetof(EnHeishi4, interactInfo.unk_24[0]), 0x2a0, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, unk_2B4), 0, 0x2a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, unk_2B6[0]), offsetof(EnHeishi4, unk_2B6[1]) - offsetof(EnHeishi4, unk_2B6[0]), 0x2a5, 0x1, 7, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.base.actor), 0, 0x2ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, collider.base.at), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, collider.base.ac), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, collider.base.oc), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, collider.base.atFlags), 0, 0x2bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.base.acFlags), 0, 0x2bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.base.ocFlags1), 0, 0x2be, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.base.ocFlags2), 0, 0x2bf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.base.colType), 0, 0x2c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.base.shape), 0, 0x2c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.toucher.dmgFlags), 0, 0x2c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.toucher.effect), 0, 0x2c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.toucher.damage), 0, 0x2c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.bumper.dmgFlags), 0, 0x2cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.bumper.effect), 0, 0x2d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.bumper.defense), 0, 0x2d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.bumper.hitPos.x), 0, 0x2d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.bumper.hitPos.y), 0, 0x2d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.bumper.hitPos.z), 0, 0x2d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.elemType), 0, 0x2d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.toucherFlags), 0, 0x2d9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.bumperFlags), 0, 0x2da, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.ocElemFlags), 0, 0x2db, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.info.atHit), 0, 0x2dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, collider.info.acHit), 0, 0x2e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, collider.info.atHitInfo), 0, 0x2e4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, collider.info.acHitInfo), 0, 0x2e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi4, collider.dim.radius), 0, 0x2ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.dim.height), 0, 0x2ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.dim.yShift), 0, 0x2f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.dim.pos.x), 0, 0x2f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.dim.pos.y), 0, 0x2f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi4, collider.dim.pos.z), 0, 0x2f6, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnHeishi4SpanCount = ARRAY_COUNT(gGzEnHeishi4Spans);

const GzActorFunction gGzEnHeishi4Functions[] = {
    { 0x0, (void*)EnHeishi4_Init },
    { 0x1e0, (void*)EnHeishi4_Destroy },
    { 0x20c, (void*)func_80A56328 },
    { 0x2a0, (void*)func_80A563BC },
    { 0x428, (void*)func_80A56544 },
    { 0x4ec, (void*)func_80A56614 },
    { 0x614, (void*)func_80A5673C },
    { 0x728, (void*)func_80A56874 },
    { 0x7b4, (void*)func_80A56900 },
    { 0x848, (void*)func_80A56994 },
    { 0x904, (void*)func_80A56A50 },
    { 0x980, (void*)func_80A56ACC },
    { 0x9f4, (void*)func_80A56B40 },
    { 0xb68, (void*)EnHeishi4_Update },
    { 0xccc, NULL },
    { 0xd34, (void*)EnHeishi4_Draw },
};
const size_t gGzEnHeishi4FunctionCount = ARRAY_COUNT(gGzEnHeishi4Functions);
