// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Hs2/z_en_hs2.h"

void EnHs2_Init(void*, void*);
void EnHs2_Destroy(void*, void*);
void func_80A6F164(void*, void*);
void func_80A6F1A4(void*, void*);
void EnHs2_Update(void*, void*);
void EnHs2_Draw(void*, void*);

const GzActorSpan gGzEnHs2Spans[] = {
    { offsetof(EnHs2, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs2, skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHs2, skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, jointTable[0].x), offsetof(EnHs2, jointTable[1].x) - offsetof(EnHs2, jointTable[0].x), 0x1cc, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, jointTable[0].y), offsetof(EnHs2, jointTable[1].y) - offsetof(EnHs2, jointTable[0].y), 0x1ce, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, jointTable[0].z), offsetof(EnHs2, jointTable[1].z) - offsetof(EnHs2, jointTable[0].z), 0x1d0, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, morphTable[0].x), offsetof(EnHs2, morphTable[1].x) - offsetof(EnHs2, morphTable[0].x), 0x22c, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, morphTable[0].y), offsetof(EnHs2, morphTable[1].y) - offsetof(EnHs2, morphTable[0].y), 0x22e, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, morphTable[0].z), offsetof(EnHs2, morphTable[1].z) - offsetof(EnHs2, morphTable[0].z), 0x230, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, unk_29C.x), 0, 0x28c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, unk_29C.y), 0, 0x28e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, unk_29C.z), 0, 0x290, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, unk_2A2.x), 0, 0x292, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, unk_2A2.y), 0, 0x294, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, unk_2A2.z), 0, 0x296, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, unk_2A8), 0, 0x298, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs2, actionFunc), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnHs2SpanCount = ARRAY_COUNT(gGzEnHs2Spans);

const GzActorFunction gGzEnHs2Functions[] = {
    { 0x0, (void*)EnHs2_Init },
    { 0xe0, (void*)EnHs2_Destroy },
    { 0x10c, NULL },
    { 0x1c0, (void*)func_80A6F164 },
    { 0x1fc, (void*)func_80A6F1A4 },
    { 0x248, (void*)EnHs2_Update },
    { 0x3b4, NULL },
    { 0x43c, NULL },
    { 0x47c, (void*)EnHs2_Draw },
};
const size_t gGzEnHs2FunctionCount = ARRAY_COUNT(gGzEnHs2Functions);
