// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Jj/z_en_jj.h"

void EnJj_Init(void*, void*);
void EnJj_Destroy(void*, void*);
void EnJj_OpenMouth(void*, void*);
void EnJj_WaitToOpenMouth(void*, void*);
void EnJj_WaitForFish(void*, void*);
void EnJj_BeginCutscene(void*, void*);
void EnJj_CutsceneUpdate(void*, void*);
void EnJj_RemoveDust(void*, void*);
void EnJj_UpdateStaticCollision(void*, void*);
void EnJj_Update(void*, void*);
void EnJj_Draw(void*, void*);

const GzActorSpan gGzEnJjSpans[] = {
    { offsetof(EnJj, skelAnime.limbCount), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.mode), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.dListCount), 0, 0x156, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.taper), 0, 0x157, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.skeleton), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, skelAnime.animation), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, skelAnime.startFrame), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.endFrame), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.animLength), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.curFrame), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.playSpeed), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.jointTable), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, skelAnime.morphTable), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, skelAnime.morphWeight), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.morphRate), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.update.normal), 0, 0x184, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnJj, skelAnime.initFlags), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.movementFlags), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.prevRot), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.prevTransl.x), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.prevTransl.y), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.prevTransl.z), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.baseTransl.x), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.baseTransl.y), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, skelAnime.baseTransl.z), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, jointTable[0].x), offsetof(EnJj, jointTable[1].x) - offsetof(EnJj, jointTable[0].x), 0x198, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, jointTable[0].y), offsetof(EnJj, jointTable[1].y) - offsetof(EnJj, jointTable[0].y), 0x19a, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, jointTable[0].z), offsetof(EnJj, jointTable[1].z) - offsetof(EnJj, jointTable[0].z), 0x19c, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, morphTable[0].x), offsetof(EnJj, morphTable[1].x) - offsetof(EnJj, morphTable[0].x), 0x21c, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, morphTable[0].y), offsetof(EnJj, morphTable[1].y) - offsetof(EnJj, morphTable[0].y), 0x21e, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, morphTable[0].z), offsetof(EnJj, morphTable[1].z) - offsetof(EnJj, morphTable[0].z), 0x220, 0x6, 22, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.base.actor), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, collider.base.at), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, collider.base.ac), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, collider.base.oc), 0, 0x2ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, collider.base.atFlags), 0, 0x2b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.base.acFlags), 0, 0x2b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.base.ocFlags1), 0, 0x2b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.base.ocFlags2), 0, 0x2b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.base.colType), 0, 0x2b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.base.shape), 0, 0x2b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.toucher.dmgFlags), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.toucher.effect), 0, 0x2bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.toucher.damage), 0, 0x2bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.bumper.dmgFlags), 0, 0x2c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.bumper.effect), 0, 0x2c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.bumper.defense), 0, 0x2c5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.bumper.hitPos.x), 0, 0x2c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.bumper.hitPos.y), 0, 0x2c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.bumper.hitPos.z), 0, 0x2ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.elemType), 0, 0x2cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.toucherFlags), 0, 0x2cd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.bumperFlags), 0, 0x2ce, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.ocElemFlags), 0, 0x2cf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.info.atHit), 0, 0x2d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, collider.info.acHit), 0, 0x2d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, collider.info.atHitInfo), 0, 0x2d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, collider.info.acHitInfo), 0, 0x2dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, collider.dim.radius), 0, 0x2e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.dim.height), 0, 0x2e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.dim.yShift), 0, 0x2e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.dim.pos.x), 0, 0x2e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.dim.pos.y), 0, 0x2e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, collider.dim.pos.z), 0, 0x2ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, actionFunc), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnJj, bodyCollisionActor), 0, 0x2f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, dust), 0, 0x2f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJj, mouthOpenAngle), 0, 0x2f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, unk_30A), 0, 0x2fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, cutsceneCountdownTimer), 0, 0x2fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJj, eyeIndex), 0, 0x2fe, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, blinkTimer), 0, 0x2ff, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, extraBlinkCounter), 0, 0x300, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJj, extraBlinkTotal), 0, 0x301, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnJjSpanCount = ARRAY_COUNT(gGzEnJjSpans);

const GzActorFunction gGzEnJjFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnJj_Init },
    { 0x29c, (void*)EnJj_Destroy },
    { 0x32c, NULL },
    { 0x3ac, (void*)EnJj_OpenMouth },
    { 0x400, (void*)EnJj_WaitToOpenMouth },
    { 0x444, (void*)EnJj_WaitForFish },
    { 0x500, (void*)EnJj_BeginCutscene },
    { 0x5a8, (void*)EnJj_CutsceneUpdate },
    { 0x704, (void*)EnJj_RemoveDust },
    { 0x75c, (void*)EnJj_UpdateStaticCollision },
    { 0x76c, (void*)EnJj_Update },
    { 0x818, (void*)EnJj_Draw },
};
const size_t gGzEnJjFunctionCount = ARRAY_COUNT(gGzEnJjFunctions);
