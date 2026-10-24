// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bird/z_en_bird.h"

void EnBird_Init(void*, void*);
void EnBird_Destroy(void*, void*);
void EnBird_Idle(void*, void*);
void EnBird_Move(void*, void*);
void EnBird_Update(void*, void*);
void EnBird_Draw(void*, void*);

const GzActorSpan gGzEnBirdSpans[] = {
    { offsetof(EnBird, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBird, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnBird, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBird, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBird, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBird, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBird, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBird, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBird, unk_194), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, timer), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, scaleAnimSpeed), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBird, unk_19E[0]), offsetof(EnBird, unk_19E[1]) - offsetof(EnBird, unk_19E[0]), 0x18e, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBird, posYMag), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, rotYMag), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, speedTarget), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, speedStep), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, flightDistance), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, posYPhase), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, posYPhaseStep), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, unk_1BC), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBird, rotYStep), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBird, unk_1C2[0]), offsetof(EnBird, unk_1C2[1]) - offsetof(EnBird, unk_1C2[0]), 0x1b2, 0x1, 26, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnBirdSpanCount = ARRAY_COUNT(gGzEnBirdSpans);

const GzActorFunction gGzEnBirdFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnBird_Init },
    { 0xf8, (void*)EnBird_Destroy },
    { 0x108, NULL },
    { 0x1bc, (void*)EnBird_Idle },
    { 0x25c, NULL },
    { 0x29c, (void*)EnBird_Move },
    { 0x3b8, (void*)EnBird_Update },
    { 0x3e8, (void*)EnBird_Draw },
};
const size_t gGzEnBirdFunctionCount = ARRAY_COUNT(gGzEnBirdFunctions);
