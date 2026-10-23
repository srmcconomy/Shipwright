// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Dodojr/z_en_dodojr.h"

void EnDodojr_Init(void*, void*);
void EnDodojr_Destroy(void*, void*);
void EnDodojr_UpdateCrawl(void*, void*);
void EnDodojr_UpdateCollider(void*, void*);
void EnDodojr_WaitUnderground(void*, void*);
void EnDodojr_EmergeFromGround(void*, void*);
void EnDodojr_CrawlTowardsTarget(void*, void*);
void EnDodojr_EatBomb(void*, void*);
void EnDodojr_SwallowBomb(void*, void*);
void EnDodojr_SwallowedBombDeathBounce(void*, void*);
void EnDodojr_SwallowedBombDeathSequence(void*, void*);
void EnDodojr_StunnedBounce(void*, void*);
void EnDodojr_Stunned(void*, void*);
void EnDodojr_JumpAttackBounce(void*, void*);
void EnDodojr_Despawn(void*, void*);
void EnDodojr_StandardDeathBounce(void*, void*);
void EnDodojr_DeathSequence(void*, void*);
void EnDodojr_DropItem(void*, void*);
void EnDodojr_WaitFreezeFrames(void*, void*);
void EnDodojr_Update(void*, void*);
void EnDodojr_Draw(void*, void*);

const GzActorSpan gGzEnDodojrSpans[] = {
    { offsetof(EnDodojr, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDodojr, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDodojr, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, bomb), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDodojr, headPos.x), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, headPos.y), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, headPos.z), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, dustPos.x), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, dustPos.y), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, dustPos.z), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, counter), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, timer1), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, timer2), 0, 0x1f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, timer3), 0, 0x1f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, timer4), 0, 0x1f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, rootScale), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, jointTable[0].x), offsetof(EnDodojr, jointTable[1].x) - offsetof(EnDodojr, jointTable[0].x), 0x1fc, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, jointTable[0].y), offsetof(EnDodojr, jointTable[1].y) - offsetof(EnDodojr, jointTable[0].y), 0x1fe, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, jointTable[0].z), offsetof(EnDodojr, jointTable[1].z) - offsetof(EnDodojr, jointTable[0].z), 0x200, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, morphTable[0].x), offsetof(EnDodojr, morphTable[1].x) - offsetof(EnDodojr, morphTable[0].x), 0x256, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, morphTable[0].y), offsetof(EnDodojr, morphTable[1].y) - offsetof(EnDodojr, morphTable[0].y), 0x258, 0x6, 15, 2, GZ_SPAN_VALUE },
    { offsetof(EnDodojr, morphTable[0].z), offsetof(EnDodojr, morphTable[1].z) - offsetof(EnDodojr, morphTable[0].z), 0x25a, 0x6, 15, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnDodojrSpanCount = ARRAY_COUNT(gGzEnDodojrSpans);

const GzActorFunction gGzEnDodojrFunctions[] = {
    { 0x0, (void*)EnDodojr_Init },
    { 0xe8, (void*)EnDodojr_Destroy },
    { 0x114, NULL },
    { 0x158, NULL },
    { 0x378, NULL },
    { 0x4f8, NULL },
    { 0x5dc, NULL },
    { 0x664, NULL },
    { 0x708, NULL },
    { 0x778, NULL },
    { 0x7fc, NULL },
    { 0x868, NULL },
    { 0x8e4, NULL },
    { 0xa10, NULL },
    { 0xa94, (void*)EnDodojr_UpdateCrawl },
    { 0xca8, NULL },
    { 0xcd8, NULL },
    { 0xd24, NULL },
    { 0xee0, (void*)EnDodojr_UpdateCollider },
    { 0xff0, (void*)EnDodojr_WaitUnderground },
    { 0x1108, (void*)EnDodojr_EmergeFromGround },
    { 0x11d0, (void*)EnDodojr_CrawlTowardsTarget },
    { 0x12d4, (void*)EnDodojr_EatBomb },
    { 0x1384, (void*)EnDodojr_SwallowBomb },
    { 0x13f4, (void*)EnDodojr_SwallowedBombDeathBounce },
    { 0x1494, (void*)EnDodojr_SwallowedBombDeathSequence },
    { 0x14b4, (void*)EnDodojr_StunnedBounce },
    { 0x1534, (void*)EnDodojr_Stunned },
    { 0x15e4, (void*)EnDodojr_JumpAttackBounce },
    { 0x164c, (void*)EnDodojr_Despawn },
    { 0x1704, (void*)EnDodojr_StandardDeathBounce },
    { 0x178c, (void*)EnDodojr_DeathSequence },
    { 0x1838, (void*)EnDodojr_DropItem },
    { 0x189c, (void*)EnDodojr_WaitFreezeFrames },
    { 0x18e4, (void*)EnDodojr_Update },
    { 0x19a4, NULL },
    { 0x1a50, NULL },
    { 0x1a68, (void*)EnDodojr_Draw },
};
const size_t gGzEnDodojrFunctionCount = ARRAY_COUNT(gGzEnDodojrFunctions);
