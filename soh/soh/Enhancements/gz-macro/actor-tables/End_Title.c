// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_End_Title/z_end_title.h"

void EndTitle_Init(void*, void*);
void EndTitle_Destroy(void*, void*);
void EndTitle_Update(void*, void*);
void EndTitle_DrawFull(void*, void*);
void EndTitle_DrawNintendoLogo(void*, void*);

const GzActorSpan gGzEndTitleSpans[] = {
    { offsetof(EndTitle, endAlpha), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EndTitle, tlozAlpha), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EndTitle, ootAlpha), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEndTitleSpanCount = ARRAY_COUNT(gGzEndTitleSpans);

const GzActorFunction gGzEndTitleFunctions[] = {
    { 0x0, (void*)EndTitle_Init },
    { 0x30, (void*)EndTitle_Destroy },
    { 0x40, (void*)EndTitle_Update },
    { 0x50, (void*)EndTitle_DrawFull },
    { 0x62c, (void*)EndTitle_DrawNintendoLogo },
};
const size_t gGzEndTitleFunctionCount = ARRAY_COUNT(gGzEndTitleFunctions);
