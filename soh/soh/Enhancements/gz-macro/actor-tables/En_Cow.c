// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Cow/z_en_cow.h"

void EnCow_Init(void*, void*);
void EnCow_Destroy(void*, void*);
void EnCow_UpdateAnimation(void*, void*);
void EnCow_TalkEnd(void*, void*);
void EnCow_GiveMilkEnd(void*, void*);
void EnCow_GiveMilkWait(void*, void*);
void EnCow_GiveMilk(void*, void*);
void EnCow_CheckForEmptyBottle(void*, void*);
void EnCow_Talk(void*, void*);
void EnCow_Idle(void*, void*);
void EnCow_IdleTail(void*, void*);
void EnCow_Update(void*, void*);
void EnCow_UpdateTail(void*, void*);
void EnCow_Draw(void*, void*);
void EnCow_DrawTail(void*, void*);

const GzActorSpan gGzEnCowSpans[] = {
    { offsetof(EnCow, colliders[0].base.actor), offsetof(EnCow, colliders[1].base.actor) - offsetof(EnCow, colliders[0].base.actor), 0x13c, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, colliders[0].base.at), offsetof(EnCow, colliders[1].base.at) - offsetof(EnCow, colliders[0].base.at), 0x140, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, colliders[0].base.ac), offsetof(EnCow, colliders[1].base.ac) - offsetof(EnCow, colliders[0].base.ac), 0x144, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, colliders[0].base.oc), offsetof(EnCow, colliders[1].base.oc) - offsetof(EnCow, colliders[0].base.oc), 0x148, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, colliders[0].base.atFlags), offsetof(EnCow, colliders[1].base.atFlags) - offsetof(EnCow, colliders[0].base.atFlags), 0x14c, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].base.acFlags), offsetof(EnCow, colliders[1].base.acFlags) - offsetof(EnCow, colliders[0].base.acFlags), 0x14d, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].base.ocFlags1), offsetof(EnCow, colliders[1].base.ocFlags1) - offsetof(EnCow, colliders[0].base.ocFlags1), 0x14e, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].base.ocFlags2), offsetof(EnCow, colliders[1].base.ocFlags2) - offsetof(EnCow, colliders[0].base.ocFlags2), 0x14f, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].base.colType), offsetof(EnCow, colliders[1].base.colType) - offsetof(EnCow, colliders[0].base.colType), 0x150, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].base.shape), offsetof(EnCow, colliders[1].base.shape) - offsetof(EnCow, colliders[0].base.shape), 0x151, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.toucher.dmgFlags), offsetof(EnCow, colliders[1].info.toucher.dmgFlags) - offsetof(EnCow, colliders[0].info.toucher.dmgFlags), 0x154, 0x4c, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.toucher.effect), offsetof(EnCow, colliders[1].info.toucher.effect) - offsetof(EnCow, colliders[0].info.toucher.effect), 0x158, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.toucher.damage), offsetof(EnCow, colliders[1].info.toucher.damage) - offsetof(EnCow, colliders[0].info.toucher.damage), 0x159, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.bumper.dmgFlags), offsetof(EnCow, colliders[1].info.bumper.dmgFlags) - offsetof(EnCow, colliders[0].info.bumper.dmgFlags), 0x15c, 0x4c, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.bumper.effect), offsetof(EnCow, colliders[1].info.bumper.effect) - offsetof(EnCow, colliders[0].info.bumper.effect), 0x160, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.bumper.defense), offsetof(EnCow, colliders[1].info.bumper.defense) - offsetof(EnCow, colliders[0].info.bumper.defense), 0x161, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.bumper.hitPos.x), offsetof(EnCow, colliders[1].info.bumper.hitPos.x) - offsetof(EnCow, colliders[0].info.bumper.hitPos.x), 0x162, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.bumper.hitPos.y), offsetof(EnCow, colliders[1].info.bumper.hitPos.y) - offsetof(EnCow, colliders[0].info.bumper.hitPos.y), 0x164, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.bumper.hitPos.z), offsetof(EnCow, colliders[1].info.bumper.hitPos.z) - offsetof(EnCow, colliders[0].info.bumper.hitPos.z), 0x166, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.elemType), offsetof(EnCow, colliders[1].info.elemType) - offsetof(EnCow, colliders[0].info.elemType), 0x168, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.toucherFlags), offsetof(EnCow, colliders[1].info.toucherFlags) - offsetof(EnCow, colliders[0].info.toucherFlags), 0x169, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.bumperFlags), offsetof(EnCow, colliders[1].info.bumperFlags) - offsetof(EnCow, colliders[0].info.bumperFlags), 0x16a, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.ocElemFlags), offsetof(EnCow, colliders[1].info.ocElemFlags) - offsetof(EnCow, colliders[0].info.ocElemFlags), 0x16b, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].info.atHit), offsetof(EnCow, colliders[1].info.atHit) - offsetof(EnCow, colliders[0].info.atHit), 0x16c, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, colliders[0].info.acHit), offsetof(EnCow, colliders[1].info.acHit) - offsetof(EnCow, colliders[0].info.acHit), 0x170, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, colliders[0].info.atHitInfo), offsetof(EnCow, colliders[1].info.atHitInfo) - offsetof(EnCow, colliders[0].info.atHitInfo), 0x174, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, colliders[0].info.acHitInfo), offsetof(EnCow, colliders[1].info.acHitInfo) - offsetof(EnCow, colliders[0].info.acHitInfo), 0x178, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, colliders[0].dim.radius), offsetof(EnCow, colliders[1].dim.radius) - offsetof(EnCow, colliders[0].dim.radius), 0x17c, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].dim.height), offsetof(EnCow, colliders[1].dim.height) - offsetof(EnCow, colliders[0].dim.height), 0x17e, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].dim.yShift), offsetof(EnCow, colliders[1].dim.yShift) - offsetof(EnCow, colliders[0].dim.yShift), 0x180, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].dim.pos.x), offsetof(EnCow, colliders[1].dim.pos.x) - offsetof(EnCow, colliders[0].dim.pos.x), 0x182, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].dim.pos.y), offsetof(EnCow, colliders[1].dim.pos.y) - offsetof(EnCow, colliders[0].dim.pos.y), 0x184, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, colliders[0].dim.pos.z), offsetof(EnCow, colliders[1].dim.pos.z) - offsetof(EnCow, colliders[0].dim.pos.z), 0x186, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.limbCount), 0, 0x1d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.mode), 0, 0x1d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.dListCount), 0, 0x1d6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.taper), 0, 0x1d7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.skeleton), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, skelAnime.animation), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, skelAnime.startFrame), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.endFrame), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.animLength), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.curFrame), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.playSpeed), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.jointTable), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, skelAnime.morphTable), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnCow, skelAnime.morphWeight), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.morphRate), 0, 0x200, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.update.normal), 0, 0x204, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnCow, skelAnime.initFlags), 0, 0x208, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.movementFlags), 0, 0x209, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.prevRot), 0, 0x20a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.prevTransl.x), 0, 0x20c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.prevTransl.y), 0, 0x20e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.prevTransl.z), 0, 0x210, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.baseTransl.x), 0, 0x212, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.baseTransl.y), 0, 0x214, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, skelAnime.baseTransl.z), 0, 0x216, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, jointTable[0].x), offsetof(EnCow, jointTable[1].x) - offsetof(EnCow, jointTable[0].x), 0x218, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, jointTable[0].y), offsetof(EnCow, jointTable[1].y) - offsetof(EnCow, jointTable[0].y), 0x21a, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, jointTable[0].z), offsetof(EnCow, jointTable[1].z) - offsetof(EnCow, jointTable[0].z), 0x21c, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, morphTable[0].x), offsetof(EnCow, morphTable[1].x) - offsetof(EnCow, morphTable[0].x), 0x23c, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, morphTable[0].y), offsetof(EnCow, morphTable[1].y) - offsetof(EnCow, morphTable[0].y), 0x23e, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, morphTable[0].z), offsetof(EnCow, morphTable[1].z) - offsetof(EnCow, morphTable[0].z), 0x240, 0x6, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, someRot.x), 0, 0x260, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, someRot.y), 0, 0x262, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, someRot.z), 0, 0x264, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, cowFlags), 0, 0x266, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, animationTimer), 0, 0x268, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, breathTimer), 0, 0x26a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnCow, actionFunc), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnCowSpanCount = ARRAY_COUNT(gGzEnCowSpans);

const GzActorFunction gGzEnCowFunctions[] = {
    { 0x0, NULL },
    { 0x98, NULL },
    { 0x18c, NULL },
    { 0x208, (void*)EnCow_Init },
    { 0x640, (void*)EnCow_Destroy },
    { 0x68c, (void*)EnCow_UpdateAnimation },
    { 0x8b4, (void*)EnCow_TalkEnd },
    { 0x92c, (void*)EnCow_GiveMilkEnd },
    { 0x974, (void*)EnCow_GiveMilkWait },
    { 0x9d8, (void*)EnCow_GiveMilk },
    { 0xa74, (void*)EnCow_CheckForEmptyBottle },
    { 0xb04, (void*)EnCow_Talk },
    { 0xb78, (void*)EnCow_Idle },
    { 0xc94, (void*)EnCow_IdleTail },
    { 0xe2c, (void*)EnCow_Update },
    { 0x10a8, (void*)EnCow_UpdateTail },
    { 0x1194, NULL },
    { 0x11e4, NULL },
    { 0x1224, (void*)EnCow_Draw },
    { 0x1284, (void*)EnCow_DrawTail },
};
const size_t gGzEnCowFunctionCount = ARRAY_COUNT(gGzEnCowFunctions);
