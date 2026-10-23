// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Kakasi3/z_en_kakasi3.h"

void EnKakasi3_Destroy(void*, void*);
void EnKakasi3_Init(void*, void*);
void func_80A911F0(void*, void*);
void func_80A91284(void*, void*);
void func_80A91348(void*, void*);
void func_80A915B8(void*, void*);
void func_80A91620(void*, void*);
void func_80A91760(void*, void*);
void func_80A917FC(void*, void*);
void func_80A9187C(void*, void*);
void func_80A918E4(void*, void*);
void func_80A91A90(void*, void*);
void EnKakasi3_Update(void*, void*);
void EnKakasi3_Draw(void*, void*);

const GzActorSpan gGzEnKakasi3Spans[] = {
    { offsetof(EnKakasi3, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKakasi3, skelAnime.limbCount), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.mode), 0, 0x141, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.dListCount), 0, 0x142, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.taper), 0, 0x143, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.skeleton), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, skelAnime.animation), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, skelAnime.startFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.endFrame), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.animLength), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.curFrame), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.playSpeed), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.jointTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, skelAnime.morphTable), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, skelAnime.morphWeight), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.morphRate), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.update.normal), 0, 0x170, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKakasi3, skelAnime.initFlags), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.movementFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.prevRot), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.prevTransl.x), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.prevTransl.y), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.prevTransl.z), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.baseTransl.x), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.baseTransl.y), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, skelAnime.baseTransl.z), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_194), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_195), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, dialogState), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_198), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_19A), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_19C[0]), offsetof(EnKakasi3, unk_19C[1]) - offsetof(EnKakasi3, unk_19C[0]), 0x18c, 0x2, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_1A4), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_1A6), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_1A8), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_1AA), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_1AC[0]), offsetof(EnKakasi3, unk_1AC[1]) - offsetof(EnKakasi3, unk_1AC[0]), 0x19c, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_1AE), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, rot.x), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, rot.y), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, rot.z), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, unk_1B8), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.base.actor), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, collider.base.at), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, collider.base.ac), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, collider.base.oc), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, collider.base.atFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.base.acFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.base.ocFlags1), 0, 0x1be, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.base.ocFlags2), 0, 0x1bf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.base.colType), 0, 0x1c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.base.shape), 0, 0x1c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.toucher.dmgFlags), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.toucher.effect), 0, 0x1c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.toucher.damage), 0, 0x1c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.bumper.dmgFlags), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.bumper.effect), 0, 0x1d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.bumper.defense), 0, 0x1d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.bumper.hitPos.x), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.bumper.hitPos.y), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.bumper.hitPos.z), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.elemType), 0, 0x1d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.toucherFlags), 0, 0x1d9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.bumperFlags), 0, 0x1da, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.ocElemFlags), 0, 0x1db, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.info.atHit), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, collider.info.acHit), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, collider.info.atHitInfo), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, collider.info.acHitInfo), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi3, collider.dim.radius), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.dim.height), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.dim.yShift), 0, 0x1f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.dim.pos.x), 0, 0x1f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.dim.pos.y), 0, 0x1f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, collider.dim.pos.z), 0, 0x1f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi3, camId), 0, 0x1f8, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnKakasi3SpanCount = ARRAY_COUNT(gGzEnKakasi3Spans);

const GzActorFunction gGzEnKakasi3Functions[] = {
    { 0x0, (void*)EnKakasi3_Destroy },
    { 0x2c, (void*)EnKakasi3_Init },
    { 0xf4, NULL },
    { 0x188, NULL },
    { 0x4bc, (void*)func_80A911F0 },
    { 0x550, (void*)func_80A91284 },
    { 0x614, (void*)func_80A91348 },
    { 0x88c, (void*)func_80A915B8 },
    { 0x8f8, (void*)func_80A91620 },
    { 0xa38, (void*)func_80A91760 },
    { 0xad8, (void*)func_80A917FC },
    { 0xb60, (void*)func_80A9187C },
    { 0xbcc, (void*)func_80A918E4 },
    { 0xd10, (void*)func_80A91A90 },
    { 0xe10, (void*)EnKakasi3_Update },
    { 0xf08, (void*)EnKakasi3_Draw },
};
const size_t gGzEnKakasi3FunctionCount = ARRAY_COUNT(gGzEnKakasi3Functions);
