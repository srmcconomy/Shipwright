// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Jya_Megami/z_bg_jya_megami.h"

void BgJyaMegami_InitCollider(void*, void*);
void BgJyaMegami_Init(void*, void*);
void BgJyaMegami_Destroy(void*, void*);
void BgJyaMegami_DetectLight(void*, void*);
void BgJyaMegami_Explode(void*, void*);
void BgJyaMegami_Update(void*, void*);
void BgJyaMegami_DrawFace(void*, void*);
void BgJyaMegami_DrawExplode(void*, void*);
void BgJyaMegami_Draw(void*, void*);

const GzActorSpan gGzBgJyaMegamiSpans[] = {
    { offsetof(BgJyaMegami, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgJyaMegami, collider.base.actor), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaMegami, collider.base.at), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaMegami, collider.base.ac), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaMegami, collider.base.oc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaMegami, collider.base.atFlags), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, collider.base.acFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, collider.base.ocFlags1), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, collider.base.ocFlags2), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, collider.base.colType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, collider.base.shape), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, collider.count), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, collider.elements), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaMegami, colliderItem.info.toucher.dmgFlags), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.toucher.effect), 0, 0x17c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.toucher.damage), 0, 0x17d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.bumper.dmgFlags), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.bumper.effect), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.bumper.defense), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.bumper.hitPos.x), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.bumper.hitPos.y), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.bumper.hitPos.z), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.elemType), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.toucherFlags), 0, 0x18d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.bumperFlags), 0, 0x18e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.ocElemFlags), 0, 0x18f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.info.atHit), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaMegami, colliderItem.info.acHit), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaMegami, colliderItem.info.atHitInfo), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaMegami, colliderItem.info.acHitInfo), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgJyaMegami, colliderItem.dim.modelSphere.center.x), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.dim.modelSphere.center.y), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.dim.modelSphere.center.z), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.dim.modelSphere.radius), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.dim.worldSphere.center.x), 0, 0x1a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.dim.worldSphere.center.y), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.dim.worldSphere.center.z), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.dim.worldSphere.radius), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.dim.scale), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, colliderItem.dim.limb), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, lightTimer), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, explosionTimer), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, crumbleIndex), 0, 0x1bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, pieces[0].pos.x), offsetof(BgJyaMegami, pieces[1].pos.x) - offsetof(BgJyaMegami, pieces[0].pos.x), 0x1c0, 0x1c, 13, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, pieces[0].pos.y), offsetof(BgJyaMegami, pieces[1].pos.y) - offsetof(BgJyaMegami, pieces[0].pos.y), 0x1c4, 0x1c, 13, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, pieces[0].pos.z), offsetof(BgJyaMegami, pieces[1].pos.z) - offsetof(BgJyaMegami, pieces[0].pos.z), 0x1c8, 0x1c, 13, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, pieces[0].vel.x), offsetof(BgJyaMegami, pieces[1].vel.x) - offsetof(BgJyaMegami, pieces[0].vel.x), 0x1cc, 0x1c, 13, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, pieces[0].vel.y), offsetof(BgJyaMegami, pieces[1].vel.y) - offsetof(BgJyaMegami, pieces[0].vel.y), 0x1d0, 0x1c, 13, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, pieces[0].vel.z), offsetof(BgJyaMegami, pieces[1].vel.z) - offsetof(BgJyaMegami, pieces[0].vel.z), 0x1d4, 0x1c, 13, 4, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, pieces[0].rotVelX), offsetof(BgJyaMegami, pieces[1].rotVelX) - offsetof(BgJyaMegami, pieces[0].rotVelX), 0x1d8, 0x1c, 13, 2, GZ_SPAN_VALUE },
    { offsetof(BgJyaMegami, pieces[0].rotVelY), offsetof(BgJyaMegami, pieces[1].rotVelY) - offsetof(BgJyaMegami, pieces[0].rotVelY), 0x1da, 0x1c, 13, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgJyaMegamiSpanCount = ARRAY_COUNT(gGzBgJyaMegamiSpans);

const GzActorFunction gGzBgJyaMegamiFunctions[] = {
    { 0x0, NULL },
    { 0x58, (void*)BgJyaMegami_InitCollider },
    { 0xac, NULL },
    { 0x2f0, NULL },
    { 0x3ec, (void*)BgJyaMegami_Init },
    { 0x480, (void*)BgJyaMegami_Destroy },
    { 0x4c8, NULL },
    { 0x4e4, (void*)BgJyaMegami_DetectLight },
    { 0x670, NULL },
    { 0x708, (void*)BgJyaMegami_Explode },
    { 0xa90, (void*)BgJyaMegami_Update },
    { 0xab4, (void*)BgJyaMegami_DrawFace },
    { 0xbf4, (void*)BgJyaMegami_DrawExplode },
    { 0xdbc, (void*)BgJyaMegami_Draw },
};
const size_t gGzBgJyaMegamiFunctionCount = ARRAY_COUNT(gGzBgJyaMegamiFunctions);
