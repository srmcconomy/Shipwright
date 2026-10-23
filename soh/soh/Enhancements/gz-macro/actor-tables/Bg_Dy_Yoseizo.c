// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Dy_Yoseizo/z_bg_dy_yoseizo.h"

void BgDyYoseizo_Init(void*, void*);
void BgDyYoseizo_Destroy(void*, void*);
void BgDyYoseizo_Bob(void*, void*);
void BgDyYoseizo_CheckMagicAcquired(void*, void*);
void BgDyYoseizo_ChooseType(void*, void*);
void BgDyYoseizo_SetupSpinGrow_NoReward(void*, void*);
void BgDyYoseizo_SpinGrow_NoReward(void*, void*);
void BgDyYoseizo_CompleteSpinGrow_NoReward(void*, void*);
void BgDyYoseizo_SetupGreetPlayer_NoReward(void*, void*);
void BgDyYoseizo_GreetPlayer_NoReward(void*, void*);
void BgDyYoseizo_SetupHealPlayer_NoReward(void*, void*);
void BgDyYoseizo_HealPlayer_NoReward(void*, void*);
void BgDyYoseizo_SayFarewell_NoReward(void*, void*);
void BgDyYoseizo_SetupSpinShrink(void*, void*);
void BgDyYoseizo_SpinShrink(void*, void*);
void BgDyYoseizo_Vanish(void*, void*);
void BgDyYoseizo_SetupSpinGrow_Reward(void*, void*);
void BgDyYoseizo_SpinGrowSetupGive_Reward(void*, void*);
void BgDyYoseizo_Give_Reward(void*, void*);
void BgDyYoseizo_Update(void*, void*);
void BgDyYoseizo_Draw(void*, void*);
void BgDyYoseizo_ParticleUpdate(void*, void*);
void BgDyYoseizo_ParticleDraw(void*, void*);

const GzActorSpan gGzBgDyYoseizoSpans[] = {
    { offsetof(BgDyYoseizo, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgDyYoseizo, skelAnime.limbCount), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.mode), 0, 0x141, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.dListCount), 0, 0x142, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.taper), 0, 0x143, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.skeleton), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDyYoseizo, skelAnime.animation), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDyYoseizo, skelAnime.startFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.endFrame), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.animLength), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.curFrame), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.playSpeed), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.jointTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDyYoseizo, skelAnime.morphTable), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDyYoseizo, skelAnime.morphWeight), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.morphRate), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.update.normal), 0, 0x170, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgDyYoseizo, skelAnime.initFlags), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.movementFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.prevRot), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.prevTransl.x), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.prevTransl.y), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.prevTransl.z), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.baseTransl.x), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.baseTransl.y), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, skelAnime.baseTransl.z), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, jointTable[0].x), offsetof(BgDyYoseizo, jointTable[1].x) - offsetof(BgDyYoseizo, jointTable[0].x), 0x184, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, jointTable[0].y), offsetof(BgDyYoseizo, jointTable[1].y) - offsetof(BgDyYoseizo, jointTable[0].y), 0x186, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, jointTable[0].z), offsetof(BgDyYoseizo, jointTable[1].z) - offsetof(BgDyYoseizo, jointTable[0].z), 0x188, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, morphTable[0].x), offsetof(BgDyYoseizo, morphTable[1].x) - offsetof(BgDyYoseizo, morphTable[0].x), 0x22c, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, morphTable[0].y), offsetof(BgDyYoseizo, morphTable[1].y) - offsetof(BgDyYoseizo, morphTable[0].y), 0x22e, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, morphTable[0].z), offsetof(BgDyYoseizo, morphTable[1].z) - offsetof(BgDyYoseizo, morphTable[0].z), 0x230, 0x6, 28, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, lightBallSpawned), 0, 0x2d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, giveDefenseHearts), 0, 0x2d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, healing), 0, 0x2d6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, vanishTimer), 0, 0x2d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, givingSpell), 0, 0x2da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, fountainType), 0, 0x2dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, dialogState), 0, 0x2de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, absoluteTimer), 0, 0x2e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, eyeState), 0, 0x2e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, eyeState2), 0, 0x2e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, mouthState), 0, 0x2e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, blinkTimer), 0, 0x2e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, unusedTimer), 0, 0x2ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, animationChanged), 0, 0x2ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, finishedSpinGrow), 0, 0x2ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, itemSpawned), 0, 0x2f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, healingTimer), 0, 0x2f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, warpEffectSpawned), 0, 0x2f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, refillTimer), 0, 0x2f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, scale), 0, 0x2f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, grownHeight), 0, 0x2fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, vanishHeight), 0, 0x300, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, heightFraction), 0, 0x304, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, scaleFraction), 0, 0x308, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, targetHeight), 0, 0x30c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, bobOffset), 0, 0x310, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, bobTimer), 0, 0x314, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, heightOffset), 0, 0x318, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, frameCount), 0, 0x31c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, unk_330[0]), offsetof(BgDyYoseizo, unk_330[1]) - offsetof(BgDyYoseizo, unk_330[0]), 0x320, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, headRot.x), 0, 0x324, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, headRot.y), 0, 0x326, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, headRot.z), 0, 0x328, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, torsoRot.x), 0, 0x32a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, torsoRot.y), 0, 0x32c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, torsoRot.z), 0, 0x32e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, beam), 0, 0x330, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDyYoseizo, item), 0, 0x334, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgDyYoseizo, unk_348[0]), offsetof(BgDyYoseizo, unk_348[1]) - offsetof(BgDyYoseizo, unk_348[0]), 0x338, 0x1, 76, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].alive), offsetof(BgDyYoseizo, particles[1].alive) - offsetof(BgDyYoseizo, particles[0].alive), 0x384, 0x44, 200, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].pos.x), offsetof(BgDyYoseizo, particles[1].pos.x) - offsetof(BgDyYoseizo, particles[0].pos.x), 0x388, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].pos.y), offsetof(BgDyYoseizo, particles[1].pos.y) - offsetof(BgDyYoseizo, particles[0].pos.y), 0x38c, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].pos.z), offsetof(BgDyYoseizo, particles[1].pos.z) - offsetof(BgDyYoseizo, particles[0].pos.z), 0x390, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].velocity.x), offsetof(BgDyYoseizo, particles[1].velocity.x) - offsetof(BgDyYoseizo, particles[0].velocity.x), 0x394, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].velocity.y), offsetof(BgDyYoseizo, particles[1].velocity.y) - offsetof(BgDyYoseizo, particles[0].velocity.y), 0x398, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].velocity.z), offsetof(BgDyYoseizo, particles[1].velocity.z) - offsetof(BgDyYoseizo, particles[0].velocity.z), 0x39c, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].accel.x), offsetof(BgDyYoseizo, particles[1].accel.x) - offsetof(BgDyYoseizo, particles[0].accel.x), 0x3a0, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].accel.y), offsetof(BgDyYoseizo, particles[1].accel.y) - offsetof(BgDyYoseizo, particles[0].accel.y), 0x3a4, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].accel.z), offsetof(BgDyYoseizo, particles[1].accel.z) - offsetof(BgDyYoseizo, particles[0].accel.z), 0x3a8, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].primColor.r), offsetof(BgDyYoseizo, particles[1].primColor.r) - offsetof(BgDyYoseizo, particles[0].primColor.r), 0x3ac, 0x44, 200, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].primColor.g), offsetof(BgDyYoseizo, particles[1].primColor.g) - offsetof(BgDyYoseizo, particles[0].primColor.g), 0x3ad, 0x44, 200, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].primColor.b), offsetof(BgDyYoseizo, particles[1].primColor.b) - offsetof(BgDyYoseizo, particles[0].primColor.b), 0x3ae, 0x44, 200, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].envColor.r), offsetof(BgDyYoseizo, particles[1].envColor.r) - offsetof(BgDyYoseizo, particles[0].envColor.r), 0x3af, 0x44, 200, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].envColor.g), offsetof(BgDyYoseizo, particles[1].envColor.g) - offsetof(BgDyYoseizo, particles[0].envColor.g), 0x3b0, 0x44, 200, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].envColor.b), offsetof(BgDyYoseizo, particles[1].envColor.b) - offsetof(BgDyYoseizo, particles[0].envColor.b), 0x3b1, 0x44, 200, 1, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].alpha), offsetof(BgDyYoseizo, particles[1].alpha) - offsetof(BgDyYoseizo, particles[0].alpha), 0x3b2, 0x44, 200, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].scale), offsetof(BgDyYoseizo, particles[1].scale) - offsetof(BgDyYoseizo, particles[0].scale), 0x3b4, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].timer), offsetof(BgDyYoseizo, particles[1].timer) - offsetof(BgDyYoseizo, particles[0].timer), 0x3b8, 0x44, 200, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].type), offsetof(BgDyYoseizo, particles[1].type) - offsetof(BgDyYoseizo, particles[0].type), 0x3ba, 0x44, 200, 2, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].pitch), offsetof(BgDyYoseizo, particles[1].pitch) - offsetof(BgDyYoseizo, particles[0].pitch), 0x3bc, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].yaw), offsetof(BgDyYoseizo, particles[1].yaw) - offsetof(BgDyYoseizo, particles[0].yaw), 0x3c0, 0x44, 200, 4, GZ_SPAN_VALUE },
    { offsetof(BgDyYoseizo, particles[0].roll), offsetof(BgDyYoseizo, particles[1].roll) - offsetof(BgDyYoseizo, particles[0].roll), 0x3c4, 0x44, 200, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgDyYoseizoSpanCount = ARRAY_COUNT(gGzBgDyYoseizoSpans);

const GzActorFunction gGzBgDyYoseizoFunctions[] = {
    { 0x0, (void*)BgDyYoseizo_Init },
    { 0x104, (void*)BgDyYoseizo_Destroy },
    { 0x114, NULL },
    { 0x410, (void*)BgDyYoseizo_Bob },
    { 0x4d8, (void*)BgDyYoseizo_CheckMagicAcquired },
    { 0x59c, (void*)BgDyYoseizo_ChooseType },
    { 0x998, (void*)BgDyYoseizo_SetupSpinGrow_NoReward },
    { 0xa94, (void*)BgDyYoseizo_SpinGrow_NoReward },
    { 0xbf0, (void*)BgDyYoseizo_CompleteSpinGrow_NoReward },
    { 0xca0, (void*)BgDyYoseizo_SetupGreetPlayer_NoReward },
    { 0xdb8, (void*)BgDyYoseizo_GreetPlayer_NoReward },
    { 0xe94, (void*)BgDyYoseizo_SetupHealPlayer_NoReward },
    { 0xf80, (void*)BgDyYoseizo_HealPlayer_NoReward },
    { 0x1258, (void*)BgDyYoseizo_SayFarewell_NoReward },
    { 0x1334, (void*)BgDyYoseizo_SetupSpinShrink },
    { 0x1438, (void*)BgDyYoseizo_SpinShrink },
    { 0x1528, (void*)BgDyYoseizo_Vanish },
    { 0x15cc, (void*)BgDyYoseizo_SetupSpinGrow_Reward },
    { 0x1700, (void*)BgDyYoseizo_SpinGrowSetupGive_Reward },
    { 0x1a2c, (void*)BgDyYoseizo_Give_Reward },
    { 0x207c, (void*)BgDyYoseizo_Update },
    { 0x22a8, NULL },
    { 0x2310, (void*)BgDyYoseizo_Draw },
    { 0x2498, NULL },
    { 0x25a8, (void*)BgDyYoseizo_ParticleUpdate },
    { 0x289c, (void*)BgDyYoseizo_ParticleDraw },
};
const size_t gGzBgDyYoseizoFunctionCount = ARRAY_COUNT(gGzBgDyYoseizoFunctions);
