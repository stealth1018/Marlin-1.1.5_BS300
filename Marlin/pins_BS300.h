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
 * BS300 BOARD pin assignments
 */

#ifndef __AVR_ATmega2560__
  #error "Oops!  Make sure you have 'Arduino Mega 2560' selected from the 'Tools -> Boards' menu."
#endif

#define DEFAULT_MACHINE_NAME    "BS300"
#define DEFAULT_SOURCE_CODE_URL "https://github.com"
#define BOARD_NAME              "BS300 MAIN REV1.0"

//
// Limit Switches
//
#define X_MIN_PIN		60
#define Y_MIN_PIN		33
#define Z_MIN_PIN		34
#define Z_MAX_PIN		43

#define FIL_RUNOUT_PIN  26 //E0
#define FIL_RUNOUT_PIN	54 //E1

//
// Steppers
//
#define X_ENABLE_PIN	65
#define X_STEP_PIN		64
#define X_DIR_PIN		66

#define Y_STEP_PIN		30
#define Y_DIR_PIN		32
#define Y_ENABLE_PIN	31

#define Z_STEP_PIN		25
#define Z_DIR_PIN		23
#define Z_ENABLE_PIN	24

#define E0_STEP_PIN		29
#define E0_DIR_PIN		27
#define E0_ENABLE_PIN	28

#define E1_STEP_PIN		57
#define E1_DIR_PIN		55
#define E1_ENABLE_PIN	56

//
// Temperature Sensors
//
#define TEMP_0_PIN		9//62//A9
#define TEMP_1_PIN		8//63//A8
#define TEMP_BED_PIN	15//69//A15

//
// Heaters / Fans
//
#define HEATER_0_PIN        44
#define HEATER_1_PIN        7
#define HEATER_BED_PIN      46

#define FAN_PIN             45

//
//AUTO BED CHANGER
//
#define ABC_ENABLE_PIN	42
#define ABC_STEP_PIN	47
#define ABC_DIR_PIN		48
#define ABC_ENDSTOP 	10
#define ABC_FRONT 		 8
#define ABC_REAR 		 9

//
// DETECTOR
//
#define HEAD_DET_T0     17
#define HEAD_DET_T1     19
#define HEAD_DET_PROBE  15

#define MOUNT_DET_T0    16
#define MOUNT_DET_T1    18
#define MOUNT_DET_PROBE 14

#define OFFSET_X         2
#define OFFSET_Y         3

//
// Misc. Functions
//
#define SDSS               53
#define SD_DETECT_PIN      12
#define LED_PIN            13

//
// LCD / Controller
//
#define LCD_RESET_PIN 	   37
#define DOGLCD_CS     	   11
#define DOGLCD_A0     	   41

#define LCD_SCREEN_ROT_180

// Buttons are directly attached
#define BTN_EN1            38
#define BTN_EN2            36
#define BTN_ENC            35
