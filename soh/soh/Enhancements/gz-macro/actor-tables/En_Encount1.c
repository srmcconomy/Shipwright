// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Encount1/z_en_encount1.h"

void EnEncount1_Init(void*, void*);
void EnEncount1_SpawnLeevers(void*, void*);
void EnEncount1_SpawnTektites(void*, void*);
void EnEncount1_SpawnStalchildOrWolfos(void*, void*);
void EnEncount1_Update(void*, void*);

const GzActorSpan gGzEnEncount1Spans[] = {
    { offsetof(EnEncount1, updateFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnEncount1, maxCurSpawns), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, curNumSpawn), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, spawnType), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, maxTotalSpawns), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, totalNumSpawn), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, outOfRangeTimer), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, fieldSpawnTimer), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, killCount), 0, 0x14e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, numLeeverSpawns), 0, 0x150, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, leeverIndex), 0, 0x152, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, timer), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, reduceLeevers), 0, 0x156, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, spawnRange), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount1, bigLeever), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
};
const size_t gGzEnEncount1SpanCount = ARRAY_COUNT(gGzEnEncount1Spans);

const GzActorFunction gGzEnEncount1Functions[] = {
    { 0x0, (void*)EnEncount1_Init },
    { 0x134, (void*)EnEncount1_SpawnLeevers },
    { 0x490, (void*)EnEncount1_SpawnTektites },
    { 0x628, (void*)EnEncount1_SpawnStalchildOrWolfos },
    { 0xa7c, (void*)EnEncount1_Update },
};
const size_t gGzEnEncount1FunctionCount = ARRAY_COUNT(gGzEnEncount1Functions);
