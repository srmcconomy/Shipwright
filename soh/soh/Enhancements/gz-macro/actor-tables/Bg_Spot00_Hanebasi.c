// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot00_Hanebasi/z_bg_spot00_hanebasi.h"

void BgSpot00Hanebasi_Init(void*, void*);
void BgSpot00Hanebasi_Destroy(void*, void*);
void BgSpot00Hanebasi_DrawbridgeWait(void*, void*);
void BgSpot00Hanebasi_DoNothing(void*, void*);
void BgSpot00Hanebasi_DrawbridgeRiseAndFall(void*, void*);
void BgSpot00Hanebasi_SetTorchLightInfo(void*, void*);
void BgSpot00Hanebasi_Update(void*, void*);
void BgSpot00Hanebasi_DrawTorches(void*, void*);
void BgSpot00Hanebasi_Draw(void*, void*);

const GzActorSpan gGzBgSpot00HanebasiSpans[] = {
    { offsetof(BgSpot00Hanebasi, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot00Hanebasi, destAngle), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot00Hanebasi, lightNode), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot00Hanebasi, lightInfo.type), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot00Hanebasi, lightInfo.params.point.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot00Hanebasi, lightInfo.params.point.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot00Hanebasi, lightInfo.params.point.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot00Hanebasi, lightInfo.params.point.color[0]), offsetof(BgSpot00Hanebasi, lightInfo.params.point.color[1]) - offsetof(BgSpot00Hanebasi, lightInfo.params.point.color[0]), 0x168, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot00Hanebasi, lightInfo.params.point.drawGlow), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot00Hanebasi, lightInfo.params.point.radius), 0, 0x16c, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot00HanebasiSpanCount = ARRAY_COUNT(gGzBgSpot00HanebasiSpans);

const GzActorFunction gGzBgSpot00HanebasiFunctions[] = {
    { 0x0, (void*)BgSpot00Hanebasi_Init },
    { 0x410, (void*)BgSpot00Hanebasi_Destroy },
    { 0x46c, (void*)BgSpot00Hanebasi_DrawbridgeWait },
    { 0x59c, (void*)BgSpot00Hanebasi_DoNothing },
    { 0x5ac, (void*)BgSpot00Hanebasi_DrawbridgeRiseAndFall },
    { 0x6e0, (void*)BgSpot00Hanebasi_SetTorchLightInfo },
    { 0x838, (void*)BgSpot00Hanebasi_Update },
    { 0xb48, (void*)BgSpot00Hanebasi_DrawTorches },
    { 0xdf0, (void*)BgSpot00Hanebasi_Draw },
};
const size_t gGzBgSpot00HanebasiFunctionCount = ARRAY_COUNT(gGzBgSpot00HanebasiFunctions);
