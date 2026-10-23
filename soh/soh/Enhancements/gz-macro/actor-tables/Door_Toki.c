// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Door_Toki/z_door_toki.h"

void DoorToki_Init(void*, void*);
void DoorToki_Destroy(void*, void*);
void DoorToki_Update(void*, void*);

const GzActorSpan gGzDoorTokiSpans[] = {
    { offsetof(DoorToki, unk_164[0]), offsetof(DoorToki, unk_164[1]) - offsetof(DoorToki, unk_164[0]), 0x154, 0x1, 4, 1, GZ_SPAN_VALUE },
};
const size_t gGzDoorTokiSpanCount = ARRAY_COUNT(gGzDoorTokiSpans);

const GzActorFunction gGzDoorTokiFunctions[] = {
    { 0x0, (void*)DoorToki_Init },
    { 0x68, (void*)DoorToki_Destroy },
    { 0x9c, (void*)DoorToki_Update },
};
const size_t gGzDoorTokiFunctionCount = ARRAY_COUNT(gGzDoorTokiFunctions);
