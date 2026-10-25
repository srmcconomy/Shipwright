// The game's sinf and cosf: the C library's, or the N64's (libultra's) while a gz macro from the N64 plays. libultra's
// work out the same polynomial in doubles but don't always round to the same float, and a macro has to move things
// exactly as the N64 did. Ported from libultra's gu/sinf.c and gu/cosf.c, which SoH doesn't build: their constants
// are written as big endian word pairs.
#define GZ_N64_TRIG_IMPL
#include "global.h"
#include <string.h>

typedef union {
    u64 bits;
    f64 d;
} N64Double;

static const N64Double sPoly[] = {
    { 0x3FF0000000000000ull }, { 0xBFC55554BC83656Dull }, { 0x3F8110ED3804C2A0ull },
    { 0xBF29F6FFEEA56814ull }, { 0x3EC5DBDF0E314BFEull },
};
static const N64Double sInvPi = { 0x3FD45F306DC9C883ull };
static const N64Double sPiHi = { 0x400921FB50000000ull };
static const N64Double sPiLo = { 0x3E6110B4611A6263ull };

#define N64_ROUND(x) (s32)(((x) >= 0.0) ? ((x) + 0.5) : ((x) - 0.5))

static f64 N64_Poly(f64 dx) {
    f64 xSq = dx * dx;
    f64 polyApprox = ((sPoly[4].d * xSq + sPoly[3].d) * xSq + sPoly[2].d) * xSq + sPoly[1].d;
    return dx + (dx * xSq) * polyApprox;
}

static s32 N64_Exponent(f32 x) {
    s32 ix;
    memcpy(&ix, &x, sizeof(ix));
    return (ix >> 22) & 0x1FF;
}

static f32 N64_sinf(f32 x) {
    s32 xpt = N64_Exponent(x);
    if (xpt < 0xFF) {
        return xpt >= 0xE6 ? (f32)N64_Poly(x) : x;
    }
    if (xpt < 0x136) {
        f64 dx = x;
        s32 n = N64_ROUND(dx * sInvPi.d);
        f64 dn = n;
        dx -= dn * sPiHi.d;
        dx -= dn * sPiLo.d;
        f64 result = N64_Poly(dx);
        return !(n & 1) ? (f32)result : -(f32)result;
    }
    return x != x ? NAN : 0.0f;
}

static f32 N64_cosf(f32 x) {
    s32 xpt = N64_Exponent(x);
    if (xpt < 0x136) {
        f32 absx = (x > 0) ? x : -x;
        f64 dx = absx;
        s32 n = N64_ROUND(dx * sInvPi.d + 0.5);
        f64 dn = (f64)n - 0.5;
        dx -= dn * sPiHi.d;
        dx -= dn * sPiLo.d;
        f64 result = N64_Poly(dx);
        return !(n & 1) ? (f32)result : -(f32)result;
    }
    return x != x ? NAN : 0.0f;
}

// On by default, as this build plays N64 gz macros
static u8 sN64Trig = true;

void Math_SetN64Trig(u8 n64) {
    sN64Trig = n64;
}

f32 Math_SinFN64Aware(f32 x) {
    return sN64Trig ? N64_sinf(x) : sinf(x);
}

f32 Math_CosFN64Aware(f32 x) {
    return sN64Trig ? N64_cosf(x) : cosf(x);
}
