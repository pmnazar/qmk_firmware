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

 //   Bootloader selection
 //   Teensy       halfkay
 //   Pro Micro    caterina
 //   Atmel DFU    atmel-dfu
 //   LUFA DFU     lufa-dfu
 //   QMK DFU      qmk-dfu
 //   ATmega32A    bootloadHID
 //   ATmega328P   USBasp

#pragma once

/* Handedness. */
#define MASTER_RIGHT
#define SPLIT_USB_DETECT

#define TAPPING_TOGGLE 2
