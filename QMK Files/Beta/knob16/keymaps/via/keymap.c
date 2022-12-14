/* Copyright 2022 ziptyze
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
  [0] = LAYOUT ( /* Base */
    KC_P7,    KC_P8,    KC_P9,    KC_PMNS,
    KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
    KC_P1,    KC_P2,    KC_P3,    KC_PSLS,
    MO(1),    KC_P0,    KC_PDOT,  KC_PENT
  ),

  [1] = LAYOUT ( /* Fn Layer */
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS
  ),

  [2] = LAYOUT ( 
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS
  ),

  [3] = LAYOUT ( 
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS
  )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =  {
        ENCODER_CCW_CW(KC_A, KC_B),
        ENCODER_CCW_CW(KC_C, KC_D),
        ENCODER_CCW_CW(KC_E, KC_F),
        ENCODER_CCW_CW(KC_G, KC_H),
        ENCODER_CCW_CW(KC_I, KC_J),
        ENCODER_CCW_CW(KC_K, KC_L),
        ENCODER_CCW_CW(KC_M, KC_N),
        ENCODER_CCW_CW(KC_O, KC_P),
        ENCODER_CCW_CW(KC_Q, KC_R),
        ENCODER_CCW_CW(KC_S, KC_T),
        ENCODER_CCW_CW(KC_U, KC_V),
        ENCODER_CCW_CW(KC_W, KC_X),
        ENCODER_CCW_CW(KC_Y, KC_Z),
        ENCODER_CCW_CW(KC_1, KC_2),
        ENCODER_CCW_CW(KC_3, KC_4),
        ENCODER_CCW_CW(KC_5, KC_6)
    },
    [1] =  {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
    [2] =  {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
    [3] =  {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    }
};
#endif