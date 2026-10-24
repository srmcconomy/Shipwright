// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Heishi1/z_en_heishi1.h"

void EnHeishi1_Init(void*, void*);
void EnHeishi1_Destroy(void*, void*);
void EnHeishi1_SetupWalk(void*, void*);
void EnHeishi1_Walk(void*, void*);
void EnHeishi1_SetupMoveToLink(void*, void*);
void EnHeishi1_MoveToLink(void*, void*);
void EnHeishi1_SetupWait(void*, void*);
void EnHeishi1_Wait(void*, void*);
void EnHeishi1_SetupTurnTowardLink(void*, void*);
void EnHeishi1_TurnTowardLink(void*, void*);
void EnHeishi1_SetupKick(void*, void*);
void EnHeishi1_Kick(void*, void*);
void EnHeishi1_SetupWaitNight(void*, void*);
void EnHeishi1_WaitNight(void*, void*);
void EnHeishi1_Update(void*, void*);
void EnHeishi1_Draw(void*, void*);

const GzActorSpan gGzEnHeishi1Spans[] = {
    { offsetof(EnHeishi1, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi1, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnHeishi1, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi1, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHeishi1, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHeishi1, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, jointTable[0].x), offsetof(EnHeishi1, jointTable[1].x) - offsetof(EnHeishi1, jointTable[0].x), 0x180, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, jointTable[0].y), offsetof(EnHeishi1, jointTable[1].y) - offsetof(EnHeishi1, jointTable[0].y), 0x182, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, jointTable[0].z), offsetof(EnHeishi1, jointTable[1].z) - offsetof(EnHeishi1, jointTable[0].z), 0x184, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, morphTable[0].x), offsetof(EnHeishi1, morphTable[1].x) - offsetof(EnHeishi1, morphTable[0].x), 0x1e6, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, morphTable[0].y), offsetof(EnHeishi1, morphTable[1].y) - offsetof(EnHeishi1, morphTable[0].y), 0x1e8, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, morphTable[0].z), offsetof(EnHeishi1, morphTable[1].z) - offsetof(EnHeishi1, morphTable[0].z), 0x1ea, 0x6, 17, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, actionFunc), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHeishi1, activeTimer), 0, 0x250, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, headDirection), 0, 0x252, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, headBehaviorDecided), 0, 0x254, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, linkDetected), 0, 0x256, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, loadStarted), 0, 0x258, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, type), 0, 0x25a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, path), 0, 0x25c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, unused1), 0, 0x25e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, waypointTimer), 0, 0x260, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, unused2), 0, 0x262, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, moveSpeed), 0, 0x264, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, bodyTurnSpeed), 0, 0x268, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, headAngle), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, headAngleTarget), 0, 0x270, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, animSpeed), 0, 0x274, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, transitionRate), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, moveSpeedTarget), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, moveSpeedMax), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, bodyTurnSpeedTarget), 0, 0x284, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, bodyTurnSpeedMax), 0, 0x288, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, headTurnSpeedScale), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, headTurnSpeedMax), 0, 0x290, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, headTimer), 0, 0x294, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, waitTimer), 0, 0x296, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, kickTimer), 0, 0x298, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHeishi1, waypoint), 0, 0x29a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnHeishi1SpanCount = ARRAY_COUNT(gGzEnHeishi1Spans);

const GzActorFunction gGzEnHeishi1Functions[] = {
    { 0x0, (void*)EnHeishi1_Init },
    { 0x218, (void*)EnHeishi1_Destroy },
    { 0x228, (void*)EnHeishi1_SetupWalk },
    { 0x2dc, (void*)EnHeishi1_Walk },
    { 0x5fc, (void*)EnHeishi1_SetupMoveToLink },
    { 0x6b8, (void*)EnHeishi1_MoveToLink },
    { 0x7b0, (void*)EnHeishi1_SetupWait },
    { 0x878, (void*)EnHeishi1_Wait },
    { 0xa34, (void*)EnHeishi1_SetupTurnTowardLink },
    { 0xad0, (void*)EnHeishi1_TurnTowardLink },
    { 0xb7c, (void*)EnHeishi1_SetupKick },
    { 0xc10, (void*)EnHeishi1_Kick },
    { 0xce4, (void*)EnHeishi1_SetupWaitNight },
    { 0xd78, (void*)EnHeishi1_WaitNight },
    { 0xdf8, (void*)EnHeishi1_Update },
    { 0x110c, NULL },
    { 0x1150, (void*)EnHeishi1_Draw },
};
const size_t gGzEnHeishi1FunctionCount = ARRAY_COUNT(gGzEnHeishi1Functions);
