// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Firefly/z_en_firefly.h"

void EnFirefly_Init(void*, void*);
void EnFirefly_Destroy(void*, void*);
void EnFirefly_SetupFrozenFall(void*, void*);
void EnFirefly_FlyIdle(void*, void*);
void EnFirefly_Fall(void*, void*);
void EnFirefly_Die(void*, void*);
void EnFirefly_DiveAttack(void*, void*);
void EnFirefly_Rebound(void*, void*);
void EnFirefly_FlyAway(void*, void*);
void EnFirefly_Stunned(void*, void*);
void EnFirefly_FrozenFall(void*, void*);
void EnFirefly_Perch(void*, void*);
void EnFirefly_DisturbDiveAttack(void*, void*);
void EnFirefly_Combust(void*, void*);
void EnFirefly_UpdateDamage(void*, void*);
void EnFirefly_Update(void*, void*);
void EnFirefly_Draw(void*, void*);
void EnFirefly_DrawInvisible(void*, void*);

const GzActorSpan gGzEnFireflySpans[] = {
    { offsetof(EnFirefly, bodyPartsPos[0].x), offsetof(EnFirefly, bodyPartsPos[1].x) - offsetof(EnFirefly, bodyPartsPos[0].x), 0x13c, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, bodyPartsPos[0].y), offsetof(EnFirefly, bodyPartsPos[1].y) - offsetof(EnFirefly, bodyPartsPos[0].y), 0x140, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, bodyPartsPos[0].z), offsetof(EnFirefly, bodyPartsPos[1].z) - offsetof(EnFirefly, bodyPartsPos[0].z), 0x144, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.limbCount), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.mode), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.dListCount), 0, 0x162, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.taper), 0, 0x163, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.skeleton), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, skelAnime.animation), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, skelAnime.startFrame), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.endFrame), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.animLength), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.curFrame), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.playSpeed), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.jointTable), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, skelAnime.morphTable), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, skelAnime.morphWeight), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.morphRate), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.update.normal), 0, 0x190, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFirefly, skelAnime.initFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.movementFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.prevRot), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.prevTransl.x), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.prevTransl.y), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.prevTransl.z), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.baseTransl.x), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.baseTransl.y), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, skelAnime.baseTransl.z), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, actionFunc), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFirefly, auraType), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, onFire), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, timer), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, targetPitch), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, jointTable[0].x), offsetof(EnFirefly, jointTable[1].x) - offsetof(EnFirefly, jointTable[0].x), 0x1ae, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, jointTable[0].y), offsetof(EnFirefly, jointTable[1].y) - offsetof(EnFirefly, jointTable[0].y), 0x1b0, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, jointTable[0].z), offsetof(EnFirefly, jointTable[1].z) - offsetof(EnFirefly, jointTable[0].z), 0x1b2, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, morphTable[0].x), offsetof(EnFirefly, morphTable[1].x) - offsetof(EnFirefly, morphTable[0].x), 0x256, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, morphTable[0].y), offsetof(EnFirefly, morphTable[1].y) - offsetof(EnFirefly, morphTable[0].y), 0x258, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, morphTable[0].z), offsetof(EnFirefly, morphTable[1].z) - offsetof(EnFirefly, morphTable[0].z), 0x25a, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, maxAltitude), 0, 0x300, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, collider.base.actor), 0, 0x304, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, collider.base.at), 0, 0x308, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, collider.base.ac), 0, 0x30c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, collider.base.oc), 0, 0x310, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, collider.base.atFlags), 0, 0x314, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, collider.base.acFlags), 0, 0x315, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, collider.base.ocFlags1), 0, 0x316, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, collider.base.ocFlags2), 0, 0x317, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, collider.base.colType), 0, 0x318, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, collider.base.shape), 0, 0x319, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, collider.count), 0, 0x31c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, collider.elements), 0, 0x320, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, colliderItems[0].info.toucher.dmgFlags), 0, 0x324, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.toucher.effect), 0, 0x328, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.toucher.damage), 0, 0x329, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.bumper.dmgFlags), 0, 0x32c, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.bumper.effect), 0, 0x330, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.bumper.defense), 0, 0x331, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.bumper.hitPos.x), 0, 0x332, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.bumper.hitPos.y), 0, 0x334, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.bumper.hitPos.z), 0, 0x336, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.elemType), 0, 0x338, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.toucherFlags), 0, 0x339, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.bumperFlags), 0, 0x33a, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.ocElemFlags), 0, 0x33b, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].info.atHit), 0, 0x33c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, colliderItems[0].info.acHit), 0, 0x340, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, colliderItems[0].info.atHitInfo), 0, 0x344, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, colliderItems[0].info.acHitInfo), 0, 0x348, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFirefly, colliderItems[0].dim.modelSphere.center.x), 0, 0x34c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].dim.modelSphere.center.y), 0, 0x34e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].dim.modelSphere.center.z), 0, 0x350, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].dim.modelSphere.radius), 0, 0x352, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].dim.worldSphere.center.x), 0, 0x354, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].dim.worldSphere.center.y), 0, 0x356, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].dim.worldSphere.center.z), 0, 0x358, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].dim.worldSphere.radius), 0, 0x35a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].dim.scale), 0, 0x35c, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFirefly, colliderItems[0].dim.limb), 0, 0x360, 0x40, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnFireflySpanCount = ARRAY_COUNT(gGzEnFireflySpans);

const GzActorFunction gGzEnFireflyFunctions[] = {
    { 0x0, NULL },
    { 0x2c, NULL },
    { 0x6c, (void*)EnFirefly_Init },
    { 0x264, (void*)EnFirefly_Destroy },
    { 0x290, NULL },
    { 0x33c, NULL },
    { 0x3e0, NULL },
    { 0x404, NULL },
    { 0x440, NULL },
    { 0x4b0, NULL },
    { 0x4e0, NULL },
    { 0x550, (void*)EnFirefly_SetupFrozenFall },
    { 0x6f0, NULL },
    { 0x714, NULL },
    { 0x750, NULL },
    { 0x86c, NULL },
    { 0x9bc, (void*)EnFirefly_FlyIdle },
    { 0xc4c, (void*)EnFirefly_Fall },
    { 0xd1c, (void*)EnFirefly_Die },
    { 0xd98, (void*)EnFirefly_DiveAttack },
    { 0xfac, (void*)EnFirefly_Rebound },
    { 0x1040, (void*)EnFirefly_FlyAway },
    { 0x11a8, (void*)EnFirefly_Stunned },
    { 0x124c, (void*)EnFirefly_FrozenFall },
    { 0x12ac, (void*)EnFirefly_Perch },
    { 0x136c, (void*)EnFirefly_DisturbDiveAttack },
    { 0x1444, (void*)EnFirefly_Combust },
    { 0x14c4, (void*)EnFirefly_UpdateDamage },
    { 0x1674, (void*)EnFirefly_Update },
    { 0x191c, NULL },
    { 0x1970, NULL },
    { 0x1d00, (void*)EnFirefly_Draw },
    { 0x1db4, (void*)EnFirefly_DrawInvisible },
};
const size_t gGzEnFireflyFunctionCount = ARRAY_COUNT(gGzEnFireflyFunctions);
