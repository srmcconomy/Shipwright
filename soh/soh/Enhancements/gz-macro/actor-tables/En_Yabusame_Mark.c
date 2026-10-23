// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Yabusame_Mark/z_en_yabusame_mark.h"

void EnYabusameMark_Destroy(void*, void*);
void EnYabusameMark_Init(void*, void*);
void func_80B42F74(void*, void*);
void EnYabusameMark_Update(void*, void*);

const GzActorSpan gGzEnYabusameMarkSpans[] = {
    { offsetof(EnYabusameMark, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnYabusameMark, typeIndex), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, subTypeIndex), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, worldPos.x), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, worldPos.y), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, worldPos.z), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexA.x), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexA.y), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexA.z), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexB.x), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexB.y), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexB.z), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexC.x), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexC.y), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexC.z), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexD.x), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexD.y), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, vertexD.z), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.base.actor), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYabusameMark, collider.base.at), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYabusameMark, collider.base.ac), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYabusameMark, collider.base.oc), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYabusameMark, collider.base.atFlags), 0, 0x190, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.base.acFlags), 0, 0x191, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.base.ocFlags1), 0, 0x192, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.base.ocFlags2), 0, 0x193, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.base.colType), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.base.shape), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.toucher.dmgFlags), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.toucher.effect), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.toucher.damage), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.bumper.dmgFlags), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.bumper.effect), 0, 0x1a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.bumper.defense), 0, 0x1a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.bumper.hitPos.x), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.bumper.hitPos.y), 0, 0x1a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.bumper.hitPos.z), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.elemType), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.toucherFlags), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.bumperFlags), 0, 0x1ae, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.ocElemFlags), 0, 0x1af, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.info.atHit), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYabusameMark, collider.info.acHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYabusameMark, collider.info.atHitInfo), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYabusameMark, collider.info.acHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnYabusameMark, collider.dim.quad[0].x), offsetof(EnYabusameMark, collider.dim.quad[1].x) - offsetof(EnYabusameMark, collider.dim.quad[0].x), 0x1c0, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.dim.quad[0].y), offsetof(EnYabusameMark, collider.dim.quad[1].y) - offsetof(EnYabusameMark, collider.dim.quad[0].y), 0x1c4, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.dim.quad[0].z), offsetof(EnYabusameMark, collider.dim.quad[1].z) - offsetof(EnYabusameMark, collider.dim.quad[0].z), 0x1c8, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.dim.dcMid.x), 0, 0x1f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.dim.dcMid.y), 0, 0x1f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.dim.dcMid.z), 0, 0x1f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.dim.baMid.x), 0, 0x1f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.dim.baMid.y), 0, 0x1f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.dim.baMid.z), 0, 0x1fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnYabusameMark, collider.dim.acDist), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnYabusameMarkSpanCount = ARRAY_COUNT(gGzEnYabusameMarkSpans);

const GzActorFunction gGzEnYabusameMarkFunctions[] = {
    { 0x0, (void*)EnYabusameMark_Destroy },
    { 0x2c, (void*)EnYabusameMark_Init },
    { 0x16c, (void*)func_80B42F74 },
    { 0x3b0, (void*)EnYabusameMark_Update },
};
const size_t gGzEnYabusameMarkFunctionCount = ARRAY_COUNT(gGzEnYabusameMarkFunctions);
