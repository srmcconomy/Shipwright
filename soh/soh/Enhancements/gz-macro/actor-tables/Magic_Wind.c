// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Magic_Wind/z_magic_wind.h"

void MagicWind_Init(void*, void*);
void MagicWind_Destroy(void*, void*);
void MagicWind_WaitForTimer(void*, void*);
void MagicWind_Grow(void*, void*);
void MagicWind_WaitAtFullSize(void*, void*);
void MagicWind_FadeOut(void*, void*);
void MagicWind_Shrink(void*, void*);
void MagicWind_Update(void*, void*);
void MagicWind_Draw(void*, void*);

const GzActorSpan gGzMagicWindSpans[] = {
    { offsetof(MagicWind, skelCurve.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicWind, skelCurve.limbList), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicWind, skelCurve.transUpdIdx), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicWind, skelCurve.unk_0C), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicWind, skelCurve.animFinalFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicWind, skelCurve.animSpeed), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicWind, skelCurve.animCurFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicWind, skelCurve.transforms), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicWind, timer), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicWind, actionFunc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzMagicWindSpanCount = ARRAY_COUNT(gGzMagicWindSpans);

const GzActorFunction gGzMagicWindFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)MagicWind_Init },
    { 0x118, (void*)MagicWind_Destroy },
    { 0x14c, NULL },
    { 0x26c, (void*)MagicWind_WaitForTimer },
    { 0x2e8, (void*)MagicWind_Grow },
    { 0x338, (void*)MagicWind_WaitAtFullSize },
    { 0x384, (void*)MagicWind_FadeOut },
    { 0x3e8, (void*)MagicWind_Shrink },
    { 0x428, (void*)MagicWind_Update },
    { 0x47c, NULL },
    { 0x600, (void*)MagicWind_Draw },
};
const size_t gGzMagicWindFunctionCount = ARRAY_COUNT(gGzMagicWindFunctions);
