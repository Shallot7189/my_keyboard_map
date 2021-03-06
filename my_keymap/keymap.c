 /* Copyright 2020 t-miyajima
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,-------------------------------------------------------.
   * | Tab |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  -| Bspc|
   * |-------------------------------------------------------|
   * | Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;| Return|
   * |-------------------------------------------------------|
   * | Shift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|   /| Del|
   * `----.---------------------------------------------.---'
   *      | Alt |Win | Layer |   Space   |Win |Alt |Esc |
   *      `---------------------------------------------'
   */
    LAYOUT_44key( /* Base */
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINUS, KC_BSPACE,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_ENTER,
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_DELETE,
        KC_LALT, KC_LGUI, TG(1), KC_SPACE, KC_APP, TG(2), KC_ESCAPE),
    LAYOUT_44key( /* layer 1 */
        KC_GRAVE, KC_EXCLAIM, KC_AT, KC_HASH, KC_QUOTE, KC_PERCENT, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_LBRACKET, KC_RBRACKET,
        KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS,
        KC_TRNS, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_EQUAL, KC_BSLASH,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    LAYOUT_44key( /* layer 2 */
	KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, 
	KC_TRNS, KC_NO, KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO, KC_MS_BTN1, 
	KC_TRNS, KC_NO, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_WH_RIGHT, KC_HOME, KC_END, KC_PGUP, KC_PGDOWN, KC_MS_BTN4, KC_MS_BTN5, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_BTN2, KC_MS_BTN3, KC_TRNS, KC_TRNS),
};
