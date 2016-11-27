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
#ifndef __WLCD_FONT_TERM_8X8_0_127_H__
#define __WLCD_FONT_TERM_8X8_0_127_H__

#include <espressif/c_types.h>

/* ============================================================================
 * FONT: "Term", 8x8, regular, chars 0..127
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

#define WLCD_FONT_TERM_8X8_0_127_CHAR_WIDTH				8
#define WLCD_FONT_TERM_8X8_0_127_CHAR_HEIGHT			8
#define WLCD_FONT_TERM_8X8_0_127_FIRST_CHAR_CODE		0
#define WLCD_FONT_TERM_8X8_0_127_LAST_CHAR_CODE			127

const uint16_t wlcd_font_term_8x8_0_127_Rects[] = {
	0x0501, 0x5010, 0x5017, 0x0571, 0x0342, 0x1143, 0x0022, 0x0025, 0x1501, 0x1561, 0x5110, 0x5116, 0x3103, 0x0530, 0x0250, 0x0055, 
	0x2610, 0x4212, 0x4101, 0x4104, 0x5013, 0x4212, 0x2421, 0x6003, 0x0630, 0x4202, 0x1630, 0x7003, 0x0411, 0x2130, 0x2135, 0x0272, 
	0x2431, 0x7003, 0x0222, 0x0640, 0x0272, 0x3123, 0x1332, 0x1700, 0x1760, 0x5100, 0x5106, 0x2200, 0x2005, 0x0250, 0x0055, 0x0312, 
	0x3021, 0x3026, 0x0362, 0x1012, 0x1015, 0x0151, 0x0055, 0x0700, 0x3123, 0x0770, 0x6000, 0x6007, 0x1332, 0x1100, 0x1006, 0x0160, 
	0x0066, 0x4025, 0x0304, 0x0331, 0x0371, 0x3007, 0x2040, 0x1006, 0x3143, 0x0302, 0x0561, 0x2011, 0x2016, 0x0342, 0x6002, 0x0502, 
	0x0522, 0x1160, 0x1007, 0x0051, 0x6002, 0x5007, 0x0402, 0x0422, 0x1155, 0x1160, 0x0046, 0x0051, 0x2103, 0x1230, 0x1235, 0x2153, 
	0x0110, 0x0116, 0x0322, 0x0352, 0x0160, 0x0166, 0x4210, 0x2420, 0x6000, 0x0630, 0x4214, 0x2122, 0x6006, 0x0130, 0x7103, 0x1312, 
	0x0551, 0x0521, 0x1352, 0x4002, 0x4005, 0x0062, 0x0065, 0x0601, 0x6003, 0x6006, 0x1010, 0x0131, 0x0402, 0x0371, 0x0222, 0x0252, 
	0x0111, 0x0116, 0x1031, 0x1035, 0x0160, 0x0164, 0x2541, 0x7103, 0x0770, 0x1312, 0x0541, 0x0521, 0x1342, 0x6003, 0x1212, 0x0421, 
	0x1021, 0x1025, 0x6003, 0x0441, 0x1242, 0x0031, 0x0035, 0x0630, 0x4014, 0x2124, 0x0013, 0x0053, 0x0630, 0x4012, 0x2021, 0x0112, 
	0x0152, 0x0551, 0x2021, 0x0730, 0x4012, 0x4015, 0x2021, 0x2125, 0x2431, 0x1640, 0x0222, 0x0013, 0x2411, 0x1610, 0x3212, 0x4013, 
	0x1212, 0x4003, 0x0063, 0x2002, 0x2005, 0x6002, 0x6005, 0x0521, 0x0541, 0x0412, 0x0451, 0x0332, 0x0103, 0x1153, 0x0021, 0x0046, 
	0x1111, 0x1155, 0x0016, 0x0025, 0x0034, 0x0043, 0x0052, 0x0061, 0x0261, 0x0102, 0x0122, 0x0135, 0x1040, 0x1044, 0x0165, 0x0011, 
	0x0014, 0x1023, 0x0031, 0x1003, 0x0022, 0x2021, 0x0003, 0x0012, 0x0052, 0x0063, 0x2024, 0x0002, 0x0013, 0x0053, 0x0062, 0x2222, 
	0x0630, 0x0011, 0x0015, 0x0051, 0x0055, 0x4013, 0x0431, 0x1053, 0x0072, 0x0531, 0x1053, 0x0016, 0x0025, 0x0034, 0x0043, 0x0052, 
	0x0061, 0x4011, 0x4016, 0x0302, 0x0362, 0x0025, 0x0034, 0x0043, 0x0151, 0x6003, 0x0461, 0x0012, 0x0021, 0x0561, 0x0302, 0x1016, 
	0x0134, 0x0142, 0x0011, 0x0051, 0x0056, 0x0302, 0x0362, 0x0233, 0x1016, 0x1046, 0x0011, 0x0051, 0x6004, 0x0640, 0x0263, 0x0013, 
	0x0022, 0x0031, 0x0501, 0x0421, 0x0362, 0x2036, 0x1001, 0x0051, 0x0431, 0x0362, 0x0203, 0x3021, 0x1046, 0x0012, 0x0501, 0x2043, 
	0x1001, 0x1006, 0x0025, 0x0034, 0x0302, 0x0332, 0x0362, 0x1011, 0x1016, 0x1041, 0x1046, 0x0432, 0x0302, 0x3016, 0x0262, 0x1011, 
	0x0055, 0x1013, 0x1053, 0x1013, 0x1053, 0x0072, 0x0004, 0x0013, 0x0022, 0x0031, 0x0042, 0x0053, 0x0064, 0x0521, 0x0551, 0x0003, 
	0x0014, 0x0025, 0x0036, 0x0045, 0x0054, 0x0063, 0x0302, 0x1016, 0x0011, 0x0035, 0x0044, 0x0064, 0x4011, 0x0302, 0x3016, 0x0362, 
	0x0223, 0x0243, 0x1023, 0x0541, 0x4021, 0x4026, 0x0103, 0x0012, 0x0015, 0x6002, 0x0401, 0x0461, 0x0332, 0x1016, 0x1046, 0x0203, 
	0x2021, 0x0263, 0x0012, 0x0016, 0x0052, 0x0056, 0x6002, 0x0301, 0x2026, 0x0361, 0x0015, 0x0055, 0x6002, 0x0501, 0x0561, 0x2024, 
	0x1006, 0x0132, 0x0056, 0x6002, 0x0501, 0x2024, 0x0261, 0x1006, 0x0132, 0x0363, 0x0203, 0x2021, 0x0244, 0x0012, 0x0016, 0x1046, 
	0x0052, 0x6001, 0x6006, 0x0431, 0x6003, 0x0202, 0x0262, 0x5005, 0x0262, 0x0204, 0x1041, 0x6002, 0x0166, 0x0001, 0x0006, 0x0015, 
	0x0024, 0x0132, 0x0044, 0x0055, 0x0061, 0x6002, 0x0561, 0x0201, 0x0056, 0x6001, 0x6007, 0x0101, 0x0006, 0x0013, 0x0015, 0x0024, 
	0x6001, 0x6006, 0x0101, 0x0013, 0x0024, 0x0035, 0x2021, 0x2026, 0x0103, 0x0163, 0x0012, 0x0015, 0x0052, 0x0055, 0x6002, 0x0401, 
	0x0332, 0x1016, 0x0261, 0x0302, 0x3011, 0x3016, 0x0352, 0x0166, 0x0044, 0x6002, 0x0401, 0x0332, 0x1016, 0x0261, 0x1034, 0x0055, 
	0x0066, 0x0302, 0x0332, 0x0362, 0x1011, 0x1046, 0x0016, 0x0051, 0x0601, 0x6004, 0x0263, 0x1001, 0x1007, 0x5001, 0x5006, 0x0362, 
	0x3001, 0x3007, 0x0042, 0x0046, 0x0053, 0x0055, 0x0064, 0x5001, 0x5007, 0x2034, 0x0162, 0x0165, 0x0001, 0x0007, 0x0012, 0x0016, 
	0x0023, 0x0025, 0x0034, 0x0043, 0x0045, 0x0052, 0x0056, 0x0061, 0x0067, 0x3034, 0x0263, 0x0001, 0x0007, 0x0012, 0x0016, 0x0023, 
	0x0025, 0x0601, 0x0661, 0x1001, 0x1006, 0x0025, 0x0034, 0x0043, 0x0052, 0x0057, 0x6001, 0x0301, 0x0361, 0x0000, 0x0011, 0x0022, 
	0x0033, 0x0044, 0x0055, 0x0066, 0x6004, 0x0201, 0x0261, 0x0003, 0x0012, 0x0014, 0x0021, 0x0025, 0x0030, 0x0036, 0x0770, 0x1003, 
	0x0024, 0x0562, 0x0442, 0x0322, 0x2036, 0x0051, 0x6002, 0x0234, 0x0264, 0x1142, 0x1047, 0x0001, 0x0322, 0x0362, 0x2031, 0x0036, 
	0x0056, 0x6006, 0x0232, 0x0262, 0x1041, 0x1045, 0x0005, 0x0166, 0x0541, 0x0322, 0x0362, 0x2031, 0x0036, 0x5013, 0x0104, 0x0232, 
	0x0262, 0x0016, 0x0452, 0x0471, 0x0322, 0x3036, 0x1031, 0x0027, 0x6002, 0x3036, 0x0124, 0x0001, 0x0132, 0x0061, 0x4023, 0x0262, 
	0x0003, 0x0022, 0x4026, 0x0372, 0x1051, 0x0006, 0x0025, 0x6002, 0x0165, 0x0001, 0x0025, 0x0034, 0x0142, 0x0054, 0x6003, 0x0262, 
	0x0002, 0x4021, 0x3034, 0x3037, 0x0221, 0x0125, 0x4021, 0x3036, 0x0223, 0x0131, 0x0322, 0x0362, 0x2031, 0x2036, 0x5022, 0x0124, 
	0x1132, 0x1036, 0x0154, 0x0271, 0x0021, 0x5025, 0x0122, 0x1031, 0x1034, 0x0152, 0x0274, 0x0125, 0x4022, 0x0124, 0x1036, 0x0261, 
	0x0021, 0x0132, 0x0422, 0x0461, 0x0342, 0x0031, 0x0056, 0x5003, 0x0421, 0x0164, 0x0056, 0x4026, 0x3021, 0x0262, 0x0055, 0x1021, 
	0x1027, 0x0042, 0x0046, 0x0053, 0x0055, 0x0064, 0x3021, 0x3027, 0x2034, 0x0162, 0x0165, 0x0021, 0x0025, 0x0032, 0x0034, 0x0043, 
	0x0052, 0x0054, 0x0061, 0x0065, 0x4026, 0x0471, 0x0352, 0x2021, 0x0421, 0x0461, 0x1024, 0x0043, 0x0052, 0x0104, 0x1013, 0x0131, 
	0x1043, 0x0164, 0x2003, 0x2043, 0x0102, 0x1014, 0x0135, 0x1044, 0x0162, 0x0102, 0x0114, 0x0006, 0x0011, 0x0661, 0x1041, 0x1047, 
	0x0014, 0x0023, 0x0025, 0x0032, 0x0036
};

const uint16_t wlcd_font_term_8x8_0_127_CharOffs[129] = {
	0x0000, 0x0000, 0x0008, 0x0010, 0x0015, 0x0019, 0x0020, 0x0025, 0x0027, 0x002f, 0x0037, 0x0041, 0x0048, 0x004e, 0x0054, 0x005c, 
	0x0066, 0x006a, 0x006e, 0x0073, 0x0077, 0x007c, 0x0086, 0x0087, 0x008d, 0x0092, 0x0097, 0x009c, 0x00a1, 0x00a3, 0x00a8, 0x00ac, 
	0x00b0, 0x00b0, 0x00b3, 0x00b5, 0x00b9, 0x00c0, 0x00c8, 0x00d3, 0x00d5, 0x00da, 0x00df, 0x00e5, 0x00e7, 0x00e9, 0x00ea, 0x00eb, 
	0x00f1, 0x00f9, 0x00fd, 0x0105, 0x010c, 0x0112, 0x0118, 0x011e, 0x0124, 0x012b, 0x0131, 0x0133, 0x0136, 0x013d, 0x013f, 0x0146, 
	0x014c, 0x0153, 0x0159, 0x015f, 0x0166, 0x016c, 0x0173, 0x0179, 0x0181, 0x0184, 0x0187, 0x018b, 0x0195, 0x0199, 0x01a0, 0x01a6, 
	0x01ae, 0x01b3, 0x01b9, 0x01c1, 0x01c8, 0x01cd, 0x01d0, 0x01d7, 0x01dc, 0x01e9, 0x01f1, 0x01fa, 0x01fd, 0x0204, 0x0207, 0x020e, 
	0x020f, 0x0211, 0x0216, 0x021c, 0x0221, 0x0228, 0x022d, 0x0232, 0x0238, 0x023e, 0x0242, 0x0247, 0x024e, 0x0251, 0x0256, 0x025a, 
	0x025e, 0x0265, 0x026c, 0x0272, 0x0277, 0x027b, 0x027f, 0x0286, 0x028b, 0x0294, 0x0298, 0x029d, 0x02a2, 0x02a4, 0x02a9, 0x02ad, 
	0x02b5 //last item is not offset to real char, but is here just to be able to count how many rectangles we use for last char
};

#endif
