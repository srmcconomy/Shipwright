// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Arrow/z_en_arrow.h"

void EnArrow_Init(void*, void*);
void EnArrow_Destroy(void*, void*);
void EnArrow_Shoot(void*, void*);
void func_809B3CEC(void*, void*);
void EnArrow_CarryActor(void*, void*);
void EnArrow_Fly(void*, void*);
void func_809B45E0(void*, void*);
void func_809B4640(void*, void*);
void EnArrow_Update(void*, void*);
void func_809B4800(void*, void*);
void EnArrow_Draw(void*, void*);

const GzActorSpan gGzEnArrowSpans[] = {
    { offsetof(EnArrow, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnArrow, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.base.actor), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, collider.base.at), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, collider.base.ac), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, collider.base.oc), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, collider.base.atFlags), 0, 0x190, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.base.acFlags), 0, 0x191, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.base.ocFlags1), 0, 0x192, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.base.ocFlags2), 0, 0x193, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.base.colType), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.base.shape), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.toucher.dmgFlags), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.toucher.effect), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.toucher.damage), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.bumper.dmgFlags), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.bumper.effect), 0, 0x1a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.bumper.defense), 0, 0x1a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.bumper.hitPos.x), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.bumper.hitPos.y), 0, 0x1a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.bumper.hitPos.z), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.elemType), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.toucherFlags), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.bumperFlags), 0, 0x1ae, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.ocElemFlags), 0, 0x1af, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.info.atHit), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, collider.info.acHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, collider.info.atHitInfo), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, collider.info.acHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, collider.dim.quad[0].x), offsetof(EnArrow, collider.dim.quad[1].x) - offsetof(EnArrow, collider.dim.quad[0].x), 0x1c0, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.dim.quad[0].y), offsetof(EnArrow, collider.dim.quad[1].y) - offsetof(EnArrow, collider.dim.quad[0].y), 0x1c4, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.dim.quad[0].z), offsetof(EnArrow, collider.dim.quad[1].z) - offsetof(EnArrow, collider.dim.quad[0].z), 0x1c8, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.dim.dcMid.x), 0, 0x1f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.dim.dcMid.y), 0, 0x1f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.dim.dcMid.z), 0, 0x1f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.dim.baMid.x), 0, 0x1f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.dim.baMid.y), 0, 0x1f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.dim.baMid.z), 0, 0x1fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnArrow, collider.dim.acDist), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, unk_210.x), 0, 0x200, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, unk_210.y), 0, 0x204, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, unk_210.z), 0, 0x208, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, unk_21C.x), 0, 0x20c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, unk_21C.y), 0, 0x210, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, unk_21C.z), 0, 0x214, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, effectIndex), 0, 0x218, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, weaponInfo.active), 0, 0x21c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, weaponInfo.tip.x), 0, 0x220, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, weaponInfo.tip.y), 0, 0x224, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, weaponInfo.tip.z), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, weaponInfo.base.x), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, weaponInfo.base.y), 0, 0x230, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, weaponInfo.base.z), 0, 0x234, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, timer), 0, 0x238, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, hitFlags), 0, 0x239, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, touchedPoly), 0, 0x23a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, isCsNut), 0, 0x23b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnArrow, hitActor), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnArrow, unk_250.x), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, unk_250.y), 0, 0x244, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, unk_250.z), 0, 0x248, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArrow, actionFunc), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnArrowSpanCount = ARRAY_COUNT(gGzEnArrowSpans);

const GzActorFunction gGzEnArrowFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnArrow_Init },
    { 0x214, (void*)EnArrow_Destroy },
    { 0x29c, (void*)EnArrow_Shoot },
    { 0x3b4, (void*)func_809B3CEC },
    { 0x49c, (void*)EnArrow_CarryActor },
    { 0x6a0, (void*)EnArrow_Fly },
    { 0xca8, (void*)func_809B45E0 },
    { 0xd08, (void*)func_809B4640 },
    { 0xd70, (void*)EnArrow_Update },
    { 0xecc, (void*)func_809B4800 },
    { 0x1034, (void*)EnArrow_Draw },
};
const size_t gGzEnArrowFunctionCount = ARRAY_COUNT(gGzEnArrowFunctions);
