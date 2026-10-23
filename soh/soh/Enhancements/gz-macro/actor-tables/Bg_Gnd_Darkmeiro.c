// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Gnd_Darkmeiro/z_bg_gnd_darkmeiro.h"

void BgGndDarkmeiro_ToggleBlock(void*, void*);
void BgGndDarkmeiro_Init(void*, void*);
void BgGndDarkmeiro_Destroy(void*, void*);
void BgGndDarkmeiro_Noop(void*, void*);
void BgGndDarkmeiro_UpdateBlockTimer(void*, void*);
void BgGndDarkmeiro_UpdateStaticBlock(void*, void*);
void BgGndDarkmeiro_UpdateSwitchBlock(void*, void*);
void BgGndDarkmeiro_Update(void*, void*);
void BgGndDarkmeiro_DrawInvisiblePath(void*, void*);
void BgGndDarkmeiro_DrawSwitchBlock(void*, void*);
void BgGndDarkmeiro_DrawStaticBlock(void*, void*);

const GzActorSpan gGzBgGndDarkmeiroSpans[] = {
    { offsetof(BgGndDarkmeiro, actionFlags), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndDarkmeiro, timer1), 0, 0x156, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndDarkmeiro, timer2), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndDarkmeiro, updateFunc), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgGndDarkmeiroSpanCount = ARRAY_COUNT(gGzBgGndDarkmeiroSpans);

const GzActorFunction gGzBgGndDarkmeiroFunctions[] = {
    { 0x0, (void*)BgGndDarkmeiro_ToggleBlock },
    { 0x8c, (void*)BgGndDarkmeiro_Init },
    { 0x2b8, (void*)BgGndDarkmeiro_Destroy },
    { 0x300, (void*)BgGndDarkmeiro_Noop },
    { 0x310, (void*)BgGndDarkmeiro_UpdateBlockTimer },
    { 0x504, (void*)BgGndDarkmeiro_UpdateStaticBlock },
    { 0x514, (void*)BgGndDarkmeiro_UpdateSwitchBlock },
    { 0x578, (void*)BgGndDarkmeiro_Update },
    { 0x59c, (void*)BgGndDarkmeiro_DrawInvisiblePath },
    { 0x5cc, (void*)BgGndDarkmeiro_DrawSwitchBlock },
    { 0x6e4, (void*)BgGndDarkmeiro_DrawStaticBlock },
};
const size_t gGzBgGndDarkmeiroFunctionCount = ARRAY_COUNT(gGzBgGndDarkmeiroFunctions);
