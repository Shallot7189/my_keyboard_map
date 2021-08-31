/*
Copyright 2021 Salicylic_Acid

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_jp.h"
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_number {
  _QWERTY = 0,
  _FN,
  _NUM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty
   * ,-------------------------------------------------------------------------------------------------.
   * | GESC |   Q  |   W  |   E  |   R  |   T  |   [  |   ]  |   Y  |   U  |   l  |   O  |   P  |   -  |
   * |------+------+------+------+------+------+-------------|------+------+------+------+------+------'
   * | Ctrl |   A  |   S  |   D  |   F  |   G  |             |   H  |   J  |   K  |   L  |   ;  |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------.
   * | Shift|   Z  |   X  |   C  |   V  |   B  |             |   '  |   N  |   M  |   ,  |   .  |   /  |
   * `-------------------------------------------------------------------------------------------------'
   *                      | Alt  | Fn1  | Space| L_Clk| R_Clk| Enter|Tab(*)| Bspc |
   *                      `----------------------------------+------+------+------'
   */
  [_QWERTY] = LAYOUT(
    KC_GESC,	KC_Q,	KC_W,	KC_E,	    KC_R,	KC_T,	    KC_LBRC,    KC_RBRC,	KC_Y,		KC_U,			KC_I,   KC_O,		    KC_P,	    KC_MINS,	\
    KC_RCTRL,	KC_A,	KC_S,	KC_D,	    KC_F,	KC_G,					KC_H,		KC_J,			KC_K,   KC_L,		    KC_SCLN,			\
    KC_LSFT,	KC_Z,	KC_X,	KC_C,	    KC_V,	KC_B,					KC_QUOT,	KC_N,			KC_M,   KC_COMM,	    KC_DOT,	    KC_SLSH,	\
				KC_LALT,    MO(_FN),	KC_SPC,	    KC_BTN1,    KC_BTN2,	KC_ENT,		LT(_NUM, KC_TAB),	KC_BSPC							\
  ),
  /* Fn
   * ,-------------------------------------------------------------------------------------------------.
   * | GESC |   !  |   @  |   #  |   $  |   %  |   [  |   ]  |   ^  |   &  |   *  |   (  |   )  |   =  |
   * |------+------+------+------+------+------+-------------|------+------+------+------+------+------'
   * | Ctrl |  F1  |  F2  |  F3  |  F4  |  F5  |             | Left |  Up  | Down | Right|   \  |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------.
   * | Shift|  F6  |  F7  |  F8  |  F9  |  F10 |             | Home | End  | PgUp | PgDn | Win  | PtScr|
   * `-------------------------------------------------------------------------------------------------'
   *                      | Alt  | Fn1  | Space| L_Clk| R_Clk| Enter|Tab(*)| Del  |
   *                      `----------------------------------+------+------+------'
   */
  [_FN] = LAYOUT(
    _______,	KC_EXLM,    KC_AT,	KC_HASH,    KC_DLR,	KC_PERC,    _______,    _______,	KC_CIRC,    KC_AMPR,	KC_ASTR,   KC_LPRN,    KC_RPRN,	    KC_EQL,	\
    _______,	KC_F1,	    KC_F2,	KC_F3,	    KC_F4,	KC_F5,					KC_LEFT,    KC_UP,	KC_DOWN,   KC_RGHT,    KC_BSLS,			\
    _______,	KC_F6,	    KC_F7,	KC_F8,	    KC_F9,	KC_F10,					KC_HOME,    KC_END,	KC_PGUP,   KC_PGDN,    KC_LGUI,	    KC_PSCR,	\
			    _______,    _______,    _______,    _______,    _______,	_______,	KC_TAB,	    KC_DEL							\
  ),
  /* Num 
   * ,-------------------------------------------------------------------------------------------------.
   * | GESC |      |   1  |   2  |   3  |      |      |   =  |   -  |   *  |   /  |   (  |   )  |      |
   * |------+------+------+------+------+------+-------------|------+------+------+------+------+------'
   * | Ctrl |      |   4  |   5  |   6  |      |             | Left |  Up  | Down | Right|      |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------.
   * | Shift|      |   7  |   8  |   9  |   0  |             | Home | End  | PgUp | PgDn | Win  | PtScr|
   * `-------------------------------------------------------------------------------------------------'
   *                      | Alt  | Fn1  | Space| L_Clk| R_Clk| Enter|Tab(*)| Del  |
   *                      `----------------------------------+------+------+------'
   */
  [_NUM] = LAYOUT(
    _______,	XXXXXXX,    KC_1,	KC_2,	    KC_3,	XXXXXXX,    XXXXXXX,    KC_EQL,		KC_MINS,    KC_ASTR,	KC_SLSH,   KC_LPRN,    KC_RPRN,	    XXXXXXX,	\
    _______,	XXXXXXX,    KC_4,	KC_5,	    KC_6,	XXXXXXX,				KC_LEFT,    KC_UP,	KC_DOWN,   KC_RGHT,    XXXXXXX,			\
    _______,	XXXXXXX,    KC_7,	KC_8,	    KC_9,	KC_0,					KC_HOME,    KC_END,	KC_PGUP,   KC_PGDN,    KC_LGUI,	    KC_PSCR,	\
			    _______,    _______,    _______,    _______,    _______,	_______,	KC_TAB,	    KC_DEL							\
  )
};

