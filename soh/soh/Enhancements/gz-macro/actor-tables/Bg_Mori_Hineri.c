// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Mori_Hineri/z_bg_mori_hineri.h"

void BgMoriHineri_Init(void*, void*);
void BgMoriHineri_Destroy(void*, void*);
void func_808A39FC(void*, void*);
void BgMoriHineri_DoNothing(void*, void*);
void BgMoriHineri_SpawnBossKeyChest(void*, void*);
void func_808A3C8C(void*, void*);
void func_808A3D58(void*, void*);
void func_808A3E54(void*, void*);
void BgMoriHineri_Update(void*, void*);
void BgMoriHineri_DrawHallAndRoom(void*, void*);

const GzActorSpan gGzBgMoriHineriSpans[] = {
    { offsetof(BgMoriHineri, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgMoriHineri, moriHineriObjIdx), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHineri, moriTexObjIdx), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHineri, boxObjIdx), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgMoriHineri, switchFlag), 0, 0x15b, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgMoriHineriSpanCount = ARRAY_COUNT(gGzBgMoriHineriSpans);

const GzActorFunction gGzBgMoriHineriFunctions[] = {
    { 0x0, (void*)BgMoriHineri_Init },
    { 0x200, (void*)BgMoriHineri_Destroy },
    { 0x234, (void*)func_808A39FC },
    { 0x42c, (void*)BgMoriHineri_DoNothing },
    { 0x43c, (void*)BgMoriHineri_SpawnBossKeyChest },
    { 0x4cc, (void*)func_808A3C8C },
    { 0x598, (void*)func_808A3D58 },
    { 0x694, (void*)func_808A3E54 },
    { 0x774, (void*)BgMoriHineri_Update },
    { 0x798, (void*)BgMoriHineri_DrawHallAndRoom },
};
const size_t gGzBgMoriHineriFunctionCount = ARRAY_COUNT(gGzBgMoriHineriFunctions);
