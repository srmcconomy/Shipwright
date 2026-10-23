// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Holl/z_en_holl.h"

void EnHoll_Init(void*, void*);
void EnHoll_Destroy(void*, void*);
void EnHoll_HorizontalVisibleNarrow(void*, void*);
void EnHoll_HorizontalInvisible(void*, void*);
void EnHoll_VerticalDownBgCoverLarge(void*, void*);
void EnHoll_VerticalBgCover(void*, void*);
void EnHoll_VerticalInvisible(void*, void*);
void EnHoll_HorizontalBgCoverSwitchFlag(void*, void*);
void EnHoll_WaitRoomLoaded(void*, void*);
void EnHoll_Update(void*, void*);
void EnHoll_Draw(void*, void*);

const GzActorSpan gGzEnHollSpans[] = {
    { offsetof(EnHoll, planeAlpha), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHoll, side), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHoll, resetBgCoverAlpha), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHoll, actionFunc), 0, 0x140, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnHollSpanCount = ARRAY_COUNT(gGzEnHollSpans);

const GzActorFunction gGzEnHollFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x3c, NULL },
    { 0xa4, (void*)EnHoll_Init },
    { 0xe0, (void*)EnHoll_Destroy },
    { 0x110, NULL },
    { 0x1cc, (void*)EnHoll_HorizontalVisibleNarrow },
    { 0x40c, (void*)EnHoll_HorizontalInvisible },
    { 0x5bc, (void*)EnHoll_VerticalDownBgCoverLarge },
    { 0x7a8, (void*)EnHoll_VerticalBgCover },
    { 0x928, (void*)EnHoll_VerticalInvisible },
    { 0xa20, (void*)EnHoll_HorizontalBgCoverSwitchFlag },
    { 0xc30, (void*)EnHoll_WaitRoomLoaded },
    { 0xca8, (void*)EnHoll_Update },
    { 0xccc, (void*)EnHoll_Draw },
};
const size_t gGzEnHollFunctionCount = ARRAY_COUNT(gGzEnHollFunctions);
