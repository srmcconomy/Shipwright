// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ganon_Organ/z_en_ganon_organ.h"

void EnGanonOrgan_Init(void*, void*);
void EnGanonOrgan_Destroy(void*, void*);
void EnGanonOrgan_Update(void*, void*);
void EnGanonOrgan_Draw(void*, void*);

const GzActorSpan gGzEnGanonOrganSpans[] = {
    { offsetof(EnGanonOrgan, unk_14C[0]), offsetof(EnGanonOrgan, unk_14C[1]) - offsetof(EnGanonOrgan, unk_14C[0]), 0x13c, 0x1, 4, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnGanonOrganSpanCount = ARRAY_COUNT(gGzEnGanonOrganSpans);

const GzActorFunction gGzEnGanonOrganFunctions[] = {
    { 0x0, (void*)EnGanonOrgan_Init },
    { 0x1c, (void*)EnGanonOrgan_Destroy },
    { 0x2c, (void*)EnGanonOrgan_Update },
    { 0x70, NULL },
    { 0x94, NULL },
    { 0xf8, NULL },
    { 0x154, (void*)EnGanonOrgan_Draw },
};
const size_t gGzEnGanonOrganFunctionCount = ARRAY_COUNT(gGzEnGanonOrganFunctions);
