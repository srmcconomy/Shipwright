// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Door_Killer/z_door_killer.h"

void DoorKiller_Init(void*, void*);
void DoorKiller_Destroy(void*, void*);
void DoorKiller_SpawnRubble(void*, void*);
void DoorKiller_FallAsRubble(void*, void*);
void DoorKiller_SetAC(void*, void*);
void DoorKiller_Die(void*, void*);
void DoorKiller_RiseBackUp(void*, void*);
void DoorKiller_FallOver(void*, void*);
void DoorKiller_Wobble(void*, void*);
void DoorKiller_WaitBeforeWobble(void*, void*);
void DoorKiller_Wait(void*, void*);
void DoorKiller_UpdateTexture(void*, void*);
void DoorKiller_SetProperties(void*, void*);
void DoorKiller_Update(void*, void*);
void DoorKiller_SetTexture(void*, void*);
void DoorKiller_DrawDoor(void*, void*);
void DoorKiller_DrawRubble(void*, void*);

const GzActorSpan gGzDoorKillerSpans[] = {
    { offsetof(DoorKiller, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(DoorKiller, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, animStyle), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, playerIsOpening), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, jointTable[0].x), offsetof(DoorKiller, jointTable[1].x) - offsetof(DoorKiller, jointTable[0].x), 0x182, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, jointTable[0].y), offsetof(DoorKiller, jointTable[1].y) - offsetof(DoorKiller, jointTable[0].y), 0x184, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, jointTable[0].z), offsetof(DoorKiller, jointTable[1].z) - offsetof(DoorKiller, jointTable[0].z), 0x186, 0x6, 9, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.base.actor), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderCylinder.base.at), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderCylinder.base.ac), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderCylinder.base.oc), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderCylinder.base.atFlags), 0, 0x1c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.base.acFlags), 0, 0x1c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.base.ocFlags1), 0, 0x1ca, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.base.ocFlags2), 0, 0x1cb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.base.colType), 0, 0x1cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.base.shape), 0, 0x1cd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.toucher.dmgFlags), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.toucher.effect), 0, 0x1d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.toucher.damage), 0, 0x1d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.bumper.dmgFlags), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.bumper.effect), 0, 0x1dc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.bumper.defense), 0, 0x1dd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.bumper.hitPos.x), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.bumper.hitPos.y), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.bumper.hitPos.z), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.elemType), 0, 0x1e4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.toucherFlags), 0, 0x1e5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.bumperFlags), 0, 0x1e6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.ocElemFlags), 0, 0x1e7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.info.atHit), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderCylinder.info.acHit), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderCylinder.info.atHitInfo), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderCylinder.info.acHitInfo), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderCylinder.dim.radius), 0, 0x1f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.dim.height), 0, 0x1fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.dim.yShift), 0, 0x1fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.dim.pos.x), 0, 0x1fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.dim.pos.y), 0, 0x200, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderCylinder.dim.pos.z), 0, 0x202, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, texture), 0, 0x204, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, hasHitPlayerOrGround), 0, 0x208, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, timer), 0, 0x20a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, doorObjBankIndex), 0, 0x20c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, textureEntryIndex), 0, 0x20d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSph.base.actor), 0, 0x210, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderJntSph.base.at), 0, 0x214, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderJntSph.base.ac), 0, 0x218, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderJntSph.base.oc), 0, 0x21c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderJntSph.base.atFlags), 0, 0x220, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSph.base.acFlags), 0, 0x221, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSph.base.ocFlags1), 0, 0x222, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSph.base.ocFlags2), 0, 0x223, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSph.base.colType), 0, 0x224, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSph.base.shape), 0, 0x225, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSph.count), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSph.elements), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.toucher.dmgFlags), 0, 0x230, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.toucher.effect), 0, 0x234, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.toucher.damage), 0, 0x235, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.bumper.dmgFlags), 0, 0x238, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.bumper.effect), 0, 0x23c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.bumper.defense), 0, 0x23d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.bumper.hitPos.x), 0, 0x23e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.bumper.hitPos.y), 0, 0x240, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.bumper.hitPos.z), 0, 0x242, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.elemType), 0, 0x244, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.toucherFlags), 0, 0x245, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.bumperFlags), 0, 0x246, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.ocElemFlags), 0, 0x247, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.atHit), 0, 0x248, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.acHit), 0, 0x24c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.atHitInfo), 0, 0x250, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderJntSphItems[0].info.acHitInfo), 0, 0x254, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DoorKiller, colliderJntSphItems[0].dim.modelSphere.center.x), 0, 0x258, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].dim.modelSphere.center.y), 0, 0x25a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].dim.modelSphere.center.z), 0, 0x25c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].dim.modelSphere.radius), 0, 0x25e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].dim.worldSphere.center.x), 0, 0x260, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].dim.worldSphere.center.y), 0, 0x262, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].dim.worldSphere.center.z), 0, 0x264, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].dim.worldSphere.radius), 0, 0x266, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].dim.scale), 0, 0x268, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, colliderJntSphItems[0].dim.limb), 0, 0x26c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorKiller, actionFunc), 0, 0x270, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzDoorKillerSpanCount = ARRAY_COUNT(gGzDoorKillerSpans);

const GzActorFunction gGzDoorKillerFunctions[] = {
    { 0x0, (void*)DoorKiller_Init },
    { 0x358, (void*)DoorKiller_Destroy },
    { 0x3a8, (void*)DoorKiller_SpawnRubble },
    { 0x550, (void*)DoorKiller_FallAsRubble },
    { 0x610, NULL },
    { 0x644, (void*)DoorKiller_SetAC },
    { 0x6a4, (void*)DoorKiller_Die },
    { 0x6f4, (void*)DoorKiller_RiseBackUp },
    { 0x8a4, (void*)DoorKiller_FallOver },
    { 0xc70, (void*)DoorKiller_Wobble },
    { 0xde0, (void*)DoorKiller_WaitBeforeWobble },
    { 0xe14, (void*)DoorKiller_Wait },
    { 0x1074, (void*)DoorKiller_UpdateTexture },
    { 0x1108, (void*)DoorKiller_SetProperties },
    { 0x11bc, (void*)DoorKiller_Update },
    { 0x11e0, (void*)DoorKiller_SetTexture },
    { 0x120c, (void*)DoorKiller_DrawDoor },
    { 0x1268, (void*)DoorKiller_DrawRubble },
};
const size_t gGzDoorKillerFunctionCount = ARRAY_COUNT(gGzDoorKillerFunctions);
