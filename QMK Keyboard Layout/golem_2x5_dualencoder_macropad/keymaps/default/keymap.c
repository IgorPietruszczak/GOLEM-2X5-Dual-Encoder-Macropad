// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_B);
        } else {
            tap_code(KC_D);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_A);
        } else {
            tap_code(KC_C);
        }
    }
    return false;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │
     * ├───┼───┼───┼───┼───┼───┤
     * │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_2x6(
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,   KC_X,
        KC_F,    KC_G,    KC_H,    KC_I,    KC_J,   KC_D
    )
};
