#pragma once

#include QMK_KEYBOARD_H

enum layer_names {
  _COLEMAK_DHM = 0,
  _NAV,
  _NAVR,
  _PAD,
  _F,
  _M
};

// Lower Thumb keys
#define MY_LE G(KC_F)
#define MY_LT1 LCTL_T(KC_BSPACE)
#define MY_LT2 LSFT_T(KC_SPACE) // LT(_NAV, KC_SPACE)
#define MY_LT3 MO(_NAV)
#define MY_LT4 MO(_M)
#define MY_RT4 MO(_M)
#define MY_RT3 MO(_PAD)
#define MY_RT2 RSFT_T(KC_SPACE)
#define MY_RT1 LT(_NAVR, KC_BSPACE)
#define MY_RE KC_MUTE

// Upper Thumb keys
#define MY_LT5 MO(_F)
#define MY_LT6 SH_MON
#define MY_RT6 SH_MON
#define MY_RT5 MO(_F)

// Outer Edge Keys
#define MY_LOH KC_TAB
#define MY_LOM LALT_T(KC_ESC)
#define MY_LOL TD_CACCCV
#define MY_ROH KC_BSPACE
#define MY_ROM LALT_T(KC_QUOTE)
#define MY_ROL KC_LCTL

// Alpha keys
#define MY_A KC_A
#define MY_R KC_R
#define MY_S KC_S // LSFT_T(KC_S)
#define MY_T KC_T
#define MY_G KC_G
#define MY_M KC_M
#define MY_N KC_N
#define MY_E KC_E
#define MY_I KC_I
#define MY_O KC_O
/* #define MY_N RSFT_T(KC_N) */
/* #define MY_E LCTL_T(KC_E) */
/* #define MY_I LALT_T(KC_I) */
/* #define MY_O LGUI_T(KC_O) */

#define MY_Z LGUI_T(KC_Z)
#define MY_X KC_X
#define MY_C KC_C
#define MY_D KC_D
#define MY_V KC_V
#define MY_K KC_K
#define MY_H KC_H
#define MY_COMMA KC_COMMA
#define MY_DOT KC_DOT
#define MY_SLASH LGUI_T(KC_SLASH)

#define MY_Q KC_Q
#define MY_W KC_W
#define MY_F KC_F
#define MY_P KC_P
#define MY_B KC_B
#define MY_J KC_J
#define MY_L KC_L
#define MY_U KC_U
#define MY_Y KC_Y
#define MY_SCLN KC_SCLN


// Tap Dance
enum {
  CACCCV_TD = 0,
};

#define TD_CACCCV TD(CACCCV_TD)

