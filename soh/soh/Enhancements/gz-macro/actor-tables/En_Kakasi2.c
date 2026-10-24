// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Kakasi2/z_en_kakasi2.h"

void EnKakasi2_Init(void*, void*);
void EnKakasi2_Destroy(void*, void*);
void func_80A90264(void*, void*);
void func_80A904D8(void*, void*);
void func_80A90578(void*, void*);
void func_80A9062C(void*, void*);
void func_80A906C4(void*, void*);
void EnKakasi2_Update(void*, void*);
void func_80A90948(void*, void*);

const GzActorSpan gGzEnKakasi2Spans[] = {
    { offsetof(EnKakasi2, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKakasi2, skelAnime.limbCount), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.mode), 0, 0x141, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.dListCount), 0, 0x142, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.taper), 0, 0x143, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.skeleton), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, skelAnime.animation), 0, 0x148, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnKakasi2, skelAnime.startFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.endFrame), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.animLength), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.curFrame), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.playSpeed), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.jointTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, skelAnime.morphTable), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, skelAnime.morphWeight), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.morphRate), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.update.normal), 0, 0x170, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKakasi2, skelAnime.initFlags), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.movementFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.prevRot), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.prevTransl.x), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.prevTransl.y), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.prevTransl.z), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.baseTransl.x), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.baseTransl.y), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, skelAnime.baseTransl.z), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, unk_194), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, switchFlag), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, unk_198), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, maxSpawnDistance.x), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, maxSpawnDistance.y), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, maxSpawnDistance.z), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, height), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.base.actor), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, collider.base.at), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, collider.base.ac), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, collider.base.oc), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, collider.base.atFlags), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.base.acFlags), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.base.ocFlags1), 0, 0x1ae, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.base.ocFlags2), 0, 0x1af, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.base.colType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.base.shape), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.toucher.dmgFlags), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.toucher.effect), 0, 0x1b8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.toucher.damage), 0, 0x1b9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.bumper.dmgFlags), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.bumper.effect), 0, 0x1c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.bumper.defense), 0, 0x1c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.bumper.hitPos.x), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.bumper.hitPos.y), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.bumper.hitPos.z), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.elemType), 0, 0x1c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.toucherFlags), 0, 0x1c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.bumperFlags), 0, 0x1ca, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.ocElemFlags), 0, 0x1cb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.info.atHit), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, collider.info.acHit), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, collider.info.atHitInfo), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, collider.info.acHitInfo), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKakasi2, collider.dim.radius), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.dim.height), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.dim.yShift), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.dim.pos.x), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.dim.pos.y), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKakasi2, collider.dim.pos.z), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnKakasi2SpanCount = ARRAY_COUNT(gGzEnKakasi2Spans);

const GzActorFunction gGzEnKakasi2Functions[] = {
    { 0x0, (void*)EnKakasi2_Init },
    { 0x15c, (void*)EnKakasi2_Destroy },
    { 0x188, (void*)func_80A90264 },
    { 0x2e0, (void*)func_80A904D8 },
    { 0x380, (void*)func_80A90578 },
    { 0x434, (void*)func_80A9062C },
    { 0x4cc, (void*)func_80A906C4 },
    { 0x53c, (void*)EnKakasi2_Update },
    { 0x5fc, (void*)func_80A90948 },
};
const size_t gGzEnKakasi2FunctionCount = ARRAY_COUNT(gGzEnKakasi2Functions);
