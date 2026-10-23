#include "global.h"

// The latest generated random number, used to generate the next number in the sequence.
static u32 sRandInt = 1;

// Space to store a value to be re-interpreted as a float.
static u32 sRandFloat;

/**
 * Gets the next integer in the sequence of pseudo-random numbers.
 */
u32 Rand_Next(void) {
    return sRandInt = (sRandInt * 1664525) + 1013904223;
}

/**
 * Seeds the pseudo-random number generator by providing a starting value.
 */
void Rand_Seed(u32 seed) {
    sRandInt = seed;
}

// #region SOH [Enhancement]
/**
 * Gets the latest generated random number without advancing the sequence.
 */
u32 Rand_GetSeed(void) {
    return sRandInt;
}

// The N64 versions make a float from the lowest 23 bits of the random number, where the GameCube versions SoH comes
// from use the highest. Same sequence, different floats. Set while a gz macro from the N64 plays.
static u8 sRandN64Floats = false;

void Rand_SetN64Floats(u8 n64) {
    sRandN64Floats = n64;
}

static u32 Rand_FloatBits(u32 randInt) {
    return sRandN64Floats ? (randInt & 0x007FFFFF) : (randInt >> 9);
}
// #endregion

/**
 * Returns a pseudo-random floating-point number between 0.0f and 1.0f, by generating
 * the next integer and masking it to an IEEE-754 compliant floating-point number
 * between 1.0f and 2.0f, returning the result subtract 1.0f.
 */
f32 Rand_ZeroOne(void) {
    sRandInt = (sRandInt * 1664525) + 1013904223;
    sRandFloat = (Rand_FloatBits(sRandInt) | 0x3F800000);
    return *((f32*)&sRandFloat) - 1.0f;
}

/**
 * Returns a pseudo-random floating-point number between -0.5f and 0.5f by the same
 * manner in which Rand_ZeroOne generates its result.
 */
f32 Rand_Centered(void) {
    sRandInt = (sRandInt * 1664525) + 1013904223;
    sRandFloat = (Rand_FloatBits(sRandInt) | 0x3F800000);
    return *((f32*)&sRandFloat) - 1.5f;
}

/**
 * Seeds a pseudo-random number at rndNum with a provided seed.
 */
void Rand_Seed_Variable(u32* rndNum, u32 seed) {
    *rndNum = seed;
}

/**
 * Generates the next pseudo-random integer from the provided rndNum.
 */
u32 Rand_Next_Variable(u32* rndNum) {
    return *rndNum = (*rndNum * 1664525) + 1013904223;
}

/**
 * Generates the next pseudo-random floating-point number between 0.0f and
 * 1.0f from the provided rndNum.
 */
f32 Rand_ZeroOne_Variable(u32* rndNum) {
    u32 next = (*rndNum * 1664525) + 1013904223;

    // clang-format off
    *rndNum = next; sRandFloat = Rand_FloatBits(next) | 0x3F800000;
    // clang-format on
    return *((f32*)&sRandFloat) - 1.0f;
}

/**
 * Generates the next pseudo-random floating-point number between -0.5f and
 * 0.5f from the provided rndNum.
 */
f32 Rand_Centered_Variable(u32* rndNum) {
    u32 next = (*rndNum * 1664525) + 1013904223;

    // clang-format off
    *rndNum = next; sRandFloat = Rand_FloatBits(next) | 0x3F800000;
    // clang-format on
    return *((f32*)&sRandFloat) - 1.5f;
}
