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
#define SPLIT_USB_DETECT
// #define EE_HANDS
#define TAPPING_TOGGLE 3
#define ONESHOT_TIMEOUT 2500
#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    undef RGBLED_SPLIT
#    define WS2812_DI_PIN D3
#    define RGBLIGHT_SPLIT
#    define RGBLED_NUM 12
#    define RGBLED_SPLIT {6, 6}
#    define RGBLIGHT_DEFAULT_HUE 180
#    define RGBLIGHT_LIMIT_VAL 180
#    define RGBLIGHT_DEFAULT_SAT 180
#    define RGBLIGHT_SLEEP
#    define RGBLIGHT_HUE_STEP 25
#    define RGBLIGHT_SAT_STEP 25
#    define RGBLIGHT_VAL_STEP 25
#endif

