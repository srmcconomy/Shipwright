// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Bean/z_obj_bean.h"

void ObjBean_InitCollider(void*, void*);
void ObjBean_FindFloor(void*, void*);
void ObjBean_SetupPathCount(void*, void*);
void ObjBean_SetupPath(void*, void*);
void ObjBean_FollowPath(void*, void*);
s32 ObjBean_CheckForHorseTrample(void*, void*);
void ObjBean_Break(void*, void*);
void ObjBean_Init(void*, void*);
void ObjBean_Destroy(void*, void*);
void ObjBean_WaitForBean(void*, void*);
void func_80B8FE3C(void*, void*);
void func_80B8FEAC(void*, void*);
void func_80B8FF8C(void*, void*);
void func_80B90050(void*, void*);
void ObjBean_WaitForWater(void*, void*);
void ObjBean_GrowWaterPhase1(void*, void*);
void ObjBean_GrowWaterPhase2(void*, void*);
void ObjBean_GrowWaterPhase3(void*, void*);
void ObjBean_GrowWaterPhase4(void*, void*);
void ObjBean_GrowWaterPhase5(void*, void*);
void ObjBean_WaitForPlayer(void*, void*);
void ObjBean_Fly(void*, void*);
void ObjBean_WaitForStepOff(void*, void*);
void func_80B90918(void*, void*);
void func_80B909B0(void*, void*);
void func_80B90A34(void*, void*);
void ObjBean_Update(void*, void*);
void ObjBean_DrawSoftSoilSpot(void*, void*);
void ObjBean_DrawBeanstalk(void*, void*);
void ObjBean_Draw(void*, void*);

const GzActorSpan gGzObjBeanSpans[] = {
    { offsetof(ObjBean, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjBean, collider.base.actor), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjBean, collider.base.at), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjBean, collider.base.ac), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjBean, collider.base.oc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjBean, collider.base.atFlags), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.base.acFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.base.ocFlags1), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.base.ocFlags2), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.base.colType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.base.shape), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.toucher.dmgFlags), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.toucher.effect), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.toucher.damage), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.bumper.dmgFlags), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.bumper.effect), 0, 0x17c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.bumper.defense), 0, 0x17d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.bumper.hitPos.x), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.bumper.hitPos.y), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.bumper.hitPos.z), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.elemType), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.toucherFlags), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.bumperFlags), 0, 0x186, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.ocElemFlags), 0, 0x187, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.info.atHit), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjBean, collider.info.acHit), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjBean, collider.info.atHitInfo), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjBean, collider.info.acHitInfo), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjBean, collider.dim.radius), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.dim.height), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.dim.yShift), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.dim.pos.x), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.dim.pos.y), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, collider.dim.pos.z), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, timer), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1B6.x), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1B6.y), 0, 0x1a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1B6.z), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, transformFunc), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjBean, unk_1C0), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1C2), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1C4), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1C6), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1C8), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1CA), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1CC), 0, 0x1bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1CE), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, leafRotFactor), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1D2), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, stalkSizeMultiplier), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjBean, pathPoints.x), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjBean, pathPoints.y), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjBean, pathPoints.z), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1E4), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjBean, posOffsetX), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjBean, posOffsetZ), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjBean, pathCount), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, currentPointIndex), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, nextPointIndex), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjBean, unk_1F6), 0, 0x1e6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjBean, stateFlags), 0, 0x1e7, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzObjBeanSpanCount = ARRAY_COUNT(gGzObjBeanSpans);

const GzActorFunction gGzObjBeanFunctions[] = {
    { 0x0, (void*)ObjBean_InitCollider },
    { 0x58, NULL },
    { 0xb0, (void*)ObjBean_FindFloor },
    { 0x118, NULL },
    { 0x138, NULL },
    { 0x348, NULL },
    { 0x378, NULL },
    { 0x450, NULL },
    { 0x480, NULL },
    { 0x4a4, (void*)ObjBean_SetupPathCount },
    { 0x4e4, (void*)ObjBean_SetupPath },
    { 0x560, (void*)ObjBean_FollowPath },
    { 0x808, (void*)ObjBean_CheckForHorseTrample },
    { 0x898, (void*)ObjBean_Break },
    { 0xb10, NULL },
    { 0xbcc, NULL },
    { 0xc3c, NULL },
    { 0xc80, NULL },
    { 0xcf8, NULL },
    { 0xd7c, NULL },
    { 0xdc0, NULL },
    { 0xe48, NULL },
    { 0xe5c, NULL },
    { 0xec0, NULL },
    { 0xedc, NULL },
    { 0xf58, NULL },
    { 0xf9c, NULL },
    { 0xff8, (void*)ObjBean_Init },
    { 0x11b4, (void*)ObjBean_Destroy },
    { 0x1230, NULL },
    { 0x1268, (void*)ObjBean_WaitForBean },
    { 0x12e4, NULL },
    { 0x131c, (void*)func_80B8FE3C },
    { 0x134c, NULL },
    { 0x138c, (void*)func_80B8FEAC },
    { 0x1430, NULL },
    { 0x1468, (void*)func_80B8FF8C },
    { 0x14ec, NULL },
    { 0x1528, (void*)func_80B90050 },
    { 0x15e8, NULL },
    { 0x1630, (void*)ObjBean_WaitForWater },
    { 0x1728, NULL },
    { 0x1768, (void*)ObjBean_GrowWaterPhase1 },
    { 0x17ac, NULL },
    { 0x17e8, (void*)ObjBean_GrowWaterPhase2 },
    { 0x1898, NULL },
    { 0x18d0, (void*)ObjBean_GrowWaterPhase3 },
    { 0x19e4, NULL },
    { 0x1a1c, (void*)ObjBean_GrowWaterPhase4 },
    { 0x1ab8, NULL },
    { 0x1af0, (void*)ObjBean_GrowWaterPhase5 },
    { 0x1b48, NULL },
    { 0x1b74, (void*)ObjBean_WaitForPlayer },
    { 0x1be8, NULL },
    { 0x1c2c, (void*)ObjBean_Fly },
    { 0x1d5c, NULL },
    { 0x1d88, (void*)ObjBean_WaitForStepOff },
    { 0x1dc8, NULL },
    { 0x1df4, (void*)func_80B90918 },
    { 0x1e50, NULL },
    { 0x1e90, (void*)func_80B909B0 },
    { 0x1ed8, NULL },
    { 0x1f10, (void*)func_80B90A34 },
    { 0x1fb0, (void*)ObjBean_Update },
    { 0x2140, (void*)ObjBean_DrawSoftSoilSpot },
    { 0x21c8, (void*)ObjBean_DrawBeanstalk },
    { 0x2254, (void*)ObjBean_Draw },
};
const size_t gGzObjBeanFunctionCount = ARRAY_COUNT(gGzObjBeanFunctions);
