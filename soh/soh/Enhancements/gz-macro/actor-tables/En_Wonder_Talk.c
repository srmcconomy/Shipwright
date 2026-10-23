// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Wonder_Talk/z_en_wonder_talk.h"

void EnWonderTalk_Destroy(void*, void*);
void EnWonderTalk_Init(void*, void*);
void func_80B391CC(void*, void*);
void func_80B3943C(void*, void*);
void func_80B395F0(void*, void*);
void EnWonderTalk_Update(void*, void*);

const GzActorSpan gGzEnWonderTalkSpans[] = {
    { offsetof(EnWonderTalk, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnWonderTalk, unk_150), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk, unk_152), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk, switchFlag), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk, unk_156), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk, unk_158), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk, unk_15A), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk, unk_15C), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk, height), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWonderTalk, unk_164), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnWonderTalkSpanCount = ARRAY_COUNT(gGzEnWonderTalkSpans);

const GzActorFunction gGzEnWonderTalkFunctions[] = {
    { 0x0, (void*)EnWonderTalk_Destroy },
    { 0x10, (void*)EnWonderTalk_Init },
    { 0xb8, (void*)func_80B391CC },
    { 0x248, (void*)func_80B3943C },
    { 0x39c, (void*)func_80B395F0 },
    { 0x58c, (void*)EnWonderTalk_Update },
};
const size_t gGzEnWonderTalkFunctionCount = ARRAY_COUNT(gGzEnWonderTalkFunctions);
