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

#pragma once

#include "quantum.h"

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06, R00, R01, R02, R03, R04, R05, R06, \
    L10, L11, L12, L13, L14, L15,           R11, R12, R13, R14, R15,      \
    L20, L21, L22, L23, L24, L25,           R21, R22, R23, R24, R25, R26, \
              L32, L33, L34, L35,           R31, R32, R33, R34            \
  ) \
  { \
    {   L00,   L01,   L02,   L03,   L04,   L05,   L06 }, \
    {   L10,   L11,   L12,   L13,   L14,   L15, KC_NO }, \
    {   L20,   L21,   L22,   L23,   L24,   L25, KC_NO }, \
    { KC_NO, KC_NO,   L32,   L33,   L34,   L35, KC_NO }, \
    {   R00,   R01,   R02,   R03,   R04,   R05,   R06 }, \
    { KC_NO,   R11,   R12,   R13,   R14,   R15, KC_NO }, \
    { KC_NO,   R21,   R22,   R23,   R24,   R25,   R26 }, \
    { KC_NO,   R31,   R32,   R33,   R34, KC_NO, KC_NO }, \
  }
