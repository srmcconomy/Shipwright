// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Brob/z_en_brob.h"

void EnBrob_Init(void*, void*);
void EnBrob_Destroy(void*, void*);
void EnBrob_SetupIdle(void*, void*);
void EnBrob_SetupMoveUp(void*, void*);
void EnBrob_Idle(void*, void*);
void EnBrob_MoveUp(void*, void*);
void EnBrob_Wobble(void*, void*);
void EnBrob_Stunned(void*, void*);
void EnBrob_MoveDown(void*, void*);
void EnBrob_Shock(void*, void*);
void EnBrob_Update(void*, void*);
void EnBrob_Draw(void*, void*);

const GzActorSpan gGzEnBrobSpans[] = {
    { offsetof(EnBrob, skelAnime.limbCount), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.mode), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.dListCount), 0, 0x156, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.taper), 0, 0x157, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.skeleton), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, skelAnime.animation), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, skelAnime.startFrame), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.endFrame), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.animLength), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.curFrame), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.playSpeed), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.jointTable), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, skelAnime.morphTable), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, skelAnime.morphWeight), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.morphRate), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.update.normal), 0, 0x184, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBrob, skelAnime.initFlags), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.movementFlags), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.prevRot), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.prevTransl.x), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.prevTransl.y), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.prevTransl.z), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.baseTransl.x), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.baseTransl.y), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, skelAnime.baseTransl.z), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, actionFunc), 0, 0x198, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBrob, timer), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, modelOffsetY), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, jointTable[0].x), offsetof(EnBrob, jointTable[1].x) - offsetof(EnBrob, jointTable[0].x), 0x1a0, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, jointTable[0].y), offsetof(EnBrob, jointTable[1].y) - offsetof(EnBrob, jointTable[0].y), 0x1a2, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, jointTable[0].z), offsetof(EnBrob, jointTable[1].z) - offsetof(EnBrob, jointTable[0].z), 0x1a4, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, morphTable[0].x), offsetof(EnBrob, morphTable[1].x) - offsetof(EnBrob, morphTable[0].x), 0x1dc, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, morphTable[0].y), offsetof(EnBrob, morphTable[1].y) - offsetof(EnBrob, morphTable[0].y), 0x1de, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, morphTable[0].z), offsetof(EnBrob, morphTable[1].z) - offsetof(EnBrob, morphTable[0].z), 0x1e0, 0x6, 10, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].base.actor), offsetof(EnBrob, colliders[1].base.actor) - offsetof(EnBrob, colliders[0].base.actor), 0x218, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, colliders[0].base.at), offsetof(EnBrob, colliders[1].base.at) - offsetof(EnBrob, colliders[0].base.at), 0x21c, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, colliders[0].base.ac), offsetof(EnBrob, colliders[1].base.ac) - offsetof(EnBrob, colliders[0].base.ac), 0x220, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, colliders[0].base.oc), offsetof(EnBrob, colliders[1].base.oc) - offsetof(EnBrob, colliders[0].base.oc), 0x224, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, colliders[0].base.atFlags), offsetof(EnBrob, colliders[1].base.atFlags) - offsetof(EnBrob, colliders[0].base.atFlags), 0x228, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].base.acFlags), offsetof(EnBrob, colliders[1].base.acFlags) - offsetof(EnBrob, colliders[0].base.acFlags), 0x229, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].base.ocFlags1), offsetof(EnBrob, colliders[1].base.ocFlags1) - offsetof(EnBrob, colliders[0].base.ocFlags1), 0x22a, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].base.ocFlags2), offsetof(EnBrob, colliders[1].base.ocFlags2) - offsetof(EnBrob, colliders[0].base.ocFlags2), 0x22b, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].base.colType), offsetof(EnBrob, colliders[1].base.colType) - offsetof(EnBrob, colliders[0].base.colType), 0x22c, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].base.shape), offsetof(EnBrob, colliders[1].base.shape) - offsetof(EnBrob, colliders[0].base.shape), 0x22d, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.toucher.dmgFlags), offsetof(EnBrob, colliders[1].info.toucher.dmgFlags) - offsetof(EnBrob, colliders[0].info.toucher.dmgFlags), 0x230, 0x4c, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.toucher.effect), offsetof(EnBrob, colliders[1].info.toucher.effect) - offsetof(EnBrob, colliders[0].info.toucher.effect), 0x234, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.toucher.damage), offsetof(EnBrob, colliders[1].info.toucher.damage) - offsetof(EnBrob, colliders[0].info.toucher.damage), 0x235, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.bumper.dmgFlags), offsetof(EnBrob, colliders[1].info.bumper.dmgFlags) - offsetof(EnBrob, colliders[0].info.bumper.dmgFlags), 0x238, 0x4c, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.bumper.effect), offsetof(EnBrob, colliders[1].info.bumper.effect) - offsetof(EnBrob, colliders[0].info.bumper.effect), 0x23c, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.bumper.defense), offsetof(EnBrob, colliders[1].info.bumper.defense) - offsetof(EnBrob, colliders[0].info.bumper.defense), 0x23d, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.bumper.hitPos.x), offsetof(EnBrob, colliders[1].info.bumper.hitPos.x) - offsetof(EnBrob, colliders[0].info.bumper.hitPos.x), 0x23e, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.bumper.hitPos.y), offsetof(EnBrob, colliders[1].info.bumper.hitPos.y) - offsetof(EnBrob, colliders[0].info.bumper.hitPos.y), 0x240, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.bumper.hitPos.z), offsetof(EnBrob, colliders[1].info.bumper.hitPos.z) - offsetof(EnBrob, colliders[0].info.bumper.hitPos.z), 0x242, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.elemType), offsetof(EnBrob, colliders[1].info.elemType) - offsetof(EnBrob, colliders[0].info.elemType), 0x244, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.toucherFlags), offsetof(EnBrob, colliders[1].info.toucherFlags) - offsetof(EnBrob, colliders[0].info.toucherFlags), 0x245, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.bumperFlags), offsetof(EnBrob, colliders[1].info.bumperFlags) - offsetof(EnBrob, colliders[0].info.bumperFlags), 0x246, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.ocElemFlags), offsetof(EnBrob, colliders[1].info.ocElemFlags) - offsetof(EnBrob, colliders[0].info.ocElemFlags), 0x247, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].info.atHit), offsetof(EnBrob, colliders[1].info.atHit) - offsetof(EnBrob, colliders[0].info.atHit), 0x248, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, colliders[0].info.acHit), offsetof(EnBrob, colliders[1].info.acHit) - offsetof(EnBrob, colliders[0].info.acHit), 0x24c, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, colliders[0].info.atHitInfo), offsetof(EnBrob, colliders[1].info.atHitInfo) - offsetof(EnBrob, colliders[0].info.atHitInfo), 0x250, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, colliders[0].info.acHitInfo), offsetof(EnBrob, colliders[1].info.acHitInfo) - offsetof(EnBrob, colliders[0].info.acHitInfo), 0x254, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBrob, colliders[0].dim.radius), offsetof(EnBrob, colliders[1].dim.radius) - offsetof(EnBrob, colliders[0].dim.radius), 0x258, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].dim.height), offsetof(EnBrob, colliders[1].dim.height) - offsetof(EnBrob, colliders[0].dim.height), 0x25a, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].dim.yShift), offsetof(EnBrob, colliders[1].dim.yShift) - offsetof(EnBrob, colliders[0].dim.yShift), 0x25c, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].dim.pos.x), offsetof(EnBrob, colliders[1].dim.pos.x) - offsetof(EnBrob, colliders[0].dim.pos.x), 0x25e, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].dim.pos.y), offsetof(EnBrob, colliders[1].dim.pos.y) - offsetof(EnBrob, colliders[0].dim.pos.y), 0x260, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBrob, colliders[0].dim.pos.z), offsetof(EnBrob, colliders[1].dim.pos.z) - offsetof(EnBrob, colliders[0].dim.pos.z), 0x262, 0x4c, 2, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnBrobSpanCount = ARRAY_COUNT(gGzEnBrobSpans);

const GzActorFunction gGzEnBrobFunctions[] = {
    { 0x0, (void*)EnBrob_Init },
    { 0x274, (void*)EnBrob_Destroy },
    { 0x2cc, (void*)EnBrob_SetupIdle },
    { 0x334, (void*)EnBrob_SetupMoveUp },
    { 0x394, NULL },
    { 0x3e8, NULL },
    { 0x47c, NULL },
    { 0x4fc, NULL },
    { 0x548, (void*)EnBrob_Idle },
    { 0x608, (void*)EnBrob_MoveUp },
    { 0x70c, (void*)EnBrob_Wobble },
    { 0x7ac, (void*)EnBrob_Stunned },
    { 0x848, (void*)EnBrob_MoveDown },
    { 0x94c, (void*)EnBrob_Shock },
    { 0xb64, (void*)EnBrob_Update },
    { 0xe00, NULL },
    { 0xed4, (void*)EnBrob_Draw },
};
const size_t gGzEnBrobFunctionCount = ARRAY_COUNT(gGzEnBrobFunctions);
