// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Syateki_Itm/z_en_syateki_itm.h"

void EnSyatekiItm_Init(void*, void*);
void EnSyatekiItm_Destroy(void*, void*);
void EnSyatekiItm_Idle(void*, void*);
void EnSyatekiItm_StartRound(void*, void*);
void EnSyatekiItm_SpawnTargets(void*, void*);
void EnSyatekiItm_CheckTargets(void*, void*);
void EnSyatekiItm_CleanupGame(void*, void*);
void EnSyatekiItm_EndGame(void*, void*);
void EnSyatekiItm_Update(void*, void*);

const GzActorSpan gGzEnSyatekiItmSpans[] = {
    { offsetof(EnSyatekiItm, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnSyatekiItm, timer), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, unkTimer), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, signal), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, hitCount), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, roundNum), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, roundFlags[0]), offsetof(EnSyatekiItm, roundFlags[1]) - offsetof(EnSyatekiItm, roundFlags[0]), 0x14a, 0x2, 6, 2, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, targetState[0]), offsetof(EnSyatekiItm, targetState[1]) - offsetof(EnSyatekiItm, targetState[0]), 0x156, 0x2, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, numTargets), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, targetHome[0].x), offsetof(EnSyatekiItm, targetHome[1].x) - offsetof(EnSyatekiItm, targetHome[0].x), 0x15c, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, targetHome[0].y), offsetof(EnSyatekiItm, targetHome[1].y) - offsetof(EnSyatekiItm, targetHome[0].y), 0x160, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, targetHome[0].z), offsetof(EnSyatekiItm, targetHome[1].z) - offsetof(EnSyatekiItm, targetHome[0].z), 0x164, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, targetFinal[0].x), offsetof(EnSyatekiItm, targetFinal[1].x) - offsetof(EnSyatekiItm, targetFinal[0].x), 0x174, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, targetFinal[0].y), offsetof(EnSyatekiItm, targetFinal[1].y) - offsetof(EnSyatekiItm, targetFinal[0].y), 0x178, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, targetFinal[0].z), offsetof(EnSyatekiItm, targetFinal[1].z) - offsetof(EnSyatekiItm, targetFinal[0].z), 0x17c, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnSyatekiItm, markers[0]), offsetof(EnSyatekiItm, markers[1]) - offsetof(EnSyatekiItm, markers[0]), 0x18c, 0x4, 10, 4, GZ_SPAN_POINTER },
    { offsetof(EnSyatekiItm, targets[0]), offsetof(EnSyatekiItm, targets[1]) - offsetof(EnSyatekiItm, targets[0]), 0x1b4, 0x4, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnSyatekiItm, man), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnSyatekiItm, curMarkers[0]), offsetof(EnSyatekiItm, curMarkers[1]) - offsetof(EnSyatekiItm, curMarkers[0]), 0x1c0, 0x4, 2, 4, GZ_SPAN_POINTER },
};
const size_t gGzEnSyatekiItmSpanCount = ARRAY_COUNT(gGzEnSyatekiItmSpans);

const GzActorFunction gGzEnSyatekiItmFunctions[] = {
    { 0x0, (void*)EnSyatekiItm_Init },
    { 0x164, (void*)EnSyatekiItm_Destroy },
    { 0x174, (void*)EnSyatekiItm_Idle },
    { 0x284, (void*)EnSyatekiItm_StartRound },
    { 0x400, (void*)EnSyatekiItm_SpawnTargets },
    { 0x880, (void*)EnSyatekiItm_CheckTargets },
    { 0x924, (void*)EnSyatekiItm_CleanupGame },
    { 0x9ac, (void*)EnSyatekiItm_EndGame },
    { 0x9f8, (void*)EnSyatekiItm_Update },
};
const size_t gGzEnSyatekiItmFunctionCount = ARRAY_COUNT(gGzEnSyatekiItmFunctions);
