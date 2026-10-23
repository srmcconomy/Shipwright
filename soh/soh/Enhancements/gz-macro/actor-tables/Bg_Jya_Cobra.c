// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Cobra/z_bg_jya_cobra.h"

void BgJyaCobra_SpawnRay(void*, void*);
void func_80895BEC(void*, void*);
void func_80895C74(void*, void*);
void BgJyaCobra_Init(void*, void*);
void BgJyaCobra_Destroy(void*, void*);
void func_80896918(void*, void*);
void func_80896950(void*, void*);
void func_808969F8(void*, void*);
void func_80896ABC(void*, void*);
void BgJyaCobra_Update(void*, void*);
void func_80896D78(void*, void*);
void BgJyaCobra_DrawShadow(void*, void*);
void BgJyaCobra_Draw(void*, void*);

const GzActorSpan gGzBgJyaCobraSpans[] = {
    { offsetof(BgJyaCobra, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgJyaCobra, unk_168), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_16A), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_16C), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_16E), 0, 0x15e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_170), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_172), 0, 0x162, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_174.x), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_174.y), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_174.z), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_180.x), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_180.y), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_180.z), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_18C), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, unk_190), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaCobra, shadowTextureBuffer[0]), offsetof(BgJyaCobra, shadowTextureBuffer[1]) - offsetof(BgJyaCobra, shadowTextureBuffer[0]), 0x184, 0x1, 4111, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaCobraSpanCount = ARRAY_COUNT(gGzBgJyaCobraSpans);

const GzActorFunction gGzBgJyaCobraFunctions[] = {
    { 0x0, NULL },
    { 0x54, NULL },
    { 0xac, (void*)BgJyaCobra_SpawnRay },
    { 0x114, NULL },
    { 0x294, (void*)func_80895BEC },
    { 0x318, (void*)func_80895C74 },
    { 0x598, NULL },
    { 0xbc0, NULL },
    { 0xe7c, (void*)BgJyaCobra_Init },
    { 0xf68, (void*)BgJyaCobra_Destroy },
    { 0xf9c, (void*)func_80896918 },
    { 0xfd8, (void*)func_80896950 },
    { 0x1080, (void*)func_808969F8 },
    { 0x1148, (void*)func_80896ABC },
    { 0x12dc, (void*)BgJyaCobra_Update },
    { 0x1350, NULL },
    { 0x13d4, (void*)func_80896D78 },
    { 0x1500, (void*)BgJyaCobra_DrawShadow },
    { 0x176c, (void*)BgJyaCobra_Draw },
};
const size_t gGzBgJyaCobraFunctionCount = ARRAY_COUNT(gGzBgJyaCobraFunctions);
