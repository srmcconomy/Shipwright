// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Goma/z_en_goma.h"

void EnGoma_Init(void*, void*);
void EnGoma_Destroy(void*, void*);
void EnGoma_Flee(void*, void*);
void EnGoma_EggFallToGround(void*, void*);
void EnGoma_Egg(void*, void*);
void EnGoma_SetupHatch(void*, void*);
void EnGoma_Hatch(void*, void*);
void EnGoma_SetupHurt(void*, void*);
void EnGoma_Hurt(void*, void*);
void EnGoma_Die(void*, void*);
void EnGoma_Dead(void*, void*);
void EnGoma_PrepareJump(void*, void*);
void EnGoma_Land(void*, void*);
void EnGoma_Jump(void*, void*);
void EnGoma_Stand(void*, void*);
void EnGoma_ChasePlayer(void*, void*);
void EnGoma_SetupStunned(void*, void*);
void EnGoma_Stunned(void*, void*);
void EnGoma_LookAtPlayer(void*, void*);
void EnGoma_UpdateHit(void*, void*);
void EnGoma_Update(void*, void*);
void EnGoma_Draw(void*, void*);
void EnGoma_Debris(void*, void*);
void EnGoma_SpawnHatchDebris(void*, void*);
void EnGoma_BossLimb(void*, void*);

const GzActorSpan gGzEnGomaSpans[] = {
    { offsetof(EnGoma, skelanime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, skelanime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, skelanime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, skelanime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, skelanime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGoma, skelanime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, skelanime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, jointTable[0].x), offsetof(EnGoma, jointTable[1].x) - offsetof(EnGoma, jointTable[0].x), 0x180, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, jointTable[0].y), offsetof(EnGoma, jointTable[1].y) - offsetof(EnGoma, jointTable[0].y), 0x182, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, jointTable[0].z), offsetof(EnGoma, jointTable[1].z) - offsetof(EnGoma, jointTable[0].z), 0x184, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, morphTable[0].x), offsetof(EnGoma, morphTable[1].x) - offsetof(EnGoma, morphTable[0].x), 0x210, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, morphTable[0].y), offsetof(EnGoma, morphTable[1].y) - offsetof(EnGoma, morphTable[0].y), 0x212, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, morphTable[0].z), offsetof(EnGoma, morphTable[1].z) - offsetof(EnGoma, morphTable[0].z), 0x214, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, actionFunc), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGoma, slopePitch), 0, 0x2a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, slopeRoll), 0, 0x2a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, gomaType), 0, 0x2a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, eyePitch), 0, 0x2aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, eyeYaw), 0, 0x2ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, hatchState), 0, 0x2ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, eggTimer), 0, 0x2b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, hurtTimer), 0, 0x2b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, visualState), 0, 0x2b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, playerDetectionTimer), 0, 0x2b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, spawnNum), 0, 0x2b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, invincibilityTimer), 0, 0x2ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, actionTimer), 0, 0x2bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, eggScale), 0, 0x2c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, eggPitch), 0, 0x2c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, eggSquishAngle), 0, 0x2c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, eggSquishAccel), 0, 0x2cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, eyeEnvColor[0]), offsetof(EnGoma, eyeEnvColor[1]) - offsetof(EnGoma, eyeEnvColor[0]), 0x2d0, 0x4, 3, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, eggSquishAmount), 0, 0x2dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, eggYOffset), 0, 0x2e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, unk_2F4), 0, 0x2e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, stunTimer), 0, 0x2e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, shieldKnockbackVel.x), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, shieldKnockbackVel.y), 0, 0x2f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, shieldKnockbackVel.z), 0, 0x2f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, bossLimbDL), 0, 0x2f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl1.base.actor), 0, 0x2fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl1.base.at), 0, 0x300, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl1.base.ac), 0, 0x304, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl1.base.oc), 0, 0x308, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl1.base.atFlags), 0, 0x30c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.base.acFlags), 0, 0x30d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.base.ocFlags1), 0, 0x30e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.base.ocFlags2), 0, 0x30f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.base.colType), 0, 0x310, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.base.shape), 0, 0x311, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.toucher.dmgFlags), 0, 0x314, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.toucher.effect), 0, 0x318, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.toucher.damage), 0, 0x319, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.bumper.dmgFlags), 0, 0x31c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.bumper.effect), 0, 0x320, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.bumper.defense), 0, 0x321, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.bumper.hitPos.x), 0, 0x322, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.bumper.hitPos.y), 0, 0x324, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.bumper.hitPos.z), 0, 0x326, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.elemType), 0, 0x328, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.toucherFlags), 0, 0x329, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.bumperFlags), 0, 0x32a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.ocElemFlags), 0, 0x32b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.info.atHit), 0, 0x32c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl1.info.acHit), 0, 0x330, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl1.info.atHitInfo), 0, 0x334, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl1.info.acHitInfo), 0, 0x338, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl1.dim.radius), 0, 0x33c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.dim.height), 0, 0x33e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.dim.yShift), 0, 0x340, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.dim.pos.x), 0, 0x342, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.dim.pos.y), 0, 0x344, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl1.dim.pos.z), 0, 0x346, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.base.actor), 0, 0x348, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl2.base.at), 0, 0x34c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl2.base.ac), 0, 0x350, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl2.base.oc), 0, 0x354, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl2.base.atFlags), 0, 0x358, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.base.acFlags), 0, 0x359, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.base.ocFlags1), 0, 0x35a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.base.ocFlags2), 0, 0x35b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.base.colType), 0, 0x35c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.base.shape), 0, 0x35d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.toucher.dmgFlags), 0, 0x360, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.toucher.effect), 0, 0x364, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.toucher.damage), 0, 0x365, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.bumper.dmgFlags), 0, 0x368, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.bumper.effect), 0, 0x36c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.bumper.defense), 0, 0x36d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.bumper.hitPos.x), 0, 0x36e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.bumper.hitPos.y), 0, 0x370, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.bumper.hitPos.z), 0, 0x372, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.elemType), 0, 0x374, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.toucherFlags), 0, 0x375, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.bumperFlags), 0, 0x376, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.ocElemFlags), 0, 0x377, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.info.atHit), 0, 0x378, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl2.info.acHit), 0, 0x37c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl2.info.atHitInfo), 0, 0x380, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl2.info.acHitInfo), 0, 0x384, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGoma, colCyl2.dim.radius), 0, 0x388, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.dim.height), 0, 0x38a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.dim.yShift), 0, 0x38c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.dim.pos.x), 0, 0x38e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.dim.pos.y), 0, 0x390, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGoma, colCyl2.dim.pos.z), 0, 0x392, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnGomaSpanCount = ARRAY_COUNT(gGzEnGomaSpans);

const GzActorFunction gGzEnGomaFunctions[] = {
    { 0x0, (void*)EnGoma_Init },
    { 0x38c, (void*)EnGoma_Destroy },
    { 0x3dc, NULL },
    { 0x480, (void*)EnGoma_Flee },
    { 0x520, (void*)EnGoma_EggFallToGround },
    { 0x7ac, (void*)EnGoma_Egg },
    { 0x9ec, (void*)EnGoma_SetupHatch },
    { 0xab4, (void*)EnGoma_Hatch },
    { 0xafc, (void*)EnGoma_SetupHurt },
    { 0xbe8, (void*)EnGoma_Hurt },
    { 0xc70, NULL },
    { 0xd30, (void*)EnGoma_Die },
    { 0xdd4, NULL },
    { 0xe4c, (void*)EnGoma_Dead },
    { 0xfbc, NULL },
    { 0x1048, NULL },
    { 0x10c8, NULL },
    { 0x1144, (void*)EnGoma_PrepareJump },
    { 0x11dc, NULL },
    { 0x1254, (void*)EnGoma_Land },
    { 0x12c0, NULL },
    { 0x1368, (void*)EnGoma_Jump },
    { 0x1420, (void*)EnGoma_Stand },
    { 0x149c, (void*)EnGoma_ChasePlayer },
    { 0x15a4, (void*)EnGoma_SetupStunned },
    { 0x1640, (void*)EnGoma_Stunned },
    { 0x1740, (void*)EnGoma_LookAtPlayer },
    { 0x17ec, (void*)EnGoma_UpdateHit },
    { 0x1a1c, NULL },
    { 0x1aac, NULL },
    { 0x1bc0, (void*)EnGoma_Update },
    { 0x1e0c, NULL },
    { 0x1f68, NULL },
    { 0x1fc0, (void*)EnGoma_Draw },
    { 0x2444, (void*)EnGoma_Debris },
    { 0x2488, (void*)EnGoma_SpawnHatchDebris },
    { 0x25ec, (void*)EnGoma_BossLimb },
};
const size_t gGzEnGomaFunctionCount = ARRAY_COUNT(gGzEnGomaFunctions);
