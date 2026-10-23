#pragma once

#include <stddef.h>
#include <stdint.h>

// What a gz savestate's actors need to be restored from the N64's memory, for the actors whose layout and code
// could be matched with an N64 OoT 1.2 ROM. Generated into actor-tables/.

typedef enum {
    GZ_SPAN_VALUE,    // a number, big endian on the N64
    GZ_SPAN_POINTER,  // a pointer to data, which keeps what the fresh actor set up
    GZ_SPAN_FUNCTION, // a pointer to one of the actor's functions
} GzSpanKind;

// One of an actor's own fields, or the same field through an array
typedef struct {
    size_t sohOffset;
    size_t sohStride;
    uint32_t n64Offset;
    uint32_t n64Stride;
    uint16_t count;
    uint8_t size; // on the N64
    uint8_t kind;
} GzActorSpan;

// One of the functions in the actor's N64 overlay, in order, and the SoH function it is, if it can be pointed to
typedef struct {
    uint32_t n64Offset; // from the overlay's start
    void* function;
} GzActorFunction;

typedef struct {
    int16_t id;
    uint32_t n64Size;
    const GzActorSpan* spans;
    const size_t* spanCount;
    const GzActorFunction* functions;
    const size_t* functionCount;
    // The actor's destroy function, whose address in a state shows where its overlay was loaded
    int destroyIndex;
} GzActorTable;

#ifdef __cplusplus
extern "C" {
#endif
extern const GzActorTable gGzActorTables[];
extern const size_t gGzActorTableCount;
#ifdef __cplusplus
}
#endif
