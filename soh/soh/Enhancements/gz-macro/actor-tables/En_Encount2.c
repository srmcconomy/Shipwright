// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Encount2/z_en_encount2.h"

void EnEncount2_Init(void*, void*);
void EnEncount2_Wait(void*, void*);
void EnEncount2_SpawnRocks(void*, void*);
void EnEncount2_Update(void*, void*);
void EnEncount2_Draw(void*, void*);
void EnEncount2_ParticleUpdate(void*, void*);
void EnEncount2_ParticleDraw(void*, void*);

const GzActorSpan gGzEnEncount2Spans[] = {
    { offsetof(EnEncount2, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnEncount2, unk150[0]), offsetof(EnEncount2, unk150[1]) - offsetof(EnEncount2, unk150[0]), 0x140, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, deathMountainSpawnerTimer), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, timerBetweenRockSpawns), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, numSpawnedRocks), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, isNotDeathMountain), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, collapseSpawnerInactive), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particleSpawnTimer), 0, 0x14e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, unk_160), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, unk164[0]), offsetof(EnEncount2, unk164[1]) - offsetof(EnEncount2, unk164[0]), 0x154, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, unk_168), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, unk16C[0]), offsetof(EnEncount2, unk16C[1]) - offsetof(EnEncount2, unk16C[0]), 0x15c, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, unk_170), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, unk174[0]), offsetof(EnEncount2, unk174[1]) - offsetof(EnEncount2, unk174[0]), 0x164, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, envEffectsTimer), 0, 0x168, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, unk_17C), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, isQuaking), 0, 0x170, 0x0, 1, 8, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].pos.x), offsetof(EnEncount2, particles[1].pos.x) - offsetof(EnEncount2, particles[0].pos.x), 0x178, 0x2c, 50, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].pos.y), offsetof(EnEncount2, particles[1].pos.y) - offsetof(EnEncount2, particles[0].pos.y), 0x17c, 0x2c, 50, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].pos.z), offsetof(EnEncount2, particles[1].pos.z) - offsetof(EnEncount2, particles[0].pos.z), 0x180, 0x2c, 50, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].scale), offsetof(EnEncount2, particles[1].scale) - offsetof(EnEncount2, particles[0].scale), 0x184, 0x2c, 50, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].isAlive), offsetof(EnEncount2, particles[1].isAlive) - offsetof(EnEncount2, particles[0].isAlive), 0x188, 0x2c, 50, 1, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].moveDirection.x), offsetof(EnEncount2, particles[1].moveDirection.x) - offsetof(EnEncount2, particles[0].moveDirection.x), 0x18c, 0x2c, 50, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].moveDirection.y), offsetof(EnEncount2, particles[1].moveDirection.y) - offsetof(EnEncount2, particles[0].moveDirection.y), 0x190, 0x2c, 50, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].moveDirection.z), offsetof(EnEncount2, particles[1].moveDirection.z) - offsetof(EnEncount2, particles[0].moveDirection.z), 0x194, 0x2c, 50, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].rot.x), offsetof(EnEncount2, particles[1].rot.x) - offsetof(EnEncount2, particles[0].rot.x), 0x198, 0x2c, 50, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].rot.y), offsetof(EnEncount2, particles[1].rot.y) - offsetof(EnEncount2, particles[0].rot.y), 0x19c, 0x2c, 50, 4, GZ_SPAN_VALUE },
    { offsetof(EnEncount2, particles[0].rot.z), offsetof(EnEncount2, particles[1].rot.z) - offsetof(EnEncount2, particles[0].rot.z), 0x1a0, 0x2c, 50, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnEncount2SpanCount = ARRAY_COUNT(gGzEnEncount2Spans);

const GzActorFunction gGzEnEncount2Functions[] = {
    { 0x0, (void*)EnEncount2_Init },
    { 0x74, (void*)EnEncount2_Wait },
    { 0x2cc, (void*)EnEncount2_SpawnRocks },
    { 0x894, (void*)EnEncount2_Update },
    { 0xc60, (void*)EnEncount2_Draw },
    { 0xc80, NULL },
    { 0xd34, (void*)EnEncount2_ParticleUpdate },
    { 0xf08, (void*)EnEncount2_ParticleDraw },
};
const size_t gGzEnEncount2FunctionCount = ARRAY_COUNT(gGzEnEncount2Functions);
