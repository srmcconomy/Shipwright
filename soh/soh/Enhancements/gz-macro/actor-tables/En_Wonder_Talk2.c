// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Wonder_Talk2/z_en_wonder_talk2.h"

void EnWonderTalk2_Destroy(void*, void*);
void EnWonderTalk2_Init(void*, void*);
void func_80B3A10C(void*, void*);
void func_80B3A15C(void*, void*);
void func_80B3A3D4(void*, void*);
void func_80B3A4F8(void*, void*);
void EnWonderTalk2_DoNothing(void*, void*);
void EnWonderTalk2_Update(void*, void*);

const GzActorSpan gGzEnWonderTalk2Spans[] = {
    { offsetof(EnWonderTalk2, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnWonderTalk2, baseMsgId), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, switchFlag), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, talkMode), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, unk_156), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, unk_158), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, unk_15A), 0, 0x14a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, unk_15B), 0, 0x14b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, triggerRange), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, height), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, initPos.x), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, initPos.y), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk2, initPos.z), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnWonderTalk2SpanCount = ARRAY_COUNT(gGzEnWonderTalk2Spans);

const GzActorFunction gGzEnWonderTalk2Functions[] = {
    { 0x0, (void*)EnWonderTalk2_Destroy },
    { 0x10, (void*)EnWonderTalk2_Init },
    { 0x1a0, (void*)func_80B3A10C },
    { 0x1f0, (void*)func_80B3A15C },
    { 0x370, (void*)func_80B3A3D4 },
    { 0x458, (void*)func_80B3A4F8 },
    { 0x5a8, (void*)EnWonderTalk2_DoNothing },
    { 0x5b8, (void*)EnWonderTalk2_Update },
};
const size_t gGzEnWonderTalk2FunctionCount = ARRAY_COUNT(gGzEnWonderTalk2Functions);
