// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Po_Relay/z_en_po_relay.h"

void EnPoRelay_Init(void*, void*);
void EnPoRelay_Destroy(void*, void*);
void EnPoRelay_Vec3sToVec3f(void*, void*);
void EnPoRelay_Idle(void*, void*);
void EnPoRelay_Talk(void*, void*);
void EnPoRelay_Race(void*, void*);
void EnPoRelay_EndRace(void*, void*);
void EnPoRelay_Talk2(void*, void*);
void EnPoRelay_DisappearAndReward(void*, void*);
void EnPoRelay_Update(void*, void*);
void EnPoRelay_Draw(void*, void*);

const GzActorSpan gGzEnPoRelaySpans[] = {
    { offsetof(EnPoRelay, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnPoRelay, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnPoRelay, hookshotSlotFull), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, bobTimer), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, actionTimer), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, pathIndex), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, yawTowardsPathPoint), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, textId), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, eyeTextureIdx), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, jointTable[0].x), offsetof(EnPoRelay, jointTable[1].x) - offsetof(EnPoRelay, jointTable[0].x), 0x190, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, jointTable[0].y), offsetof(EnPoRelay, jointTable[1].y) - offsetof(EnPoRelay, jointTable[0].y), 0x192, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, jointTable[0].z), offsetof(EnPoRelay, jointTable[1].z) - offsetof(EnPoRelay, jointTable[0].z), 0x194, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, morphTable[0].x), offsetof(EnPoRelay, morphTable[1].x) - offsetof(EnPoRelay, morphTable[0].x), 0x1fc, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, morphTable[0].y), offsetof(EnPoRelay, morphTable[1].y) - offsetof(EnPoRelay, morphTable[0].y), 0x1fe, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, morphTable[0].z), offsetof(EnPoRelay, morphTable[1].z) - offsetof(EnPoRelay, morphTable[0].z), 0x200, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightColor.r), 0, 0x268, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightColor.g), 0, 0x269, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightColor.b), 0, 0x26a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightColor.a), 0, 0x26b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightNode), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, lightInfo.type), 0, 0x270, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightInfo.params.point.x), 0, 0x272, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightInfo.params.point.y), 0, 0x274, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightInfo.params.point.z), 0, 0x276, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightInfo.params.point.color[0]), offsetof(EnPoRelay, lightInfo.params.point.color[1]) - offsetof(EnPoRelay, lightInfo.params.point.color[0]), 0x278, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightInfo.params.point.drawGlow), 0, 0x27b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, lightInfo.params.point.radius), 0, 0x27c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.base.actor), 0, 0x280, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, collider.base.at), 0, 0x284, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, collider.base.ac), 0, 0x288, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, collider.base.oc), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, collider.base.atFlags), 0, 0x290, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.base.acFlags), 0, 0x291, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.base.ocFlags1), 0, 0x292, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.base.ocFlags2), 0, 0x293, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.base.colType), 0, 0x294, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.base.shape), 0, 0x295, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.toucher.dmgFlags), 0, 0x298, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.toucher.effect), 0, 0x29c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.toucher.damage), 0, 0x29d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.bumper.dmgFlags), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.bumper.effect), 0, 0x2a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.bumper.defense), 0, 0x2a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.bumper.hitPos.x), 0, 0x2a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.bumper.hitPos.y), 0, 0x2a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.bumper.hitPos.z), 0, 0x2aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.elemType), 0, 0x2ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.toucherFlags), 0, 0x2ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.bumperFlags), 0, 0x2ae, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.ocElemFlags), 0, 0x2af, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.info.atHit), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, collider.info.acHit), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, collider.info.atHitInfo), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, collider.info.acHitInfo), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPoRelay, collider.dim.radius), 0, 0x2c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.dim.height), 0, 0x2c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.dim.yShift), 0, 0x2c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.dim.pos.x), 0, 0x2c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.dim.pos.y), 0, 0x2c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPoRelay, collider.dim.pos.z), 0, 0x2ca, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnPoRelaySpanCount = ARRAY_COUNT(gGzEnPoRelaySpans);

const GzActorFunction gGzEnPoRelayFunctions[] = {
    { 0x0, (void*)EnPoRelay_Init },
    { 0x188, (void*)EnPoRelay_Destroy },
    { 0x1d0, NULL },
    { 0x20c, (void*)EnPoRelay_Vec3sToVec3f },
    { 0x250, NULL },
    { 0x318, NULL },
    { 0x358, NULL },
    { 0x400, (void*)EnPoRelay_Idle },
    { 0x4bc, (void*)EnPoRelay_Talk },
    { 0x530, (void*)EnPoRelay_Race },
    { 0xa44, (void*)EnPoRelay_EndRace },
    { 0xb04, (void*)EnPoRelay_Talk2 },
    { 0xbdc, (void*)EnPoRelay_DisappearAndReward },
    { 0x10a8, (void*)EnPoRelay_Update },
    { 0x119c, NULL },
    { 0x1390, (void*)EnPoRelay_Draw },
};
const size_t gGzEnPoRelayFunctionCount = ARRAY_COUNT(gGzEnPoRelayFunctions);
