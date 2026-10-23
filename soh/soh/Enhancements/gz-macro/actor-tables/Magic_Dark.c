// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Magic_Dark/z_magic_dark.h"

void MagicDark_Init(void*, void*);
void MagicDark_Destroy(void*, void*);
void MagicDark_DiamondUpdate(void*, void*);
void MagicDark_OrbUpdate(void*, void*);
void MagicDark_DiamondDraw(void*, void*);
void MagicDark_OrbDraw(void*, void*);

const GzActorSpan gGzMagicDarkSpans[] = {
    { offsetof(MagicDark, timer), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicDark, primAlpha), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicDark, orbOffset.x), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicDark, orbOffset.y), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicDark, orbOffset.z), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicDark, scale), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicDark, unk_160[0]), offsetof(MagicDark, unk_160[1]) - offsetof(MagicDark, unk_160[0]), 0x150, 0x1, 4, 1, GZ_SPAN_VALUE },
};
const size_t gGzMagicDarkSpanCount = ARRAY_COUNT(gGzMagicDarkSpans);

const GzActorFunction gGzMagicDarkFunctions[] = {
    { 0x0, (void*)MagicDark_Init },
    { 0xe4, (void*)MagicDark_Destroy },
    { 0x11c, (void*)MagicDark_DiamondUpdate },
    { 0x364, NULL },
    { 0x4b0, (void*)MagicDark_OrbUpdate },
    { 0x658, (void*)MagicDark_DiamondDraw },
    { 0x8c0, (void*)MagicDark_OrbDraw },
};
const size_t gGzMagicDarkFunctionCount = ARRAY_COUNT(gGzMagicDarkFunctions);
