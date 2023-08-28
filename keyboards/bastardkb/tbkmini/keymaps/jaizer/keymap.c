/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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
#define _DVORAK 0
#define _FIRST 1
#define _SECOND 2
#define _THIRD 3
#define _FOURTH 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x6_3(
        //,-------------------------------------------------------------.                        ,-------------------------------------------------------------.
              KC_TAB,    KC_QUOT,  KC_COMM,   KC_DOT,     KC_P,     KC_Y,                              KC_F,     KC_G,     KC_C,     KC_R,     KC_L,    KC_BSPC,
        //|---------|  |--------+---------+---------+---------+---------|                        |---------+---------+---------+---------+---------|  |--------|
       OSM(MOD_LCTL),       KC_A,     KC_O,     KC_E,     KC_U,     KC_I,                              KC_D,     KC_H,     KC_T,     KC_N,     KC_S,    KC_MINS,
        //|---------|  |--------+---------+---------+---------+---------|                        |---------+---------+---------+---------+---------|  |--------|
       OSM(MOD_LSFT),    KC_SCLN,     KC_Q,     KC_J,     KC_K,     KC_X,                              KC_B,     KC_M,     KC_W,    KC_V,      KC_Z,     KC_ESC,
        //|---------|  |--------+---------+---------+---------+---------+---------|    |---------+---------+---------+---------+--------+----------|  |--------|
                                                       KC_LGUI,   KC_SPC,    TT(1),         TT(2),   KC_ENT,   KC_RALT
                                                  //`---------+---------+---------|    |---------+---------+---------|'
        ),

    [1] = LAYOUT_split_3x6_3(
        //,-------------------------------------------------------------.                        ,-------------------------------------------------------------.
              KC_TAB,       KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                              KC_6,     KC_7,     KC_8,     KC_9,     KC_0,    KC_BSPC,
        //|---------|  |--------+---------+---------+---------+---------|                        |---------+---------+---------+---------+---------|  |--------|
       OSM(MOD_LCTL),    XXXXXXX,  XXXXXXX,  KC_BRMD,  KC_BRMU,  XXXXXXX,                           KC_LEFT,  KC_DOWN,    KC_UP, KC_RIGHT,  XXXXXXX,OSM(MOD_RCTL),
        //|---------|  |--------+---------+---------+---------+---------|                        |---------+---------+---------+---------+---------|  |--------|
       OSM(MOD_LSFT),    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                           KC_MPRV,  XXXXXXX,  XXXXXXX,  KC_MNXT,  XXXXXXX,OSM(KC_RSFT),
        //|---------|  |--------+---------+---------+---------+---------+---------|    |---------+---------+---------+---------+--------+----------|  |--------|
                                                       KC_LGUI,   KC_SPC,  _______,         TT(3),   KC_ENT,   KC_RALT
                                                  //`---------+---------+---------|    |---------+---------+---------|'
        ),

    [2] = LAYOUT_split_3x6_3(
        //,----------------------------------------------------------------------,,,,-------.                        ,-------------------------------------------------------------.
              KC_TAB,    KC_EXLM,    KC_AT,  KC_HASH,   KC_DLR,  KC_PERC,                           KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,    KC_BSPC,
        //|---------|  |--------+---------+---------+---------+---------+---------|    |---------+---------+---------+---------+--------+----------|  |--------|
       OSM(MOD_LCTL),    XXXXXXX,  XXXXXXX,  KC_VOLD, KC_VOLU,  KC_MUTE,                           KC_MINS,   KC_EQL,  KC_LBRC,  KC_RBRC,  KC_BSLS,    KC_SLSH,
        //|---------|  |--------+---------+---------+---------+---------+---------|    |---------+---------+---------+---------+--------+----------|  |--------|
       OSM(MOD_LSFT),    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                           KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,    KC_TILD,
        //|---------|  |--------+---------+---------+---------+---------+---------|    |---------+---------+---------+---------+--------+----------|  |--------|
                                                       KC_LGUI,   KC_SPC,    TT(4),       _______,   KC_ENT,   KC_RALT
                                                  //`---------+---------+---------|    |---------+---------+---------|'
        ),

    [3] = LAYOUT_split_3x6_3(
        //,-------------------------------------------------------------.                        ,-------------------------------------------------------------.
             XXXXXXX,      KC_F1,      KC_F2,      KC_F3,       KC_F4,    KC_F5,                             KC_F6,    KC_F7,    KC_F8,   KC_F9,    KC_F10,    XXXXXXX,
        //|---------|  |--------+-----------+-----------+------------+---------|                        |---------+---------+---------+---------+---------|  |--------|
       OSM(MOD_LCTL),    XXXXXXX, KC_MS_LEFT,   KC_MS_UP, KC_MS_RIGHT,  XXXXXXX,                            KC_F11,  KC_BTN1,  XXXXXXX,  KC_WH_U,  XXXXXXX,OSM(MOD_RCTL),
        //|---------|  |--------+-----------+-----------+------------+---------|                        |---------+---------+---------+---------+---------|  |--------|
       OSM(MOD_LSFT),    XXXXXXX, XXXXXXX,    KC_MS_DOWN,     XXXXXXX,  XXXXXXX,                            KC_F12,  KC_BTN2,  XXXXXXX, KC_WH_D,   XXXXXXX,OSM(KC_RSFT),
        //|---------|  |--------+-----------+-----------+------------+---------+---------|    |---------+---------+---------+---------+---------+---------|  |--------|
                                                       KC_LGUI,    KC_SPC, _______,       _______,   KC_ENT,   KC_RALT
                                                  //`---------+----------+--------|    |---------+---------+---------|'
        ),
    [4] = LAYOUT_split_3x6_3(
        //,-------------------------------------------------------------.                        ,-------------------------------------------------------------.
             QK_BOOT,    RGB_TOG,  RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_SPI,                           XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,
        //|---------|  |--------+---------+---------+---------+---------|                        |---------+---------+---------+---------+---------|  |--------|
             KC_SLEP,    RGB_MOD,  RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_SPD,                           XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,
        //|---------|  |--------+---------+---------+---------+---------|                        |---------+---------+---------+---------+---------|  |--------|
             XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                           KC_ACL0,  KC_ACL1,  KC_ACL2,  XXXXXXX,  XXXXXXX,    XXXXXXX,
        //|---------|  |--------+---------+---------+---------+---------+---------|    |---------+---------+---------+---------+--------+----------|  |--------|
                                                       XXXXXXX,  XXXXXXX,  _______,       _______,  XXXXXXX,  XXXXXXX
                                                  //`---------+---------+---------|    |---------+---------+---------|'
        )};

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);
    switch (layer) {
    case _FIRST:
        SEND_STRING(SS_TAP(X_F17));
        rgblight_sethsv(HSV_GREEN);
        break;
    case _SECOND:
        SEND_STRING(SS_TAP(X_F18));
        rgblight_sethsv(HSV_SPRINGGREEN);
        break;
    case _THIRD:
        SEND_STRING(SS_TAP(X_F19));
        rgblight_sethsv(HSV_ORANGE);
        break;
    case _FOURTH:
        SEND_STRING(SS_TAP(X_F20));
        rgblight_sethsv(HSV_RED);
//         rgblight_mode_noeeprom(RGBLIGHT_MODE_SNAKE + 0);
        break;
    default:
        SEND_STRING(SS_TAP(X_F16));
        rgblight_sethsv(RGB_BLUE);
        break;
    }
  return state;
}

void keyboard_post_init_user(void) {
  // Call the post init code.
  rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  rgblight_sethsv_noeeprom(RGB_BLUE); // sets the color to teal/cyan without saving
  rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT + 2); // sets mode to Fast breathing without saving
}



