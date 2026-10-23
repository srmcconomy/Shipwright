// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ani/z_en_ani.h"

void EnAni_Init(void*, void*);
void EnAni_Destroy(void*, void*);
void func_809B04F0(void*, void*);
void func_809B0524(void*, void*);
void func_809B0558(void*, void*);
void func_809B05F0(void*, void*);
void func_809B064C(void*, void*);
void func_809B07F8(void*, void*);
void func_809B0988(void*, void*);
void func_809B0994(void*, void*);
void func_809B0A28(void*, void*);
void func_809B0A6C(void*, void*);
void EnAni_Update(void*, void*);
void EnAni_Draw(void*, void*);

const GzActorSpan gGzEnAniSpans[] = {
    { offsetof(EnAni, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAni, skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnAni, skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, jointTable[0].x), offsetof(EnAni, jointTable[1].x) - offsetof(EnAni, jointTable[0].x), 0x1cc, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, jointTable[0].y), offsetof(EnAni, jointTable[1].y) - offsetof(EnAni, jointTable[0].y), 0x1ce, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, jointTable[0].z), offsetof(EnAni, jointTable[1].z) - offsetof(EnAni, jointTable[0].z), 0x1d0, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, morphTable[0].x), offsetof(EnAni, morphTable[1].x) - offsetof(EnAni, morphTable[0].x), 0x22c, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, morphTable[0].y), offsetof(EnAni, morphTable[1].y) - offsetof(EnAni, morphTable[0].y), 0x22e, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, morphTable[0].z), offsetof(EnAni, morphTable[1].z) - offsetof(EnAni, morphTable[0].z), 0x230, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, unk_29C.x), 0, 0x28c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, unk_29C.y), 0, 0x28e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, unk_29C.z), 0, 0x290, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, unk_2A2.x), 0, 0x292, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, unk_2A2.y), 0, 0x294, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, unk_2A2.z), 0, 0x296, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, unk_2A8), 0, 0x298, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, unk_2AA), 0, 0x29a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, eyeIndex), 0, 0x29c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, blinkTimer), 0, 0x29e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAni, actionFunc), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnAniSpanCount = ARRAY_COUNT(gGzEnAniSpans);

const GzActorFunction gGzEnAniFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnAni_Init },
    { 0x124, (void*)EnAni_Destroy },
    { 0x150, NULL },
    { 0x18c, (void*)func_809B04F0 },
    { 0x1c4, (void*)func_809B0524 },
    { 0x1fc, (void*)func_809B0558 },
    { 0x298, (void*)func_809B05F0 },
    { 0x2fc, (void*)func_809B064C },
    { 0x4a8, (void*)func_809B07F8 },
    { 0x638, (void*)func_809B0988 },
    { 0x648, (void*)func_809B0994 },
    { 0x6dc, (void*)func_809B0A28 },
    { 0x720, (void*)func_809B0A6C },
    { 0x7cc, (void*)EnAni_Update },
    { 0xa48, NULL },
    { 0xa90, NULL },
    { 0xad0, (void*)EnAni_Draw },
};
const size_t gGzEnAniFunctionCount = ARRAY_COUNT(gGzEnAniFunctions);
