// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Karebaba/z_en_karebaba.h"

void EnKarebaba_Init(void*, void*);
void EnKarebaba_Destroy(void*, void*);
void EnKarebaba_SetupDeadItemDrop(void*, void*);
void EnKarebaba_Grow(void*, void*);
void EnKarebaba_Idle(void*, void*);
void EnKarebaba_Awaken(void*, void*);
void EnKarebaba_Upright(void*, void*);
void EnKarebaba_Spin(void*, void*);
void EnKarebaba_Dying(void*, void*);
void EnKarebaba_DeadItemDrop(void*, void*);
void EnKarebaba_Retract(void*, void*);
void EnKarebaba_Dead(void*, void*);
void EnKarebaba_Regrow(void*, void*);
void EnKarebaba_Update(void*, void*);
void EnKarebaba_DrawBaseShadow(void*, void*);
void EnKarebaba_Draw(void*, void*);

const GzActorSpan gGzEnKarebabaSpans[] = {
    { offsetof(EnKarebaba, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnKarebaba, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKarebaba, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKarebaba, jointTable[0].x), offsetof(EnKarebaba, jointTable[1].x) - offsetof(EnKarebaba, jointTable[0].x), 0x184, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, jointTable[0].y), offsetof(EnKarebaba, jointTable[1].y) - offsetof(EnKarebaba, jointTable[0].y), 0x186, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, jointTable[0].z), offsetof(EnKarebaba, jointTable[1].z) - offsetof(EnKarebaba, jointTable[0].z), 0x188, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, morphTable[0].x), offsetof(EnKarebaba, morphTable[1].x) - offsetof(EnKarebaba, morphTable[0].x), 0x1b4, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, morphTable[0].y), offsetof(EnKarebaba, morphTable[1].y) - offsetof(EnKarebaba, morphTable[0].y), 0x1b6, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, morphTable[0].z), offsetof(EnKarebaba, morphTable[1].z) - offsetof(EnKarebaba, morphTable[0].z), 0x1b8, 0x6, 8, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, boundFloor), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, headCollider.base.actor), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, headCollider.base.at), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, headCollider.base.ac), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, headCollider.base.oc), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, headCollider.base.atFlags), 0, 0x1f8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.base.acFlags), 0, 0x1f9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.base.ocFlags1), 0, 0x1fa, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.base.ocFlags2), 0, 0x1fb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.base.colType), 0, 0x1fc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.base.shape), 0, 0x1fd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.toucher.dmgFlags), 0, 0x200, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.toucher.effect), 0, 0x204, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.toucher.damage), 0, 0x205, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.bumper.dmgFlags), 0, 0x208, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.bumper.effect), 0, 0x20c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.bumper.defense), 0, 0x20d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.bumper.hitPos.x), 0, 0x20e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.bumper.hitPos.y), 0, 0x210, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.bumper.hitPos.z), 0, 0x212, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.elemType), 0, 0x214, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.toucherFlags), 0, 0x215, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.bumperFlags), 0, 0x216, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.ocElemFlags), 0, 0x217, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.info.atHit), 0, 0x218, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, headCollider.info.acHit), 0, 0x21c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, headCollider.info.atHitInfo), 0, 0x220, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, headCollider.info.acHitInfo), 0, 0x224, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, headCollider.dim.radius), 0, 0x228, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.dim.height), 0, 0x22a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.dim.yShift), 0, 0x22c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.dim.pos.x), 0, 0x22e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.dim.pos.y), 0, 0x230, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, headCollider.dim.pos.z), 0, 0x232, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.base.actor), 0, 0x234, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, bodyCollider.base.at), 0, 0x238, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, bodyCollider.base.ac), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, bodyCollider.base.oc), 0, 0x240, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, bodyCollider.base.atFlags), 0, 0x244, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.base.acFlags), 0, 0x245, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.base.ocFlags1), 0, 0x246, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.base.ocFlags2), 0, 0x247, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.base.colType), 0, 0x248, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.base.shape), 0, 0x249, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.toucher.dmgFlags), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.toucher.effect), 0, 0x250, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.toucher.damage), 0, 0x251, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.bumper.dmgFlags), 0, 0x254, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.bumper.effect), 0, 0x258, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.bumper.defense), 0, 0x259, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.bumper.hitPos.x), 0, 0x25a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.bumper.hitPos.y), 0, 0x25c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.bumper.hitPos.z), 0, 0x25e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.elemType), 0, 0x260, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.toucherFlags), 0, 0x261, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.bumperFlags), 0, 0x262, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.ocElemFlags), 0, 0x263, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.info.atHit), 0, 0x264, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, bodyCollider.info.acHit), 0, 0x268, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, bodyCollider.info.atHitInfo), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, bodyCollider.info.acHitInfo), 0, 0x270, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKarebaba, bodyCollider.dim.radius), 0, 0x274, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.dim.height), 0, 0x276, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.dim.yShift), 0, 0x278, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.dim.pos.x), 0, 0x27a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.dim.pos.y), 0, 0x27c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKarebaba, bodyCollider.dim.pos.z), 0, 0x27e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnKarebabaSpanCount = ARRAY_COUNT(gGzEnKarebabaSpans);

const GzActorFunction gGzEnKarebabaFunctions[] = {
    { 0x0, (void*)EnKarebaba_Init },
    { 0x134, (void*)EnKarebaba_Destroy },
    { 0x174, NULL },
    { 0x1b0, NULL },
    { 0x200, NULL },
    { 0x254, NULL },
    { 0x2d0, NULL },
    { 0x370, NULL },
    { 0x38c, NULL },
    { 0x400, (void*)EnKarebaba_SetupDeadItemDrop },
    { 0x4a0, NULL },
    { 0x520, NULL },
    { 0x5ac, NULL },
    { 0x600, (void*)EnKarebaba_Grow },
    { 0x698, (void*)EnKarebaba_Idle },
    { 0x6f8, (void*)EnKarebaba_Awaken },
    { 0x7cc, (void*)EnKarebaba_Upright },
    { 0x8c0, (void*)EnKarebaba_Spin },
    { 0xa54, (void*)EnKarebaba_Dying },
    { 0xd0c, (void*)EnKarebaba_DeadItemDrop },
    { 0xd74, (void*)EnKarebaba_Retract },
    { 0xe48, (void*)EnKarebaba_Dead },
    { 0xea0, (void*)EnKarebaba_Regrow },
    { 0xf6c, (void*)EnKarebaba_Update },
    { 0x1120, (void*)EnKarebaba_DrawBaseShadow },
    { 0x120c, (void*)EnKarebaba_Draw },
};
const size_t gGzEnKarebabaFunctionCount = ARRAY_COUNT(gGzEnKarebabaFunctions);
