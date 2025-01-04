// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │q   a222222222222222222222222222    qaqa2   @
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐
     * │ Tab │ Q │ W │ E │ R │ T │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┐
     * │  FN  │ A │ S │ D │ F │ G │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐
     * │ Shift  │ Z │ X │ C │ V │ B │
     * ├────┬───┴┬──┴─┬─┴───┴───┼───┘
     * │Ctrl│GUI │Alt │         │
     * └────┴────┴────┴─────────┘
     */
    [0] = LAYOUT_keys(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC
    ),
    [1] = LAYOUT_keys(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,  
        _______,  _______,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  QK_BOOT,  
        _______,  _______,  _______,  _______
    )
};
