// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Dnt_Demo/z_en_dnt_demo.h"

void EnDntDemo_Destroy(void*, void*);
void EnDntDemo_Init(void*, void*);
void EnDntDemo_Results(void*, void*);
void EnDntDemo_Prize(void*, void*);
void EnDntDemo_Update(void*, void*);

const GzActorSpan gGzEnDntDemoSpans[] = {
    { offsetof(EnDntDemo, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDntDemo, judgeTimer), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, unkTimer1), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, unkTimer2), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, debugArrowTimer), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, leaderSignal), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, action), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, prize), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, subCamera), 0, 0x14e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, scrubPos[0].x), offsetof(EnDntDemo, scrubPos[1].x) - offsetof(EnDntDemo, scrubPos[0].x), 0x150, 0xc, 9, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, scrubPos[0].y), offsetof(EnDntDemo, scrubPos[1].y) - offsetof(EnDntDemo, scrubPos[0].y), 0x154, 0xc, 9, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, scrubPos[0].z), offsetof(EnDntDemo, scrubPos[1].z) - offsetof(EnDntDemo, scrubPos[0].z), 0x158, 0xc, 9, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, leaderPos.x), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, leaderPos.y), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, leaderPos.z), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDntDemo, scrubs[0]), offsetof(EnDntDemo, scrubs[1]) - offsetof(EnDntDemo, scrubs[0]), 0x1c8, 0x4, 9, 4, GZ_SPAN_POINTER },
    { offsetof(EnDntDemo, leader), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_POINTER },
};
const size_t gGzEnDntDemoSpanCount = ARRAY_COUNT(gGzEnDntDemoSpans);

const GzActorFunction gGzEnDntDemoFunctions[] = {
    { 0x0, (void*)EnDntDemo_Destroy },
    { 0x10, (void*)EnDntDemo_Init },
    { 0x180, (void*)EnDntDemo_Judge },
    { 0x7a0, (void*)EnDntDemo_Results },
    { 0xa14, (void*)EnDntDemo_Prize },
    { 0xaf0, (void*)EnDntDemo_Update },
};
const size_t gGzEnDntDemoFunctionCount = ARRAY_COUNT(gGzEnDntDemoFunctions);
