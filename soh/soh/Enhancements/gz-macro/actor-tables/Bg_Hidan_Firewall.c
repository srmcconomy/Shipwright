// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Hidan_Firewall/z_bg_hidan_firewall.h"

void BgHidanFirewall_Init(void*, void*);
void BgHidanFirewall_Destroy(void*, void*);
void BgHidanFirewall_Wait(void*, void*);
void BgHidanFirewall_Countdown(void*, void*);
void BgHidanFirewall_Erupt(void*, void*);
void BgHidanFirewall_Collide(void*, void*);
void BgHidanFirewall_ColliderFollowPlayer(void*, void*);
void BgHidanFirewall_Update(void*, void*);
void BgHidanFirewall_Draw(void*, void*);

const GzActorSpan gGzBgHidanFirewallSpans[] = {
    { offsetof(BgHidanFirewall, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHidanFirewall, unk_150), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.base.actor), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFirewall, collider.base.at), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFirewall, collider.base.ac), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFirewall, collider.base.oc), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFirewall, collider.base.atFlags), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.base.acFlags), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.base.ocFlags1), 0, 0x156, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.base.ocFlags2), 0, 0x157, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.base.colType), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.base.shape), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.toucher.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.toucher.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.toucher.damage), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.bumper.dmgFlags), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.bumper.effect), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.bumper.defense), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.bumper.hitPos.x), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.bumper.hitPos.y), 0, 0x16c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.bumper.hitPos.z), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.elemType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.toucherFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.bumperFlags), 0, 0x172, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.ocElemFlags), 0, 0x173, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.info.atHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFirewall, collider.info.acHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFirewall, collider.info.atHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFirewall, collider.info.acHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHidanFirewall, collider.dim.radius), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.dim.height), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.dim.yShift), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.dim.pos.x), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.dim.pos.y), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHidanFirewall, collider.dim.pos.z), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHidanFirewallSpanCount = ARRAY_COUNT(gGzBgHidanFirewallSpans);

const GzActorFunction gGzBgHidanFirewallFunctions[] = {
    { 0x0, (void*)BgHidanFirewall_Init },
    { 0xa0, (void*)BgHidanFirewall_Destroy },
    { 0xcc, NULL },
    { 0x13c, (void*)BgHidanFirewall_Wait },
    { 0x184, (void*)BgHidanFirewall_Countdown },
    { 0x1b8, (void*)BgHidanFirewall_Erupt },
    { 0x248, (void*)BgHidanFirewall_Collide },
    { 0x2b0, (void*)BgHidanFirewall_ColliderFollowPlayer },
    { 0x414, (void*)BgHidanFirewall_Update },
    { 0x4ec, (void*)BgHidanFirewall_Draw },
};
const size_t gGzBgHidanFirewallFunctionCount = ARRAY_COUNT(gGzBgHidanFirewallFunctions);
