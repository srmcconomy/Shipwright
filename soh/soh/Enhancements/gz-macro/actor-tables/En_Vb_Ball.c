// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Vb_Ball/z_en_vb_ball.h"

void EnVbBall_Init(void*, void*);
void EnVbBall_Destroy(void*, void*);
void EnVbBall_UpdateBones(void*, void*);
void EnVbBall_Update(void*, void*);
void EnVbBall_Draw(void*, void*);

const GzActorSpan gGzEnVbBallSpans[] = {
    { offsetof(EnVbBall, unk_14C[0]), offsetof(EnVbBall, unk_14C[1]) - offsetof(EnVbBall, unk_14C[0]), 0x13c, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, unkTimer1), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, unkTimer2), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, unk_154[0]), offsetof(EnVbBall, unk_154[1]) - offsetof(EnVbBall, unk_154[0]), 0x144, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, xRotVel), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, yRotVel), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, shadowSize), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, shadowOpacity), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.base.actor), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnVbBall, collider.base.at), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnVbBall, collider.base.ac), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnVbBall, collider.base.oc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnVbBall, collider.base.atFlags), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.base.acFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.base.ocFlags1), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.base.ocFlags2), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.base.colType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.base.shape), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.toucher.dmgFlags), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.toucher.effect), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.toucher.damage), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.bumper.dmgFlags), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.bumper.effect), 0, 0x17c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.bumper.defense), 0, 0x17d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.bumper.hitPos.x), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.bumper.hitPos.y), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.bumper.hitPos.z), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.elemType), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.toucherFlags), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.bumperFlags), 0, 0x186, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.ocElemFlags), 0, 0x187, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.info.atHit), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnVbBall, collider.info.acHit), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnVbBall, collider.info.atHitInfo), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnVbBall, collider.info.acHitInfo), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnVbBall, collider.dim.radius), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.dim.height), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.dim.yShift), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.dim.pos.x), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.dim.pos.y), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnVbBall, collider.dim.pos.z), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnVbBallSpanCount = ARRAY_COUNT(gGzEnVbBallSpans);

const GzActorFunction gGzEnVbBallFunctions[] = {
    { 0x0, (void*)EnVbBall_Init },
    { 0x180, (void*)EnVbBall_Destroy },
    { 0x1bc, NULL },
    { 0x294, NULL },
    { 0x334, (void*)EnVbBall_UpdateBones },
    { 0x618, (void*)EnVbBall_Update },
    { 0xde4, (void*)EnVbBall_Draw },
};
const size_t gGzEnVbBallFunctionCount = ARRAY_COUNT(gGzEnVbBallFunctions);
