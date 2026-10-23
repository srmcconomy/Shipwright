// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Part/z_en_part.h"

void EnPart_Init(void*, void*);
void EnPart_Destroy(void*, void*);
void func_80ACDDE8(void*, void*);
void func_80ACE13C(void*, void*);
void func_80ACE5B8(void*, void*);
void func_80ACE5C8(void*, void*);
void func_80ACE7E8(void*, void*);
void EnPart_Update(void*, void*);
void EnPart_Draw(void*, void*);

const GzActorSpan gGzEnPartSpans[] = {
    { offsetof(EnPart, action), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnPart, timer), 0, 0x13e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnPart, displayList), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnPart, rotZ), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnPart, rotZSpeed), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnPartSpanCount = ARRAY_COUNT(gGzEnPartSpans);

const GzActorFunction gGzEnPartFunctions[] = {
    { 0x0, (void*)EnPart_Init },
    { 0x10, (void*)EnPart_Destroy },
    { 0x20, (void*)func_80ACDDE8 },
    { 0x374, (void*)func_80ACE13C },
    { 0x7f0, (void*)func_80ACE5B8 },
    { 0x804, (void*)func_80ACE5C8 },
    { 0xa28, (void*)func_80ACE7E8 },
    { 0xc24, (void*)EnPart_Update },
    { 0xd04, NULL },
    { 0xda8, (void*)EnPart_Draw },
};
const size_t gGzEnPartFunctionCount = ARRAY_COUNT(gGzEnPartFunctions);
