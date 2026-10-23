// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Js/z_en_js.h"

void EnJs_Init(void*, void*);
void EnJs_Destroy(void*, void*);
void func_80A89078(void*, void*);
void func_80A8910C(void*, void*);
void func_80A89160(void*, void*);
void func_80A891C4(void*, void*);
void func_80A89304(void*, void*);
void EnJs_Update(void*, void*);
void EnJs_Draw(void*, void*);

const GzActorSpan gGzEnJsSpans[] = {
    { offsetof(EnJs, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnJs, skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnJs, skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, jointTable[0].x), offsetof(EnJs, jointTable[1].x) - offsetof(EnJs, jointTable[0].x), 0x1cc, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, jointTable[0].y), offsetof(EnJs, jointTable[1].y) - offsetof(EnJs, jointTable[0].y), 0x1ce, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, jointTable[0].z), offsetof(EnJs, jointTable[1].z) - offsetof(EnJs, jointTable[0].z), 0x1d0, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, morphTable[0].x), offsetof(EnJs, morphTable[1].x) - offsetof(EnJs, morphTable[0].x), 0x21a, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, morphTable[0].y), offsetof(EnJs, morphTable[1].y) - offsetof(EnJs, morphTable[0].y), 0x21c, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, morphTable[0].z), offsetof(EnJs, morphTable[1].z) - offsetof(EnJs, morphTable[0].z), 0x21e, 0x6, 13, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, unk_278.x), 0, 0x268, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, unk_278.y), 0, 0x26a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, unk_278.z), 0, 0x26c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, unk_27E.x), 0, 0x26e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, unk_27E.y), 0, 0x270, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, unk_27E.z), 0, 0x272, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, unk_284), 0, 0x274, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, unk_286), 0, 0x276, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, unk_288), 0, 0x278, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnJs, actionFunc), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnJsSpanCount = ARRAY_COUNT(gGzEnJsSpans);

const GzActorFunction gGzEnJsFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnJs_Init },
    { 0x130, (void*)EnJs_Destroy },
    { 0x15c, NULL },
    { 0x204, NULL },
    { 0x278, (void*)func_80A89078 },
    { 0x2c4, (void*)func_80A890C0 },
    { 0x314, (void*)func_80A8910C },
    { 0x368, (void*)func_80A89160 },
    { 0x3d0, (void*)func_80A891C4 },
    { 0x4a4, NULL },
    { 0x518, (void*)func_80A89304 },
    { 0x550, (void*)EnJs_Update },
    { 0x7dc, NULL },
    { 0x814, NULL },
    { 0x854, (void*)EnJs_Draw },
};
const size_t gGzEnJsFunctionCount = ARRAY_COUNT(gGzEnJsFunctions);
