// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Dekubaba/z_en_dekubaba.h"

void EnDekubaba_Init(void*, void*);
void EnDekubaba_Destroy(void*, void*);
void EnDekubaba_SetupDeadStickDrop(void*, void*);
void EnDekubaba_Wait(void*, void*);
void EnDekubaba_Grow(void*, void*);
void EnDekubaba_Retract(void*, void*);
void EnDekubaba_DecideLunge(void*, void*);
void EnDekubaba_Lunge(void*, void*);
void EnDekubaba_PrepareLunge(void*, void*);
void EnDekubaba_PullBack(void*, void*);
void EnDekubaba_Recover(void*, void*);
void EnDekubaba_Hit(void*, void*);
void EnDekubaba_StunnedVertical(void*, void*);
void EnDekubaba_Sway(void*, void*);
void EnDekubaba_PrunedSomersault(void*, void*);
void EnDekubaba_ShrinkDie(void*, void*);
void EnDekubaba_DeadStickDrop(void*, void*);
void EnDekubaba_UpdateDamage(void*, void*);
void EnDekubaba_Update(void*, void*);
void EnDekubaba_DrawStemRetracted(void*, void*);
void EnDekubaba_DrawStemExtended(void*, void*);
void EnDekubaba_DrawStemBasePruned(void*, void*);
void EnDekubaba_DrawBaseShadow(void*, void*);
void EnDekubaba_Draw(void*, void*);

const GzActorSpan gGzEnDekubabaSpans[] = {
    { offsetof(EnDekubaba, bodyPartsPos[0].x), offsetof(EnDekubaba, bodyPartsPos[1].x) - offsetof(EnDekubaba, bodyPartsPos[0].x), 0x13c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, bodyPartsPos[0].y), offsetof(EnDekubaba, bodyPartsPos[1].y) - offsetof(EnDekubaba, bodyPartsPos[0].y), 0x140, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, bodyPartsPos[0].z), offsetof(EnDekubaba, bodyPartsPos[1].z) - offsetof(EnDekubaba, bodyPartsPos[0].z), 0x144, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.limbCount), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.mode), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.dListCount), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.taper), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.skeleton), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, skelAnime.animation), 0, 0x174, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnDekubaba, skelAnime.startFrame), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.endFrame), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.animLength), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.curFrame), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.playSpeed), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.jointTable), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, skelAnime.morphTable), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, skelAnime.morphWeight), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.morphRate), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.update.normal), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDekubaba, skelAnime.initFlags), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.movementFlags), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.prevRot), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.prevTransl.x), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.prevTransl.y), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.prevTransl.z), 0, 0x1a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.baseTransl.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.baseTransl.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, skelAnime.baseTransl.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, actionFunc), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDekubaba, pad[0]), offsetof(EnDekubaba, pad[1]) - offsetof(EnDekubaba, pad[0]), 0x1b4, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, timer), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, targetSwayAngle), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, stemSectionAngle[0]), offsetof(EnDekubaba, stemSectionAngle[1]) - offsetof(EnDekubaba, stemSectionAngle[0]), 0x1ba, 0x2, 3, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, jointTable[0].x), offsetof(EnDekubaba, jointTable[1].x) - offsetof(EnDekubaba, jointTable[0].x), 0x1c0, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, jointTable[0].y), offsetof(EnDekubaba, jointTable[1].y) - offsetof(EnDekubaba, jointTable[0].y), 0x1c2, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, jointTable[0].z), offsetof(EnDekubaba, jointTable[1].z) - offsetof(EnDekubaba, jointTable[0].z), 0x1c4, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, morphTable[0].x), offsetof(EnDekubaba, morphTable[1].x) - offsetof(EnDekubaba, morphTable[0].x), 0x1f0, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, morphTable[0].y), offsetof(EnDekubaba, morphTable[1].y) - offsetof(EnDekubaba, morphTable[0].y), 0x1f2, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, morphTable[0].z), offsetof(EnDekubaba, morphTable[1].z) - offsetof(EnDekubaba, morphTable[0].z), 0x1f4, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, size), 0, 0x220, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, boundFloor), 0, 0x224, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, collider.base.actor), 0, 0x228, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, collider.base.at), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, collider.base.ac), 0, 0x230, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, collider.base.oc), 0, 0x234, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, collider.base.atFlags), 0, 0x238, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, collider.base.acFlags), 0, 0x239, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, collider.base.ocFlags1), 0, 0x23a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, collider.base.ocFlags2), 0, 0x23b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, collider.base.colType), 0, 0x23c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, collider.base.shape), 0, 0x23d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, collider.count), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, collider.elements), 0, 0x244, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, colliderElements[0].info.toucher.dmgFlags), offsetof(EnDekubaba, colliderElements[1].info.toucher.dmgFlags) - offsetof(EnDekubaba, colliderElements[0].info.toucher.dmgFlags), 0x248, 0x40, 7, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.toucher.effect), offsetof(EnDekubaba, colliderElements[1].info.toucher.effect) - offsetof(EnDekubaba, colliderElements[0].info.toucher.effect), 0x24c, 0x40, 7, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.toucher.damage), offsetof(EnDekubaba, colliderElements[1].info.toucher.damage) - offsetof(EnDekubaba, colliderElements[0].info.toucher.damage), 0x24d, 0x40, 7, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.bumper.dmgFlags), offsetof(EnDekubaba, colliderElements[1].info.bumper.dmgFlags) - offsetof(EnDekubaba, colliderElements[0].info.bumper.dmgFlags), 0x250, 0x40, 7, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.bumper.effect), offsetof(EnDekubaba, colliderElements[1].info.bumper.effect) - offsetof(EnDekubaba, colliderElements[0].info.bumper.effect), 0x254, 0x40, 7, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.bumper.defense), offsetof(EnDekubaba, colliderElements[1].info.bumper.defense) - offsetof(EnDekubaba, colliderElements[0].info.bumper.defense), 0x255, 0x40, 7, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.bumper.hitPos.x), offsetof(EnDekubaba, colliderElements[1].info.bumper.hitPos.x) - offsetof(EnDekubaba, colliderElements[0].info.bumper.hitPos.x), 0x256, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.bumper.hitPos.y), offsetof(EnDekubaba, colliderElements[1].info.bumper.hitPos.y) - offsetof(EnDekubaba, colliderElements[0].info.bumper.hitPos.y), 0x258, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.bumper.hitPos.z), offsetof(EnDekubaba, colliderElements[1].info.bumper.hitPos.z) - offsetof(EnDekubaba, colliderElements[0].info.bumper.hitPos.z), 0x25a, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.elemType), offsetof(EnDekubaba, colliderElements[1].info.elemType) - offsetof(EnDekubaba, colliderElements[0].info.elemType), 0x25c, 0x40, 7, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.toucherFlags), offsetof(EnDekubaba, colliderElements[1].info.toucherFlags) - offsetof(EnDekubaba, colliderElements[0].info.toucherFlags), 0x25d, 0x40, 7, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.bumperFlags), offsetof(EnDekubaba, colliderElements[1].info.bumperFlags) - offsetof(EnDekubaba, colliderElements[0].info.bumperFlags), 0x25e, 0x40, 7, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.ocElemFlags), offsetof(EnDekubaba, colliderElements[1].info.ocElemFlags) - offsetof(EnDekubaba, colliderElements[0].info.ocElemFlags), 0x25f, 0x40, 7, 1, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].info.atHit), offsetof(EnDekubaba, colliderElements[1].info.atHit) - offsetof(EnDekubaba, colliderElements[0].info.atHit), 0x260, 0x40, 7, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, colliderElements[0].info.acHit), offsetof(EnDekubaba, colliderElements[1].info.acHit) - offsetof(EnDekubaba, colliderElements[0].info.acHit), 0x264, 0x40, 7, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, colliderElements[0].info.atHitInfo), offsetof(EnDekubaba, colliderElements[1].info.atHitInfo) - offsetof(EnDekubaba, colliderElements[0].info.atHitInfo), 0x268, 0x40, 7, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, colliderElements[0].info.acHitInfo), offsetof(EnDekubaba, colliderElements[1].info.acHitInfo) - offsetof(EnDekubaba, colliderElements[0].info.acHitInfo), 0x26c, 0x40, 7, 4, GZ_SPAN_POINTER },
    { offsetof(EnDekubaba, colliderElements[0].dim.modelSphere.center.x), offsetof(EnDekubaba, colliderElements[1].dim.modelSphere.center.x) - offsetof(EnDekubaba, colliderElements[0].dim.modelSphere.center.x), 0x270, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].dim.modelSphere.center.y), offsetof(EnDekubaba, colliderElements[1].dim.modelSphere.center.y) - offsetof(EnDekubaba, colliderElements[0].dim.modelSphere.center.y), 0x272, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].dim.modelSphere.center.z), offsetof(EnDekubaba, colliderElements[1].dim.modelSphere.center.z) - offsetof(EnDekubaba, colliderElements[0].dim.modelSphere.center.z), 0x274, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].dim.modelSphere.radius), offsetof(EnDekubaba, colliderElements[1].dim.modelSphere.radius) - offsetof(EnDekubaba, colliderElements[0].dim.modelSphere.radius), 0x276, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].dim.worldSphere.center.x), offsetof(EnDekubaba, colliderElements[1].dim.worldSphere.center.x) - offsetof(EnDekubaba, colliderElements[0].dim.worldSphere.center.x), 0x278, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].dim.worldSphere.center.y), offsetof(EnDekubaba, colliderElements[1].dim.worldSphere.center.y) - offsetof(EnDekubaba, colliderElements[0].dim.worldSphere.center.y), 0x27a, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].dim.worldSphere.center.z), offsetof(EnDekubaba, colliderElements[1].dim.worldSphere.center.z) - offsetof(EnDekubaba, colliderElements[0].dim.worldSphere.center.z), 0x27c, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].dim.worldSphere.radius), offsetof(EnDekubaba, colliderElements[1].dim.worldSphere.radius) - offsetof(EnDekubaba, colliderElements[0].dim.worldSphere.radius), 0x27e, 0x40, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].dim.scale), offsetof(EnDekubaba, colliderElements[1].dim.scale) - offsetof(EnDekubaba, colliderElements[0].dim.scale), 0x280, 0x40, 7, 4, GZ_SPAN_VALUE },
    { offsetof(EnDekubaba, colliderElements[0].dim.limb), offsetof(EnDekubaba, colliderElements[1].dim.limb) - offsetof(EnDekubaba, colliderElements[0].dim.limb), 0x284, 0x40, 7, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnDekubabaSpanCount = ARRAY_COUNT(gGzEnDekubabaSpans);

const GzActorFunction gGzEnDekubabaFunctions[] = {
    { 0x0, (void*)EnDekubaba_Init },
    { 0x244, (void*)EnDekubaba_Destroy },
    { 0x270, NULL },
    { 0x2f8, NULL },
    { 0x560, NULL },
    { 0x690, NULL },
    { 0x778, NULL },
    { 0x7d0, NULL },
    { 0x7f4, NULL },
    { 0x838, NULL },
    { 0x8b0, NULL },
    { 0x8e4, NULL },
    { 0x9ac, NULL },
    { 0xa20, NULL },
    { 0xaa0, NULL },
    { 0xc24, NULL },
    { 0xc90, (void*)EnDekubaba_SetupDeadStickDrop },
    { 0xd30, (void*)EnDekubaba_Wait },
    { 0xddc, (void*)EnDekubaba_Grow },
    { 0x1244, (void*)EnDekubaba_Retract },
    { 0x160c, NULL },
    { 0x1710, (void*)EnDekubaba_DecideLunge },
    { 0x1940, (void*)EnDekubaba_Lunge },
    { 0x1bc8, (void*)EnDekubaba_PrepareLunge },
    { 0x1c94, (void*)EnDekubaba_PullBack },
    { 0x2020, (void*)EnDekubaba_Recover },
    { 0x2118, (void*)EnDekubaba_Hit },
    { 0x2228, (void*)EnDekubaba_StunnedVertical },
    { 0x22c4, (void*)EnDekubaba_Sway },
    { 0x23ec, (void*)EnDekubaba_PrunedSomersault },
    { 0x2750, (void*)EnDekubaba_ShrinkDie },
    { 0x2914, (void*)EnDekubaba_DeadStickDrop },
    { 0x297c, (void*)EnDekubaba_UpdateDamage },
    { 0x2c30, (void*)EnDekubaba_Update },
    { 0x2dd0, (void*)EnDekubaba_DrawStemRetracted },
    { 0x2ec0, (void*)EnDekubaba_DrawStemExtended },
    { 0x31b0, (void*)EnDekubaba_DrawStemBasePruned },
    { 0x326c, (void*)EnDekubaba_DrawBaseShadow },
    { 0x335c, NULL },
    { 0x3398, (void*)EnDekubaba_Draw },
};
const size_t gGzEnDekubabaFunctionCount = ARRAY_COUNT(gGzEnDekubabaFunctions);
