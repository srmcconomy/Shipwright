// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot07_Taki/z_bg_spot07_taki.h"

void BgSpot07Taki_Init(void*, void*);
void BgSpot07Taki_Destroy(void*, void*);
void BgSpot07Taki_DoNothing(void*, void*);
void BgSpot07Taki_Update(void*, void*);
void BgSpot07Taki_Draw(void*, void*);

const GzActorSpan gGzBgSpot07TakiSpans[] = {
    { offsetof(BgSpot07Taki, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgSpot07TakiSpanCount = ARRAY_COUNT(gGzBgSpot07TakiSpans);

const GzActorFunction gGzBgSpot07TakiFunctions[] = {
    { 0x0, (void*)BgSpot07Taki_Init },
    { 0xac, (void*)BgSpot07Taki_Destroy },
    { 0xe0, (void*)BgSpot07Taki_DoNothing },
    { 0xf0, (void*)BgSpot07Taki_Update },
    { 0x114, (void*)BgSpot07Taki_Draw },
};
const size_t gGzBgSpot07TakiFunctionCount = ARRAY_COUNT(gGzBgSpot07TakiFunctions);
