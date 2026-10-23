// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ex_Ruppy/z_en_ex_ruppy.h"

void EnExRuppy_Init(void*, void*);
void EnExRuppy_Destroy(void*, void*);
void EnExRuppy_DropIntoWater(void*, void*);
void EnExRuppy_EnterWater(void*, void*);
void EnExRuppy_Sink(void*, void*);
void EnExRuppy_WaitInGame(void*, void*);
void EnExRuppy_Kill(void*, void*);
void EnExRuppy_WaitToBlowUp(void*, void*);
void EnExRuppy_WaitAsCollectible(void*, void*);
void EnExRuppy_GalleryTarget(void*, void*);
void EnExRuppy_Update(void*, void*);
void EnExRuppy_Draw(void*, void*);

const GzActorSpan gGzEnExRuppySpans[] = {
    { offsetof(EnExRuppy, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnExRuppy, colorIdx), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnExRuppy, type), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnExRuppy, invisible), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnExRuppy, timer), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnExRuppy, rupeeValue), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnExRuppy, unk_15A), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnExRuppy, galleryFlag), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnExRuppy, unk_160), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnExRuppySpanCount = ARRAY_COUNT(gGzEnExRuppySpans);

const GzActorFunction gGzEnExRuppyFunctions[] = {
    { 0x0, (void*)EnExRuppy_Init },
    { 0x3d8, (void*)EnExRuppy_Destroy },
    { 0x3e8, NULL },
    { 0x604, (void*)EnExRuppy_DropIntoWater },
    { 0x6e4, (void*)EnExRuppy_EnterWater },
    { 0x850, (void*)EnExRuppy_Sink },
    { 0x950, (void*)EnExRuppy_WaitInGame },
    { 0xaa8, (void*)EnExRuppy_Kill },
    { 0xaec, (void*)EnExRuppy_WaitToBlowUp },
    { 0xc18, (void*)EnExRuppy_WaitAsCollectible },
    { 0xc9c, (void*)EnExRuppy_GalleryTarget },
    { 0xcfc, (void*)EnExRuppy_Update },
    { 0xd88, (void*)EnExRuppy_Draw },
};
const size_t gGzEnExRuppyFunctionCount = ARRAY_COUNT(gGzEnExRuppyFunctions);
