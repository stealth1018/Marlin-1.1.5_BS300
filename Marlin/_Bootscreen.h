/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[1024] PROGMEM = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF,
0xFF, 0x0F, 0xC3, 0xE1, 0xF3, 0xBF, 0x0F, 0x83, 0xE1, 0xFD, 0xF8, 0x1F, 0x0F, 0xC1, 0xF0, 0xFF,
0xFE, 0x67, 0xD9, 0xE7, 0xF1, 0xBE, 0x0F, 0xB3, 0xE7, 0xF8, 0xFE, 0x7E, 0x67, 0xD9, 0xF3, 0xFF,
0xFE, 0xF7, 0xD9, 0xE1, 0xF0, 0xBE, 0x7F, 0xBB, 0xE1, 0xF8, 0x7E, 0x7E, 0xF7, 0xDD, 0xF3, 0xFF,
0xFE, 0xF7, 0xC3, 0xE7, 0xF2, 0x3E, 0x7F, 0x83, 0xE7, 0xF3, 0x7E, 0x7E, 0xF7, 0xC1, 0xFC, 0xFF,
0xFE, 0x67, 0xCF, 0xE7, 0xF3, 0x3E, 0x0F, 0x97, 0xE7, 0xF0, 0x7E, 0x7E, 0x67, 0xCB, 0xFC, 0xFF,
0xFF, 0x0F, 0xCF, 0xE1, 0xF3, 0x3F, 0x0F, 0x93, 0xE1, 0xF3, 0x7E, 0x7F, 0x0F, 0xC9, 0xF0, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0xFC, 0x00, 0x0F, 0xFC, 0x00, 0x1F, 0xFC, 0x00, 0x1F, 0xFF,
0xFF, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x7C, 0x00, 0x07, 0xF8, 0x00, 0x0F, 0xF8, 0x00, 0x0E, 0x0F,
0xFF, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x7C, 0x00, 0x03, 0xF0, 0x00, 0x07, 0xF0, 0x00, 0x07, 0xFF,
0xFF, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x7C, 0x00, 0x03, 0xE0, 0x00, 0x03, 0xE0, 0x00, 0x03, 0xFF,
0xFF, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x7C, 0x00, 0x03, 0xC0, 0x00, 0x01, 0xC0, 0x00, 0x01, 0xFF,
0xFF, 0x03, 0xF0, 0x1E, 0x01, 0xFF, 0xFF, 0xFE, 0x03, 0xC0, 0x1E, 0x01, 0xC0, 0x3C, 0x01, 0xFF,
0xFF, 0x03, 0xF8, 0x1E, 0x03, 0xFF, 0xFF, 0xFF, 0x03, 0xC0, 0x3F, 0x80, 0xC0, 0xFE, 0x01, 0xFF,
0xFF, 0x03, 0xF8, 0x1E, 0x03, 0xFF, 0xFF, 0xFF, 0x03, 0xC0, 0x7F, 0xE0, 0x41, 0xFF, 0x01, 0xFF,
0xFF, 0x03, 0xF8, 0x1E, 0x01, 0xFF, 0xFF, 0xFF, 0x03, 0xC0, 0x7F, 0xF0, 0x63, 0xFF, 0x01, 0xFF,
0xFF, 0x03, 0xF0, 0x1E, 0x00, 0x7F, 0xFF, 0xFE, 0x03, 0xC0, 0x7F, 0xF0, 0x27, 0xFF, 0x01, 0xFF,
0xFF, 0x03, 0xE0, 0x1E, 0x00, 0x0F, 0xFF, 0x00, 0x03, 0xC0, 0x7F, 0xF8, 0x3F, 0xFF, 0x01, 0xFF,
0xFF, 0x00, 0x00, 0x3F, 0x00, 0x03, 0xFF, 0x00, 0x07, 0xC0, 0x7F, 0xF8, 0x3F, 0xFF, 0x01, 0xFF,
0xFF, 0x00, 0x00, 0xFF, 0x80, 0x00, 0xFF, 0x00, 0x0F, 0xC0, 0x7F, 0xFC, 0x1F, 0xFF, 0x01, 0xFF,
0xFF, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x7F, 0x00, 0x07, 0xC0, 0x7F, 0xFC, 0x0F, 0xFF, 0x01, 0xFF,
0xFF, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x3F, 0x00, 0x03, 0xC0, 0x7F, 0xFE, 0x0F, 0xFF, 0x01, 0xFF,
0xFF, 0x03, 0xF0, 0x0F, 0xFE, 0x00, 0x3F, 0xFE, 0x03, 0xC0, 0x7F, 0xFA, 0x07, 0xFF, 0x01, 0xFF,
0xFF, 0x03, 0xF8, 0x0F, 0xFF, 0xC0, 0x3F, 0xFF, 0x01, 0xC0, 0x7F, 0xFB, 0x07, 0xFF, 0x01, 0xFF,
0xFF, 0x03, 0xF8, 0x0F, 0xFF, 0xE0, 0x3F, 0xFF, 0x01, 0xC0, 0x7F, 0xE1, 0x03, 0xFF, 0x01, 0xFF,
0xFF, 0x03, 0xF8, 0x0F, 0xFF, 0xE0, 0x3F, 0xFF, 0x01, 0xC0, 0x7F, 0xC1, 0x81, 0xFF, 0x01, 0xFF,
0xFF, 0x03, 0xF8, 0x0F, 0xFF, 0xE0, 0x3F, 0xFE, 0x01, 0xC0, 0x3F, 0xC1, 0x80, 0xFF, 0x01, 0xFF,
0xFF, 0x03, 0xF0, 0x0F, 0xFF, 0xC0, 0x3F, 0xF8, 0x01, 0xC0, 0x3E, 0x01, 0xC0, 0x3E, 0x01, 0xFF,
0xFF, 0x03, 0xE0, 0x0F, 0x00, 0x00, 0x38, 0x00, 0x01, 0xE0, 0x00, 0x01, 0xC0, 0x00, 0x01, 0xFF,
0xFF, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x38, 0x00, 0x01, 0xE0, 0x00, 0x01, 0xE0, 0x00, 0x03, 0xFF,
0xFF, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x38, 0x00, 0x01, 0xF0, 0x00, 0x03, 0xF0, 0x00, 0x07, 0xFF,
0xFF, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x78, 0x00, 0x03, 0xF8, 0x00, 0x07, 0xF8, 0x00, 0x0F, 0xFF,
0xFF, 0x00, 0x00, 0x3F, 0x00, 0x00, 0xF8, 0x00, 0x07, 0xFC, 0x00, 0x0F, 0xFC, 0x00, 0x1F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
