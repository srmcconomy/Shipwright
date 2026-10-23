// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Attack_Niw/z_en_attack_niw.h"

void EnAttackNiw_Init(void*, void*);
void EnAttackNiw_Destroy(void*, void*);
void func_809B5670(void*, void*);
void func_809B59B0(void*, void*);
void func_809B5C18(void*, void*);
void EnAttackNiw_Update(void*, void*);
void EnAttackNiw_Draw(void*, void*);

const GzActorSpan gGzEnAttackNiwSpans[] = {
    { offsetof(EnAttackNiw, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAttackNiw, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAttackNiw, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAttackNiw, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAttackNiw, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnAttackNiw, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, jointTable[0].x), offsetof(EnAttackNiw, jointTable[1].x) - offsetof(EnAttackNiw, jointTable[0].x), 0x180, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, jointTable[0].y), offsetof(EnAttackNiw, jointTable[1].y) - offsetof(EnAttackNiw, jointTable[0].y), 0x182, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, jointTable[0].z), offsetof(EnAttackNiw, jointTable[1].z) - offsetof(EnAttackNiw, jointTable[0].z), 0x184, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, morphTable[0].x), offsetof(EnAttackNiw, morphTable[1].x) - offsetof(EnAttackNiw, morphTable[0].x), 0x1e0, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, morphTable[0].y), offsetof(EnAttackNiw, morphTable[1].y) - offsetof(EnAttackNiw, morphTable[0].y), 0x1e2, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, morphTable[0].z), offsetof(EnAttackNiw, morphTable[1].z) - offsetof(EnAttackNiw, morphTable[0].z), 0x1e4, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, actionFunc), 0, 0x240, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnAttackNiw, unk_254), 0, 0x244, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_256), 0, 0x246, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_258), 0, 0x248, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_25A), 0, 0x24a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_25C), 0, 0x24c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_25E), 0, 0x24e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_260), 0, 0x250, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_262), 0, 0x252, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_264), 0, 0x254, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_268), 0, 0x258, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_26C), 0, 0x25c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_270[0]), offsetof(EnAttackNiw, unk_270[1]) - offsetof(EnAttackNiw, unk_270[0]), 0x260, 0x1, 8, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_278), 0, 0x268, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_27C), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_280), 0, 0x270, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_284), 0, 0x274, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_288), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_28C), 0, 0x27c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_28E), 0, 0x27e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_290[0]), offsetof(EnAttackNiw, unk_290[1]) - offsetof(EnAttackNiw, unk_290[0]), 0x280, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_292), 0, 0x282, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_294[0]), offsetof(EnAttackNiw, unk_294[1]) - offsetof(EnAttackNiw, unk_294[0]), 0x284, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_296), 0, 0x286, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_298.x), 0, 0x288, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_298.y), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_298.z), 0, 0x290, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2A4.x), 0, 0x294, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2A4.y), 0, 0x298, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2A4.z), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2B0.x), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2B0.y), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2B0.z), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2BC), 0, 0x2ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2C0), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2C4[0]), offsetof(EnAttackNiw, unk_2C4[1]) - offsetof(EnAttackNiw, unk_2C4[0]), 0x2b4, 0x1, 12, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2D0), 0, 0x2c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2D4), 0, 0x2c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2D8[0]), offsetof(EnAttackNiw, unk_2D8[1]) - offsetof(EnAttackNiw, unk_2D8[0]), 0x2c8, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2DC), 0, 0x2cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2E0), 0, 0x2d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAttackNiw, unk_2E4), 0, 0x2d4, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnAttackNiwSpanCount = ARRAY_COUNT(gGzEnAttackNiwSpans);

const GzActorFunction gGzEnAttackNiwFunctions[] = {
    { 0x0, (void*)EnAttackNiw_Init },
    { 0x134, (void*)EnAttackNiw_Destroy },
    { 0x168, NULL },
    { 0x4f0, NULL },
    { 0x574, (void*)func_809B5670 },
    { 0x8b4, (void*)func_809B59B0 },
    { 0xb24, (void*)func_809B5C18 },
    { 0xbe8, (void*)EnAttackNiw_Update },
    { 0xeac, NULL },
    { 0x1004, (void*)EnAttackNiw_Draw },
};
const size_t gGzEnAttackNiwFunctionCount = ARRAY_COUNT(gGzEnAttackNiwFunctions);
