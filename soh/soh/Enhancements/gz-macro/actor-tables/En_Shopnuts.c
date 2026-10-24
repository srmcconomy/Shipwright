// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Shopnuts/z_en_shopnuts.h"

void EnShopnuts_Init(void*, void*);
void EnShopnuts_Destroy(void*, void*);
void EnShopnuts_Wait(void*, void*);
void EnShopnuts_LookAround(void*, void*);
void EnShopnuts_Stand(void*, void*);
void EnShopnuts_ThrowNut(void*, void*);
void EnShopnuts_Burrow(void*, void*);
void EnShopnuts_SpawnSalesman(void*, void*);
void EnShopnuts_ColliderCheck(void*, void*);
void EnShopnuts_Update(void*, void*);
void EnShopnuts_Draw(void*, void*);

const GzActorSpan gGzEnShopnutsSpans[] = {
    { offsetof(EnShopnuts, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnShopnuts, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnShopnuts, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnShopnuts, animFlagAndTimer), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, jointTable[0].x), offsetof(EnShopnuts, jointTable[1].x) - offsetof(EnShopnuts, jointTable[0].x), 0x186, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, jointTable[0].y), offsetof(EnShopnuts, jointTable[1].y) - offsetof(EnShopnuts, jointTable[0].y), 0x188, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, jointTable[0].z), offsetof(EnShopnuts, jointTable[1].z) - offsetof(EnShopnuts, jointTable[0].z), 0x18a, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, morphTable[0].x), offsetof(EnShopnuts, morphTable[1].x) - offsetof(EnShopnuts, morphTable[0].x), 0x1f2, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, morphTable[0].y), offsetof(EnShopnuts, morphTable[1].y) - offsetof(EnShopnuts, morphTable[0].y), 0x1f4, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, morphTable[0].z), offsetof(EnShopnuts, morphTable[1].z) - offsetof(EnShopnuts, morphTable[0].z), 0x1f6, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.base.actor), 0, 0x260, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, collider.base.at), 0, 0x264, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, collider.base.ac), 0, 0x268, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, collider.base.oc), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, collider.base.atFlags), 0, 0x270, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.base.acFlags), 0, 0x271, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.base.ocFlags1), 0, 0x272, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.base.ocFlags2), 0, 0x273, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.base.colType), 0, 0x274, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.base.shape), 0, 0x275, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.toucher.dmgFlags), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.toucher.effect), 0, 0x27c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.toucher.damage), 0, 0x27d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.bumper.dmgFlags), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.bumper.effect), 0, 0x284, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.bumper.defense), 0, 0x285, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.bumper.hitPos.x), 0, 0x286, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.bumper.hitPos.y), 0, 0x288, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.bumper.hitPos.z), 0, 0x28a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.elemType), 0, 0x28c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.toucherFlags), 0, 0x28d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.bumperFlags), 0, 0x28e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.ocElemFlags), 0, 0x28f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.info.atHit), 0, 0x290, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, collider.info.acHit), 0, 0x294, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, collider.info.atHitInfo), 0, 0x298, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, collider.info.acHitInfo), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnShopnuts, collider.dim.radius), 0, 0x2a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.dim.height), 0, 0x2a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.dim.yShift), 0, 0x2a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.dim.pos.x), 0, 0x2a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.dim.pos.y), 0, 0x2a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnShopnuts, collider.dim.pos.z), 0, 0x2aa, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnShopnutsSpanCount = ARRAY_COUNT(gGzEnShopnutsSpans);

const GzActorFunction gGzEnShopnutsFunctions[] = {
    { 0x0, (void*)EnShopnuts_Init },
    { 0x13c, (void*)EnShopnuts_Destroy },
    { 0x168, NULL },
    { 0x1d0, NULL },
    { 0x218, NULL },
    { 0x258, NULL },
    { 0x2c0, NULL },
    { 0x310, NULL },
    { 0x368, (void*)EnShopnuts_Wait },
    { 0x5cc, (void*)EnShopnuts_LookAround },
    { 0x650, (void*)EnShopnuts_Stand },
    { 0x714, (void*)EnShopnuts_ThrowNut },
    { 0x850, (void*)EnShopnuts_Burrow },
    { 0x914, (void*)EnShopnuts_SpawnSalesman },
    { 0x9b0, (void*)EnShopnuts_ColliderCheck },
    { 0xa10, (void*)EnShopnuts_Update },
    { 0xb50, NULL },
    { 0xb88, NULL },
    { 0xd24, (void*)EnShopnuts_Draw },
};
const size_t gGzEnShopnutsFunctionCount = ARRAY_COUNT(gGzEnShopnutsFunctions);
