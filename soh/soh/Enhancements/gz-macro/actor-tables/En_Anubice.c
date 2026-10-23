// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Anubice/z_en_anubice.h"

void EnAnubice_Hover(void*, void*);
void EnAnubice_SetFireballRot(void*, void*);
void EnAnubice_Init(void*, void*);
void EnAnubice_Destroy(void*, void*);
void EnAnubice_FindFlameCircles(void*, void*);
void EnAnubice_SetupIdle(void*, void*);
void EnAnubice_Idle(void*, void*);
void EnAnubice_GoToHome(void*, void*);
void EnAnubice_SetupShootFireball(void*, void*);
void EnAnubice_ShootFireball(void*, void*);
void EnAnubice_SetupDie(void*, void*);
void EnAnubice_Die(void*, void*);
void EnAnubice_Update(void*, void*);
void EnAnubice_Draw(void*, void*);

const GzActorSpan gGzEnAnubiceSpans[] = {
    { offsetof(EnAnubice, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnAnubice, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, jointTable[0].x), offsetof(EnAnubice, jointTable[1].x) - offsetof(EnAnubice, jointTable[0].x), 0x180, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, jointTable[0].y), offsetof(EnAnubice, jointTable[1].y) - offsetof(EnAnubice, jointTable[0].y), 0x182, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, jointTable[0].z), offsetof(EnAnubice, jointTable[1].z) - offsetof(EnAnubice, jointTable[0].z), 0x184, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, morphTable[0].x), offsetof(EnAnubice, morphTable[1].x) - offsetof(EnAnubice, morphTable[0].x), 0x1e0, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, morphTable[0].y), offsetof(EnAnubice, morphTable[1].y) - offsetof(EnAnubice, morphTable[0].y), 0x1e2, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, morphTable[0].z), offsetof(EnAnubice, morphTable[1].z) - offsetof(EnAnubice, morphTable[0].z), 0x1e4, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, actionFunc), 0, 0x240, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnAnubice, timeAlive), 0, 0x244, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, isFallingOver), 0, 0x246, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, fallTargetPitch), 0, 0x248, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, deathTimer), 0, 0x24a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, knockbackTimer), 0, 0x24c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, isMirroringLink), 0, 0x24e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, isLinkOutOfRange), 0, 0x250, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, isKnockedback), 0, 0x252, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, hasSearchedForFlameCircles), 0, 0x254, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, hoverVelocityTimer), 0, 0x258, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, animLastFrame), 0, 0x25c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, targetHeight), 0, 0x260, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, playerHeightOffset), 0, 0x264, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, headRot), 0, 0x268, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, focusHeightOffset), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, fireballPos.x), 0, 0x270, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, fireballPos.y), 0, 0x274, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, fireballPos.z), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, fireballRot.x), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, fireballRot.y), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, fireballRot.z), 0, 0x284, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, home.x), 0, 0x288, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, home.y), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, home.z), 0, 0x290, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, knockbackRecoveryVelocity.x), 0, 0x294, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, knockbackRecoveryVelocity.y), 0, 0x298, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, knockbackRecoveryVelocity.z), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, flameCircles[0]), offsetof(EnAnubice, flameCircles[1]) - offsetof(EnAnubice, flameCircles[0]), 0x2a0, 0x4, 5, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, unk_2C4[0]), offsetof(EnAnubice, unk_2C4[1]) - offsetof(EnAnubice, unk_2C4[0]), 0x2b4, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.base.actor), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, collider.base.at), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, collider.base.ac), 0, 0x2c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, collider.base.oc), 0, 0x2c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, collider.base.atFlags), 0, 0x2c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.base.acFlags), 0, 0x2c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.base.ocFlags1), 0, 0x2ca, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.base.ocFlags2), 0, 0x2cb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.base.colType), 0, 0x2cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.base.shape), 0, 0x2cd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.toucher.dmgFlags), 0, 0x2d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.toucher.effect), 0, 0x2d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.toucher.damage), 0, 0x2d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.bumper.dmgFlags), 0, 0x2d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.bumper.effect), 0, 0x2dc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.bumper.defense), 0, 0x2dd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.bumper.hitPos.x), 0, 0x2de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.bumper.hitPos.y), 0, 0x2e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.bumper.hitPos.z), 0, 0x2e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.elemType), 0, 0x2e4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.toucherFlags), 0, 0x2e5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.bumperFlags), 0, 0x2e6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.ocElemFlags), 0, 0x2e7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.info.atHit), 0, 0x2e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, collider.info.acHit), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, collider.info.atHitInfo), 0, 0x2f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, collider.info.acHitInfo), 0, 0x2f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubice, collider.dim.radius), 0, 0x2f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.dim.height), 0, 0x2fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.dim.yShift), 0, 0x2fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.dim.pos.x), 0, 0x2fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.dim.pos.y), 0, 0x300, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubice, collider.dim.pos.z), 0, 0x302, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnAnubiceSpanCount = ARRAY_COUNT(gGzEnAnubiceSpans);

const GzActorFunction gGzEnAnubiceFunctions[] = {
    { 0x0, (void*)EnAnubice_Hover },
    { 0xa4, (void*)EnAnubice_SetFireballRot },
    { 0x184, (void*)EnAnubice_Init },
    { 0x29c, (void*)EnAnubice_Destroy },
    { 0x2f8, (void*)EnAnubice_FindFlameCircles },
    { 0x380, (void*)EnAnubice_SetupIdle },
    { 0x428, (void*)EnAnubice_Idle },
    { 0x508, (void*)EnAnubice_GoToHome },
    { 0x658, (void*)EnAnubice_SetupShootFireball },
    { 0x6e0, (void*)EnAnubice_ShootFireball },
    { 0x7e0, (void*)EnAnubice_SetupDie },
    { 0x8b0, (void*)EnAnubice_Die },
    { 0xb64, (void*)EnAnubice_Update },
    { 0xf68, NULL },
    { 0xfb4, NULL },
    { 0x1070, (void*)EnAnubice_Draw },
};
const size_t gGzEnAnubiceFunctionCount = ARRAY_COUNT(gGzEnAnubiceFunctions);
