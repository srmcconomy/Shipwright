// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Okarina_Tag/z_en_okarina_tag.h"

void EnOkarinaTag_Destroy(void*, void*);
void EnOkarinaTag_Init(void*, void*);
void func_80ABEF2C(void*, void*);
void func_80ABF0CC(void*, void*);
void func_80ABF28C(void*, void*);
void func_80ABF4C8(void*, void*);
void func_80ABF708(void*, void*);
void func_80ABF7CC(void*, void*);
void EnOkarinaTag_Update(void*, void*);

const GzActorSpan gGzEnOkarinaTagSpans[] = {
    { offsetof(EnOkarinaTag, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnOkarinaTag, type), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkarinaTag, ocarinaSong), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkarinaTag, switchFlag), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkarinaTag, unk_156[0]), offsetof(EnOkarinaTag, unk_156[1]) - offsetof(EnOkarinaTag, unk_156[0]), 0x146, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnOkarinaTag, unk_158), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkarinaTag, unk_15A), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnOkarinaTag, interactRange), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnOkarinaTagSpanCount = ARRAY_COUNT(gGzEnOkarinaTagSpans);

const GzActorFunction gGzEnOkarinaTagFunctions[] = {
    { 0x0, (void*)EnOkarinaTag_Destroy },
    { 0x10, (void*)EnOkarinaTag_Init },
    { 0x178, (void*)func_80ABEF2C },
    { 0x2dc, (void*)func_80ABF0CC },
    { 0x49c, (void*)func_80ABF28C },
    { 0x6e4, (void*)func_80ABF4C8 },
    { 0x924, (void*)func_80ABF708 },
    { 0x9ec, (void*)func_80ABF7CC },
    { 0xab0, (void*)EnOkarinaTag_Update },
};
const size_t gGzEnOkarinaTagFunctionCount = ARRAY_COUNT(gGzEnOkarinaTagFunctions);
