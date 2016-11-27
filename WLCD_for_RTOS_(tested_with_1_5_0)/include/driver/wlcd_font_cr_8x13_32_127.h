/*
 * Created by Martin Winkelhofer 03,11/2016
 * W-Dimension / wdim / wdim0 / winkelhofer.m@gmail.com / https://github.com/wdim0
 *    __   ________          ______   _______  ___________    __  ______   _______  ____ ___  ___ 
 *   / /  / ___/ _ \  ____  /  _/ /  /  _/ _ \|_  / / <  /  _/_/ /  _/ /  /  _/ _ \/ / /( _ )( _ )
 *  / /__/ /__/ // / /___/ _/ // /___/ / \_, //_ <_  _/ / _/_/  _/ // /___/ / \_, /_  _/ _  / _  |
 * /____/\___/____/       /___/____/___//___/____//_//_/ /_/   /___/____/___//___/ /_/ \___/\___/ 
 *
 * Driver for LCD controllers ILI9341 / ILI9488 (or compatible).
 * v1.01 (11/2016)
 *
 * This file is part of WLCD - W-Dimension's LCD driver for ESP8266.
 *
 * WLCD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * WLCD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with WLCD. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __WLCD_FONT_CR_8X13_32_127_H__
#define __WLCD_FONT_CR_8X13_32_127_H__

#include <espressif/c_types.h>

/* ============================================================================
 * FONT: "Cr", 8x13, regular, chars 32..127
 * ============================================================================
 *
 * fonter.c used to create content of CharOffs[], Rects[] arrays. Thanks!
 *
 * uint16_t CharOffs[] - offsets to array Rects[]
 *
 * Example for char with ASCII value 65 - "A":
 * CharOffs[65] = 0x0170
 * CharOffs[66] = 0x0177
 * => for drawing of char "A" we'll use 7 rectangles, first rectangle is here -> Rects[0x0170]
 *
 * uint16_t Rects[] - each 16-bit value describes one rectangle:
 * 0 b 0000 0000 0000 0000
 *       H    W    Y    X
 * note: add 1 to W, H to get real width, height.
 */

#define WLCD_FONT_CR_8X13_32_127_CHAR_WIDTH				8
#define WLCD_FONT_CR_8X13_32_127_CHAR_HEIGHT			13
#define WLCD_FONT_CR_8X13_32_127_FIRST_CHAR_CODE		32
#define WLCD_FONT_CR_8X13_32_127_LAST_CHAR_CODE			127

const uint16_t wlcd_font_cr_8x13_32_127_Rects[] = {
	0x6024, 0x00a4, 0x2023, 0x2025, 0x0542, 0x0581, 0x3043, 0x3045, 0x1024, 0x1026, 0x2082, 0x2084, 0x0233, 0x0263, 0x0293, 0x1042, 
	0x1076, 0x0024, 0x0046, 0x0082, 0x1094, 0x0022, 0x0031, 0x0033, 0x0037, 0x0042, 0x0046, 0x0055, 0x0064, 0x0073, 0x0082, 0x0086, 
	0x0091, 0x0095, 0x0097, 0x00a6, 0x2071, 0x02a2, 0x0123, 0x1032, 0x1053, 0x1074, 0x01a6, 0x0062, 0x0077, 0x0086, 0x0095, 0x2024, 
	0x4053, 0x1034, 0x10a4, 0x0025, 0x00c5, 0x4055, 0x1034, 0x10a4, 0x0023, 0x00c3, 0x2253, 0x0661, 0x0142, 0x0145, 0x0182, 0x0185, 
	0x6044, 0x0671, 0x00a4, 0x00b3, 0x0671, 0x00a4, 0x0037, 0x0046, 0x0055, 0x0064, 0x0073, 0x0082, 0x0091, 0x6032, 0x6036, 0x0223, 
	0x02a3, 0x8024, 0x04a2, 0x0132, 0x04a2, 0x0223, 0x2036, 0x0032, 0x0065, 0x0074, 0x0083, 0x0092, 0x0223, 0x2036, 0x2076, 0x02a3, 
	0x0164, 0x0032, 0x0092, 0x8025, 0x0482, 0x1034, 0x1053, 0x02a4, 0x0072, 0x0422, 0x4022, 0x0362, 0x2076, 0x02a3, 0x0092, 0x5042, 
	0x0362, 0x2076, 0x02a3, 0x0124, 0x0033, 0x0422, 0x2026, 0x1055, 0x1074, 0x1093, 0x1022, 0x0223, 0x2032, 0x2036, 0x0263, 0x2072, 
	0x2076, 0x02a3, 0x5036, 0x0223, 0x2032, 0x0263, 0x01a3, 0x0095, 0x0054, 0x00a4, 0x0054, 0x00a4, 0x00b3, 0x0045, 0x0054, 0x0063, 
	0x0072, 0x0083, 0x0094, 0x00a5, 0x0452, 0x0472, 0x0043, 0x0054, 0x0065, 0x0076, 0x0085, 0x0094, 0x00a3, 0x0223, 0x2036, 0x1074, 
	0x0032, 0x0065, 0x00a4, 0x4037, 0x4041, 0x4045, 0x0323, 0x2053, 0x02a3, 0x0284, 0x0032, 0x0044, 0x0092, 0x0482, 0x2024, 0x3072, 
	0x3076, 0x1053, 0x1055, 0x02a1, 0x02a5, 0x0023, 0x8022, 0x0521, 0x05a1, 0x0462, 0x2037, 0x2077, 0x4041, 0x0323, 0x03a3, 0x0032, 
	0x0037, 0x0092, 0x0097, 0x8022, 0x4047, 0x0421, 0x04a1, 0x0036, 0x0096, 0x8022, 0x0621, 0x06a1, 0x2055, 0x0262, 0x1027, 0x0097, 
	0x8022, 0x0621, 0x2055, 0x03a1, 0x0262, 0x1027, 0x4041, 0x0323, 0x03a3, 0x0275, 0x2077, 0x0032, 0x0037, 0x0092, 0x8022, 0x8026, 
	0x0362, 0x0221, 0x0225, 0x02a1, 0x02a5, 0x8024, 0x0422, 0x04a2, 0x7025, 0x0323, 0x02a2, 0x1081, 0x8022, 0x0221, 0x0126, 0x1045, 
	0x1064, 0x1096, 0x02a1, 0x1026, 0x0172, 0x0085, 0x01a6, 0x8023, 0x06a1, 0x0421, 0x0097, 0x8022, 0x8026, 0x1142, 0x1045, 0x1064, 
	0x02a1, 0x02a5, 0x0021, 0x0126, 0x8022, 0x8026, 0x0225, 0x1142, 0x1075, 0x02a1, 0x0021, 0x0064, 0x4041, 0x4047, 0x0223, 0x02a3, 
	0x0032, 0x0036, 0x0092, 0x0096, 0x8022, 0x0521, 0x0462, 0x2037, 0x03a1, 0x4041, 0x4047, 0x11a3, 0x0223, 0x01b6, 0x0032, 0x0036, 
	0x0092, 0x0096, 0x02a3, 0x8022, 0x0521, 0x0462, 0x2037, 0x2065, 0x1096, 0x02a1, 0x01a6, 0x0422, 0x0462, 0x04a2, 0x2031, 0x2077, 
	0x0037, 0x0091, 0x8024, 0x0621, 0x02a3, 0x1021, 0x1027, 0x7022, 0x7026, 0x02a3, 0x0221, 0x0225, 0x3022, 0x3026, 0x2063, 0x2065, 
	0x0221, 0x0225, 0x1094, 0x6022, 0x6026, 0x2064, 0x0221, 0x0225, 0x1093, 0x1095, 0x0221, 0x0225, 0x02a1, 0x02a5, 0x1043, 0x1045, 
	0x1073, 0x1075, 0x1022, 0x1026, 0x0064, 0x0092, 0x0096, 0x3074, 0x0221, 0x0225, 0x2022, 0x2026, 0x1053, 0x1055, 0x02a3, 0x0621, 
	0x06a1, 0x1045, 0x1073, 0x1021, 0x1026, 0x0064, 0x0092, 0x0097, 0xa023, 0x0223, 0x02c3, 0x0031, 0x0042, 0x0053, 0x0064, 0x0075, 
	0x0086, 0x0097, 0x9035, 0x0133, 0x01c3, 0x0014, 0x0023, 0x0025, 0x0032, 0x0036, 0x07c0, 0x0023, 0x0034, 0x0472, 0x0352, 0x03a2, 
	0x3066, 0x1081, 0x00a7, 0x8022, 0x05a1, 0x0452, 0x3067, 0x0021, 0x0452, 0x04a2, 0x3061, 0x0067, 0x0097, 0x8026, 0x05a2, 0x0352, 
	0x3061, 0x0025, 0x0671, 0x0452, 0x04a2, 0x3061, 0x0067, 0x0097, 0x7033, 0x0352, 0x03a2, 0x0124, 0x6056, 0x0552, 0x0392, 0x03c2, 
	0x2061, 0x8022, 0x4066, 0x0154, 0x02a1, 0x02a5, 0x0021, 0x0162, 0x5054, 0x04a2, 0x0152, 0x0024, 0x6055, 0x0252, 0x02c2, 0x0025, 
	0x8022, 0x0155, 0x1074, 0x01a6, 0x0021, 0x1055, 0x0182, 0x0095, 0x00a1, 0x8024, 0x04a2, 0x0023, 0x5052, 0x4064, 0x4066, 0x0251, 
	0x0055, 0x00a1, 0x01a6, 0x5052, 0x4066, 0x0154, 0x02a1, 0x02a5, 0x0051, 0x0162, 0x0452, 0x04a2, 0x3061, 0x3067, 0x7052, 0x0551, 
	0x3067, 0x04a2, 0x02c1, 0x7056, 0x0552, 0x3061, 0x03a2, 0x02c5, 0x5053, 0x04a1, 0x0151, 0x0155, 0x0163, 0x0067, 0x0452, 0x04a2, 
	0x0272, 0x0185, 0x0061, 0x0067, 0x0091, 0x0097, 0x6033, 0x0352, 0x01a4, 0x0096, 0x5056, 0x4052, 0x01a3, 0x0051, 0x0055, 0x0095, 
	0x01a6, 0x0251, 0x0255, 0x2052, 0x2056, 0x1083, 0x1085, 0x00a4, 0x3052, 0x3056, 0x0251, 0x0255, 0x1074, 0x1093, 0x1095, 0x1273, 
	0x0251, 0x0255, 0x02a1, 0x02a5, 0x1052, 0x1056, 0x0092, 0x0096, 0x0251, 0x0255, 0x2052, 0x2056, 0x1083, 0x1085, 0x10a4, 0x01c2, 
	0x0551, 0x05a1, 0x1051, 0x1055, 0x0074, 0x0083, 0x0092, 0x0096, 0x3034, 0x3084, 0x0125, 0x0172, 0x01c5, 0xb014, 0x3034, 0x3084, 
	0x0122, 0x0175, 0x01c2, 0x0132, 0x1037, 0x1041, 0x0155, 0x0044, 0x8233
};

const uint16_t wlcd_font_cr_8x13_32_127_CharOffs[129] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0002, 0x0004, 0x000c, 0x0015, 0x0024, 0x002f, 0x0030, 0x0035, 0x003a, 0x0040, 0x0042, 0x0044, 0x0045, 0x0046, 
	0x004d, 0x0051, 0x0054, 0x005c, 0x0063, 0x0069, 0x006f, 0x0075, 0x007b, 0x0082, 0x0088, 0x008a, 0x008d, 0x0094, 0x0096, 0x009d, 
	0x00a3, 0x00ad, 0x00b6, 0x00bc, 0x00c3, 0x00c9, 0x00d0, 0x00d6, 0x00de, 0x00e5, 0x00e8, 0x00ec, 0x00f7, 0x00fb, 0x0104, 0x010c, 
	0x0114, 0x0119, 0x0123, 0x012b, 0x0132, 0x0137, 0x013c, 0x0143, 0x014a, 0x0157, 0x015f, 0x0168, 0x016b, 0x0172, 0x0175, 0x017a, 
	0x017b, 0x017d, 0x0183, 0x0188, 0x018d, 0x0192, 0x0198, 0x019c, 0x01a1, 0x01a8, 0x01ac, 0x01b0, 0x01b9, 0x01bc, 0x01c3, 0x01ca, 
	0x01ce, 0x01d3, 0x01d8, 0x01de, 0x01e6, 0x01ea, 0x01f1, 0x01f8, 0x01ff, 0x0208, 0x0210, 0x0218, 0x021d, 0x021e, 0x0223, 0x0228, 
	0x0229 //last item is not offset to real char, but is here just to be able to count how many rectangles we use for last char
};

#endif
