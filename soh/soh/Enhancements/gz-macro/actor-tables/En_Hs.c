// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Hs/z_en_hs.h"

void EnHs_Init(void*, void*);
void EnHs_Destroy(void*, void*);
void func_80A6E5EC(void*, void*);
void func_80A6E630(void*, void*);
void func_80A6E6B0(void*, void*);
void func_80A6E6D8(void*, void*);
void func_80A6E70C(void*, void*);
void func_80A6E740(void*, void*);
void func_80A6E7BC(void*, void*);
void func_80A6E8CC(void*, void*);
void func_80A6E9AC(void*, void*);
void EnHs_Update(void*, void*);
void EnHs_Draw(void*, void*);

const GzActorSpan gGzEnHsSpans[] = {
    { offsetof(EnHs, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHs, skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHs, skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, jointTable[0].x), offsetof(EnHs, jointTable[1].x) - offsetof(EnHs, jointTable[0].x), 0x1cc, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, jointTable[0].y), offsetof(EnHs, jointTable[1].y) - offsetof(EnHs, jointTable[0].y), 0x1ce, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, jointTable[0].z), offsetof(EnHs, jointTable[1].z) - offsetof(EnHs, jointTable[0].z), 0x1d0, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, morphTable[0].x), offsetof(EnHs, morphTable[1].x) - offsetof(EnHs, morphTable[0].x), 0x22c, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, morphTable[0].y), offsetof(EnHs, morphTable[1].y) - offsetof(EnHs, morphTable[0].y), 0x22e, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, morphTable[0].z), offsetof(EnHs, morphTable[1].z) - offsetof(EnHs, morphTable[0].z), 0x230, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, unk_29C.x), 0, 0x28c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, unk_29C.y), 0, 0x28e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, unk_29C.z), 0, 0x290, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, unk_2A2.x), 0, 0x292, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, unk_2A2.y), 0, 0x294, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, unk_2A2.z), 0, 0x296, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, unk_2A8), 0, 0x298, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, unk_2AA), 0, 0x29a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHs, actionFunc), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnHsSpanCount = ARRAY_COUNT(gGzEnHsSpans);

const GzActorFunction gGzEnHsFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnHs_Init },
    { 0x150, (void*)EnHs_Destroy },
    { 0x17c, NULL },
    { 0x230, (void*)func_80A6E5EC },
    { 0x274, (void*)func_80A6E630 },
    { 0x2f4, (void*)func_80A6E6B0 },
    { 0x31c, (void*)func_80A6E6D8 },
    { 0x354, (void*)func_80A6E70C },
    { 0x38c, (void*)func_80A6E740 },
    { 0x40c, (void*)func_80A6E7BC },
    { 0x51c, (void*)func_80A6E8CC },
    { 0x5f8, (void*)func_80A6E9AC },
    { 0x740, (void*)EnHs_Update },
    { 0x8ac, NULL },
    { 0x968, NULL },
    { 0x9a8, (void*)EnHs_Draw },
};
const size_t gGzEnHsFunctionCount = ARRAY_COUNT(gGzEnHsFunctions);
