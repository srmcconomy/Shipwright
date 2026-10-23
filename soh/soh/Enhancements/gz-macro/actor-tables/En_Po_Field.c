// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Po_Field/z_en_po_field.h"

void EnPoField_Init(void*, void*);
void EnPoField_Destroy(void*, void*);
void EnPoField_SetupWaitForSpawn(void*, void*);
void EnPoField_SetupCirclePlayer(void*, void*);
void EnPoField_SetupSoulIdle(void*, void*);
void EnPoField_CorrectYPos(void*, void*);
void EnPoField_WaitForSpawn(void*, void*);
void EnPoField_Appear(void*, void*);
void EnPoField_CirclePlayer(void*, void*);
void EnPoField_Flee(void*, void*);
void EnPoField_Damage(void*, void*);
void EnPoField_Death(void*, void*);
void EnPoField_Disappear(void*, void*);
void EnPoField_SoulIdle(void*, void*);
void func_80AD587C(void*, void*);
void func_80AD58D4(void*, void*);
void EnPoField_SoulDisappear(void*, void*);
void EnPoField_SoulInteract(void*, void*);
void EnPoField_TestForDamage(void*, void*);
void EnPoField_UpdateFlame(void*, void*);
void EnPoField_DrawFlame(void*, void*);
void EnPoField_Update(void*, void*);
void EnPoField_Draw(void*, void*);
void EnPoField_UpdateDead(void*, void*);
void EnPoField_DrawSoul(void*, void*);

const GzActorSpan gGzEnPoFieldSpans[] = {
    { offsetof(EnPoField, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnPoField, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnPoField, unk_194), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, spawnFlagIndex), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, actionTimer), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameRotation), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameTimer), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, jointTable[0].x), offsetof(EnPoField, jointTable[1].x) - offsetof(EnPoField, jointTable[0].x), 0x18c, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, jointTable[0].y), offsetof(EnPoField, jointTable[1].y) - offsetof(EnPoField, jointTable[0].y), 0x18e, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, jointTable[0].z), offsetof(EnPoField, jointTable[1].z) - offsetof(EnPoField, jointTable[0].z), 0x190, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, morphTable[0].x), offsetof(EnPoField, morphTable[1].x) - offsetof(EnPoField, morphTable[0].x), 0x1c8, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, morphTable[0].y), offsetof(EnPoField, morphTable[1].y) - offsetof(EnPoField, morphTable[0].y), 0x1ca, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, morphTable[0].z), offsetof(EnPoField, morphTable[1].z) - offsetof(EnPoField, morphTable[0].z), 0x1cc, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightColor.r), 0, 0x204, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightColor.g), 0, 0x205, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightColor.b), 0, 0x206, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightColor.a), 0, 0x207, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, soulColor.r), 0, 0x208, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, soulColor.g), 0, 0x209, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, soulColor.b), 0, 0x20a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, soulColor.a), 0, 0x20b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, scaleModifier), 0, 0x20c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameScale), 0, 0x210, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flamePosition.x), 0, 0x214, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flamePosition.y), 0, 0x218, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flamePosition.z), 0, 0x21c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightNode), 0, 0x220, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, lightInfo.type), 0, 0x224, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightInfo.params.point.x), 0, 0x226, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightInfo.params.point.y), 0, 0x228, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightInfo.params.point.z), 0, 0x22a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightInfo.params.point.color[0]), offsetof(EnPoField, lightInfo.params.point.color[1]) - offsetof(EnPoField, lightInfo.params.point.color[0]), 0x22c, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightInfo.params.point.drawGlow), 0, 0x22f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, lightInfo.params.point.radius), 0, 0x230, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.base.actor), 0, 0x234, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, collider.base.at), 0, 0x238, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, collider.base.ac), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, collider.base.oc), 0, 0x240, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, collider.base.atFlags), 0, 0x244, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.base.acFlags), 0, 0x245, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.base.ocFlags1), 0, 0x246, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.base.ocFlags2), 0, 0x247, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.base.colType), 0, 0x248, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.base.shape), 0, 0x249, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.toucher.dmgFlags), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.toucher.effect), 0, 0x250, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.toucher.damage), 0, 0x251, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.bumper.dmgFlags), 0, 0x254, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.bumper.effect), 0, 0x258, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.bumper.defense), 0, 0x259, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.bumper.hitPos.x), 0, 0x25a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.bumper.hitPos.y), 0, 0x25c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.bumper.hitPos.z), 0, 0x25e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.elemType), 0, 0x260, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.toucherFlags), 0, 0x261, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.bumperFlags), 0, 0x262, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.ocElemFlags), 0, 0x263, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.info.atHit), 0, 0x264, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, collider.info.acHit), 0, 0x268, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, collider.info.atHitInfo), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, collider.info.acHitInfo), 0, 0x270, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, collider.dim.radius), 0, 0x274, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.dim.height), 0, 0x276, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.dim.yShift), 0, 0x278, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.dim.pos.x), 0, 0x27a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.dim.pos.y), 0, 0x27c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, collider.dim.pos.z), 0, 0x27e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.base.actor), 0, 0x280, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, flameCollider.base.at), 0, 0x284, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, flameCollider.base.ac), 0, 0x288, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, flameCollider.base.oc), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, flameCollider.base.atFlags), 0, 0x290, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.base.acFlags), 0, 0x291, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.base.ocFlags1), 0, 0x292, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.base.ocFlags2), 0, 0x293, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.base.colType), 0, 0x294, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.base.shape), 0, 0x295, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.toucher.dmgFlags), 0, 0x298, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.toucher.effect), 0, 0x29c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.toucher.damage), 0, 0x29d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.bumper.dmgFlags), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.bumper.effect), 0, 0x2a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.bumper.defense), 0, 0x2a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.bumper.hitPos.x), 0, 0x2a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.bumper.hitPos.y), 0, 0x2a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.bumper.hitPos.z), 0, 0x2aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.elemType), 0, 0x2ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.toucherFlags), 0, 0x2ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.bumperFlags), 0, 0x2ae, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.ocElemFlags), 0, 0x2af, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.info.atHit), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, flameCollider.info.acHit), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, flameCollider.info.atHitInfo), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, flameCollider.info.acHitInfo), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoField, flameCollider.dim.radius), 0, 0x2c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.dim.height), 0, 0x2c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.dim.yShift), 0, 0x2c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.dim.pos.x), 0, 0x2c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.dim.pos.y), 0, 0x2c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoField, flameCollider.dim.pos.z), 0, 0x2ca, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnPoFieldSpanCount = ARRAY_COUNT(gGzEnPoFieldSpans);

const GzActorFunction gGzEnPoFieldFunctions[] = {
    { 0x0, (void*)EnPoField_Init },
    { 0x208, (void*)EnPoField_Destroy },
    { 0x268, (void*)EnPoField_SetupWaitForSpawn },
    { 0x32c, NULL },
    { 0x44c, (void*)EnPoField_SetupCirclePlayer },
    { 0x4f4, NULL },
    { 0x588, NULL },
    { 0x644, NULL },
    { 0x698, NULL },
    { 0x710, (void*)EnPoField_SetupSoulIdle },
    { 0x7c0, NULL },
    { 0x894, NULL },
    { 0x94c, NULL },
    { 0x960, NULL },
    { 0x988, (void*)EnPoField_CorrectYPos },
    { 0xa6c, NULL },
    { 0xb7c, (void*)EnPoField_WaitForSpawn },
    { 0xde4, (void*)EnPoField_Appear },
    { 0xf80, (void*)EnPoField_CirclePlayer },
    { 0x11c0, (void*)EnPoField_Flee },
    { 0x1364, (void*)EnPoField_Damage },
    { 0x13f4, (void*)EnPoField_Death },
    { 0x180c, (void*)EnPoField_Disappear },
    { 0x190c, (void*)EnPoField_SoulIdle },
    { 0x19f0, NULL },
    { 0x1d98, (void*)func_80AD587C },
    { 0x1df0, (void*)func_80AD58D4 },
    { 0x1ff4, (void*)EnPoField_SoulDisappear },
    { 0x2034, (void*)EnPoField_SoulInteract },
    { 0x2194, (void*)EnPoField_TestForDamage },
    { 0x222c, NULL },
    { 0x2280, (void*)EnPoField_UpdateFlame },
    { 0x23ac, (void*)EnPoField_DrawFlame },
    { 0x2684, NULL },
    { 0x2818, NULL },
    { 0x298c, (void*)EnPoField_Update },
    { 0x2ab8, NULL },
    { 0x2bc0, NULL },
    { 0x2dd0, (void*)EnPoField_Draw },
    { 0x30ac, (void*)EnPoField_UpdateDead },
    { 0x3108, (void*)EnPoField_DrawSoul },
};
const size_t gGzEnPoFieldFunctionCount = ARRAY_COUNT(gGzEnPoFieldFunctions);
