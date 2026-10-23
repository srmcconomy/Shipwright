// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Po_Desert/z_en_po_desert.h"

void EnPoDesert_Init(void*, void*);
void EnPoDesert_Destroy(void*, void*);
void EnPoDesert_SetNextPathPoint(void*, void*);
void EnPoDesert_WaitForPlayer(void*, void*);
void EnPoDesert_MoveToNextPoint(void*, void*);
void EnPoDesert_Disappear(void*, void*);
void EnPoDesert_Update(void*, void*);
void EnPoDesert_Draw(void*, void*);

const GzActorSpan gGzEnPoDesertSpans[] = {
    { offsetof(EnPoDesert, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnPoDesert, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnPoDesert, actionTimer), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, speedModifier), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, currentPathPoint), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, initDistToNextPoint), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, yDiff), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, targetY), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, jointTable[0].x), offsetof(EnPoDesert, jointTable[1].x) - offsetof(EnPoDesert, jointTable[0].x), 0x198, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, jointTable[0].y), offsetof(EnPoDesert, jointTable[1].y) - offsetof(EnPoDesert, jointTable[0].y), 0x19a, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, jointTable[0].z), offsetof(EnPoDesert, jointTable[1].z) - offsetof(EnPoDesert, jointTable[0].z), 0x19c, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, morphTable[0].x), offsetof(EnPoDesert, morphTable[1].x) - offsetof(EnPoDesert, morphTable[0].x), 0x1d4, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, morphTable[0].y), offsetof(EnPoDesert, morphTable[1].y) - offsetof(EnPoDesert, morphTable[0].y), 0x1d6, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, morphTable[0].z), offsetof(EnPoDesert, morphTable[1].z) - offsetof(EnPoDesert, morphTable[0].z), 0x1d8, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightColor.r), 0, 0x210, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightColor.g), 0, 0x211, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightColor.b), 0, 0x212, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightColor.a), 0, 0x213, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightNode), 0, 0x214, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, lightInfo.type), 0, 0x218, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightInfo.params.point.x), 0, 0x21a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightInfo.params.point.y), 0, 0x21c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightInfo.params.point.z), 0, 0x21e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightInfo.params.point.color[0]), offsetof(EnPoDesert, lightInfo.params.point.color[1]) - offsetof(EnPoDesert, lightInfo.params.point.color[0]), 0x220, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightInfo.params.point.drawGlow), 0, 0x223, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, lightInfo.params.point.radius), 0, 0x224, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.base.actor), 0, 0x228, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, collider.base.at), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, collider.base.ac), 0, 0x230, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, collider.base.oc), 0, 0x234, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, collider.base.atFlags), 0, 0x238, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.base.acFlags), 0, 0x239, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.base.ocFlags1), 0, 0x23a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.base.ocFlags2), 0, 0x23b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.base.colType), 0, 0x23c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.base.shape), 0, 0x23d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.toucher.dmgFlags), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.toucher.effect), 0, 0x244, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.toucher.damage), 0, 0x245, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.bumper.dmgFlags), 0, 0x248, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.bumper.effect), 0, 0x24c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.bumper.defense), 0, 0x24d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.bumper.hitPos.x), 0, 0x24e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.bumper.hitPos.y), 0, 0x250, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.bumper.hitPos.z), 0, 0x252, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.elemType), 0, 0x254, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.toucherFlags), 0, 0x255, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.bumperFlags), 0, 0x256, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.ocElemFlags), 0, 0x257, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.info.atHit), 0, 0x258, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, collider.info.acHit), 0, 0x25c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, collider.info.atHitInfo), 0, 0x260, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, collider.info.acHitInfo), 0, 0x264, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoDesert, collider.dim.radius), 0, 0x268, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.dim.height), 0, 0x26a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.dim.yShift), 0, 0x26c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.dim.pos.x), 0, 0x26e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.dim.pos.y), 0, 0x270, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoDesert, collider.dim.pos.z), 0, 0x272, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnPoDesertSpanCount = ARRAY_COUNT(gGzEnPoDesertSpans);

const GzActorFunction gGzEnPoDesertFunctions[] = {
    { 0x0, (void*)EnPoDesert_Init },
    { 0x170, (void*)EnPoDesert_Destroy },
    { 0x1b8, (void*)EnPoDesert_SetNextPathPoint },
    { 0x314, NULL },
    { 0x358, NULL },
    { 0x3b8, NULL },
    { 0x428, (void*)EnPoDesert_WaitForPlayer },
    { 0x4f4, (void*)EnPoDesert_MoveToNextPoint },
    { 0x688, (void*)EnPoDesert_Disappear },
    { 0x770, (void*)EnPoDesert_Update },
    { 0x864, NULL },
    { 0x8f0, NULL },
    { 0xb44, (void*)EnPoDesert_Draw },
};
const size_t gGzEnPoDesertFunctionCount = ARRAY_COUNT(gGzEnPoDesertFunctions);
