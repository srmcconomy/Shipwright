// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Kanban/z_en_kanban.h"

void EnKanban_Init(void*, void*);
void EnKanban_Destroy(void*, void*);
void EnKanban_Message(void*, void*);
void EnKanban_Update(void*, void*);
void EnKanban_Draw(void*, void*);

const GzActorSpan gGzEnKanbanSpans[] = {
    { offsetof(EnKanban, unk_14C[0]), offsetof(EnKanban, unk_14C[1]) - offsetof(EnKanban, unk_14C[0]), 0x13c, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, frameCount), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, airTimer), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, actionState), 0, 0x144, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, partFlags), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, partCount), 0, 0x148, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, invincibilityTimer), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, offset.x), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKanban, offset.y), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKanban, offset.z), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKanban, spinRot.x), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, spinRot.y), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, spinRot.z), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, spinVel.x), 0, 0x15e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, spinVel.y), 0, 0x160, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, spinVel.z), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, spinXFlag), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, spinZFlag), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, bounceX), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, bounceZ), 0, 0x168, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, bounceCount), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, pieceWidth), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKanban, pieceHeight), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKanban, direction), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, floorRot.x), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKanban, floorRot.y), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKanban, floorRot.z), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKanban, cutType), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, pieceType), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, cutMarkTimer), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, cutMarkAlpha), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, zTargetTimer), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, msgFlag), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, msgTimer), 0, 0x18d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, ocarinaFlag), 0, 0x18e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.base.actor), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKanban, collider.base.at), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKanban, collider.base.ac), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKanban, collider.base.oc), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKanban, collider.base.atFlags), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.base.acFlags), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.base.ocFlags1), 0, 0x1a2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.base.ocFlags2), 0, 0x1a3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.base.colType), 0, 0x1a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.base.shape), 0, 0x1a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.toucher.dmgFlags), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.toucher.effect), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.toucher.damage), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.bumper.dmgFlags), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.bumper.effect), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.bumper.defense), 0, 0x1b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.bumper.hitPos.x), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.bumper.hitPos.y), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.bumper.hitPos.z), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.elemType), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.toucherFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.bumperFlags), 0, 0x1be, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.ocElemFlags), 0, 0x1bf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.info.atHit), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKanban, collider.info.acHit), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKanban, collider.info.atHitInfo), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKanban, collider.info.acHitInfo), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKanban, collider.dim.radius), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.dim.height), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.dim.yShift), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.dim.pos.x), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.dim.pos.y), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKanban, collider.dim.pos.z), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnKanbanSpanCount = ARRAY_COUNT(gGzEnKanbanSpans);

const GzActorFunction gGzEnKanbanFunctions[] = {
    { 0x0, NULL },
    { 0xbc, (void*)EnKanban_Init },
    { 0x1e4, (void*)EnKanban_Destroy },
    { 0x21c, (void*)EnKanban_Message },
    { 0x2d4, (void*)EnKanban_Update },
    { 0x1b50, (void*)EnKanban_Draw },
};
const size_t gGzEnKanbanFunctionCount = ARRAY_COUNT(gGzEnKanbanFunctions);
