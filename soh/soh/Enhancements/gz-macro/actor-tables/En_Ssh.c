// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ssh/z_en_ssh.h"

void EnSsh_SpawnShockwave(void*, void*);
s32 EnSsh_CheckCeilingPos(void*, void*);
void EnSsh_InitColliders(void*, void*);
void EnSsh_Turn(void*, void*);
void EnSsh_Stunned(void*, void*);
void EnSsh_UpdateYaw(void*, void*);
void EnSsh_Bob(void*, void*);
s32 EnSsh_IsCloseToLink(void*, void*);
void EnSsh_CheckBodyStickHit(void*, void*);
s32 EnSsh_CheckHitPlayer(void*, void*);
s32 EnSsh_CheckHitBack(void*, void*);
s32 EnSsh_CollisionCheck(void*, void*);
void EnSsh_SetBodyCylinderAC(void*, void*);
void EnSsh_SetLegsCylinderAC(void*, void*);
s32 EnSsh_SetCylinderOC(void*, void*);
void EnSsh_SetColliders(void*, void*);
void EnSsh_Init(void*, void*);
void EnSsh_Destroy(void*, void*);
void EnSsh_Wait(void*, void*);
void EnSsh_Talk(void*, void*);
void EnSsh_Idle(void*, void*);
void EnSsh_Land(void*, void*);
void EnSsh_Drop(void*, void*);
void EnSsh_Return(void*, void*);
void EnSsh_Start(void*, void*);
void EnSsh_Update(void*, void*);
void EnSsh_Draw(void*, void*);

const GzActorSpan gGzEnSshSpans[] = {
    { offsetof(EnSsh, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnSsh, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnSsh, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, jointTable[0].x), offsetof(EnSsh, jointTable[1].x) - offsetof(EnSsh, jointTable[0].x), 0x180, 0x6, 30, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, jointTable[0].y), offsetof(EnSsh, jointTable[1].y) - offsetof(EnSsh, jointTable[0].y), 0x182, 0x6, 30, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, jointTable[0].z), offsetof(EnSsh, jointTable[1].z) - offsetof(EnSsh, jointTable[0].z), 0x184, 0x6, 30, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, morphTable[0].x), offsetof(EnSsh, morphTable[1].x) - offsetof(EnSsh, morphTable[0].x), 0x234, 0x6, 30, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, morphTable[0].y), offsetof(EnSsh, morphTable[1].y) - offsetof(EnSsh, morphTable[0].y), 0x236, 0x6, 30, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, morphTable[0].z), offsetof(EnSsh, morphTable[1].z) - offsetof(EnSsh, morphTable[0].z), 0x238, 0x6, 30, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, actionFunc), 0, 0x2e8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnSsh, colCylinder[0].base.actor), offsetof(EnSsh, colCylinder[1].base.actor) - offsetof(EnSsh, colCylinder[0].base.actor), 0x2ec, 0x4c, 6, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colCylinder[0].base.at), offsetof(EnSsh, colCylinder[1].base.at) - offsetof(EnSsh, colCylinder[0].base.at), 0x2f0, 0x4c, 6, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colCylinder[0].base.ac), offsetof(EnSsh, colCylinder[1].base.ac) - offsetof(EnSsh, colCylinder[0].base.ac), 0x2f4, 0x4c, 6, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colCylinder[0].base.oc), offsetof(EnSsh, colCylinder[1].base.oc) - offsetof(EnSsh, colCylinder[0].base.oc), 0x2f8, 0x4c, 6, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colCylinder[0].base.atFlags), offsetof(EnSsh, colCylinder[1].base.atFlags) - offsetof(EnSsh, colCylinder[0].base.atFlags), 0x2fc, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].base.acFlags), offsetof(EnSsh, colCylinder[1].base.acFlags) - offsetof(EnSsh, colCylinder[0].base.acFlags), 0x2fd, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].base.ocFlags1), offsetof(EnSsh, colCylinder[1].base.ocFlags1) - offsetof(EnSsh, colCylinder[0].base.ocFlags1), 0x2fe, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].base.ocFlags2), offsetof(EnSsh, colCylinder[1].base.ocFlags2) - offsetof(EnSsh, colCylinder[0].base.ocFlags2), 0x2ff, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].base.colType), offsetof(EnSsh, colCylinder[1].base.colType) - offsetof(EnSsh, colCylinder[0].base.colType), 0x300, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].base.shape), offsetof(EnSsh, colCylinder[1].base.shape) - offsetof(EnSsh, colCylinder[0].base.shape), 0x301, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.toucher.dmgFlags), offsetof(EnSsh, colCylinder[1].info.toucher.dmgFlags) - offsetof(EnSsh, colCylinder[0].info.toucher.dmgFlags), 0x304, 0x4c, 6, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.toucher.effect), offsetof(EnSsh, colCylinder[1].info.toucher.effect) - offsetof(EnSsh, colCylinder[0].info.toucher.effect), 0x308, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.toucher.damage), offsetof(EnSsh, colCylinder[1].info.toucher.damage) - offsetof(EnSsh, colCylinder[0].info.toucher.damage), 0x309, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.bumper.dmgFlags), offsetof(EnSsh, colCylinder[1].info.bumper.dmgFlags) - offsetof(EnSsh, colCylinder[0].info.bumper.dmgFlags), 0x30c, 0x4c, 6, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.bumper.effect), offsetof(EnSsh, colCylinder[1].info.bumper.effect) - offsetof(EnSsh, colCylinder[0].info.bumper.effect), 0x310, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.bumper.defense), offsetof(EnSsh, colCylinder[1].info.bumper.defense) - offsetof(EnSsh, colCylinder[0].info.bumper.defense), 0x311, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.bumper.hitPos.x), offsetof(EnSsh, colCylinder[1].info.bumper.hitPos.x) - offsetof(EnSsh, colCylinder[0].info.bumper.hitPos.x), 0x312, 0x4c, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.bumper.hitPos.y), offsetof(EnSsh, colCylinder[1].info.bumper.hitPos.y) - offsetof(EnSsh, colCylinder[0].info.bumper.hitPos.y), 0x314, 0x4c, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.bumper.hitPos.z), offsetof(EnSsh, colCylinder[1].info.bumper.hitPos.z) - offsetof(EnSsh, colCylinder[0].info.bumper.hitPos.z), 0x316, 0x4c, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.elemType), offsetof(EnSsh, colCylinder[1].info.elemType) - offsetof(EnSsh, colCylinder[0].info.elemType), 0x318, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.toucherFlags), offsetof(EnSsh, colCylinder[1].info.toucherFlags) - offsetof(EnSsh, colCylinder[0].info.toucherFlags), 0x319, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.bumperFlags), offsetof(EnSsh, colCylinder[1].info.bumperFlags) - offsetof(EnSsh, colCylinder[0].info.bumperFlags), 0x31a, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.ocElemFlags), offsetof(EnSsh, colCylinder[1].info.ocElemFlags) - offsetof(EnSsh, colCylinder[0].info.ocElemFlags), 0x31b, 0x4c, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].info.atHit), offsetof(EnSsh, colCylinder[1].info.atHit) - offsetof(EnSsh, colCylinder[0].info.atHit), 0x31c, 0x4c, 6, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colCylinder[0].info.acHit), offsetof(EnSsh, colCylinder[1].info.acHit) - offsetof(EnSsh, colCylinder[0].info.acHit), 0x320, 0x4c, 6, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colCylinder[0].info.atHitInfo), offsetof(EnSsh, colCylinder[1].info.atHitInfo) - offsetof(EnSsh, colCylinder[0].info.atHitInfo), 0x324, 0x4c, 6, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colCylinder[0].info.acHitInfo), offsetof(EnSsh, colCylinder[1].info.acHitInfo) - offsetof(EnSsh, colCylinder[0].info.acHitInfo), 0x328, 0x4c, 6, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colCylinder[0].dim.radius), offsetof(EnSsh, colCylinder[1].dim.radius) - offsetof(EnSsh, colCylinder[0].dim.radius), 0x32c, 0x4c, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].dim.height), offsetof(EnSsh, colCylinder[1].dim.height) - offsetof(EnSsh, colCylinder[0].dim.height), 0x32e, 0x4c, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].dim.yShift), offsetof(EnSsh, colCylinder[1].dim.yShift) - offsetof(EnSsh, colCylinder[0].dim.yShift), 0x330, 0x4c, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].dim.pos.x), offsetof(EnSsh, colCylinder[1].dim.pos.x) - offsetof(EnSsh, colCylinder[0].dim.pos.x), 0x332, 0x4c, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].dim.pos.y), offsetof(EnSsh, colCylinder[1].dim.pos.y) - offsetof(EnSsh, colCylinder[0].dim.pos.y), 0x334, 0x4c, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colCylinder[0].dim.pos.z), offsetof(EnSsh, colCylinder[1].dim.pos.z) - offsetof(EnSsh, colCylinder[0].dim.pos.z), 0x336, 0x4c, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSph.base.actor), 0, 0x4b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colSph.base.at), 0, 0x4b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colSph.base.ac), 0, 0x4bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colSph.base.oc), 0, 0x4c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colSph.base.atFlags), 0, 0x4c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSph.base.acFlags), 0, 0x4c5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSph.base.ocFlags1), 0, 0x4c6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSph.base.ocFlags2), 0, 0x4c7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSph.base.colType), 0, 0x4c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSph.base.shape), 0, 0x4c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSph.count), 0, 0x4cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSph.elements), 0, 0x4d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colSphElements[0].info.toucher.dmgFlags), 0, 0x4d4, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.toucher.effect), 0, 0x4d8, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.toucher.damage), 0, 0x4d9, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.bumper.dmgFlags), 0, 0x4dc, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.bumper.effect), 0, 0x4e0, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.bumper.defense), 0, 0x4e1, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.bumper.hitPos.x), 0, 0x4e2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.bumper.hitPos.y), 0, 0x4e4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.bumper.hitPos.z), 0, 0x4e6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.elemType), 0, 0x4e8, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.toucherFlags), 0, 0x4e9, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.bumperFlags), 0, 0x4ea, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.ocElemFlags), 0, 0x4eb, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].info.atHit), 0, 0x4ec, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colSphElements[0].info.acHit), 0, 0x4f0, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colSphElements[0].info.atHitInfo), 0, 0x4f4, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colSphElements[0].info.acHitInfo), 0, 0x4f8, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSsh, colSphElements[0].dim.modelSphere.center.x), 0, 0x4fc, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].dim.modelSphere.center.y), 0, 0x4fe, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].dim.modelSphere.center.z), 0, 0x500, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].dim.modelSphere.radius), 0, 0x502, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].dim.worldSphere.center.x), 0, 0x504, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].dim.worldSphere.center.y), 0, 0x506, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].dim.worldSphere.center.z), 0, 0x508, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].dim.worldSphere.radius), 0, 0x50a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].dim.scale), 0, 0x50c, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colSphElements[0].dim.limb), 0, 0x510, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, initialYaw), 0, 0x514, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, maxTurnRate), 0, 0x516, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, unkTimer), 0, 0x518, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, spinTimer), 0, 0x51a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, hitTimer), 0, 0x51c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, invincibilityTimer), 0, 0x51e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, sfxTimer), 0, 0x520, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, stunTimer), 0, 0x522, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, animTimer), 0, 0x524, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, swayTimer), 0, 0x526, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, blureIdx), 0, 0x528, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, colliderScale), 0, 0x52c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, floorHeightOffset), 0, 0x530, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, ceilingPos.x), 0, 0x534, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, ceilingPos.y), 0, 0x538, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, ceilingPos.z), 0, 0x53c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSsh, unk_558[0]), offsetof(EnSsh, unk_558[1]) - offsetof(EnSsh, unk_558[0]), 0x540, 0x1, 120, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, swayAngle), 0, 0x5b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, stateFlags), 0, 0x5ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, hitCount), 0, 0x5bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnSsh, blinkState), 0, 0x5be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSsh, blinkTimer), 0, 0x5c0, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnSshSpanCount = ARRAY_COUNT(gGzEnSshSpans);

const GzActorFunction gGzEnSshFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnSsh_SpawnShockwave },
    { 0x94, NULL },
    { 0x190, (void*)EnSsh_CheckCeilingPos },
    { 0x228, NULL },
    { 0x330, NULL },
    { 0x35c, (void*)EnSsh_InitColliders },
    { 0x49c, NULL },
    { 0x5d0, NULL },
    { 0x5f0, NULL },
    { 0x624, NULL },
    { 0x668, NULL },
    { 0x6b8, NULL },
    { 0x6e4, NULL },
    { 0x858, NULL },
    { 0x934, (void*)EnSsh_Turn },
    { 0xa08, (void*)EnSsh_Stunned },
    { 0xaa8, (void*)EnSsh_UpdateYaw },
    { 0xae4, (void*)EnSsh_Bob },
    { 0xb50, (void*)EnSsh_IsCloseToLink },
    { 0xc38, NULL },
    { 0xc70, NULL },
    { 0xcb0, NULL },
    { 0xdf4, (void*)EnSsh_CheckBodyStickHit },
    { 0xe68, (void*)EnSsh_CheckHitPlayer },
    { 0xf70, NULL },
    { 0xfcc, (void*)EnSsh_CheckHitBack },
    { 0x10a4, (void*)EnSsh_CollisionCheck },
    { 0x1158, (void*)EnSsh_SetBodyCylinderAC },
    { 0x119c, (void*)EnSsh_SetLegsCylinderAC },
    { 0x1254, (void*)EnSsh_SetCylinderOC },
    { 0x142c, (void*)EnSsh_SetColliders },
    { 0x14f4, (void*)EnSsh_Init },
    { 0x1688, (void*)EnSsh_Destroy },
    { 0x1708, (void*)EnSsh_Wait },
    { 0x1764, (void*)EnSsh_Talk },
    { 0x17b0, (void*)EnSsh_Idle },
    { 0x1a48, (void*)EnSsh_Land },
    { 0x1b30, (void*)EnSsh_Drop },
    { 0x1c30, (void*)EnSsh_Return },
    { 0x1d04, NULL },
    { 0x1dac, (void*)EnSsh_Start },
    { 0x1e34, (void*)EnSsh_Update },
    { 0x1f54, NULL },
    { 0x2044, NULL },
    { 0x2080, (void*)EnSsh_Draw },
};
const size_t gGzEnSshFunctionCount = ARRAY_COUNT(gGzEnSshFunctions);
