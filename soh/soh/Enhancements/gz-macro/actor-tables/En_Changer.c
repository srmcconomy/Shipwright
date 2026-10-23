// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Changer/z_en_changer.h"

void EnChanger_Destroy(void*, void*);
void EnChanger_Init(void*, void*);
void EnChanger_Wait(void*, void*);
void EnChanger_OpenChests(void*, void*);
void EnChanger_SetHeartPieceFlag(void*, void*);
void EnChanger_Update(void*, void*);

const GzActorSpan gGzEnChangerSpans[] = {
    { offsetof(EnChanger, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnChanger, leftChest), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnChanger, rightChest), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnChanger, finalChest), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnChanger, leftChestNum), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnChanger, rightChestNum), 0, 0x14e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnChanger, leftChestGetItemId), 0, 0x150, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnChanger, rightChestGetItemId), 0, 0x152, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnChanger, chestOpened), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnChanger, timer), 0, 0x156, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnChanger, roomChestsOpened), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnChangerSpanCount = ARRAY_COUNT(gGzEnChangerSpans);

const GzActorFunction gGzEnChangerFunctions[] = {
    { 0x0, (void*)EnChanger_Destroy },
    { 0x10, (void*)EnChanger_Init },
    { 0x52c, (void*)EnChanger_Wait },
    { 0x5d0, (void*)EnChanger_OpenChests },
    { 0x780, (void*)EnChanger_SetHeartPieceFlag },
    { 0x7d0, (void*)EnChanger_Update },
};
const size_t gGzEnChangerFunctionCount = ARRAY_COUNT(gGzEnChangerFunctions);
