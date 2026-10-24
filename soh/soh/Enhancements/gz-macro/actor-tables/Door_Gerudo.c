// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Door_Gerudo/z_door_gerudo.h"

void DoorGerudo_Init(void*, void*);
void DoorGerudo_Destroy(void*, void*);
s32 func_80994750(void*, void*);
void func_8099485C(void*, void*);
void func_8099496C(void*, void*);
void func_809949C8(void*, void*);
void DoorGerudo_Update(void*, void*);
void DoorGerudo_Draw(void*, void*);

const GzActorSpan gGzDoorGerudoSpans[] = {
    { offsetof(DoorGerudo, unk_164), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorGerudo, unk_166), 0, 0x156, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorGerudo, actionFunc), 0, 0x158, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzDoorGerudoSpanCount = ARRAY_COUNT(gGzDoorGerudoSpans);

const GzActorFunction gGzDoorGerudoFunctions[] = {
    { 0x0, (void*)DoorGerudo_Init },
    { 0xb0, (void*)DoorGerudo_Destroy },
    { 0xe4, NULL },
    { 0x17c, (void*)func_80994750 },
    { 0x288, (void*)func_8099485C },
    { 0x398, (void*)func_8099496C },
    { 0x3f4, (void*)func_809949C8 },
    { 0x450, (void*)DoorGerudo_Update },
    { 0x474, (void*)DoorGerudo_Draw },
};
const size_t gGzDoorGerudoFunctionCount = ARRAY_COUNT(gGzDoorGerudoFunctions);
