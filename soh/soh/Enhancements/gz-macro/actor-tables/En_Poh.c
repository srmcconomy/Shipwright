// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Poh/z_en_poh.h"

void EnPoh_Init(void*, void*);
void EnPoh_Destroy(void*, void*);
void EnPoh_SetupDeath(void*, void*);
void EnPoh_Talk(void*, void*);
void EnPoh_MoveTowardsPlayerHeight(void*, void*);
void func_80ADEAC4(void*, void*);
void EnPoh_Idle(void*, void*);
void func_80ADEC9C(void*, void*);
void EnPoh_Attack(void*, void*);
void func_80ADEECC(void*, void*);
void func_80ADEF38(void*, void*);
void EnPoh_ComposerAppear(void*, void*);
void func_80ADF15C(void*, void*);
void func_80ADF574(void*, void*);
void func_80ADF5E0(void*, void*);
void EnPoh_Disappear(void*, void*);
void EnPoh_Appear(void*, void*);
void func_80ADF894(void*, void*);
void EnPoh_Death(void*, void*);
void func_80ADFE28(void*, void*);
void func_80ADFE80(void*, void*);
void func_80AE009C(void*, void*);
void EnPoh_TalkRegular(void*, void*);
void EnPoh_TalkComposer(void*, void*);
void func_80AE032C(void*, void*);
void EnPoh_Update(void*, void*);
void EnPoh_UpdateLiving(void*, void*);
void EnPoh_DrawRegular(void*, void*);
void EnPoh_DrawComposer(void*, void*);
void EnPoh_UpdateDead(void*, void*);
void EnPoh_DrawSoul(void*, void*);

const GzActorSpan gGzEnPohSpans[] = {
    { offsetof(EnPoh, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnPoh, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnPoh, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnPoh, unk_194), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, unk_195), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, objectIdx), 0, 0x186, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, infoIdx), 0, 0x187, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, unk_198), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, visibilityTimer), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, unk_19C), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, jointTable[0].x), offsetof(EnPoh, jointTable[1].x) - offsetof(EnPoh, jointTable[0].x), 0x18e, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, jointTable[0].y), offsetof(EnPoh, jointTable[1].y) - offsetof(EnPoh, jointTable[0].y), 0x190, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, jointTable[0].z), offsetof(EnPoh, jointTable[1].z) - offsetof(EnPoh, jointTable[0].z), 0x192, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, morphTable[0].x), offsetof(EnPoh, morphTable[1].x) - offsetof(EnPoh, morphTable[0].x), 0x20c, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, morphTable[0].y), offsetof(EnPoh, morphTable[1].y) - offsetof(EnPoh, morphTable[0].y), 0x20e, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, morphTable[0].z), offsetof(EnPoh, morphTable[1].z) - offsetof(EnPoh, morphTable[0].z), 0x210, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, lightColor.r), 0, 0x28a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, lightColor.g), 0, 0x28b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, lightColor.b), 0, 0x28c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, lightColor.a), 0, 0x28d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, envColor.r), 0, 0x28e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, envColor.g), 0, 0x28f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, envColor.b), 0, 0x290, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, envColor.a), 0, 0x291, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, info), 0, 0x294, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, lightNode), 0, 0x298, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, lightInfo.type), 0, 0x29c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, lightInfo.params.point.x), 0, 0x29e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, lightInfo.params.point.y), 0, 0x2a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, lightInfo.params.point.z), 0, 0x2a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, lightInfo.params.point.color[0]), offsetof(EnPoh, lightInfo.params.point.color[1]) - offsetof(EnPoh, lightInfo.params.point.color[0]), 0x2a4, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, lightInfo.params.point.drawGlow), 0, 0x2a7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, lightInfo.params.point.radius), 0, 0x2a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.base.actor), 0, 0x2ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderCyl.base.at), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderCyl.base.ac), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderCyl.base.oc), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderCyl.base.atFlags), 0, 0x2bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.base.acFlags), 0, 0x2bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.base.ocFlags1), 0, 0x2be, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.base.ocFlags2), 0, 0x2bf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.base.colType), 0, 0x2c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.base.shape), 0, 0x2c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.toucher.dmgFlags), 0, 0x2c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.toucher.effect), 0, 0x2c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.toucher.damage), 0, 0x2c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.bumper.dmgFlags), 0, 0x2cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.bumper.effect), 0, 0x2d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.bumper.defense), 0, 0x2d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.bumper.hitPos.x), 0, 0x2d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.bumper.hitPos.y), 0, 0x2d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.bumper.hitPos.z), 0, 0x2d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.elemType), 0, 0x2d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.toucherFlags), 0, 0x2d9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.bumperFlags), 0, 0x2da, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.ocElemFlags), 0, 0x2db, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.info.atHit), 0, 0x2dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderCyl.info.acHit), 0, 0x2e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderCyl.info.atHitInfo), 0, 0x2e4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderCyl.info.acHitInfo), 0, 0x2e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderCyl.dim.radius), 0, 0x2ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.dim.height), 0, 0x2ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.dim.yShift), 0, 0x2f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.dim.pos.x), 0, 0x2f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.dim.pos.y), 0, 0x2f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderCyl.dim.pos.z), 0, 0x2f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSph.base.actor), 0, 0x2f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderSph.base.at), 0, 0x2fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderSph.base.ac), 0, 0x300, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderSph.base.oc), 0, 0x304, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderSph.base.atFlags), 0, 0x308, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSph.base.acFlags), 0, 0x309, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSph.base.ocFlags1), 0, 0x30a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSph.base.ocFlags2), 0, 0x30b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSph.base.colType), 0, 0x30c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSph.base.shape), 0, 0x30d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSph.count), 0, 0x310, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSph.elements), 0, 0x314, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderSphItem.info.toucher.dmgFlags), 0, 0x318, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.toucher.effect), 0, 0x31c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.toucher.damage), 0, 0x31d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.bumper.dmgFlags), 0, 0x320, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.bumper.effect), 0, 0x324, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.bumper.defense), 0, 0x325, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.bumper.hitPos.x), 0, 0x326, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.bumper.hitPos.y), 0, 0x328, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.bumper.hitPos.z), 0, 0x32a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.elemType), 0, 0x32c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.toucherFlags), 0, 0x32d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.bumperFlags), 0, 0x32e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.ocElemFlags), 0, 0x32f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.info.atHit), 0, 0x330, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderSphItem.info.acHit), 0, 0x334, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderSphItem.info.atHitInfo), 0, 0x338, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderSphItem.info.acHitInfo), 0, 0x33c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoh, colliderSphItem.dim.modelSphere.center.x), 0, 0x340, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.dim.modelSphere.center.y), 0, 0x342, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.dim.modelSphere.center.z), 0, 0x344, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.dim.modelSphere.radius), 0, 0x346, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.dim.worldSphere.center.x), 0, 0x348, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.dim.worldSphere.center.y), 0, 0x34a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.dim.worldSphere.center.z), 0, 0x34c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.dim.worldSphere.radius), 0, 0x34e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.dim.scale), 0, 0x350, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, colliderSphItem.dim.limb), 0, 0x354, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoh, unk_368.mf[0][0]), offsetof(EnPoh, unk_368.mf[0][1]) - offsetof(EnPoh, unk_368.mf[0][0]), 0x358, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, unk_368.mf[1][0]), offsetof(EnPoh, unk_368.mf[1][1]) - offsetof(EnPoh, unk_368.mf[1][0]), 0x368, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, unk_368.mf[2][0]), offsetof(EnPoh, unk_368.mf[2][1]) - offsetof(EnPoh, unk_368.mf[2][0]), 0x378, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoh, unk_368.mf[3][0]), offsetof(EnPoh, unk_368.mf[3][1]) - offsetof(EnPoh, unk_368.mf[3][0]), 0x388, 0x4, 4, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnPohSpanCount = ARRAY_COUNT(gGzEnPohSpans);

const GzActorFunction gGzEnPohFunctions[] = {
    { 0x0, (void*)EnPoh_Init },
    { 0x348, (void*)EnPoh_Destroy },
    { 0x3c8, NULL },
    { 0x420, NULL },
    { 0x470, NULL },
    { 0x4c0, NULL },
    { 0x540, NULL },
    { 0x61c, NULL },
    { 0x690, NULL },
    { 0x740, NULL },
    { 0x780, NULL },
    { 0x7cc, NULL },
    { 0x824, NULL },
    { 0x87c, NULL },
    { 0x8c8, (void*)EnPoh_SetupDeath },
    { 0x994, NULL },
    { 0xa80, (void*)EnPoh_Talk },
    { 0xc18, NULL },
    { 0xc64, NULL },
    { 0xc8c, NULL },
    { 0xca0, (void*)EnPoh_MoveTowardsPlayerHeight },
    { 0xd34, NULL },
    { 0xda4, (void*)func_80ADEAC4 },
    { 0xe60, (void*)EnPoh_Idle },
    { 0xf7c, (void*)func_80ADEC9C },
    { 0x10e0, (void*)EnPoh_Attack },
    { 0x11b0, (void*)func_80ADEECC },
    { 0x121c, (void*)func_80ADEF38 },
    { 0x139c, (void*)EnPoh_ComposerAppear },
    { 0x1440, (void*)func_80ADF15C },
    { 0x1858, (void*)func_80ADF574 },
    { 0x18c4, (void*)func_80ADF5E0 },
    { 0x1944, (void*)EnPoh_Disappear },
    { 0x1a60, (void*)EnPoh_Appear },
    { 0x1b80, (void*)func_80ADF894 },
    { 0x1c80, (void*)EnPoh_Death },
    { 0x1d80, NULL },
    { 0x2118, (void*)func_80ADFE28 },
    { 0x2170, (void*)func_80ADFE80 },
    { 0x238c, (void*)func_80AE009C },
    { 0x23cc, (void*)EnPoh_TalkRegular },
    { 0x24f8, (void*)EnPoh_TalkComposer },
    { 0x2624, (void*)func_80AE032C },
    { 0x26bc, NULL },
    { 0x282c, (void*)EnPoh_Update },
    { 0x2978, NULL },
    { 0x2b98, NULL },
    { 0x2d18, (void*)EnPoh_UpdateLiving },
    { 0x2ef8, NULL },
    { 0x2fec, NULL },
    { 0x31dc, (void*)EnPoh_DrawRegular },
    { 0x33fc, (void*)EnPoh_DrawComposer },
    { 0x3824, (void*)EnPoh_UpdateDead },
    { 0x3878, (void*)EnPoh_DrawSoul },
};
const size_t gGzEnPohFunctionCount = ARRAY_COUNT(gGzEnPohFunctions);
