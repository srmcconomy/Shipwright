// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Haka/z_bg_haka.h"

void BgHaka_Init(void*, void*);
void BgHaka_Destroy(void*, void*);
void BgHaka_CheckPlayerOnDirtPatch(void*, void*);
void BgHaka_IdleClosed(void*, void*);
void BgHaka_Pull(void*, void*);
void BgHaka_IdleOpened(void*, void*);
void BgHaka_IdleLockedClosed(void*, void*);
void BgHaka_Update(void*, void*);
void BgHaka_Draw(void*, void*);

const GzActorSpan gGzBgHakaSpans[] = {
    { offsetof(BgHaka, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgHakaSpanCount = ARRAY_COUNT(gGzBgHakaSpans);

const GzActorFunction gGzBgHakaFunctions[] = {
    { 0x0, (void*)BgHaka_Init },
    { 0x7c, (void*)BgHaka_Destroy },
    { 0xb0, (void*)BgHaka_CheckPlayerOnDirtPatch },
    { 0x140, (void*)BgHaka_IdleClosed },
    { 0x294, (void*)BgHaka_Pull },
    { 0x40c, (void*)BgHaka_IdleOpened },
    { 0x448, (void*)BgHaka_IdleLockedClosed },
    { 0x4c0, (void*)BgHaka_Update },
    { 0x4e4, (void*)BgHaka_Draw },
};
const size_t gGzBgHakaFunctionCount = ARRAY_COUNT(gGzBgHakaFunctions);
