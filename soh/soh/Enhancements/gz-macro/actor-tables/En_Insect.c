// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Insect/z_en_insect.h"

s32 EnInsect_InBottleRange(void*, void*);
s32 EnInsect_FoundNearbySoil(void*, void*);
void EnInsect_Init(void*, void*);
void EnInsect_Destroy(void*, void*);
void EnInsect_SlowDown(void*, void*);
void EnInsect_Crawl(void*, void*);
void EnInsect_RunFromPlayer(void*, void*);
void EnInsect_Caught(void*, void*);
void EnInsect_Dig(void*, void*);
void EnInsect_WalkOnWater(void*, void*);
void EnInsect_Drown(void*, void*);
void EnInsect_Dropped(void*, void*);
void EnInsect_Update(void*, void*);
void EnInsect_Draw(void*, void*);

const GzActorSpan gGzEnInsectSpans[] = {
    { offsetof(EnInsect, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, collider.count), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, collider.elements), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, colliderItem.info.toucher.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.toucher.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.toucher.damage), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.bumper.dmgFlags), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.bumper.effect), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.bumper.defense), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.bumper.hitPos.x), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.bumper.hitPos.y), 0, 0x16c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.bumper.hitPos.z), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.elemType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.toucherFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.bumperFlags), 0, 0x172, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.ocElemFlags), 0, 0x173, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.info.atHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, colliderItem.info.acHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, colliderItem.info.atHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, colliderItem.info.acHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, colliderItem.dim.modelSphere.center.x), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.dim.modelSphere.center.y), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.dim.modelSphere.center.z), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.dim.modelSphere.radius), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.dim.worldSphere.center.x), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.dim.worldSphere.center.y), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.dim.worldSphere.center.z), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.dim.worldSphere.radius), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.dim.scale), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, colliderItem.dim.limb), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.limbCount), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.mode), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.dListCount), 0, 0x19e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.taper), 0, 0x19f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.skeleton), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, skelAnime.animation), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnInsect, skelAnime.startFrame), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.endFrame), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.animLength), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.curFrame), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.playSpeed), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.jointTable), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, skelAnime.morphTable), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, skelAnime.morphWeight), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.morphRate), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.update.normal), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnInsect, skelAnime.initFlags), 0, 0x1d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.movementFlags), 0, 0x1d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.prevRot), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.prevTransl.x), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.prevTransl.y), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.prevTransl.z), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.baseTransl.x), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.baseTransl.y), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, skelAnime.baseTransl.z), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, jointTable[0].x), offsetof(EnInsect, jointTable[1].x) - offsetof(EnInsect, jointTable[0].x), 0x1e0, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, jointTable[0].y), offsetof(EnInsect, jointTable[1].y) - offsetof(EnInsect, jointTable[0].y), 0x1e2, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, jointTable[0].z), offsetof(EnInsect, jointTable[1].z) - offsetof(EnInsect, jointTable[0].z), 0x1e4, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, morphTable[0].x), offsetof(EnInsect, morphTable[1].x) - offsetof(EnInsect, morphTable[0].x), 0x270, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, morphTable[0].y), offsetof(EnInsect, morphTable[1].y) - offsetof(EnInsect, morphTable[0].y), 0x272, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, morphTable[0].z), offsetof(EnInsect, morphTable[1].z) - offsetof(EnInsect, morphTable[0].z), 0x274, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, actionFunc), 0, 0x300, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnInsect, insectFlags), 0, 0x304, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, unk_316), 0, 0x306, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, unk_318), 0, 0x308, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, actionTimer), 0, 0x30a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, lifeTimer), 0, 0x30c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, crawlSoundDelay), 0, 0x30e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, soilActor), 0, 0x310, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnInsect, unk_324), 0, 0x314, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnInsect, unk_328), 0, 0x318, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnInsect, unk_32A), 0, 0x31a, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnInsectSpanCount = ARRAY_COUNT(gGzEnInsectSpans);

const GzActorFunction gGzEnInsectFunctions[] = {
    { 0x0, NULL },
    { 0x24, NULL },
    { 0x54, (void*)EnInsect_InBottleRange },
    { 0x144, NULL },
    { 0x190, (void*)EnInsect_FoundNearbySoil },
    { 0x248, NULL },
    { 0x2dc, (void*)EnInsect_Init },
    { 0x528, (void*)EnInsect_Destroy },
    { 0x598, NULL },
    { 0x5e8, (void*)EnInsect_SlowDown },
    { 0x78c, NULL },
    { 0x7dc, (void*)EnInsect_Crawl },
    { 0xa08, NULL },
    { 0xa58, (void*)EnInsect_RunFromPlayer },
    { 0xc50, NULL },
    { 0xcbc, (void*)EnInsect_Caught },
    { 0xdb4, NULL },
    { 0xe2c, (void*)EnInsect_Dig },
    { 0x1050, NULL },
    { 0x10b0, (void*)EnInsect_WalkOnWater },
    { 0x13e4, NULL },
    { 0x145c, (void*)EnInsect_Drown },
    { 0x158c, NULL },
    { 0x1654, (void*)EnInsect_Dropped },
    { 0x1d84, (void*)EnInsect_Update },
    { 0x1fcc, (void*)EnInsect_Draw },
};
const size_t gGzEnInsectFunctionCount = ARRAY_COUNT(gGzEnInsectFunctions);
