/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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

#pragma once
/* Handedness. */
#define MASTER_RIGHT
// #define SPLIT_HAND_PIN_LOW_IS_LEFT
// #define SPLIT_HAND_PIN F4
#define SPLIT_USB_DETECT
// #define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS
// #define EE_HANDS
#define TAPPING_TOGGLE 3
#define ONESHOT_TIMEOUT 5000
#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    undef RGBLED_SPLIT
#    define WS2812_DI_PIN D3
#    define RGBLIGHT_SPLIT
#    define RGBLED_NUM 12
#    define RGBLED_SPLIT {6, 6}
#    define RGBLIGHT_DEFAULT_HUE 255
#    define RGBLIGHT_LIMIT_VAL 128
#    define RGBLIGHT_DEFAULT_SAT 128
#    define RGBLIGHT_SLEEP
#    define RGBLIGHT_HUE_STEP 12
#    define RGBLIGHT_SAT_STEP 12
#    define RGBLIGHT_VAL_STEP 12
// #    define RGBLIGHT_EFFECT_ALTERNATING
// #    define RGBLIGHT_EFFECT_BREATHING
// #    define RGBLIGHT_EFFECT_CHRISTMAS
// #    define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #    define RGBLIGHT_EFFECT_SNAKE
// #    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_MODE_KNIGHT
#    define RGBLIGHT_EFFECT_BREATHING
#endif
