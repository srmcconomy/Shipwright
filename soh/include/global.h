#pragma once

#ifndef GLOBAL_H
#define GLOBAL_H

#include "math.h"

// #region SOH [Enhancement]
// The N64's sinf and cosf round differently from the C library's for some numbers, so gz macros from the N64 play
// back with them (GzN64Trig.c). The game's C calls go through a switch between the two.
#if !defined(__cplusplus) && !defined(GZ_N64_TRIG_IMPL)
float Math_SinFN64Aware(float x);
float Math_CosFN64Aware(float x);
#define sinf(x) Math_SinFN64Aware(x)
#define cosf(x) Math_CosFN64Aware(x)
#endif
// #endregion

#include "functions.h"
#include "variables.h"
#include "macros.h"
#include "soh/cvar_prefixes.h"
#ifdef __cplusplus
extern "C++" {
#endif
#include "soh/Enhancements/gameconsole.h"
#include "soh/Enhancements/gameplaystats.h"
#ifdef __cplusplus
}
#endif

#define _AudioseqSegmentRomStart "Audioseq"
#define _AudiobankSegmentRomStart "Audiobank"
#define _AudiotableSegmentRomStart "Audiotable"

#define _icon_item_staticSegmentRomStart 0
#define _icon_item_staticSegmentRomEnd 0
#define _map_i_staticSegmentRomStart 0
#define _map_i_staticSegmentRomEnd 0
#define _message_staticSegmentRomStart 0
#define _message_staticSegmentRomEnd 0
#define _do_action_staticSegmentRomStart 0
#define _do_action_staticSegmentRomEnd 0
#define _nes_font_staticSegmentRomStart 0
#define _nes_font_staticSegmentRomEnd 0
#define _nintendo_rogo_staticSegmentRomStart 0
#define _nintendo_rogo_staticSegmentRomEnd 0
#define _dmadataSegmentStart 0
#define _dmadataSegmentEnd 0
#define _parameter_staticSegmentRomStart 0
#define _parameter_staticSegmentRomEnd 0
#define _map_name_staticSegmentRomStart 0
#define _map_name_staticSegmentRomEnd 0
#define _title_staticSegmentRomStart 0
#define _title_staticSegmentRomEnd 0
#define _z_select_staticSegmentRomStart 0
#define _z_select_staticSegmentRomEnd 0

// TODO: POSIX/BSD Bug, this is a hack to fix the build compilation on any BSD system (Switch, Wii-U, Vita, etc)
// <sys/types.h> defines quad as a macro, which conflicts with the quad parameter on z_collision_check.c
#undef quad

#endif
