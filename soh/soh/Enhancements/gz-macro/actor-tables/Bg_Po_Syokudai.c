// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Po_Syokudai/z_bg_po_syokudai.h"

void BgPoSyokudai_Init(void*, void*);
void BgPoSyokudai_Destroy(void*, void*);
void BgPoSyokudai_Update(void*, void*);
void BgPoSyokudai_Draw(void*, void*);

const GzActorSpan gGzBgPoSyokudaiSpans[] = {
    { offsetof(BgPoSyokudai, flameColor), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, flameTextureScroll), 0, 0x13e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, lightNode), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoSyokudai, lightInfo.type), 0, 0x144, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, lightInfo.params.point.x), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, lightInfo.params.point.y), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, lightInfo.params.point.z), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, lightInfo.params.point.color[0]), offsetof(BgPoSyokudai, lightInfo.params.point.color[1]) - offsetof(BgPoSyokudai, lightInfo.params.point.color[0]), 0x14c, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, lightInfo.params.point.drawGlow), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, lightInfo.params.point.radius), 0, 0x150, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.base.actor), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoSyokudai, collider.base.at), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoSyokudai, collider.base.ac), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoSyokudai, collider.base.oc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoSyokudai, collider.base.atFlags), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.base.acFlags), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.base.ocFlags1), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.base.ocFlags2), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.base.colType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.base.shape), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.toucher.dmgFlags), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.toucher.effect), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.toucher.damage), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.bumper.dmgFlags), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.bumper.effect), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.bumper.defense), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.bumper.hitPos.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.bumper.hitPos.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.bumper.hitPos.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.elemType), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.toucherFlags), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.bumperFlags), 0, 0x182, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.ocElemFlags), 0, 0x183, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.info.atHit), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoSyokudai, collider.info.acHit), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoSyokudai, collider.info.atHitInfo), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoSyokudai, collider.info.acHitInfo), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoSyokudai, collider.dim.radius), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.dim.height), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.dim.yShift), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.dim.pos.x), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.dim.pos.y), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoSyokudai, collider.dim.pos.z), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgPoSyokudaiSpanCount = ARRAY_COUNT(gGzBgPoSyokudaiSpans);

const GzActorFunction gGzBgPoSyokudaiFunctions[] = {
    { 0x0, (void*)BgPoSyokudai_Init },
    { 0x2a0, (void*)BgPoSyokudai_Destroy },
    { 0x310, (void*)BgPoSyokudai_Update },
    { 0x390, (void*)BgPoSyokudai_Draw },
};
const size_t gGzBgPoSyokudaiFunctionCount = ARRAY_COUNT(gGzBgPoSyokudaiFunctions);
