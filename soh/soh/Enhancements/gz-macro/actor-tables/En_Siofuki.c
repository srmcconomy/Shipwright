// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Siofuki/z_en_siofuki.h"

void EnSiofuki_Init(void*, void*);
void EnSiofuki_Destroy(void*, void*);
void func_80AFBDC8(void*, void*);
void func_80AFBE8C(void*, void*);
void func_80AFC1D0(void*, void*);
void func_80AFC218(void*, void*);
void func_80AFC34C(void*, void*);
void func_80AFC3C8(void*, void*);
void func_80AFC478(void*, void*);
void func_80AFC544(void*, void*);
void EnSiofuki_Update(void*, void*);
void EnSiofuki_Draw(void*, void*);

const GzActorSpan gGzEnSiofukiSpans[] = {
    { offsetof(EnSiofuki, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnSiofuki, timer), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, initPosY), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, unk_170), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, unk_174), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, oscillation), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, targetHeight), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, currentHeight), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, splashTimer), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, applySpeed), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, appliedSpeed), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, targetAppliedSpeed), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, appliedYaw), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, activeTime), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, maxHeight), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnSiofuki, sfxFlags), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnSiofukiSpanCount = ARRAY_COUNT(gGzEnSiofukiSpans);

const GzActorFunction gGzEnSiofukiFunctions[] = {
    { 0x0, (void*)EnSiofuki_Init },
    { 0x21c, (void*)EnSiofuki_Destroy },
    { 0x250, (void*)func_80AFBDC8 },
    { 0x310, (void*)func_80AFBE8C },
    { 0x65c, (void*)func_80AFC1D0 },
    { 0x6a4, (void*)func_80AFC218 },
    { 0x7e0, (void*)func_80AFC34C },
    { 0x864, (void*)func_80AFC3C8 },
    { 0x91c, (void*)func_80AFC478 },
    { 0x9f0, (void*)func_80AFC544 },
    { 0xa28, (void*)EnSiofuki_Update },
    { 0xa4c, (void*)EnSiofuki_Draw },
};
const size_t gGzEnSiofukiFunctionCount = ARRAY_COUNT(gGzEnSiofukiFunctions);
