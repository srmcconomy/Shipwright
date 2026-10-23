// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Mm2/z_en_mm2.h"

void func_80AAEF70(void*, void*);
void EnMm2_Init(void*, void*);
void EnMm2_Destroy(void*, void*);
void func_80AAF2BC(void*, void*);
void func_80AAF330(void*, void*);
void func_80AAF3C0(void*, void*);
void func_80AAF57C(void*, void*);
void func_80AAF5EC(void*, void*);
void func_80AAF668(void*, void*);
void EnMm2_Update(void*, void*);
void EnMm2_Draw(void*, void*);

const GzActorSpan gGzEnMm2Spans[] = {
    { offsetof(EnMm2, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnMm2, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnMm2, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMm2, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, mouthTexIndex), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, unk_1E4[0]), offsetof(EnMm2, unk_1E4[1]) - offsetof(EnMm2, unk_1E4[0]), 0x1d4, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnMm2, unk_1E8.x), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, unk_1E8.y), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, unk_1E8.z), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, unk_1EE.x), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, unk_1EE.y), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, unk_1EE.z), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, unk_1F4), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, unk_1F6), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, previousAnimation), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMm2, jointTable[0].x), offsetof(EnMm2, jointTable[1].x) - offsetof(EnMm2, jointTable[0].x), 0x1ec, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, jointTable[0].y), offsetof(EnMm2, jointTable[1].y) - offsetof(EnMm2, jointTable[0].y), 0x1ee, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, jointTable[0].z), offsetof(EnMm2, jointTable[1].z) - offsetof(EnMm2, jointTable[0].z), 0x1f0, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, morphTable[0].x), offsetof(EnMm2, morphTable[1].x) - offsetof(EnMm2, morphTable[0].x), 0x24c, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, morphTable[0].y), offsetof(EnMm2, morphTable[1].y) - offsetof(EnMm2, morphTable[0].y), 0x24e, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnMm2, morphTable[0].z), offsetof(EnMm2, morphTable[1].z) - offsetof(EnMm2, morphTable[0].z), 0x250, 0x6, 16, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnMm2SpanCount = ARRAY_COUNT(gGzEnMm2Spans);

const GzActorFunction gGzEnMm2Functions[] = {
    { 0x0, NULL },
    { 0x124, (void*)func_80AAEF70 },
    { 0x1f4, (void*)EnMm2_Init },
    { 0x3ac, (void*)EnMm2_Destroy },
    { 0x3d8, NULL },
    { 0x474, (void*)func_80AAF2BC },
    { 0x4e8, (void*)func_80AAF330 },
    { 0x578, (void*)func_80AAF3C0 },
    { 0x734, (void*)func_80AAF57C },
    { 0x7a8, (void*)func_80AAF5EC },
    { 0x824, (void*)func_80AAF668 },
    { 0x918, (void*)EnMm2_Update },
    { 0xa60, (void*)EnMm2_Draw },
    { 0xb2c, NULL },
    { 0xbb4, NULL },
};
const size_t gGzEnMm2FunctionCount = ARRAY_COUNT(gGzEnMm2Functions);
