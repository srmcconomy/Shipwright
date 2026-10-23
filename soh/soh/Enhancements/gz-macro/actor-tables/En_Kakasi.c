// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Kakasi/z_en_kakasi.h"

void EnKakasi_Destroy(void*, void*);
void EnKakasi_Init(void*, void*);
void func_80A8F660(void*, void*);
void func_80A8F75C(void*, void*);
void func_80A8F8D0(void*, void*);
void func_80A8F9C8(void*, void*);
void func_80A8FAA4(void*, void*);
void func_80A8FBB8(void*, void*);
void EnKakasi_Update(void*, void*);
void EnKakasi_Draw(void*, void*);

const GzActorSpan gGzEnKakasiSpans[] = {
    { offsetof(EnKakasi, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKakasi, skelanime.limbCount), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.mode), 0, 0x141, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.dListCount), 0, 0x142, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.taper), 0, 0x143, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.skeleton), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, skelanime.animation), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, skelanime.startFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.endFrame), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.animLength), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.curFrame), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.playSpeed), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.jointTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, skelanime.morphTable), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, skelanime.morphWeight), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.morphRate), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.update.normal), 0, 0x170, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKakasi, skelanime.initFlags), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.movementFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.prevRot), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.prevTransl.x), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.prevTransl.y), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.prevTransl.z), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.baseTransl.x), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.baseTransl.y), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, skelanime.baseTransl.z), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_194), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_196), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_198), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_19A), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_19C[0]), offsetof(EnKakasi, unk_19C[1]) - offsetof(EnKakasi, unk_19C[0]), 0x18c, 0x2, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_1A4), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_1A6), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_1A8), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_1AA[0]), offsetof(EnKakasi, unk_1AA[1]) - offsetof(EnKakasi, unk_1AA[0]), 0x19a, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_1AC), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, rot.x), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, rot.y), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, rot.z), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, height), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, unk_1B8), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.base.actor), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, collider.base.at), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, collider.base.ac), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, collider.base.oc), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, collider.base.atFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.base.acFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.base.ocFlags1), 0, 0x1be, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.base.ocFlags2), 0, 0x1bf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.base.colType), 0, 0x1c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.base.shape), 0, 0x1c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.toucher.dmgFlags), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.toucher.effect), 0, 0x1c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.toucher.damage), 0, 0x1c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.bumper.dmgFlags), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.bumper.effect), 0, 0x1d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.bumper.defense), 0, 0x1d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.bumper.hitPos.x), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.bumper.hitPos.y), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.bumper.hitPos.z), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.elemType), 0, 0x1d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.toucherFlags), 0, 0x1d9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.bumperFlags), 0, 0x1da, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.ocElemFlags), 0, 0x1db, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.info.atHit), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, collider.info.acHit), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, collider.info.atHitInfo), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, collider.info.acHitInfo), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi, collider.dim.radius), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.dim.height), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.dim.yShift), 0, 0x1f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.dim.pos.x), 0, 0x1f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.dim.pos.y), 0, 0x1f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, collider.dim.pos.z), 0, 0x1f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi, camId), 0, 0x1f8, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnKakasiSpanCount = ARRAY_COUNT(gGzEnKakasiSpans);

const GzActorFunction gGzEnKakasiFunctions[] = {
    { 0x0, (void*)EnKakasi_Destroy },
    { 0x2c, (void*)EnKakasi_Init },
    { 0xf4, NULL },
    { 0x188, NULL },
    { 0x4c8, (void*)func_80A8F660 },
    { 0x5c4, (void*)func_80A8F75C },
    { 0x740, (void*)func_80A8F8D0 },
    { 0x82c, (void*)func_80A8F9C8 },
    { 0x90c, (void*)func_80A8FAA4 },
    { 0xa10, (void*)func_80A8FBB8 },
    { 0xaa8, (void*)EnKakasi_Update },
    { 0xbac, (void*)EnKakasi_Draw },
};
const size_t gGzEnKakasiFunctionCount = ARRAY_COUNT(gGzEnKakasiFunctions);
