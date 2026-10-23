// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Blkobj/z_en_blkobj.h"

void EnBlkobj_Init(void*, void*);
void EnBlkobj_Destroy(void*, void*);
void EnBlkobj_Wait(void*, void*);
void EnBlkobj_SpawnDarkLink(void*, void*);
void EnBlkobj_DoNothing(void*, void*);
void EnBlkobj_Update(void*, void*);
void EnBlkobj_Draw(void*, void*);

const GzActorSpan gGzEnBlkobjSpans[] = {
    { offsetof(EnBlkobj, alpha), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBlkobj, timer), 0, 0x156, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBlkobj, actionFunc), 0, 0x158, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnBlkobjSpanCount = ARRAY_COUNT(gGzEnBlkobjSpans);

const GzActorFunction gGzEnBlkobjFunctions[] = {
    { 0x0, NULL },
    { 0x10, (void*)EnBlkobj_Init },
    { 0xc0, (void*)EnBlkobj_Destroy },
    { 0xf4, (void*)EnBlkobj_Wait },
    { 0x148, (void*)EnBlkobj_SpawnDarkLink },
    { 0x1c0, (void*)EnBlkobj_DarkLinkFight },
    { 0x29c, (void*)EnBlkobj_DoNothing },
    { 0x2ac, (void*)EnBlkobj_Update },
    { 0x2d0, NULL },
    { 0x350, (void*)EnBlkobj_Draw },
};
const size_t gGzEnBlkobjFunctionCount = ARRAY_COUNT(gGzEnBlkobjFunctions);
