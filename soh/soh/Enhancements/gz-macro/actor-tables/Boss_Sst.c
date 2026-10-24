// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Boss_Sst/z_boss_sst.h"

void BossSst_Init(void*, void*);
void BossSst_Destroy(void*, void*);
void BossSst_HeadLurk(void*, void*);
void BossSst_HeadSetupIntro(void*, void*);
void BossSst_HeadIntro(void*, void*);
void BossSst_HeadWait(void*, void*);
void BossSst_HeadNeutral(void*, void*);
void BossSst_HeadDamagedHand(void*, void*);
void BossSst_HeadReadyCharge(void*, void*);
void BossSst_HeadCharge(void*, void*);
void BossSst_HeadEndCharge(void*, void*);
void BossSst_HeadFrozenHand(void*, void*);
void BossSst_HeadUnfreezeHand(void*, void*);
void BossSst_HeadStunned(void*, void*);
void BossSst_HeadVulnerable(void*, void*);
void BossSst_HeadDamage(void*, void*);
void BossSst_HeadRecover(void*, void*);
void BossSst_UpdateDeathCamera(void*, void*);
void BossSst_HeadSetupDeath(void*, void*);
void BossSst_HeadDeath(void*, void*);
void BossSst_HeadThrash(void*, void*);
void BossSst_HeadDarken(void*, void*);
void BossSst_HeadFall(void*, void*);
void BossSst_HeadMelt(void*, void*);
void BossSst_HeadFinish(void*, void*);
void BossSst_HandWait(void*, void*);
void BossSst_HandDownbeat(void*, void*);
void BossSst_HandDownbeatEnd(void*, void*);
void BossSst_HandOffbeat(void*, void*);
void BossSst_HandOffbeatEnd(void*, void*);
void BossSst_HandEndSlam(void*, void*);
void BossSst_HandRetreat(void*, void*);
void BossSst_HandReadySlam(void*, void*);
void BossSst_HandSlam(void*, void*);
void BossSst_HandReadySweep(void*, void*);
void BossSst_HandSweep(void*, void*);
void BossSst_HandReadyPunch(void*, void*);
void BossSst_HandPunch(void*, void*);
void BossSst_HandReadyClap(void*, void*);
void BossSst_HandClap(void*, void*);
void BossSst_HandEndClap(void*, void*);
void BossSst_HandReadyGrab(void*, void*);
void BossSst_HandGrab(void*, void*);
void BossSst_HandCrush(void*, void*);
void BossSst_HandEndCrush(void*, void*);
void BossSst_HandSwing(void*, void*);
void BossSst_HandReel(void*, void*);
void BossSst_HandReadyShake(void*, void*);
void BossSst_HandShake(void*, void*);
void BossSst_HandReadyCharge(void*, void*);
void BossSst_HandStunned(void*, void*);
void BossSst_HandDamage(void*, void*);
void BossSst_HandThrash(void*, void*);
void BossSst_HandDarken(void*, void*);
void BossSst_HandFall(void*, void*);
void BossSst_HandMelt(void*, void*);
void BossSst_HandFinish(void*, void*);
void BossSst_HandRecover(void*, void*);
void BossSst_HandFrozen(void*, void*);
void BossSst_HandReadyBreakIce(void*, void*);
void BossSst_HandBreakIce(void*, void*);
void BossSst_HandGrabPlayer(void*, void*);
void BossSst_HandCollisionCheck(void*, void*);
void BossSst_HeadCollisionCheck(void*, void*);
void BossSst_UpdateHand(void*, void*);
void BossSst_UpdateHead(void*, void*);
void BossSst_DrawHand(void*, void*);
void BossSst_DrawHead(void*, void*);
void BossSst_UpdateEffect(void*, void*);
void BossSst_DrawEffect(void*, void*);

const GzActorSpan gGzBossSstSpans[] = {
    { offsetof(BossSst, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(BossSst, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BossSst, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BossSst, actionVar), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, ready), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, effectMode), 0, 0x186, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, timer), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, handAngSpeed), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, handMaxSpeed), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, handZPosMod), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, handYRotMod), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, amplitude), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, targetYaw), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, targetRoll), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, jointTable[0].x), offsetof(BossSst, jointTable[1].x) - offsetof(BossSst, jointTable[0].x), 0x198, 0x6, 45, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, jointTable[0].y), offsetof(BossSst, jointTable[1].y) - offsetof(BossSst, jointTable[0].y), 0x19a, 0x6, 45, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, jointTable[0].z), offsetof(BossSst, jointTable[1].z) - offsetof(BossSst, jointTable[0].z), 0x19c, 0x6, 45, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, morphTable[0].x), offsetof(BossSst, morphTable[1].x) - offsetof(BossSst, morphTable[0].x), 0x2a6, 0x6, 45, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, morphTable[0].y), offsetof(BossSst, morphTable[1].y) - offsetof(BossSst, morphTable[0].y), 0x2a8, 0x6, 45, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, morphTable[0].z), offsetof(BossSst, morphTable[1].z) - offsetof(BossSst, morphTable[0].z), 0x2aa, 0x6, 45, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, radius), 0, 0x3b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, center.x), 0, 0x3b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, center.y), 0, 0x3bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, center.z), 0, 0x3c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderJntSph.base.actor), 0, 0x3c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderJntSph.base.at), 0, 0x3c8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderJntSph.base.ac), 0, 0x3cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderJntSph.base.oc), 0, 0x3d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderJntSph.base.atFlags), 0, 0x3d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderJntSph.base.acFlags), 0, 0x3d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderJntSph.base.ocFlags1), 0, 0x3d6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderJntSph.base.ocFlags2), 0, 0x3d7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderJntSph.base.colType), 0, 0x3d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderJntSph.base.shape), 0, 0x3d9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderJntSph.count), 0, 0x3dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderJntSph.elements), 0, 0x3e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderItems[0].info.toucher.dmgFlags), offsetof(BossSst, colliderItems[1].info.toucher.dmgFlags) - offsetof(BossSst, colliderItems[0].info.toucher.dmgFlags), 0x3e4, 0x40, 11, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.toucher.effect), offsetof(BossSst, colliderItems[1].info.toucher.effect) - offsetof(BossSst, colliderItems[0].info.toucher.effect), 0x3e8, 0x40, 11, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.toucher.damage), offsetof(BossSst, colliderItems[1].info.toucher.damage) - offsetof(BossSst, colliderItems[0].info.toucher.damage), 0x3e9, 0x40, 11, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.bumper.dmgFlags), offsetof(BossSst, colliderItems[1].info.bumper.dmgFlags) - offsetof(BossSst, colliderItems[0].info.bumper.dmgFlags), 0x3ec, 0x40, 11, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.bumper.effect), offsetof(BossSst, colliderItems[1].info.bumper.effect) - offsetof(BossSst, colliderItems[0].info.bumper.effect), 0x3f0, 0x40, 11, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.bumper.defense), offsetof(BossSst, colliderItems[1].info.bumper.defense) - offsetof(BossSst, colliderItems[0].info.bumper.defense), 0x3f1, 0x40, 11, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.bumper.hitPos.x), offsetof(BossSst, colliderItems[1].info.bumper.hitPos.x) - offsetof(BossSst, colliderItems[0].info.bumper.hitPos.x), 0x3f2, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.bumper.hitPos.y), offsetof(BossSst, colliderItems[1].info.bumper.hitPos.y) - offsetof(BossSst, colliderItems[0].info.bumper.hitPos.y), 0x3f4, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.bumper.hitPos.z), offsetof(BossSst, colliderItems[1].info.bumper.hitPos.z) - offsetof(BossSst, colliderItems[0].info.bumper.hitPos.z), 0x3f6, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.elemType), offsetof(BossSst, colliderItems[1].info.elemType) - offsetof(BossSst, colliderItems[0].info.elemType), 0x3f8, 0x40, 11, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.toucherFlags), offsetof(BossSst, colliderItems[1].info.toucherFlags) - offsetof(BossSst, colliderItems[0].info.toucherFlags), 0x3f9, 0x40, 11, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.bumperFlags), offsetof(BossSst, colliderItems[1].info.bumperFlags) - offsetof(BossSst, colliderItems[0].info.bumperFlags), 0x3fa, 0x40, 11, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.ocElemFlags), offsetof(BossSst, colliderItems[1].info.ocElemFlags) - offsetof(BossSst, colliderItems[0].info.ocElemFlags), 0x3fb, 0x40, 11, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].info.atHit), offsetof(BossSst, colliderItems[1].info.atHit) - offsetof(BossSst, colliderItems[0].info.atHit), 0x3fc, 0x40, 11, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderItems[0].info.acHit), offsetof(BossSst, colliderItems[1].info.acHit) - offsetof(BossSst, colliderItems[0].info.acHit), 0x400, 0x40, 11, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderItems[0].info.atHitInfo), offsetof(BossSst, colliderItems[1].info.atHitInfo) - offsetof(BossSst, colliderItems[0].info.atHitInfo), 0x404, 0x40, 11, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderItems[0].info.acHitInfo), offsetof(BossSst, colliderItems[1].info.acHitInfo) - offsetof(BossSst, colliderItems[0].info.acHitInfo), 0x408, 0x40, 11, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderItems[0].dim.modelSphere.center.x), offsetof(BossSst, colliderItems[1].dim.modelSphere.center.x) - offsetof(BossSst, colliderItems[0].dim.modelSphere.center.x), 0x40c, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].dim.modelSphere.center.y), offsetof(BossSst, colliderItems[1].dim.modelSphere.center.y) - offsetof(BossSst, colliderItems[0].dim.modelSphere.center.y), 0x40e, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].dim.modelSphere.center.z), offsetof(BossSst, colliderItems[1].dim.modelSphere.center.z) - offsetof(BossSst, colliderItems[0].dim.modelSphere.center.z), 0x410, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].dim.modelSphere.radius), offsetof(BossSst, colliderItems[1].dim.modelSphere.radius) - offsetof(BossSst, colliderItems[0].dim.modelSphere.radius), 0x412, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].dim.worldSphere.center.x), offsetof(BossSst, colliderItems[1].dim.worldSphere.center.x) - offsetof(BossSst, colliderItems[0].dim.worldSphere.center.x), 0x414, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].dim.worldSphere.center.y), offsetof(BossSst, colliderItems[1].dim.worldSphere.center.y) - offsetof(BossSst, colliderItems[0].dim.worldSphere.center.y), 0x416, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].dim.worldSphere.center.z), offsetof(BossSst, colliderItems[1].dim.worldSphere.center.z) - offsetof(BossSst, colliderItems[0].dim.worldSphere.center.z), 0x418, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].dim.worldSphere.radius), offsetof(BossSst, colliderItems[1].dim.worldSphere.radius) - offsetof(BossSst, colliderItems[0].dim.worldSphere.radius), 0x41a, 0x40, 11, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].dim.scale), offsetof(BossSst, colliderItems[1].dim.scale) - offsetof(BossSst, colliderItems[0].dim.scale), 0x41c, 0x40, 11, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderItems[0].dim.limb), offsetof(BossSst, colliderItems[1].dim.limb) - offsetof(BossSst, colliderItems[0].dim.limb), 0x420, 0x40, 11, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.base.actor), 0, 0x6a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderCyl.base.at), 0, 0x6a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderCyl.base.ac), 0, 0x6ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderCyl.base.oc), 0, 0x6b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderCyl.base.atFlags), 0, 0x6b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.base.acFlags), 0, 0x6b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.base.ocFlags1), 0, 0x6b6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.base.ocFlags2), 0, 0x6b7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.base.colType), 0, 0x6b8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.base.shape), 0, 0x6b9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.toucher.dmgFlags), 0, 0x6bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.toucher.effect), 0, 0x6c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.toucher.damage), 0, 0x6c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.bumper.dmgFlags), 0, 0x6c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.bumper.effect), 0, 0x6c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.bumper.defense), 0, 0x6c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.bumper.hitPos.x), 0, 0x6ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.bumper.hitPos.y), 0, 0x6cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.bumper.hitPos.z), 0, 0x6ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.elemType), 0, 0x6d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.toucherFlags), 0, 0x6d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.bumperFlags), 0, 0x6d2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.ocElemFlags), 0, 0x6d3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.info.atHit), 0, 0x6d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderCyl.info.acHit), 0, 0x6d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderCyl.info.atHitInfo), 0, 0x6dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderCyl.info.acHitInfo), 0, 0x6e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossSst, colliderCyl.dim.radius), 0, 0x6e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.dim.height), 0, 0x6e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.dim.yShift), 0, 0x6e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.dim.pos.x), 0, 0x6ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.dim.pos.y), 0, 0x6ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, colliderCyl.dim.pos.z), 0, 0x6ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].pos.x), offsetof(BossSst, effects[1].pos.x) - offsetof(BossSst, effects[0].pos.x), 0x6f0, 0x28, 18, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].pos.y), offsetof(BossSst, effects[1].pos.y) - offsetof(BossSst, effects[0].pos.y), 0x6f4, 0x28, 18, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].pos.z), offsetof(BossSst, effects[1].pos.z) - offsetof(BossSst, effects[0].pos.z), 0x6f8, 0x28, 18, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].vel.x), offsetof(BossSst, effects[1].vel.x) - offsetof(BossSst, effects[0].vel.x), 0x6fc, 0x28, 18, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].vel.y), offsetof(BossSst, effects[1].vel.y) - offsetof(BossSst, effects[0].vel.y), 0x700, 0x28, 18, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].vel.z), offsetof(BossSst, effects[1].vel.z) - offsetof(BossSst, effects[0].vel.z), 0x704, 0x28, 18, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].rot.x), offsetof(BossSst, effects[1].rot.x) - offsetof(BossSst, effects[0].rot.x), 0x708, 0x28, 18, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].rot.y), offsetof(BossSst, effects[1].rot.y) - offsetof(BossSst, effects[0].rot.y), 0x70a, 0x28, 18, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].rot.z), offsetof(BossSst, effects[1].rot.z) - offsetof(BossSst, effects[0].rot.z), 0x70c, 0x28, 18, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].scale), offsetof(BossSst, effects[1].scale) - offsetof(BossSst, effects[0].scale), 0x70e, 0x28, 18, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].move), offsetof(BossSst, effects[1].move) - offsetof(BossSst, effects[0].move), 0x710, 0x28, 18, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].status), offsetof(BossSst, effects[1].status) - offsetof(BossSst, effects[0].status), 0x712, 0x28, 18, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, effects[0].alpha), offsetof(BossSst, effects[1].alpha) - offsetof(BossSst, effects[0].alpha), 0x714, 0x28, 18, 1, GZ_SPAN_VALUE },
    { offsetof(BossSst, trailIndex), 0, 0x9c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, trailCount), 0, 0x9c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, handTrails[0].world.pos.x), offsetof(BossSst, handTrails[1].world.pos.x) - offsetof(BossSst, handTrails[0].world.pos.x), 0x9c4, 0x1c, 7, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, handTrails[0].world.pos.y), offsetof(BossSst, handTrails[1].world.pos.y) - offsetof(BossSst, handTrails[0].world.pos.y), 0x9c8, 0x1c, 7, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, handTrails[0].world.pos.z), offsetof(BossSst, handTrails[1].world.pos.z) - offsetof(BossSst, handTrails[0].world.pos.z), 0x9cc, 0x1c, 7, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, handTrails[0].world.rot.x), offsetof(BossSst, handTrails[1].world.rot.x) - offsetof(BossSst, handTrails[0].world.rot.x), 0x9d0, 0x1c, 7, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, handTrails[0].world.rot.y), offsetof(BossSst, handTrails[1].world.rot.y) - offsetof(BossSst, handTrails[0].world.rot.y), 0x9d2, 0x1c, 7, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, handTrails[0].world.rot.z), offsetof(BossSst, handTrails[1].world.rot.z) - offsetof(BossSst, handTrails[0].world.rot.z), 0x9d4, 0x1c, 7, 2, GZ_SPAN_VALUE },
    { offsetof(BossSst, handTrails[0].zPosMod), offsetof(BossSst, handTrails[1].zPosMod) - offsetof(BossSst, handTrails[0].zPosMod), 0x9d8, 0x1c, 7, 4, GZ_SPAN_VALUE },
    { offsetof(BossSst, handTrails[0].yRotMod), offsetof(BossSst, handTrails[1].yRotMod) - offsetof(BossSst, handTrails[0].yRotMod), 0x9dc, 0x1c, 7, 2, GZ_SPAN_VALUE },
};
const size_t gGzBossSstSpanCount = ARRAY_COUNT(gGzBossSstSpans);

const GzActorFunction gGzBossSstFunctions[] = {
    { 0x0, (void*)BossSst_Init },
    { 0x488, (void*)BossSst_Destroy },
    { 0x4d4, NULL },
    { 0x508, (void*)BossSst_HeadLurk },
    { 0x544, (void*)BossSst_HeadSetupIntro },
    { 0x690, (void*)BossSst_HeadIntro },
    { 0x14a8, NULL },
    { 0x14f8, (void*)BossSst_HeadWait },
    { 0x1574, NULL },
    { 0x1594, (void*)BossSst_HeadNeutral },
    { 0x1738, NULL },
    { 0x17a0, (void*)BossSst_HeadDamagedHand },
    { 0x1898, NULL },
    { 0x18f0, (void*)BossSst_HeadReadyCharge },
    { 0x1994, NULL },
    { 0x1a50, (void*)BossSst_HeadCharge },
    { 0x1cb0, NULL },
    { 0x1d34, (void*)BossSst_HeadEndCharge },
    { 0x1da4, NULL },
    { 0x1df8, (void*)BossSst_HeadFrozenHand },
    { 0x1e40, NULL },
    { 0x1e8c, (void*)BossSst_HeadUnfreezeHand },
    { 0x1ec8, NULL },
    { 0x1f68, (void*)BossSst_HeadStunned },
    { 0x21ec, NULL },
    { 0x228c, (void*)BossSst_HeadVulnerable },
    { 0x238c, NULL },
    { 0x245c, (void*)BossSst_HeadDamage },
    { 0x24ac, NULL },
    { 0x2538, (void*)BossSst_HeadRecover },
    { 0x26cc, NULL },
    { 0x27f8, (void*)BossSst_UpdateDeathCamera },
    { 0x2984, (void*)BossSst_HeadSetupDeath },
    { 0x2b18, (void*)BossSst_HeadDeath },
    { 0x2d68, NULL },
    { 0x2dd0, (void*)BossSst_HeadThrash },
    { 0x2e4c, NULL },
    { 0x2e94, (void*)BossSst_HeadDarken },
    { 0x30bc, NULL },
    { 0x3154, (void*)BossSst_HeadFall },
    { 0x31f0, NULL },
    { 0x3240, (void*)BossSst_HeadMelt },
    { 0x32f8, NULL },
    { 0x3354, (void*)BossSst_HeadFinish },
    { 0x364c, NULL },
    { 0x36c8, (void*)BossSst_HandWait },
    { 0x3838, NULL },
    { 0x38ac, (void*)BossSst_HandDownbeat },
    { 0x39fc, NULL },
    { 0x3a58, (void*)BossSst_HandDownbeatEnd },
    { 0x3b4c, NULL },
    { 0x3bc0, (void*)BossSst_HandOffbeat },
    { 0x3ca0, NULL },
    { 0x3cec, (void*)BossSst_HandOffbeatEnd },
    { 0x3e30, NULL },
    { 0x3ea4, (void*)BossSst_HandEndSlam },
    { 0x3ee0, NULL },
    { 0x3f88, (void*)BossSst_HandRetreat },
    { 0x41b4, NULL },
    { 0x4220, (void*)BossSst_HandReadySlam },
    { 0x4310, NULL },
    { 0x43a0, (void*)BossSst_HandSlam },
    { 0x4584, NULL },
    { 0x462c, (void*)BossSst_HandReadySweep },
    { 0x4750, NULL },
    { 0x47dc, (void*)BossSst_HandSweep },
    { 0x49ec, NULL },
    { 0x4a54, (void*)BossSst_HandReadyPunch },
    { 0x4ab0, NULL },
    { 0x4b38, (void*)BossSst_HandPunch },
    { 0x4c7c, NULL },
    { 0x4d6c, (void*)BossSst_HandReadyClap },
    { 0x4f5c, NULL },
    { 0x4fcc, (void*)BossSst_HandClap },
    { 0x51f8, NULL },
    { 0x5264, (void*)BossSst_HandEndClap },
    { 0x5308, NULL },
    { 0x538c, (void*)BossSst_HandReadyGrab },
    { 0x5434, NULL },
    { 0x54c0, (void*)BossSst_HandGrab },
    { 0x576c, NULL },
    { 0x57c4, (void*)BossSst_HandCrush },
    { 0x58dc, NULL },
    { 0x592c, (void*)BossSst_HandEndCrush },
    { 0x5968, NULL },
    { 0x59f0, (void*)BossSst_HandSwing },
    { 0x5d24, NULL },
    { 0x5dbc, (void*)BossSst_HandReel },
    { 0x5f14, NULL },
    { 0x5f64, (void*)BossSst_HandReadyShake },
    { 0x60cc, NULL },
    { 0x60e8, (void*)BossSst_HandShake },
    { 0x627c, NULL },
    { 0x62d0, (void*)BossSst_HandReadyCharge },
    { 0x6448, NULL },
    { 0x64f4, (void*)BossSst_HandStunned },
    { 0x6650, NULL },
    { 0x66ac, (void*)BossSst_HandDamage },
    { 0x6784, NULL },
    { 0x6820, (void*)BossSst_HandThrash },
    { 0x6a14, NULL },
    { 0x6a64, (void*)BossSst_HandDarken },
    { 0x6ad8, NULL },
    { 0x6b28, (void*)BossSst_HandFall },
    { 0x6bac, NULL },
    { 0x6be8, (void*)BossSst_HandMelt },
    { 0x6c60, NULL },
    { 0x6c8c, (void*)BossSst_HandFinish },
    { 0x6cb8, NULL },
    { 0x6d0c, (void*)BossSst_HandRecover },
    { 0x6da4, NULL },
    { 0x6e70, (void*)BossSst_HandFrozen },
    { 0x6fd0, NULL },
    { 0x7084, (void*)BossSst_HandReadyBreakIce },
    { 0x71a0, NULL },
    { 0x71c8, (void*)BossSst_HandBreakIce },
    { 0x735c, (void*)BossSst_HandGrabPlayer },
    { 0x73fc, NULL },
    { 0x7480, NULL },
    { 0x760c, NULL },
    { 0x7708, NULL },
    { 0x7774, NULL },
    { 0x77b4, NULL },
    { 0x77e0, (void*)BossSst_HandCollisionCheck },
    { 0x796c, (void*)BossSst_HeadCollisionCheck },
    { 0x7ab8, (void*)BossSst_UpdateHand },
    { 0x7dc8, (void*)BossSst_UpdateHead },
    { 0x8038, NULL },
    { 0x8088, NULL },
    { 0x80c4, NULL },
    { 0x8108, (void*)BossSst_DrawHand },
    { 0x84b4, NULL },
    { 0x8cb8, NULL },
    { 0x8d60, (void*)BossSst_DrawHead },
    { 0x91b0, NULL },
    { 0x92dc, NULL },
    { 0x9390, NULL },
    { 0x946c, NULL },
    { 0x9728, NULL },
    { 0x997c, NULL },
    { 0x9b48, (void*)BossSst_UpdateEffect },
    { 0x9dec, (void*)BossSst_DrawEffect },
};
const size_t gGzBossSstFunctionCount = ARRAY_COUNT(gGzBossSstFunctions);
