// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Butte/z_en_butte.h"

void EnButte_SelectFlightParams(void*, void*);
void EnButte_DrawTransformationEffect(void*, void*);
void EnButte_Init(void*, void*);
void EnButte_Destroy(void*, void*);
void EnButte_FlyAround(void*, void*);
void EnButte_FollowLink(void*, void*);
void EnButte_TransformIntoFairy(void*, void*);
void EnButte_WaitToDie(void*, void*);
void EnButte_Update(void*, void*);
void EnButte_Draw(void*, void*);

const GzActorSpan gGzEnButteSpans[] = {
    { offsetof(EnButte, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, collider.count), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, collider.elements), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, colliderItems[0].info.toucher.dmgFlags), 0, 0x15c, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.toucher.effect), 0, 0x160, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.toucher.damage), 0, 0x161, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.bumper.dmgFlags), 0, 0x164, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.bumper.effect), 0, 0x168, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.bumper.defense), 0, 0x169, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.bumper.hitPos.x), 0, 0x16a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.bumper.hitPos.y), 0, 0x16c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.bumper.hitPos.z), 0, 0x16e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.elemType), 0, 0x170, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.toucherFlags), 0, 0x171, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.bumperFlags), 0, 0x172, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.ocElemFlags), 0, 0x173, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].info.atHit), 0, 0x174, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, colliderItems[0].info.acHit), 0, 0x178, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, colliderItems[0].info.atHitInfo), 0, 0x17c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, colliderItems[0].info.acHitInfo), 0, 0x180, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, colliderItems[0].dim.modelSphere.center.x), 0, 0x184, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].dim.modelSphere.center.y), 0, 0x186, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].dim.modelSphere.center.z), 0, 0x188, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].dim.modelSphere.radius), 0, 0x18a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].dim.worldSphere.center.x), 0, 0x18c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].dim.worldSphere.center.y), 0, 0x18e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].dim.worldSphere.center.z), 0, 0x190, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].dim.worldSphere.radius), 0, 0x192, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].dim.scale), 0, 0x194, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, colliderItems[0].dim.limb), 0, 0x198, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.limbCount), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.mode), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.dListCount), 0, 0x19e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.taper), 0, 0x19f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.skeleton), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, skelAnime.animation), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, skelAnime.startFrame), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.endFrame), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.animLength), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.curFrame), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.playSpeed), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.jointTable), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, skelAnime.morphTable), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnButte, skelAnime.morphWeight), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.morphRate), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.update.normal), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnButte, skelAnime.initFlags), 0, 0x1d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.movementFlags), 0, 0x1d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.prevRot), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.prevTransl.x), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.prevTransl.y), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.prevTransl.z), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.baseTransl.x), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.baseTransl.y), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, skelAnime.baseTransl.z), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, jointTable[0].x), offsetof(EnButte, jointTable[1].x) - offsetof(EnButte, jointTable[0].x), 0x1e0, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, jointTable[0].y), offsetof(EnButte, jointTable[1].y) - offsetof(EnButte, jointTable[0].y), 0x1e2, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, jointTable[0].z), offsetof(EnButte, jointTable[1].z) - offsetof(EnButte, jointTable[0].z), 0x1e4, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, morphTable[0].x), offsetof(EnButte, morphTable[1].x) - offsetof(EnButte, morphTable[0].x), 0x210, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, morphTable[0].y), offsetof(EnButte, morphTable[1].y) - offsetof(EnButte, morphTable[0].y), 0x212, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, morphTable[0].z), offsetof(EnButte, morphTable[1].z) - offsetof(EnButte, morphTable[0].z), 0x214, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, actionFunc), 0, 0x240, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnButte, timer), 0, 0x244, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, flightParamsIdx), 0, 0x246, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, unk_257), 0, 0x247, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, drawSkelAnime), 0, 0x248, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnButte, swordDownTimer), 0, 0x24a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, unk_25C), 0, 0x24c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, unk_25E), 0, 0x24e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, unk_260), 0, 0x250, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnButte, posYTarget), 0, 0x254, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnButteSpanCount = ARRAY_COUNT(gGzEnButteSpans);

const GzActorFunction gGzEnButteFunctions[] = {
    { 0x0, (void*)EnButte_SelectFlightParams },
    { 0x84, NULL },
    { 0xa0, NULL },
    { 0xd8, (void*)EnButte_DrawTransformationEffect },
    { 0x314, (void*)EnButte_Init },
    { 0x488, (void*)EnButte_Destroy },
    { 0x4b4, NULL },
    { 0x57c, NULL },
    { 0x644, NULL },
    { 0x6e0, NULL },
    { 0x72c, (void*)EnButte_FlyAround },
    { 0xb10, NULL },
    { 0xb5c, (void*)EnButte_FollowLink },
    { 0xf10, NULL },
    { 0xf60, (void*)EnButte_TransformIntoFairy },
    { 0x101c, NULL },
    { 0x103c, (void*)EnButte_WaitToDie },
    { 0x106c, (void*)EnButte_Update },
    { 0x11ac, (void*)EnButte_Draw },
};
const size_t gGzEnButteFunctionCount = ARRAY_COUNT(gGzEnButteFunctions);
