// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Anubice_Tag/z_en_anubice_tag.h"

void EnAnubiceTag_Init(void*, void*);
void EnAnubiceTag_Destroy(void*, void*);
void EnAnubiceTag_SpawnAnubis(void*, void*);
void EnAnubiceTag_ManageAnubis(void*, void*);
void EnAnubiceTag_Update(void*, void*);
void EnAnubiceTag_Draw(void*, void*);

const GzActorSpan gGzEnAnubiceTagSpans[] = {
    { offsetof(EnAnubiceTag, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnAnubiceTag, anubis), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubiceTag, triggerRange), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnAnubiceTagSpanCount = ARRAY_COUNT(gGzEnAnubiceTagSpans);

const GzActorFunction gGzEnAnubiceTagFunctions[] = {
    { 0x0, (void*)EnAnubiceTag_Init },
    { 0x50, (void*)EnAnubiceTag_Destroy },
    { 0x60, (void*)EnAnubiceTag_SpawnAnubis },
    { 0xd8, (void*)EnAnubiceTag_ManageAnubis },
    { 0x23c, (void*)EnAnubiceTag_Update },
    { 0x260, (void*)EnAnubiceTag_Draw },
};
const size_t gGzEnAnubiceTagFunctionCount = ARRAY_COUNT(gGzEnAnubiceTagFunctions);
