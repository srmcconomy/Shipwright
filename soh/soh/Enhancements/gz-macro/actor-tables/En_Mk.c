// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Mk/z_en_mk.h"

void EnMk_Init(void*, void*);
void EnMk_Destroy(void*, void*);
void func_80AACA40(void*, void*);
void func_80AACA94(void*, void*);
void func_80AACB14(void*, void*);
void func_80AACB6C(void*, void*);
void func_80AACBAC(void*, void*);
void func_80AACC04(void*, void*);
void func_80AACCA0(void*, void*);
void func_80AACD48(void*, void*);
void func_80AACE2C(void*, void*);
void func_80AACEE8(void*, void*);
void func_80AACFA0(void*, void*);
void func_80AAD014(void*, void*);
void EnMk_Wait(void*, void*);
void EnMk_Update(void*, void*);
void EnMk_Draw(void*, void*);

const GzActorSpan gGzEnMkSpans[] = {
    { offsetof(EnMk, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMk, skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnMk, skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, jointTable[0].x), offsetof(EnMk, jointTable[1].x) - offsetof(EnMk, jointTable[0].x), 0x1cc, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, jointTable[0].y), offsetof(EnMk, jointTable[1].y) - offsetof(EnMk, jointTable[0].y), 0x1ce, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, jointTable[0].z), offsetof(EnMk, jointTable[1].z) - offsetof(EnMk, jointTable[0].z), 0x1d0, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, morphTable[0].x), offsetof(EnMk, morphTable[1].x) - offsetof(EnMk, morphTable[0].x), 0x21a, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, morphTable[0].y), offsetof(EnMk, morphTable[1].y) - offsetof(EnMk, morphTable[0].y), 0x21c, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, morphTable[0].z), offsetof(EnMk, morphTable[1].z) - offsetof(EnMk, morphTable[0].z), 0x21e, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, headRotation.x), 0, 0x268, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, headRotation.y), 0, 0x26a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, headRotation.z), 0, 0x26c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, flags), 0, 0x26e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, swimFlag), 0, 0x270, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, timer), 0, 0x272, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMk, actionFunc), 0, 0x274, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnMkSpanCount = ARRAY_COUNT(gGzEnMkSpans);

const GzActorFunction gGzEnMkFunctions[] = {
    { 0x0, (void*)EnMk_Init },
    { 0x118, (void*)EnMk_Destroy },
    { 0x144, (void*)func_80AACA40 },
    { 0x194, (void*)func_80AACA94 },
    { 0x21c, (void*)func_80AACB14 },
    { 0x278, (void*)func_80AACB6C },
    { 0x2b4, (void*)func_80AACBAC },
    { 0x30c, (void*)func_80AACC04 },
    { 0x3a8, (void*)func_80AACCA0 },
    { 0x450, (void*)func_80AACD48 },
    { 0x534, (void*)func_80AACE2C },
    { 0x5f0, (void*)func_80AACEE8 },
    { 0x6a8, (void*)func_80AACFA0 },
    { 0x720, (void*)func_80AAD014 },
    { 0x78c, (void*)EnMk_Wait },
    { 0x9e0, (void*)EnMk_Update },
    { 0xc2c, NULL },
    { 0xc74, NULL },
    { 0xcb4, (void*)EnMk_Draw },
};
const size_t gGzEnMkFunctionCount = ARRAY_COUNT(gGzEnMkFunctions);
