// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Clear_Tag/z_en_clear_tag.h"

void EnClearTag_Destroy(void*, void*);
void EnClearTag_Init(void*, void*);
void EnClearTag_Update(void*, void*);
void EnClearTag_Draw(void*, void*);

const GzActorSpan gGzEnClearTagSpans[] = {
    { offsetof(EnClearTag, shouldExplode), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, drawMode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, state), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, timers[0]), offsetof(EnClearTag, timers[1]) - offsetof(EnClearTag, timers[0]), 0x140, 0x2, 3, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, targetPosition.x), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, targetPosition.y), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, targetPosition.z), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, targetDirection.x), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, targetDirection.y), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, targetDirection.z), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, acceleration.x), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, acceleration.y), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, acceleration.z), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, frameCounter), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, shouldShootLaser), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, roll), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, crashingTimer), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, deathTimer), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, floorTangent.x), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, floorTangent.y), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, floorTangent.z), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnClearTag, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnClearTag, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnClearTag, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnClearTag, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnClearTag, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnClearTag, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnClearTag, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnClearTag, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, cutsceneMode), 0, 0x1d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, cameraId), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, cutsceneCameraAt.x), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, cutsceneCameraAt.y), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, cutsceneCameraAt.z), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, cutsceneCameraEye.x), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, cutsceneCameraEye.y), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, cutsceneCameraEye.z), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, cutsceneTimer), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnClearTag, unk_1FE[0]), offsetof(EnClearTag, unk_1FE[1]) - offsetof(EnClearTag, unk_1FE[0]), 0x1ee, 0x1, 6, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnClearTagSpanCount = ARRAY_COUNT(gGzEnClearTagSpans);

const GzActorFunction gGzEnClearTagFunctions[] = {
    { 0x0, NULL },
    { 0xf8, NULL },
    { 0x1e8, NULL },
    { 0x30c, NULL },
    { 0x3e4, (void*)EnClearTag_Destroy },
    { 0x410, (void*)EnClearTag_Init },
    { 0x5d4, NULL },
    { 0x690, (void*)EnClearTag_Update },
    { 0x1444, (void*)EnClearTag_Draw },
    { 0x19d8, NULL },
    { 0x1da0, NULL },
};
const size_t gGzEnClearTagFunctionCount = ARRAY_COUNT(gGzEnClearTagFunctions);
