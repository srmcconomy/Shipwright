// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Boss_Tw/z_boss_tw.h"

void BossTw_AddPlayerFreezeEffect(void*, void*);
void BossTw_Init(void*, void*);
void BossTw_Destroy(void*, void*);
void BossTw_SetupTurnToPlayer(void*, void*);
void BossTw_TurnToPlayer(void*, void*);
void BossTw_SetupFlyTo(void*, void*);
void BossTw_FlyTo(void*, void*);
void BossTw_SetupShootBeam(void*, void*);
void BossTw_ShootBeam(void*, void*);
void BossTw_SetupFinishBeamShoot(void*, void*);
void BossTw_FinishBeamShoot(void*, void*);
void BossTw_SetupHitByBeam(void*, void*);
void BossTw_HitByBeam(void*, void*);
void BossTw_SetupLaugh(void*, void*);
void BossTw_Laugh(void*, void*);
void BossTw_SetupSpin(void*, void*);
void BossTw_Spin(void*, void*);
void BossTw_SetupMergeCS(void*, void*);
void BossTw_MergeCS(void*, void*);
void BossTw_SetupWait(void*, void*);
void BossTw_Wait(void*, void*);
void BossTw_TwinrovaSetupMergeCS(void*, void*);
void BossTw_TwinrovaMergeCS(void*, void*);
void BossTw_SetupDeathCS(void*, void*);
void BossTw_DeathCS(void*, void*);
void BossTw_SetupCSWait(void*, void*);
void BossTw_CSWait(void*, void*);
void BossTw_TwinrovaSetupIntroCS(void*, void*);
void BossTw_TwinrovaIntroCS(void*, void*);
void BossTw_DeathBall(void*, void*);
void BossTw_TwinrovaSetupDeathCS(void*, void*);
void BossTw_DeathCSMsgSfx(void*, void*);
void BossTw_TwinrovaDeathCS(void*, void*);
void BossTw_Update(void*, void*);
void BossTw_TwinrovaUpdate(void*, void*);
void func_80941BC0(void*, void*);
void func_80942180(void*, void*);
void func_809426F0(void*, void*);
void func_80942C70(void*, void*);
void func_80943028(void*, void*);
void BossTw_Draw(void*, void*);
void BossTw_ShieldChargeDraw(void*, void*);
void BossTw_SpawnPortalDraw(void*, void*);
void func_80944C50(void*, void*);
void BossTw_TwinrovaDraw(void*, void*);
void BossTw_BlastFire(void*, void*);
void BossTw_BlastIce(void*, void*);
void BossTw_BlastUpdate(void*, void*);
void BossTw_BlastDraw(void*, void*);
void BossTw_DrawDeathBall(void*, void*);
void BossTw_TwinrovaSetupArriveAtTarget(void*, void*);
void BossTw_TwinrovaArriveAtTarget(void*, void*);
void BossTw_TwinrovaSetupChargeBlast(void*, void*);
void BossTw_TwinrovaChargeBlast(void*, void*);
void BossTw_TwinrovaSetupShootBlast(void*, void*);
void BossTw_TwinrovaShootBlast(void*, void*);
void BossTw_TwinrovaSetupDoneBlastShoot(void*, void*);
void BossTw_TwinrovaDoneBlastShoot(void*, void*);
void BossTw_TwinrovaStun(void*, void*);
void BossTw_TwinrovaSetupGetUp(void*, void*);
void BossTw_TwinrovaGetUp(void*, void*);
void BossTw_TwinrovaSetupFly(void*, void*);
void BossTw_TwinrovaFly(void*, void*);
void BossTw_TwinrovaSetupSpin(void*, void*);
void BossTw_TwinrovaSpin(void*, void*);
void BossTw_TwinrovaSetupLaugh(void*, void*);
void BossTw_TwinrovaLaugh(void*, void*);

const GzActorSpan gGzBossTwSpans[] = {
    { offsetof(BossTw, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BossTw, work[0]), offsetof(BossTw, work[1]) - offsetof(BossTw, work[0]), 0x140, 0x2, 13, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, unused_170[0]), offsetof(BossTw, unused_170[1]) - offsetof(BossTw, unused_170[0]), 0x15a, 0x1, 14, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, timers[0]), offsetof(BossTw, timers[1]) - offsetof(BossTw, timers[0]), 0x168, 0x2, 5, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, workf[0]), offsetof(BossTw, workf[1]) - offsetof(BossTw, workf[0]), 0x174, 0x4, 20, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, fogR), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, fogG), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, fogB), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, fogNear), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, fogFar), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, blastTailPos[0].x), offsetof(BossTw, blastTailPos[1].x) - offsetof(BossTw, blastTailPos[0].x), 0x1d8, 0xc, 50, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, blastTailPos[0].y), offsetof(BossTw, blastTailPos[1].y) - offsetof(BossTw, blastTailPos[0].y), 0x1dc, 0xc, 50, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, blastTailPos[0].z), offsetof(BossTw, blastTailPos[1].z) - offsetof(BossTw, blastTailPos[0].z), 0x1e0, 0xc, 50, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, csState1), 0, 0x430, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, crownPos.x), 0, 0x434, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, crownPos.y), 0, 0x438, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, crownPos.z), 0, 0x43c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, scepterFlamePos[0].x), offsetof(BossTw, scepterFlamePos[1].x) - offsetof(BossTw, scepterFlamePos[0].x), 0x440, 0xc, 5, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, scepterFlamePos[0].y), offsetof(BossTw, scepterFlamePos[1].y) - offsetof(BossTw, scepterFlamePos[0].y), 0x444, 0xc, 5, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, scepterFlamePos[0].z), offsetof(BossTw, scepterFlamePos[1].z) - offsetof(BossTw, scepterFlamePos[0].z), 0x448, 0xc, 5, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamOrigin.x), 0, 0x47c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamOrigin.y), 0, 0x480, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamOrigin.z), 0, 0x484, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, leftScepterPos.x), 0, 0x488, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, leftScepterPos.y), 0, 0x48c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, leftScepterPos.z), 0, 0x490, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, rightScepterPos.x), 0, 0x494, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, rightScepterPos.y), 0, 0x498, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, rightScepterPos.z), 0, 0x49c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, targetPos.x), 0, 0x4a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, targetPos.y), 0, 0x4a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, targetPos.z), 0, 0x4a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, groundBlastPos2.x), 0, 0x4ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, groundBlastPos2.y), 0, 0x4b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, groundBlastPos2.z), 0, 0x4b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, rotateSpeed), 0, 0x4b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, eyeTexIdx), 0, 0x4bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, leftEyeTexIdx), 0, 0x4be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, scepterAlpha), 0, 0x4c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, flameAlpha), 0, 0x4c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, spawnPortalAlpha), 0, 0x4c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_4DC), 0, 0x4cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, spawnPortalScale), 0, 0x4d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, updateRate1), 0, 0x4d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, flameRotation), 0, 0x4d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, portalRotation), 0, 0x4dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, updateRate2), 0, 0x4e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, twinrovaStun), 0, 0x4e4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamScale), 0, 0x4e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamShootState), 0, 0x4ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, groundBlastPos.x), 0, 0x4f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, groundBlastPos.y), 0, 0x4f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, groundBlastPos.z), 0, 0x4f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamReflectionOrigin.x), 0, 0x4fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamReflectionOrigin.y), 0, 0x500, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamReflectionOrigin.z), 0, 0x504, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamPitch), 0, 0x508, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamYaw), 0, 0x50c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamRoll), 0, 0x510, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, magicDir.x), 0, 0x514, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, magicDir.y), 0, 0x516, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, magicDir.z), 0, 0x518, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamDist), 0, 0x51c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_530.x), 0, 0x520, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_530.y), 0, 0x524, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_530.z), 0, 0x528, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamReflectionPitch), 0, 0x52c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamReflectionYaw), 0, 0x530, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unused_544), 0, 0x534, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, beamReflectionDist), 0, 0x538, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_54C.x), 0, 0x53c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_54C.y), 0, 0x540, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_54C.z), 0, 0x544, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_558.x), 0, 0x548, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_558.y), 0, 0x54c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_558.z), 0, 0x550, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, visible), 0, 0x554, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, blastActive), 0, 0x555, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, blastType), 0, 0x556, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.limbCount), 0, 0x558, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.mode), 0, 0x559, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.dListCount), 0, 0x55a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.taper), 0, 0x55b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.skeleton), 0, 0x55c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, skelAnime.animation), 0, 0x560, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, skelAnime.startFrame), 0, 0x564, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.endFrame), 0, 0x568, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.animLength), 0, 0x56c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.curFrame), 0, 0x570, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.playSpeed), 0, 0x574, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.jointTable), 0, 0x578, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, skelAnime.morphTable), 0, 0x57c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, skelAnime.morphWeight), 0, 0x580, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.morphRate), 0, 0x584, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.update.normal), 0, 0x588, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BossTw, skelAnime.initFlags), 0, 0x58c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.movementFlags), 0, 0x58d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.prevRot), 0, 0x58e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.prevTransl.x), 0, 0x590, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.prevTransl.y), 0, 0x592, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.prevTransl.z), 0, 0x594, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.baseTransl.x), 0, 0x596, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.baseTransl.y), 0, 0x598, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, skelAnime.baseTransl.z), 0, 0x59a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.base.actor), 0, 0x59c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, collider.base.at), 0, 0x5a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, collider.base.ac), 0, 0x5a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, collider.base.oc), 0, 0x5a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, collider.base.atFlags), 0, 0x5ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.base.acFlags), 0, 0x5ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.base.ocFlags1), 0, 0x5ae, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.base.ocFlags2), 0, 0x5af, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.base.colType), 0, 0x5b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.base.shape), 0, 0x5b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.toucher.dmgFlags), 0, 0x5b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.toucher.effect), 0, 0x5b8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.toucher.damage), 0, 0x5b9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.bumper.dmgFlags), 0, 0x5bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.bumper.effect), 0, 0x5c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.bumper.defense), 0, 0x5c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.bumper.hitPos.x), 0, 0x5c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.bumper.hitPos.y), 0, 0x5c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.bumper.hitPos.z), 0, 0x5c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.elemType), 0, 0x5c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.toucherFlags), 0, 0x5c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.bumperFlags), 0, 0x5ca, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.ocElemFlags), 0, 0x5cb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.info.atHit), 0, 0x5cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, collider.info.acHit), 0, 0x5d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, collider.info.atHitInfo), 0, 0x5d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, collider.info.acHitInfo), 0, 0x5d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BossTw, collider.dim.radius), 0, 0x5dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.dim.height), 0, 0x5de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.dim.yShift), 0, 0x5e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.dim.pos.x), 0, 0x5e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.dim.pos.y), 0, 0x5e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, collider.dim.pos.z), 0, 0x5e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_5F8), 0, 0x5e8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, unk_5F9), 0, 0x5e9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, csState2), 0, 0x5ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamId), 0, 0x5ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, csSfxTimer), 0, 0x5ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEye.x), 0, 0x5f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEye.y), 0, 0x5f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEye.z), 0, 0x5f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAt.x), 0, 0x5fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAt.y), 0, 0x600, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAt.z), 0, 0x604, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unused_618[0]), offsetof(BossTw, unused_618[1]) - offsetof(BossTw, unused_618[0]), 0x608, 0x1, 12, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEye2.x), 0, 0x614, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEye2.y), 0, 0x618, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEye2.z), 0, 0x61c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAt2.x), 0, 0x620, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAt2.y), 0, 0x624, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAt2.z), 0, 0x628, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unused_63C[0]), offsetof(BossTw, unused_63C[1]) - offsetof(BossTw, unused_63C[0]), 0x62c, 0x1, 24, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEyeStep.x), 0, 0x644, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEyeStep.y), 0, 0x648, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEyeStep.z), 0, 0x64c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAtStep.x), 0, 0x650, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAtStep.y), 0, 0x654, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAtStep.z), 0, 0x658, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEyeTarget.x), 0, 0x65c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEyeTarget.y), 0, 0x660, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamEyeTarget.z), 0, 0x664, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unused_678[0]), offsetof(BossTw, unused_678[1]) - offsetof(BossTw, unused_678[0]), 0x668, 0x1, 12, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAtTarget.x), 0, 0x674, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAtTarget.y), 0, 0x678, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamAtTarget.z), 0, 0x67c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unused_690[0]), offsetof(BossTw, unused_690[1]) - offsetof(BossTw, unused_690[0]), 0x680, 0x1, 12, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamUpdateRate), 0, 0x68c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamDistStep), 0, 0x690, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamDist), 0, 0x694, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, unused_6A8[0]), offsetof(BossTw, unused_6A8[1]) - offsetof(BossTw, unused_6A8[0]), 0x698, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamYaw), 0, 0x69c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BossTw, subCamYawStep), 0, 0x6a0, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBossTwSpanCount = ARRAY_COUNT(gGzBossTwSpans);

const GzActorFunction gGzBossTwFunctions[] = {
    { 0x0, NULL },
    { 0xf4, NULL },
    { 0x1f0, NULL },
    { 0x2f4, (void*)BossTw_AddPlayerFreezeEffect },
    { 0x3a0, NULL },
    { 0x478, NULL },
    { 0x580, NULL },
    { 0x668, NULL },
    { 0x830, NULL },
    { 0x9f8, (void*)BossTw_Init },
    { 0x1214, (void*)BossTw_Destroy },
    { 0x127c, (void*)BossTw_SetupTurnToPlayer },
    { 0x12cc, (void*)BossTw_TurnToPlayer },
    { 0x13ec, (void*)BossTw_SetupFlyTo },
    { 0x15f0, (void*)BossTw_FlyTo },
    { 0x1824, (void*)BossTw_SetupShootBeam },
    { 0x190c, NULL },
    { 0x1c88, NULL },
    { 0x1e80, NULL },
    { 0x2108, NULL },
    { 0x2230, NULL },
    { 0x2504, (void*)BossTw_ShootBeam },
    { 0x34bc, (void*)BossTw_SetupFinishBeamShoot },
    { 0x3518, (void*)BossTw_FinishBeamShoot },
    { 0x35b0, (void*)BossTw_SetupHitByBeam },
    { 0x3618, (void*)BossTw_HitByBeam },
    { 0x38e0, (void*)BossTw_SetupLaugh },
    { 0x3944, (void*)BossTw_Laugh },
    { 0x39d4, (void*)BossTw_SetupSpin },
    { 0x3a50, (void*)BossTw_Spin },
    { 0x3af0, (void*)BossTw_SetupMergeCS },
    { 0x3b3c, (void*)BossTw_MergeCS },
    { 0x3b80, (void*)BossTw_SetupWait },
    { 0x3bb8, (void*)BossTw_Wait },
    { 0x3c5c, (void*)BossTw_TwinrovaSetupMergeCS },
    { 0x3c7c, (void*)BossTw_TwinrovaMergeCS },
    { 0x4748, (void*)BossTw_SetupDeathCS },
    { 0x47b0, (void*)BossTw_DeathCS },
    { 0x48b8, (void*)BossTw_SetupCSWait },
    { 0x48f0, (void*)BossTw_CSWait },
    { 0x4900, (void*)BossTw_TwinrovaSetupIntroCS },
    { 0x4938, (void*)BossTw_TwinrovaIntroCS },
    { 0x618c, (void*)BossTw_DeathBall },
    { 0x6488, (void*)BossTw_TwinrovaSetupDeathCS },
    { 0x6544, (void*)BossTw_DeathCSMsgSfx },
    { 0x6d64, (void*)BossTw_TwinrovaDeathCS },
    { 0x7a58, (void*)BossTw_Update },
    { 0x80cc, (void*)BossTw_TwinrovaUpdate },
    { 0x8a48, NULL },
    { 0x8afc, NULL },
    { 0x8f00, (void*)func_80941BC0 },
    { 0x9458, (void*)func_80942180 },
    { 0x9938, (void*)func_809426F0 },
    { 0x9e9c, (void*)func_80942C70 },
    { 0xa208, (void*)func_80943028 },
    { 0xa40c, (void*)BossTw_Draw },
    { 0xaabc, NULL },
    { 0xaee8, NULL },
    { 0xb024, (void*)BossTw_ShieldChargeDraw },
    { 0xb884, (void*)BossTw_SpawnPortalDraw },
    { 0xbc94, (void*)func_80944C50 },
    { 0xc06c, (void*)BossTw_TwinrovaDraw },
    { 0xc3a4, (void*)BossTw_BlastFire },
    { 0xccdc, (void*)BossTw_BlastIce },
    { 0xd850, NULL },
    { 0xdae0, (void*)BossTw_BlastUpdate },
    { 0xdc5c, (void*)BossTw_BlastDraw },
    { 0xe1b8, (void*)BossTw_DrawDeathBall },
    { 0xe700, NULL },
    { 0xf458, NULL },
    { 0xf478, NULL },
    { 0xf5a0, NULL },
    { 0x103d4, (void*)BossTw_TwinrovaSetupArriveAtTarget },
    { 0x10448, (void*)BossTw_TwinrovaArriveAtTarget },
    { 0x10574, (void*)BossTw_TwinrovaSetupChargeBlast },
    { 0x105d4, (void*)BossTw_TwinrovaChargeBlast },
    { 0x107c0, (void*)BossTw_TwinrovaSetupShootBlast },
    { 0x10848, (void*)BossTw_TwinrovaShootBlast },
    { 0x10a98, (void*)BossTw_TwinrovaSetupDoneBlastShoot },
    { 0x10ae4, (void*)BossTw_TwinrovaDoneBlastShoot },
    { 0x10b7c, NULL },
    { 0x10ca8, (void*)BossTw_TwinrovaStun },
    { 0x10f5c, (void*)BossTw_TwinrovaSetupGetUp },
    { 0x10fc0, (void*)BossTw_TwinrovaGetUp },
    { 0x11054, (void*)BossTw_TwinrovaSetupFly },
    { 0x1122c, (void*)BossTw_TwinrovaFly },
    { 0x114a0, (void*)BossTw_TwinrovaSetupSpin },
    { 0x114f8, (void*)BossTw_TwinrovaSpin },
    { 0x11570, (void*)BossTw_TwinrovaSetupLaugh },
    { 0x115d4, (void*)BossTw_TwinrovaLaugh },
};
const size_t gGzBossTwFunctionCount = ARRAY_COUNT(gGzBossTwFunctions);
