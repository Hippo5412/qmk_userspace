// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │GUI├───┐           ┌───┤Alt│
      *           └───┤Bsp├───┐   ┌───┤Ent├───┘
      *               └───┤   │   │   ├───┘
      *                   └───┘   └───┘
      */
    [0] = LAYOUT(
        KC_Q,            KC_W,            KC_E,            KC_R,            KC_T,                               KC_Y,               KC_U,            KC_I,            KC_O,            KC_P,
        LGUI_T(KC_A),    LALT_T(KC_S),    LSFT_T(KC_D),    LCTL_T(KC_F),    KC_G,                               KC_H,               RCTL_T(KC_J),    RSFT_T(KC_K),    RALT_T(KC_L),    RGUI_T(KC_SCLN),
        KC_Z,            KC_X,            KC_C,            KC_V,            KC_B,                               KC_N,               KC_M,            KC_COMM,         KC_DOT,          KC_SLSH,
                                          LT(3, KC_TAB),   LT(2, KC_SPC),   LT(1, KC_ESC),                      LT(1, KC_BSPC),     LT(2, KC_ENT),   LT(3, KC_DEL)
    ),

    [1] = LAYOUT(
        KC_F1,             KC_F2,            KC_F3,                 KC_F4,                   KC_F5,                                KC_F6,      KC_F7,              KC_F8,           KC_F9,            KC_F10,
        LGUI_T(KC_F11),    LALT_T(KC_HOME),    LSFT_T(KC_PAGE_UP),    LCTL_T(KC_PAGE_DOWN),    KC_END,                               KC_LEFT,    RCTL_T(KC_DOWN),    RSFT_T(KC_UP),   RALT_T(KC_RGHT),  RGUI_T(KC_F12),
        XXXXXXX,           XXXXXXX,          XXXXXXX,               XXXXXXX,                 XXXXXXX,                              XXXXXXX,    XXXXXXX,            XXXXXXX,         XXXXXXX,          XXXXXXX,
                                             XXXXXXX,               XXXXXXX,                 XXXXXXX,                              XXXXXXX,    XXXXXXX,            XXXXXXX
    ),
    [2] = LAYOUT(
        KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,
        LGUI_T(KC_1),    LALT_T(KC_2),    LSFT_T(KC_3),    LCTL_T(KC_4),    KC_5,                               KC_6,    RCTL_T(KC_7),    RSFT_T(KC_8),   RALT_T(KC_9),  RGUI_T(KC_0),
        KC_BSLS,    KC_SLSH,    KC_ASTR,    KC_MINS,    KC_EQL,     KC_GRV,     KC_QUOT,    XXXXXXX,    KC_LBRC,    KC_RBRC,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    )
};
