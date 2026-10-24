// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Kz/z_en_kz.h"

void func_80A9CB18(void*, void*);
s32 EnKz_FollowPath(void*, void*);
s32 EnKz_SetMovedPos(void*, void*);
void EnKz_Init(void*, void*);
void EnKz_Destroy(void*, void*);
void EnKz_PreMweepWait(void*, void*);
void EnKz_SetupMweep(void*, void*);
void EnKz_Mweep(void*, void*);
void EnKz_StopMweep(void*, void*);
void EnKz_Wait(void*, void*);
void EnKz_SetupGetItem(void*, void*);
void EnKz_StartTimer(void*, void*);
void EnKz_Update(void*, void*);
void EnKz_Draw(void*, void*);

const GzActorSpan gGzEnKzSpans[] = {
    { offsetof(EnKz, skelanime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, skelanime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnKz, skelanime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, skelanime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, skelanime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKz, skelanime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, skelanime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKz, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKz, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.talkState), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.trackingMode), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.autoTurnTimer), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.autoTurnState), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.headRot.x), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.headRot.y), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.headRot.z), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.torsoRot.x), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.torsoRot.y), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.torsoRot.z), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.yOffset), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.trackPos.x), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.trackPos.y), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.trackPos.z), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKz, interactInfo.unk_24[0]), offsetof(EnKz, interactInfo.unk_24[1]) - offsetof(EnKz, interactInfo.unk_24[0]), 0x1f4, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, sfxPlayed), 0, 0x1f8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, isTrading), 0, 0x1f9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, waypoint), 0, 0x1fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, blinkTimer), 0, 0x1fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, unk_20E[0]), offsetof(EnKz, unk_20E[1]) - offsetof(EnKz, unk_20E[0]), 0x1fe, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnKz, eyeIdx), 0, 0x200, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, cutsceneCamera), 0, 0x202, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, gameplayCamera), 0, 0x204, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, jointTable[0].x), offsetof(EnKz, jointTable[1].x) - offsetof(EnKz, jointTable[0].x), 0x206, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, jointTable[0].y), offsetof(EnKz, jointTable[1].y) - offsetof(EnKz, jointTable[0].y), 0x208, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, jointTable[0].z), offsetof(EnKz, jointTable[1].z) - offsetof(EnKz, jointTable[0].z), 0x20a, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, morphTable[0].x), offsetof(EnKz, morphTable[1].x) - offsetof(EnKz, morphTable[0].x), 0x24e, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, morphTable[0].y), offsetof(EnKz, morphTable[1].y) - offsetof(EnKz, morphTable[0].y), 0x250, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, morphTable[0].z), offsetof(EnKz, morphTable[1].z) - offsetof(EnKz, morphTable[0].z), 0x252, 0x6, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, fidgetTableY[0]), offsetof(EnKz, fidgetTableY[1]) - offsetof(EnKz, fidgetTableY[0]), 0x296, 0x2, 12, 2, GZ_SPAN_VALUE },
    { offsetof(EnKz, fidgetTableZ[0]), offsetof(EnKz, fidgetTableZ[1]) - offsetof(EnKz, fidgetTableZ[0]), 0x2ae, 0x2, 12, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnKzSpanCount = ARRAY_COUNT(gGzEnKzSpans);

const GzActorFunction gGzEnKzFunctions[] = {
    { 0x0, NULL },
    { 0x5c, NULL },
    { 0x10c, NULL },
    { 0x174, NULL },
    { 0x398, NULL },
    { 0x410, NULL },
    { 0x5cc, (void*)func_80A9CB18 },
    { 0x78c, (void*)EnKz_FollowPath },
    { 0x8f8, (void*)EnKz_SetMovedPos },
    { 0x9c0, (void*)EnKz_Init },
    { 0xb4c, (void*)EnKz_Destroy },
    { 0xb78, (void*)EnKz_PreMweepWait },
    { 0xbe8, (void*)EnKz_SetupMweep },
    { 0xd14, (void*)EnKz_Mweep },
    { 0xe80, (void*)EnKz_StopMweep },
    { 0xee4, (void*)EnKz_Wait },
    { 0xf4c, (void*)EnKz_SetupGetItem },
    { 0xfe0, (void*)EnKz_StartTimer },
    { 0x1078, (void*)EnKz_Update },
    { 0x1134, NULL },
    { 0x1204, NULL },
    { 0x1260, (void*)EnKz_Draw },
};
const size_t gGzEnKzFunctionCount = ARRAY_COUNT(gGzEnKzFunctions);
