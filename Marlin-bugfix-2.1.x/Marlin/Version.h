/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

////////////////////////////
// VENDOR VERSION EXAMPLE //
////////////////////////////

/**
 * Marlin release version identifier
 */
//#define SHORT_BUILD_VERSION "bugfix-2.1.x"
#define SHORT_BUILD_VERSION "Bob [2.1].5.5"

/*  CHANGE LOG  
 (1.4.0)    : Added 2nd heater in preperation for Chimera hotend.
 [2.1].4.1  : Changed versioning scheme to have [MarlinVersion].Major.Minor
 [2.1].4.2  : Edited to activate E*_AUTO_FAN_PIN for part cooling fans
            : Changed DISABLE_INACTIVE_E to false in hopes of having E1 actually heat up
 [2.1].4.3  : Set NOZZLE_TO_PROBE_OFFSET { -50, -10, -2.65} 
 [2.1].4.4  : X_BED_SIZE and Y_BED_SIZE changes to 220
 [2.1].5.1  : Major Reset for 2-1 Hot end
            : X_BED_SIZE and Y_BED_SIZE set to 235
            : EXTRA_PROBING activated and set to 1
            : HOTEND_OFFSET_X/Y/Z all reset to 0.00 as there is oly one hot end
            : TEMP_SENSOR_1 set to 0
            : HEATER_0_MAXTEMP to 315 (was 515 - no need for so much heat)
            : >> NOTE: NOZZLE_TO_PROBE_OFFSET will need to be adjusted in future
            : PROBING_MARGIN set to 15 (was 20)
            : PREHEAT_4_LABEL section commented out (ABS - Not using ABS, so no need to have it on the menu)
            : Disabled NEOPIXEL_LED as it's not being used
            : enabled  #define SINGLENOZZLE
 [2.1].5.1  : Set BL Touch offsets to default creality values (X-44 Y-9):  NOZZLE_TO_PROBE_OFFSET { -44, -9, 0}
            : DISABLE_INACTIVE_E set to TRUE
            : Set PID values
[2.1].5.2   : Adjusted Fan pins so that they actually work
[2.1].5.3   : Set PID values now that the fan's work
[2.1].5.4   : Set E1 steps/mm to 72.5
[2.1].5.5   : Set ENABLE_LEVELING_AFTER_G28
[2.1].5.6   : Extruder Count set to 1 [#define EXTRUDERS x]
            : PREHEAT_1_TEMP_HOTEND changed to 200 (from 195)
            : 
            




*/

/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */
//#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
#define STRING_DISTRIBUTION_DATE "2023-09-29"

/**
 * Defines a generic printer name to be output to the LCD after booting Marlin.
 */
#define MACHINE_NAME "BOB The Printer"

/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 */
//#define SOURCE_CODE_URL "github.com/MarlinFirmware/Marlin"
#define SOURCE_CODE_URL "" // RYAN

/**
 * Default generic printer UUID.
 */
//#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
//#define WEBSITE_URL "marlinfw.org"
#define WEBSITE_URL "" // RYAN

/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 */
//#define USB_DEVICE_VENDOR_ID           0x0000
//#define USB_DEVICE_PRODUCT_ID          0x0000
//#define USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
