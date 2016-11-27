/*
 * GENERATED BY wfof_gen v2.0 on 27.11.2016 14:59:59
 *
 * Created by Martin Winkelhofer 02,03,04,11/2016
 * W-Dimension / wdim / wdim0 / winkelhofer.m@gmail.com / https://github.com/wdim0
 *    _____ __          ____         ______         __
 *   / __(_) /__ ___   / __ \___    / __/ /__ ____ / /
 *  / _// / / -_|_-<  / /_/ / _ \  / _// / _ `(_-</ _ \
 * /_/ /_/_/\__/___/  \____/_//_/ /_/ /_/\_,_/___/_//_/
 *
 * System for compiling binary data of files in specific directory (wfof/content) as a part of
 * program data -> will be written to Flash memory + system of functions for reading it.
 * v2.01 (11/2016)
 *
 * This file is part of WFOF - W-Dimension's Files On Flash for ESP8266.
 *
 * WFOF is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * WFOF is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with WFOF. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __WFOF_DATA_H__
#define __WFOF_DATA_H__
//
#include "wfof.h"
//
//main WFOF structure describing content of wfof_Data
const wfof_ftab_struct wfof_FTab = {
	.FilesCnt=2,
	.AlignBytes=4,
	.Files={
		{.Offs=0, .Size=5004, .Name="smiley_50x50"},
		{.Offs=1251, .Size=7144, .Name="wlcd_demo"}
	}
};
//
//binary data to be written into SPI FLASH
const uint32_t STORE_ATTR ICACHE_RODATA_ATTR wfof_Data[]={
0x00320032, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 
0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xDFFFFFFF, 0xBEF7DEFF, 0x7DF77DF7, 0xDFFFBEF7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xDFFFFFFF, 0xFFFFDFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xDFFFFFFF, 0xFFFFDFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0x7DEF7DEF, 0xBEF79DF7, 0xDFFFFFFF, 0xDFFF9DF7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xDFFFDFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xDFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x5CEFFFFF, 0xFFFF9DF7, 0xFFFFFFFF, 0xDFFFFFFF, 0xFFFFDFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xDFFFFFFF, 0xFFFFDFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFDFFF, 
0xDFFFFFFF, 0xFFFFDFFF, 0x5CEFFFFF, 0xFADE5CEF, 0x9EF75CEF, 0xFFFFFFFF, 0xDFFFDFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xDFFFDFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xBEF7FFFF, 0xFFFFFFFF, 0xBEF75CEF, 0xBEF79DF7, 0x7DEFDEFF, 0xDFFFFFFF, 0xFFFFDFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xDFFF9EF7, 0xFFFFFFFF, 0xFFFF7DEF, 0x3CE7DFFF, 0x5DEFBEF7, 0xDFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 
0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xBCF7FEFF, 0x9BF75AEF, 0x3AEFDCFF, 0xFFFFFFFF, 0xDFFFFFFF, 0xFFFF7DF7, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xB9FFFEFF, 0x53F774F7, 0x32F753F7, 0x52F732F7, 0xD1EE73F7, 0x72F752F7, 0xBCFF96F7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x52F7FCFF, 0x53F70FF7, 0xB9FF97FF, 0xDBFFBAFF, 0xDBFFDCFF, 0x38EFDBFF, 0xB8FF98F7, 
0x31F775F7, 0x98F710F7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFBDEFFFF, 0xD7BDD7BD, 
0xF7BDD7BD, 0x90BDF5BD, 0x96F78AC5, 0xFEFFFCFF, 0xFFFFFEFF, 0xFEFFFFFF, 0xFEFFFEFF, 0xFEFFFEFF, 0xFEFFDEFF, 0xFDFFFEFF, 0x32F7DAFF, 0xB9FF0EEF, 0xFFFFFFFF, 0x38C61CE7, 0xD7BDF7BD, 0x7DEF38C6, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0x1CE7FFFF, 0xBAD696B5, 0xFEFFDFFF, 0x9AFFFFFF, 0x76FF0EEF, 0xB5B55BEF, 0x7BEFD6BD, 0xFDFFDDFF, 0xFDFFFDFF, 0xFDFFFDFF, 
0xFDFFFDFF, 0xFDFFFDFF, 0xFDFFFDFF, 0xFDF7DDFF, 0x4EDE9AFF, 0xB5B54EB5, 0xBEF7BAD6, 0xFFFFFFFF, 0x38C6BEF7, 0x79CEB6B5, 0xFFFFDFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xDFFFFFFF, 0x38C679CE, 
0xFFFFFFFF, 0xDFFFFFFF, 0x0EF799F7, 0xFCFFB9FF, 0xFCFFFCFF, 0x35C6FBFF, 0x79EF16C6, 0xDBFFDAFF, 0xFAFFDBFF, 0xFAFFFAFF, 0xFAFFFAFF, 0xDAFFDAFF, 0xF7E6BBF7, 0x97CED5BD, 0x51FF96FF, 0xFFFFDAFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0x3CE7FFFF, 0x3CE7B6B5, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0x79CEDFFF, 0xFFFF79CE, 0xFFFFFFFF, 0xFFFFFFFF, 0xDBFFDEFF, 0xD9FFD8FF, 0xF8FFD9FF, 0xF9FFD9FF, 0x13C657EF, 
0xF8FFF6E6, 0xD7FFD8FF, 0xD7FFD7FF, 0xD7FFD7FF, 0x97F7D7FF, 0x55CE54CE, 0xD9FFD9FF, 0x74FFD9FF, 0x99FF10F7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF7BDFFFF, 0xFFFFDBDE, 0x64EDFFFF, 0xFFFF64ED, 
0x18C63CE7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xDBFFFFFF, 0xB6FFD6FF, 0xD6FFD6FF, 0xD6FFD6FF, 0x75F7D7FF, 0xD3DE31CE, 0xB4FFF5FF, 0xD4FFD4FF, 0xD4FFD5FF, 0xB0BDB5FF, 0xF6FF14E7, 0xB6FFD6FF, 
0xB6FFB6FF, 0xEEF651FF, 0xFFFFBAFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xBEF7FFFF, 0x1CE759CE, 0x64EDFFFF, 0xDFFF64ED, 0xDFFFF7BD, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD7FFFFFF, 0xB3FF93FF, 0xB2FFB3FF, 
0xB3FFB3FF, 0xB2FF92F7, 0x50CE32EF, 0xD1FF50EF, 0xD1FFD1FF, 0xD1FFB0FF, 0x53EFADBD, 0xB3FFB3FF, 0xB3FFB3FF, 0x93FF93FF, 0xECF693FF, 0xFFFF57FF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x18C65DEF, 
0x64EDFFFF, 0xDFFF64ED, 0xFFFFD7BD, 0xDFFFDFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x92F7FEFF, 0x90FF8FFF, 0xB0FF90FF, 0x4FF790FF, 0xB0FF6FF7, 0x6FD6D1FF, 0xADFFADDE, 0xADFFADFF, 0x0DE7ADFF, 0xAFFF2ECE, 
0x90FF8FFF, 0x8FFF90FF, 0x51FF70FF, 0x2DF751FF, 0xDDFF32F7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xBAD6DFFF, 0x64ED1CE7, 0x1CE764ED, 0xFFFF9AD6, 0xDFFFFFFF, 0xFFFFDFFF, 0xDFFFFFFF, 0x4DFF95FF, 
0x6DFF8DFF, 0xADFF8DFF, 0x8CFF8DFF, 0x8EFF8DFF, 0xADDE8FFF, 0x0BE74BCE, 0x0BE70BEF, 0x68B52BEF, 0xADFFAEFF, 0x8CFF8DFF, 0x6DFF8DFF, 0x6FFF6EFF, 0x0DFF4EFF, 0x99FFABF6, 0xFFFFFEFF, 0xFFFFFFFF, 
0xDFFFFFFF, 0xFBDEFFFF, 0x64ED59CE, 0x59CE64ED, 0xFFFF7DEF, 0x99F7FFFF, 0xBCFF76F7, 0x74FFBBFF, 0x6FFF2CFF, 0x8EFF97FF, 0x8AFF6BFF, 0x8AFF8AFF, 0xCBDECBE6, 0x8BFF6BF7, 0x4B6BAA9C, 0xED7B4E8C, 
0xAA9C4A6B, 0x8AFF8AFF, 0x4AF7E9EE, 0x4AFF8AFF, 0x4EFF4CFF, 0x31FF51FF, 0xACF688FE, 0xFFFF99FF, 0xFFFFFFFF, 0x7DEFFFFF, 0xD7BDBAD6, 0x64ED59CE, 0x38C664ED, 0xFFFFDFFF, 0xAEF6BCFF, 0xCCF668F6, 
0xE8F6CAF6, 0xD8FFE8FE, 0x6EFFFCFF, 0x68FF67FF, 0x0AC668FF, 0xCC7BCC7B, 0xA9FFA9BD, 0x6E6B6A94, 0x9394D394, 0x89944E6B, 0xC9A488FF, 0x0BADCA7B, 0x68FFE9EE, 0x29FF29FF, 0xFDFF73FF, 0x67F653F7, 
0x99FF4AF6, 0xDEFFFFFF, 0x9AD69AD6, 0x7DEF1CE7, 0x64ED79CE, 0xBAD664ED, 0x7DEF96B5, 0x28F699FF, 0x67FE47F6, 0xC7FEA6FE, 0x2BFFE7FE, 0x47FF4BFF, 0x67FF67FF, 0x689446F7, 0x4A4A6B4A, 0x28EF0784, 
0x2C6B0884, 0xEF831084, 0x0784EB5A, 0xC63928F7, 0xAB5AAA52, 0x66FF46B5, 0x07FF27FF, 0x31F709F7, 0x88F6EFF6, 0xD1F627F6, 0x18BEFADE, 0xDFFF3CE7, 0x3CE7FFFF, 0x64ED79CE, 0xBEF764ED, 0xBAD6B6B5, 
0x27F6F0D5, 0x87FE48F6, 0xC7FEA7FE, 0x07FFE7FE, 0x46FF26FF, 0x66FF66FF, 0x46D667FF, 0x665A6652, 0x87DEE7CD, 0x84DE25CE, 0xA5E685DE, 0x25B585DE, 0xE76A88F7, 0x86526729, 0x66FFA7DE, 0x07FF26FF, 
0xC7FEE7FE, 0x67FEA7FE, 0x2AEE47F6, 0xBFF779D6, 0xFFFFDFFF, 0x3CE7FFFF, 0x64ED59CE, 0xDFFF64ED, 0xDEFFD7BD, 0x07F6B0F6, 0x87FE47F6, 0xC7FEA7FE, 0x07FFE7FE, 0x46FF26FF, 0x66FF66FF, 0x85FF66FF, 
0xA7FFA7FF, 0x26CE47F7, 0x82FFC2E6, 0x62FF62FF, 0xE4F642FF, 0xA6FFA6C5, 0x47F7A7DE, 0x07FF46FF, 0x06FF26FF, 0xA7FEE7FE, 0x68FE87FE, 0x07EE47F6, 0xFFFFBBFF, 0xFFFFFFFF, 0x9AD6BEF7, 0x64ED3CE7, 
0xFFFF64ED, 0x16C61CE7, 0x07F66DF6, 0x87FE47F6, 0xC7FEA7FE, 0x07FFE7FE, 0x46FF26FF, 0x47FF66FF, 0x66FF66FF, 0x67FF86FF, 0x63D626CE, 0x62FF82FF, 0x62FF62FF, 0x43FF62FF, 0xE8E6A4C5, 0x46FF66FF, 
0x46FF46FF, 0x07FF26FF, 0xA6F6A6F6, 0x67F687FE, 0x08F647F6, 0xFFFF57F7, 0xFFFFFFFF, 0x38C63CE7, 0x64EDFFFF, 0xFFFF64ED, 0x36CEDFFF, 0x07EE4ACD, 0x67FE47FE, 0xA7F687F6, 0xC7F6E7FE, 0x26FF07FF, 
0x46FF46FF, 0x87FF66FF, 0x06CE07EF, 0x82FF64D6, 0x62FF62FF, 0x62FF62FF, 0x63FF62FF, 0xC5C583FF, 0x47FF47DE, 0x26FF66FF, 0xC7FE07FF, 0xA7FEC7FE, 0x47F687F6, 0x08F647F6, 0xFFFF14F7, 0x3CE7FFFF, 
0x7DEF38C6, 0x64EDFFFF, 0xFFFF64ED, 0x9BF7FFFF, 0xE6C407CD, 0x48F688D5, 0xC6FEA7FE, 0xE7FEC6FE, 0x26FF07FF, 0x66FF66FF, 0xE6CDE7EE, 0xC3E625CE, 0x62FF62FF, 0x62FF62FF, 0x62FF62FF, 0x63FF62FF, 
0x43FF62FF, 0xC6CD24D6, 0x67FF67DE, 0xE6FE07FF, 0xA7FEC7FE, 0x47F687F6, 0xE7F528F6, 0xFFFF13F7, 0x59CE7ACE, 0xFFFF5DEF, 0x64EDFFFF, 0xFFFF64ED, 0x9BFFFFFF, 0x64E587E5, 0xC6BC25D5, 0x47C507BD, 
0x27DEC8CD, 0xA7CD07D6, 0x86C587C5, 0xE3EEE5D5, 0x62FF22F7, 0x62FF62FF, 0x62FF62FF, 0x62FF62FF, 0x62FF42FF, 0x42FF42FF, 0xC3EE22FF, 0x46BD05D6, 0x68EEA7CD, 0xA7FEC8FE, 0x68FE88FE, 0x49DD29F6, 
0xF8BD4FB5, 0x9EF73CE7, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xBCFFFFFF, 0x64F5A9ED, 0xE4F5C4F5, 0x45F604F6, 0x05DE25EE, 0xC4F645E6, 0x03FFE4FE, 0x22FF02FF, 0x42FF42FF, 0x42FF42FF, 0x62FF42FF, 
0x62FF62FF, 0x42FF42FF, 0x22FF42FF, 0x02FF02FF, 0xC3F6E2FE, 0x65CD64EE, 0xE6BC05BD, 0xA6B4C6B4, 0xE5CCA5BC, 0xFFF7F4F6, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xBCFFFFFF, 0x43ED0CEE, 
0xC4F583ED, 0x04EE04F6, 0xA3C463BC, 0x83F681DD, 0x02FFC3FE, 0x22FF02FF, 0x42FF22FF, 0x42FF42FF, 0x42FF42FF, 0x42FF42FF, 0x22FF22FF, 0x22FF22FF, 0xE2FE02FF, 0xA3FEE2FE, 0xE3CC03EE, 0xC4EDC4CC, 
0xC4FD04FE, 0x64ED84F5, 0xFFFF17F7, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xDEFFFFFF, 0x23ED71EE, 0xC4F585ED, 0x84E5E4F5, 0xC4CC64DD, 0xA3FE84FE, 0xE2FEC2FE, 0x02FFE2FE, 0x22FF02FF, 
0x22FF22FF, 0x22FF22FF, 0x22FF22FF, 0x02FF23FF, 0x02FF02FF, 0xC2FEE2FE, 0xA3FEC3FE, 0x83DDA3FE, 0x45DDC4CC, 0xA4EDC5ED, 0x45E584ED, 0xFFFFBDFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 
0xFFFFFFFF, 0x26E517F7, 0x84ED86ED, 0x04F6C4ED, 0xC3C443FE, 0xA3F664DD, 0xC2FEA3F6, 0xE2FEC2FE, 0x03FFE3FE, 0x03FF03FF, 0x02FF02FF, 0x02FF02FF, 0xE2FE02FF, 0xC2FEE2FE, 0xC2FEC3FE, 0x82FEA3FE, 
0xE4CC44FE, 0x06F646D5, 0x84EDC4F5, 0xCBE544ED, 0xFEFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0x8CE55BF7, 0x64ED44ED, 0xC4F5A4ED, 0x04EEE3F5, 0x84DD83C4, 0xA3F6A3FE, 
0xC3FEA3FE, 0xE6FEC4F6, 0xE3F605FF, 0xE2FEE3FE, 0xE2FEE1FE, 0xE2FEE2FE, 0xC2FEE2FE, 0xA3FEC2FE, 0x44F6A3FE, 0xE5CC04CD, 0xC5EDE7ED, 0x44ED84ED, 0xD4F6E3EC, 0xFFFFFFF7, 0xFFFFFFFF, 0xFFFFFFFF, 
0x64EDFFFF, 0xFFFF64ED, 0xDFFFFFFF, 0x52EEDEF7, 0x44EDE4E4, 0xA4F564F5, 0xE4F5C4F5, 0x82C4E4ED, 0x43EEA3C4, 0xA4FEA4FE, 0xC6FEC5FE, 0xE6FE07FF, 0xE2FEE3FE, 0xE2FEC3FE, 0x63F6C3FE, 0x42CDA3DD, 
0xA3C4E2C4, 0x43BC62BC, 0xE7ED26D5, 0x84F5C5ED, 0x24F564ED, 0xBDFF28E5, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xDFFFDFFF, 0x59F7FFFF, 0xE4EC48E5, 0x64F524ED, 0xE4F5A4ED, 
0x04F6E4F5, 0x43BC84E5, 0x43BC22B4, 0xC7BC83BC, 0xC8BC0ABD, 0x89B4A8B4, 0x6AAC84B4, 0x53BD90AC, 0x37D616CE, 0x04EECBD5, 0x06EE24F6, 0xC5EDE5F5, 0x65ED84ED, 0xE4EC24ED, 0xFFFFB3EE, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xE5E472EE, 0x24F504ED, 0x84ED64F5, 0xC4F5C4F5, 0x23FE03F6, 0x63FE44FE, 0xD6E667F6, 0xDFFF9FEF, 0x5BEFDFFF, 0x16F787EE, 
0xFFFFDFFF, 0x9DF7DFF7, 0xE3FD2AE6, 0xC5F503EE, 0x84F5A5F5, 0x25ED45F5, 0x8BE5E3EC, 0xFFFFBCF7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xCEED9CF7, 
0x05EDC4EC, 0x64ED24ED, 0xA4ED84ED, 0xC4F5C4F5, 0x03F6E4F5, 0xB3EE26F6, 0xBDF79CF7, 0x38EFBDF7, 0x6BEE68EE, 0x79F735F7, 0x15F759F7, 0xC4F5E5E5, 0x84EDC4F5, 0x44ED84ED, 0xE4EC24ED, 0x38F7E7E4, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0x7AF7FFFF, 0xC5E44BE5, 0x24ED05ED, 0x64ED44ED, 0xA4F584ED, 0xC4F5A4F5, 0xE7EDE4F5, 0x6BF64AEE, 
0x28EE6BEE, 0xE3F505F6, 0x06EEC4ED, 0xA5EDE7ED, 0x84EDA4F5, 0x44ED64F5, 0x25ED24ED, 0xC6E4E5EC, 0xFFFF95EE, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0x29ED39F7, 0xE5ECC5E4, 0x25ED05ED, 0x64ED44ED, 0x84F564F5, 0xA3F5A4F5, 0xC3F5C3F5, 0xC3F5C3F5, 0xC4F5C4F5, 0x23DDC4F5, 0xA4F584ED, 0x64ED64F5, 0x24ED44ED, 0xC4EC05ED, 
0x73EEA6E4, 0xFFFFDEFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x7BF7FFFF, 0xC5E42BED, 0xE5ECE5EC, 0x25ED05ED, 0x44ED24ED, 
0x64ED64ED, 0x84F564ED, 0x84ED84F5, 0x65ED85F5, 0x25E524CC, 0x45ED65F5, 0x05ED25ED, 0xE5EC05ED, 0xC7E4A5E4, 0xFEFF95EE, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 
0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFEFF, 0x8FE5BDFF, 0xA5ECC9EC, 0xE5ECE5E4, 0x05EDE5EC, 0x25ED25ED, 0x24ED25ED, 0xE5E425ED, 0x24CC64D4, 0x25ED06ED, 0x04ED24ED, 0xC5ECE4EC, 
0xA6ECC5EC, 0xF8F62BE5, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x6DE5D7EE, 
0xA6ECE9EC, 0xC5ECC6EC, 0xC5ECC5EC, 0xE5ECE5EC, 0xE4ECE4EC, 0x05ED05ED, 0xC5ECE5EC, 0xC5ECC6EC, 0xA7E4A6EC, 0x12EE2BE5, 0xFFFF9CFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xBDFFFFFF, 0xD0ED96EE, 0xC8E42BE5, 0xE8ECE8E4, 0xE7ECE7EC, 0xE7ECE7EC, 0xE8ECE7EC, 0xE7ECE7EC, 
0xE9E4A7E4, 0x53EEAEED, 0xFFFF3AF7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xDEFFFFFF, 0xD6F63AF7, 0xAEE532EE, 0x0AE54CE5, 0xEAE4EAE4, 0x2CED0BED, 0xF1ED6DED, 0x39F795EE, 0xFFFF9CFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xBDFFDEFF, 0x9CFF9CFF, 0x9CFF9CFF, 
0xBCF79CFF, 0xBEF7BDFF, 0xFFFFDFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFDFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xDFFFDFFF, 0xDFFFDFFF, 0xBEF7BEF7, 0xBEF7BEF7, 0xDFFFDFFF, 0xDFFFDFFF, 0xDFFFDFFF, 0xFFFFDFFF, 0xFFFFDFFF, 0xDFFFDFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xDFFFFFFF, 0xBEF7DFFF, 0x9EF7BEF7, 0x7DEF9EF7, 0x3CE75DEF, 
0x1CE73CE7, 0x1CE71CE7, 0x1CE71CE7, 0x3CE71CE7, 0x5DEF5DEF, 0x9EF77DEF, 0x9EF79EF7, 0xBEF7BEF7, 0xDFFFDFFF, 0xFFFFDFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xDFFFFFFF, 0xDFFFDFFF, 0xBEF7BEF7, 0x7DEF9EF7, 0x3CE75DEF, 0x1CE73CE7, 0xDBDEFBDE, 0xFBDEFBDE, 0x3CE71CE7, 0x5DEF5DEF, 0x9EF77DEF, 0xBEF79EF7, 
0xDFFFBEF7, 0xDFFFDFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xDFFFFFFF, 0xBEF7BEF7, 0xDFFFDFFF, 0xDFFFDFFF, 0xDFFFDFFF, 0xDFFFDFFF, 0xDFFFDFFF, 0xFFFFDFFF, 0xFFFFFFFF, 0xFFFFDFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0x64EDDFFF, 0xFFFF64ED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xDFFFFFFF, 0xFFFFDFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x64EDFFFF, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 
0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 
0x64ED64ED, 0x64ED64ED, 0x64ED64ED, 0x80820082, 0xFF0000FF, 0x00FF0000, 0x0000FF00, 0x01000048, 0xA5016529, 0xFBDE0114, 0x011CE712, 0xA501FBDE, 0x65290114, 0x01000069, 0xFF186529, 0x652901FF, 
0x01000068, 0xFF014D6B, 0x7E9601FF, 0x12DD2401, 0x2401BD1C, 0x7E9601DD, 0x01FFFF01, 0x00684D6B, 0x30840100, 0x01FFFF01, 0x04141E7E, 0x1E7E015D, 0x01FFFF01, 0x00683084, 0xAE730100, 0x01FFFF01, 
0x04145E8E, 0x5E8E015D, 0x01FFFF01, 0x0068AE73, 0xAE730100, 0x01FFFF01, 0x04145E8E, 0x5E8E015D, 0x01FFFF01, 0x0068AE73, 0xAE730100, 0x01FFFF01, 0x04145E8E, 0x5E8E015D, 0x01FFFF01, 0x0068AE73, 
0xAE730100, 0x01FFFF01, 0x04145E8E, 0x5E8E015D, 0x01FFFF01, 0x0068AE73, 0xAE730100, 0x01FFFF01, 0x04145E8E, 0x5E8E015D, 0x01FFFF01, 0x0068AE73, 0xAE730100, 0x01FFFF01, 0x04145E8E, 0x5E8E015D, 
0x01FFFF01, 0x0056AE73, 0x04210100, 0x07CB5A01, 0x52018A52, 0x084201AA, 0x06610801, 0x73010000, 0xFFFF01AE, 0x145E8E01, 0x8E015D04, 0xFFFF015E, 0x07AE7301, 0x18010000, 0x694A01C3, 0x06AA5201, 
0x5A018A52, 0x042101CB, 0x01000043, 0xFF0CD7BD, 0x14A501FF, 0x01000005, 0xFF011084, 0x1E7E01FF, 0x015D0414, 0xFF011E7E, 0x108401FF, 0x01000006, 0xFF0B75AD, 0xD7BD01FF, 0x01000041, 0xFF018631, 
0x7FDF01FF, 0x07BEA601, 0xAE01DFAE, 0x1FBF01BE, 0x01DFF701, 0x0801FFFF, 0x00000461, 0x01AA5201, 0xAE01FFFF, 0x7D5514BE, 0x01BEAE01, 0x5201FFFF, 0x000005AA, 0x01C31801, 0xE701FFFF, 0xFFB601BF, 
0x01DFAE07, 0xDF01BEA6, 0xFFFF017F, 0x40863101, 0x6B010000, 0xFFFF016D, 0x097E9601, 0x2C015D04, 0x7FDF01FD, 0x01FFFF01, 0x00042421, 0xC3180100, 0x165DEF01, 0xEF01FFFF, 0xC318015D, 0x01000005, 
0xFF01AA52, 0xDFAE01FF, 0x087D0C01, 0x96015D04, 0xFFFF017E, 0x406D6B01, 0x6B010000, 0xFFFF016D, 0x097E9601, 0x2C015D04, 0x7FDF01FD, 0x01FFFF01, 0x00052421, 0xC3180100, 0x148E7301, 0x730175AD, 
0xC318018E, 0x01000006, 0xFF018A52, 0xDFAE01FF, 0x087D0C01, 0x96015D04, 0xFFFF017E, 0x406D6B01, 0x6B010000, 0xFFFF016D, 0x097E9601, 0x35015D04, 0x7FDF011D, 0x01FFFF01, 0x00232421, 0x694A0100, 
0x01FFFF01, 0x0C01DFB6, 0x5D04087D, 0x017E9601, 0x6B01FFFF, 0x0000406D, 0x016D6B01, 0x9601FFFF, 0x5D04097E, 0x011D3501, 0xFF017FDF, 0x242101FF, 0x01000023, 0xFF01694A, 0xDFB601FF, 0x087D0C01, 
0x96015D04, 0xFFFF017E, 0x406D6B01, 0x6B010000, 0xFFFF016D, 0x097E9601, 0x35015D04, 0x7FDF011D, 0x01FFFF01, 0x00232421, 0x694A0100, 0x01FFFF01, 0x0C01DFB6, 0x5D04087D, 0x017E9601, 0x6B01FFFF, 
0x0000406D, 0x016D6B01, 0x9601FFFF, 0x5D04097E, 0x011D3501, 0xFF017FDF, 0x242101FF, 0x01000023, 0xFF01694A, 0xDFB601FF, 0x087D0C01, 0x96015D04, 0xFFFF017E, 0x406D6B01, 0x6B010000, 0xFFFF016D, 
0x097E9601, 0x35015D04, 0x7FDF011D, 0x01FFFF01, 0x00232421, 0x694A0100, 0x01FFFF01, 0x0C01DFB6, 0x5D04087D, 0x017E9601, 0x6B01FFFF, 0x0000406D, 0x016D6B01, 0x9601FFFF, 0x5D04097E, 0x011D3501, 
0xFF017FDF, 0x242101FF, 0x01000023, 0xFF01694A, 0xDFB601FF, 0x087D1401, 0x96015D04, 0xFFFF017E, 0x406D6B01, 0x6B010000, 0xFFFF016D, 0x095E9601, 0x2C015D04, 0x7FDF01FD, 0x01FFFF01, 0x00232421, 
0xAA520100, 0x01FFFF01, 0x0409BEAE, 0x5E96015D, 0x01FFFF01, 0x00406D6B, 0x2C630100, 0x01FFFF01, 0x04019E9E, 0x9D14075D, 0x017D0C01, 0xDF013D45, 0xFFFF017F, 0x23242101, 0x4A010000, 0xFFFF0149, 
0x01FFB601, 0x1407BD24, 0x5D04019D, 0x019E9E01, 0x6301FFFF, 0x0000402C, 0x01452901, 0xF701FFFF, 0x9FE709DF, 0x02BFEF01, 0x0001FFFF, 0x00002320, 0x01610801, 0xF701FFFF, 0x9FE709DF, 0x01DFF701, 
0x2901FFFF, 0x00004145, 0x0C14A501, 0x9C01FFFF, 0x000025D3, 0x0BF39C01, 0xA501FFFF, 0x00004314, 0x01610801, 0x18080421, 0xA21001E3, 0x27200001, 0x08010000, 0xC3180141, 0x01E31807, 0x08010421, 
0x0000FF61, 0x440000FF, 0x08010000, 0x61080941, 0x13200001, 0x00010000, 0x61080920, 0x0A410801, 0x00010000, 0x61080920, 0x09410801, 0x00010000, 0x61080920, 0x2F410801, 0x9C010000, 0xFFFF0BF3, 
0x11D39C01, 0x9C010000, 0xFFFF0CD3, 0x07B29401, 0x9C010000, 0xFFFF0BD3, 0x07F39C01, 0x9C010000, 0xFFFF0BD3, 0x2DF39C01, 0x5A010000, 0xFFFF01EB, 0x02DFF70A, 0x2901FFFF, 0x00000F45, 0x02A21001, 
0xF70AFFFF, 0xFFFF02DF, 0x01000006, 0xFF02D39C, 0xDFF709FF, 0x01FFFF02, 0x000514A5, 0x45290100, 0x0AFFFF02, 0xFF01DFF7, 0xEB5A01FF, 0x0100002C, 0xFF0118C6, 0xDE6501FF, 0x019E5D09, 0xFF017E9E, 
0x8E7301FF, 0x0100000F, 0xFF018A52, 0xDFAE01FF, 0x019E5D09, 0xF701BE65, 0xFFFF01DF, 0x04610801, 0x00010000, 0xFFFF0220, 0x01BEA601, 0x5D077E55, 0x7E55019E, 0x015E8E01, 0xFF01DFF7, 0x610801FF, 
0x01000004, 0xFF018E73, 0x7E9E01FF, 0x019E5D09, 0xFF01DE65, 0x18C601FF, 0x0200002C, 0x040AFFFF, 0x7D55015D, 0x01FFFF01, 0x000F75AD, 0x518C0100, 0x01FFFF01, 0x040AFE75, 0xBFEF015D, 0x01FFFF01, 
0x0004A210, 0x41080100, 0x01FFFF02, 0x0409DE6D, 0x3D45015D, 0x01BFEF01, 0x1001FFFF, 0x000004A2, 0x0175AD01, 0x5501FFFF, 0x5D040A7D, 0x2CFFFF02, 0xDE010000, 0xFFFF01FB, 0x09BD2401, 0x6D015D04, 
0xFFFF01FE, 0x0F929401, 0x73010000, 0xFFFF01AE, 0x095E8E01, 0x14015D04, 0xBFEF019D, 0x01FFFF01, 0x00048210, 0x20000100, 0x01FFFF02, 0x04091E76, 0x7D4D015D, 0x01DFF701, 0x0801FFFF, 0x00000461, 
0x01929401, 0x6D01FFFF, 0x5D0409FE, 0x01BD2401, 0xDE01FFFF, 0x00002CFB, 0x011CE701, 0x1C01FFFF, 0x5D0409BD, 0x01DE6D01, 0x9401FFFF, 0x00000FB2, 0x01AE7301, 0x8E01FFFF, 0x5D04095E, 0x019D1401, 
0xFF01BFEF, 0x821001FF, 0x01000004, 0xFF022000, 0xFE7501FF, 0x015D0409, 0xF7017D4D, 0xFFFF01DF, 0x04821001, 0x94010000, 0xFFFF01B2, 0x09DE6D01, 0x1C015D04, 0xFFFF01BD, 0x2C1CE701, 0xE7010000, 
0xFFFF011C, 0x09BD1C01, 0x6D015D04, 0xFFFF01DE, 0x0FB29401, 0x73010000, 0xFFFF01AE, 0x095E8E01, 0x14015D04, 0xBFEF019D, 0x01FFFF01, 0x00048210, 0x20000100, 0x01FFFF02, 0x0409FE75, 0x7D4D015D, 
0x01DFF701, 0x1001FFFF, 0x00000482, 0x01B29401, 0x6D01FFFF, 0x5D0409DE, 0x01BD1C01, 0xE701FFFF, 0x00002C1C, 0x011CE701, 0x1C01FFFF, 0x5D0409BD, 0x01DE6D01, 0x9401FFFF, 0x00000FB2, 0x01AE7301, 
0x8E01FFFF, 0x5D04095E, 0x019D1401, 0xFF01BFEF, 0x821001FF, 0x01000004, 0xFF022000, 0xFE7501FF, 0x015D0409, 0xF7017D4D, 0xFFFF01DF, 0x04821001, 0x94010000, 0xFFFF01B2, 0x09DE6D01, 0x1C015D04, 
0xFFFF01BD, 0x2C1CE701, 0xE7010000, 0xFFFF011C, 0x09BD1C01, 0x6D015D04, 0xFFFF01DE, 0x0FB29401, 0x73010000, 0xFFFF01AE, 0x095E8E01, 0x14015D04, 0xBFEF019D, 0x01FFFF01, 0x00048210, 0x20000100, 
0x01FFFF02, 0x0409FE75, 0x7D4D015D, 0x01DFF701, 0x1001FFFF, 0x00000482, 0x01B29401, 0x6D01FFFF, 0x5D0409DE, 0x01BD1C01, 0xE701FFFF, 0x00002C1C, 0x011CE701, 0x1C01FFFF, 0x5D0409BD, 0x01DE6D01, 
0x9401FFFF, 0x00000FB2, 0x01AE7301, 0x8E01FFFF, 0x5D04095E, 0x019D1401, 0xFF01BFEF, 0x821001FF, 0x01000004, 0xFF022000, 0xFE7501FF, 0x015D0409, 0xF7017D4D, 0xFFFF01DF, 0x04821001, 0x94010000, 
0xFFFF01B2, 0x09DE6D01, 0x1C015D04, 0xFFFF01BD, 0x2C1CE701, 0xE7010000, 0xFFFF011C, 0x09BD1C01, 0x6D015D04, 0xFFFF01DE, 0x0FB29401, 0x73010000, 0xFFFF01AE, 0x095E8E01, 0x14015D04, 0xBFEF019D, 
0x01FFFF01, 0x00048210, 0x20000100, 0x01FFFF02, 0x0409FE75, 0x7D4D015D, 0x01DFF701, 0x1001FFFF, 0x00000482, 0x01B29401, 0x6D01FFFF, 0x5D0409DE, 0x01BD1C01, 0xE701FFFF, 0x00002C1C, 0x011CE701, 
0x1C01FFFF, 0x5D0409BD, 0x01DE6D01, 0x9401FFFF, 0x00000FB2, 0x01AE7301, 0x8E01FFFF, 0x5D04095E, 0x019D1401, 0xFF01BFEF, 0x821001FF, 0x01000004, 0xFF022000, 0xFE7501FF, 0x015D0409, 0xF7017D4D, 
0xFFFF01DF, 0x04821001, 0x94010000, 0xFFFF01B2, 0x09DE6D01, 0x1C015D04, 0xFFFF01BD, 0x2C1CE701, 0xE7010000, 0xFFFF011C, 0x09BD1C01, 0x6D015D04, 0xFFFF01DE, 0x0FB29401, 0x73010000, 0xFFFF01AE, 
0x095E8E01, 0x14015D04, 0xBFEF019D, 0x01FFFF01, 0x00048210, 0x20000100, 0x01FFFF02, 0x0409FE75, 0x7D4D015D, 0x01DFF701, 0x1001FFFF, 0x00000482, 0x01B29401, 0x6D01FFFF, 0x5D0409DE, 0x01BD1C01, 
0xE701FFFF, 0x00002C1C, 0x011CE701, 0x1C01FFFF, 0x5D0409BD, 0x01DE6D01, 0x9401FFFF, 0x00000FB2, 0x01AE7301, 0x8E01FFFF, 0x5D04095E, 0x019D1401, 0xFF01BFEF, 0x821001FF, 0x01000004, 0xFF022000, 
0xFE7501FF, 0x015D0409, 0xF7017D4D, 0xFFFF01DF, 0x04821001, 0x94010000, 0xFFFF01B2, 0x09DE6D01, 0x1C015D04, 0xFFFF01BD, 0x2C1CE701, 0xE7010000, 0xFFFF011C, 0x09BD1C01, 0x6D015D04, 0xFFFF01DE, 
0x0FB29401, 0x73010000, 0xFFFF01AE, 0x095E8E01, 0x14015D04, 0xBFEF019D, 0x01FFFF01, 0x00048210, 0x20000100, 0x01FFFF02, 0x0409FE75, 0x7D4D015D, 0x01DFF701, 0x1001FFFF, 0x00000482, 0x01B29401, 
0x6D01FFFF, 0x5D0409DE, 0x01BD1C01, 0xE701FFFF, 0x00002C1C, 0x011CE701, 0x1C01FFFF, 0x5D0409BD, 0x01DE6D01, 0x9401FFFF, 0x00000FB2, 0x01AE7301, 0x8E01FFFF, 0x5D04095E, 0x019D1401, 0xFF01BFEF, 
0x821001FF, 0x01000004, 0xFF022000, 0xFE7501FF, 0x015D0409, 0xF7017D4D, 0xFFFF01DF, 0x04821001, 0x94010000, 0xFFFF01B2, 0x09DE6D01, 0x1C015D04, 0xFFFF01BD, 0x2C1CE701, 0xE7010000, 0xFFFF011C, 
0x09BD1C01, 0x6D015D04, 0xFFFF01DE, 0x0FB29401, 0x73010000, 0xFFFF01AE, 0x095E8E01, 0x14015D04, 0xBFEF019D, 0x01FFFF01, 0x00048210, 0x20000100, 0x01FFFF02, 0x0409FE75, 0x7D4D015D, 0x01DFF701, 
0x1001FFFF, 0x00000482, 0x01B29401, 0x6D01FFFF, 0x5D0409DE, 0x01BD1C01, 0xE701FFFF, 0x00002C1C, 0x011CE701, 0x1C01FFFF, 0x5D0409BD, 0x01DE6D01, 0x9401FFFF, 0x00000FB2, 0x01AE7301, 0x8E01FFFF, 
0x5D04095E, 0x019D1401, 0xFF01BFEF, 0x821001FF, 0x01000004, 0xFF022000, 0xFE7501FF, 0x015D0409, 0xF7017D4D, 0xFFFF01DF, 0x04821001, 0x94010000, 0xFFFF01B2, 0x09DE6D01, 0x1C015D04, 0xFFFF01BD, 
0x2C1CE701, 0xE7010000, 0xFFFF011C, 0x09BD1C01, 0x6D015D04, 0xFFFF01DE, 0x0FB29401, 0x73010000, 0xFFFF01AE, 0x095E8E01, 0x14015D04, 0xBFEF019D, 0x01FFFF01, 0x00048210, 0x20000100, 0x01FFFF02, 
0x0409FE75, 0x7D4D015D, 0x01DFF701, 0x1001FFFF, 0x00000482, 0x01B29401, 0x6D01FFFF, 0x5D0409DE, 0x01BD1C01, 0xE701FFFF, 0x00002C1C, 0x011CE701, 0x1C01FFFF, 0x5D0409BD, 0x01DE6D01, 0x9401FFFF, 
0x00000FB2, 0x01AE7301, 0x8E01FFFF, 0x5D04095E, 0x019D1401, 0xFF01BFEF, 0x821001FF, 0x01000004, 0xFF022000, 0xFE7501FF, 0x015D0409, 0xF7017D4D, 0xFFFF01DF, 0x04821001, 0x94010000, 0xFFFF01B2, 
0x09DE6D01, 0x1C015D04, 0xFFFF01BD, 0x2C1CE701, 0xE7010000, 0xFFFF013C, 0x09BD1C01, 0x6D015D04, 0xFFFF01DE, 0x0FD39C01, 0x7B010000, 0xFFFF01CF, 0x093E8601, 0x0C015D04, 0xBFEF017D, 0x01FFFF01, 
0x00048210, 0x20000100, 0x01FFFF02, 0x0409FE75, 0x5D4D015D, 0x01DFEF01, 0x1001FFFF, 0x00000482, 0x01D39C01, 0x6D01FFFF, 0x5D0409DE, 0x01BD1C01, 0xE701FFFF, 0x00002C3C, 0x011CE701, 0x1C01FFFF, 
0x5D0409BD, 0x01DE6D01, 0x9401FFFF, 0x00000FB2, 0x01CF7B01, 0x8E01FFFF, 0x5D04093E, 0x017D1401, 0xFF01BFEF, 0x821001FF, 0x01000004, 0xFF022000, 0xFE7501FF, 0x015D0409, 0xF7017D4D, 0xFFFF01DF, 
0x04821001, 0x94010000, 0xFFFF01B2, 0x09DE6D01, 0x1C015D04, 0xFFFF01BD, 0x2C1CE701, 0xA5010000, 0xFFFF0134, 0x097FDF01, 0xE7015FD7, 0xFFFF01BF, 0x0FCB5A01, 0x39010000, 0xFFFF01C7, 0x01BFEF01, 
0xD7087FD7, 0x7FDF015F, 0x01FFFF02, 0x00052000, 0xFFFF0200, 0x09BFEF01, 0xE7015FD7, 0xFFFF029F, 0x04200001, 0x5A010000, 0xFFFF01CB, 0x09BFE701, 0xDF015FD7, 0xFFFF017F, 0x2C34A501, 0x08010000, 
0xD7BD0161, 0x01FFFF0B, 0x001175AD, 0x55AD0100, 0x01FFFF0C, 0x0006D39C, 0xB2940100, 0x01FFFF0D, 0x0006D39C, 0x75AD0100, 0x01FFFF0B, 0x0801D7BD, 0x00002E61, 0x09242101, 0x18014529, 0x000013C3, 
0x09A21001, 0x21014529, 0x20000124, 0x01000009, 0x2901C318, 0x45290765, 0x01652901, 0x0001E318, 0x00000820, 0x09C31801, 0x21014529, 0x0000FF24, 0x450000FF, 0x000A0000, 0x00002920, 0x44200009, 
0x94010000, 0xFFFF0BB2, 0x26D39C01, 0x94010000, 0xFFFF0BB2, 0x42B29401, 0xFF0D0000, 0x55AD01FF, 0x0D000025, 0x0041FFFF, 0xC7390100, 0x01FFFF01, 0x75013FC7, 0x1E7E08FE, 0x017E9601, 0xFF01BFEF, 
0xA21001FF, 0x01000023, 0xFF016529, 0x5FD701FF, 0x073E8601, 0x75011E7E, 0x3FC701FE, 0x01FFFF01, 0x0040C739, 0xAE730100, 0x01FFFF01, 0x04095E8E, 0xBD1C015D, 0x015FD701, 0x2901FFFF, 0x00002365, 
0x01EB5A01, 0xA601FFFF, 0x5D0409BE, 0x015E8E01, 0x7301FFFF, 0x000040AE, 0x016D6B01, 0x9601FFFF, 0x5D04097E, 0x011D3501, 0xFF017FDF, 0x242101FF, 0x01000023, 0xFF01694A, 0xDFB601FF, 0x087D1401, 
0x96015D04, 0xFFFF017E, 0x406D6B01, 0x6B010000, 0xFFFF016D, 0x097E9601, 0x35015D04, 0x7FDF011D, 0x01FFFF01, 0x00232421, 0x694A0100, 0x01FFFF01, 0x0C01DFB6, 0x5D04087D, 0x017E9601, 0x6B01FFFF, 
0x0000406D, 0x016D6B01, 0x9601FFFF, 0x5D04097E, 0x011D3501, 0xFF017FDF, 0x242101FF, 0x01000023, 0xFF01694A, 0xDFB601FF, 0x087D0C01, 0x96015D04, 0xFFFF017E, 0x406D6B01, 0x6B010000, 0xFFFF016D, 
0x097E9601, 0x35015D04, 0x7FDF011D, 0x01FFFF01, 0x00232421, 0x694A0100, 0x01FFFF01, 0x0C01DFB6, 0x5D04087D, 0x017E9601, 0x6B01FFFF, 0x0000406D, 0x016D6B01, 0x9601FFFF, 0x5D04097E, 0x011D3501, 
0xFF017FDF, 0x242101FF, 0x01000023, 0xFF01694A, 0xDFB601FF, 0x087D0C01, 0x96015D04, 0xFFFF017E, 0x406D6B01, 0x6B010000, 0xFFFF016D, 0x097E9601, 0x35015D04, 0x7FDF011D, 0x01FFFF01, 0x00232421, 
0x694A0100, 0x01FFFF01, 0x0C01DFB6, 0x5D04087D, 0x017E9601, 0x6B01FFFF, 0x0000406D, 0x016D6B01, 0x9601FFFF, 0x5D04097E, 0x011D3501, 0xFF017FDF, 0x242101FF, 0x01000006, 0x5A014529, 0x0C6312EB, 
0x01EB5A01, 0x00074529, 0x694A0100, 0x01FFFF01, 0x1401DFB6, 0x5D04087D, 0x017E9601, 0x6B01FFFF, 0x0000406D, 0x01AE7301, 0x8E01FFFF, 0x5D04095E, 0x01BD1C01, 0xFF015FD7, 0x652901FF, 0x01000005, 
0xFF1618C6, 0x18C601FF, 0x01000006, 0xFF01EB5A, 0xBEA601FF, 0x015D0409, 0xFF015E8E, 0xAE7301FF, 0x01000040, 0xFF012842, 0xFFBE01FF, 0x079E5D01, 0x5D01BE5D, 0x1E7E019E, 0x019FE701, 0x1801FFFF, 
0x000004C3, 0x01084201, 0xD701FFFF, 0xBEA6015F, 0x109E9E01, 0x9E019EA6, 0xBEA6019E, 0x015FD701, 0x4201FFFF, 0x00000508, 0x01C73901, 0xCF01FFFF, 0xBE65013F, 0x01BE5D07, 0xBE019E5D, 0xFFFF01FF, 
0x40284201, 0x08010000, 0xFFFF0241, 0x03DFF709, 0x0005FFFF, 0x10840100, 0x01FFFF01, 0x0C143E86, 0x3E86017D, 0x01FFFF01, 0x00061084, 0xFFFF0200, 0x02DFF709, 0x0801FFFF, 0x00004141, 0x0CD39C01, 
0x9401FFFF, 0x000005B2, 0x01EF7B01, 0x8601FFFF, 0x5D04143E, 0x013E8601, 0x7B01FFFF, 0x000006EF, 0x0BD39C01, 0x9C01FFFF, 0x000043D3, 0x01200001, 0x08076108, 0x61080141, 0x07410801, 0x73010000, 
0xFFFF01AE, 0x145E8E01, 0x8E015D04, 0xFFFF015E, 0x08AE7301, 0x08080000, 0x61080141, 0x56200001, 0x73010000, 0xFFFF01AE, 0x145E8E01, 0x8E015D04, 0xFFFF015E, 0x68AE7301, 0x73010000, 0xFFFF01AE, 
0x145E8E01, 0x8E015D04, 0xFFFF015E, 0x68AE7301, 0x73010000, 0xFFFF01AE, 0x145E8E01, 0x8E015D04, 0xFFFF015E, 0x68AE7301, 0x73010000, 0xFFFF01AE, 0x145E8E01, 0x8E015D04, 0xFFFF015E, 0x68AE7301, 
0x73010000, 0xFFFF01AE, 0x145E8E01, 0x8E015D04, 0xFFFF015E, 0x68AE7301, 0x7B010000, 0xFFFF01CF, 0x143E8601, 0x86015D04, 0xFFFF013E, 0x68CF7B01, 0x6B010000, 0xFFFF016D, 0x017E9601, 0x0C019D14, 
0x9D14107D, 0x017D0C01, 0x96019D14, 0xFFFF017E, 0x686D6B01, 0x31010000, 0xFFFF1886, 0x69863101, 0x31010000, 0x75AD0186, 0x015DEF01, 0xEF109EF7, 0x9EF7017D, 0x015DEF01, 0x310175AD, 0x0000FF86, 
0xFF0000FF, 0x00FF0000, 0x0000F100, 0x01A88B01, 0x007FCABC, 0xC66A0100, 0x01CFFE01, 0x0003CABC, 0x099C0100, 0x02477B01, 0x2001C66A, 0x000065E1, 0x01A88B01, 0x7B01C66A, 0x00000947, 0x01E12001, 
0x4101099C, 0x000003A3, 0x01099C01, 0x9C01CFFE, 0x00000209, 0x05A34101, 0xEE01CFFE, 0x099C012E, 0x62E12001, 0xAC010000, 0xCFFE016A, 0x022EEE01, 0x41010000, 0x6AAC01A3, 0x01000004, 0xEE01445A, 
0xCFFE022E, 0x018CD501, 0x0001A88B, 0x099C0100, 0x01CFFE01, 0x0003099C, 0x445A0100, 0x01C66A01, 0xBC01A88B, 0x6EF601CA, 0x01CFFE02, 0x9C016EF6, 0x00003109, 0x01A34101, 0xF601CABC, 0xA88B016E, 
0x0100002C, 0xFE02A341, 0x445A01CF, 0x01000001, 0xFE016EF6, 0x000004CF, 0x05099C01, 0xD501CFFE, 0x6AAC018C, 0x01CFFE01, 0x0007099C, 0xE1200100, 0x01099C01, 0xFE026EF6, 0x2BC501CF, 0x0DE12001, 
0x7B010000, 0x6AAC0147, 0x01099C03, 0x4101477B, 0x00001BA3, 0x03477B01, 0x5A01CFFE, 0x00002044, 0x0BE12001, 0xDD010000, 0xCFFE01CD, 0x01099C01, 0xFE020000, 0x000004CF, 0x01099C01, 0xD501CFFE, 
0x445A018C, 0x04CABC01, 0xBC01CFFE, 0x000004CA, 0x04A34101, 0x20010000, 0x2BC501E1, 0x01CFFE02, 0x5A01CDDD, 0x00000C44, 0x02C66A01, 0xC501099C, 0x2EEE012B, 0x01CFFE02, 0x9C012EEE, 0xE1200109, 
0x01000006, 0xFE02CABC, 0x6EF601CF, 0x018CD501, 0x6A01099C, 0x000004C6, 0x01C66A01, 0xD5016AAC, 0xA341018C, 0x01000003, 0xFE03099C, 0xCDDD01CF, 0x0100001E, 0xDD01A341, 0x099C01CD, 0x01000004, 
0x0006099C, 0x099C0100, 0x01CFFE01, 0x0001CABC, 0xCFFE0200, 0x01000004, 0xFE01C66A, 0x8CD501CF, 0x01000002, 0xF601C66A, 0xCFFE026E, 0x02CDDD01, 0x20010000, 0x8CD501E1, 0x06099C01, 0x8B010000, 
0xCFFE02A8, 0x016EF601, 0x0010445A, 0xA3410100, 0x01099C01, 0xFE012EEE, 0x6EF601CF, 0x01099C01, 0x0004E120, 0x6EF60100, 0x01CFFE01, 0x7B016EF6, 0xCABC0147, 0x016EF601, 0xF601CFFE, 0x477B016E, 
0x01000001, 0xFE02A341, 0x6AAC01CF, 0x01000004, 0xFE01099C, 0x2BC501CF, 0x016EF601, 0x9C01CFFE, 0x00001D09, 0x012BC501, 0x8B01CFFE, 0x000002A8, 0x01E12001, 0xFE012BC5, 0xC66A01CF, 0x01000005, 
0xFE01C66A, 0x8CD501CF, 0x02000001, 0x0004CFFE, 0xC66A0100, 0x03CFFE02, 0x5A010000, 0x6EF60144, 0x02CFFE02, 0xC5010000, 0xCFFE012B, 0x07099C01, 0x5A010000, 0x6EF60144, 0x01CFFE01, 0x6A016EF6, 
0x00000AC6, 0x01C66A01, 0x00062BC5, 0xA88B0100, 0x012EEE01, 0xF601CFFE, 0x099C016E, 0x01000003, 0xFE02099C, 0xCABC01CF, 0x01000001, 0x9C01E120, 0xC66A0109, 0x01000003, 0xFE012EEE, 0x6EF601CF, 
0x03A34101, 0xD5010000, 0xCFFE018C, 0x01A88B01, 0xFE01099C, 0x6EF601CF, 0x09E12001, 0x41010000, 0xC66A01A3, 0x01445A01, 0x41010000, 0x099C03A3, 0x0AA34101, 0xF6010000, 0xCFFE016E, 0x02E12001, 
0x6A010000, 0xCFFE02C6, 0x016EF601, 0x0004E120, 0xA3410100, 0x01CFFE01, 0x00012EEE, 0xCFFE0200, 0x01000004, 0xFE02A341, 0x000004CF, 0x02445A01, 0x7B01CFFE, 0x00000147, 0x018CD501, 0x8B01CFFE, 
0x000008A8, 0x01445A01, 0xFE016EF6, 0x2BC501CF, 0x01000009, 0xFE02445A, 0x000008CF, 0x01099C01, 0xFE016EF6, 0xCDDD01CF, 0x02A34101, 0xBC010000, 0xCFFE02CA, 0x05CABC01, 0x9C010000, 0xCFFE0109, 
0x016EF601, 0xDD01CFFE, 0x000003CD, 0x018CD501, 0x6A01CFFE, 0x000001C6, 0x018CD501, 0xBC01CFFE, 0x000006CA, 0x01C66A01, 0xF601CABC, 0xCFFE036E, 0x01099C01, 0x9C01477B, 0xCABC0109, 0x016EF601, 
0xC501CFFE, 0x0000092B, 0x01CFFE01, 0x0003CDDD, 0x099C0100, 0x01CFFE03, 0x00058CD5, 0xCFFE0200, 0x02000001, 0x0005CFFE, 0xCFFE0200, 0x02000005, 0x2001099C, 0x000001E1, 0x018CD501, 0x6A01CFFE, 
0x000008C6, 0x02E12001, 0x2001CDDD, 0x000009E1, 0x01C66A01, 0xD501CFFE, 0x0000098C, 0x01099C01, 0xAC01CFFE, 0xE120016A, 0x01A88B01, 0xD501CABC, 0xCFFE038C, 0x01CDDD01, 0x0002E120, 0xE1200100, 
0x016EF601, 0x6A012BC5, 0xCFFE02C6, 0x026AAC01, 0xEE010000, 0xCFFE012E, 0x01445A01, 0x6A010000, 0xCFFE02C6, 0x03A34101, 0x8B010000, 0x8CD502A8, 0x01A88B01, 0x0001E120, 0xA3410100, 0x04E12001, 
0x20010000, 0xCDDD01E1, 0x01CFFE01, 0x0007099C, 0xC66A0100, 0x01CFFE01, 0x0002CABC, 0xA3410100, 0x016EF601, 0xDD016AAC, 0xCFFE02CD, 0x04099C01, 0xFE020000, 0x445A01CF, 0x01CFFE01, 0x00058CD5, 
0xCFFE0200, 0x01000009, 0xFE018CD5, 0xC66A01CF, 0x01000007, 0xDD02E120, 0xE12001CD, 0x0100000A, 0xFE01C66A, 0x8CD501CF, 0x01000008, 0xEE01099C, 0x477B012E, 0x01099C01, 0x9C01CDDD, 0xC66A0109, 
0x01A88B01, 0xD5016AAC, 0xCFFE028C, 0x028CD501, 0x9C010000, 0xCFFE0109, 0x01A34101, 0x9C010000, 0xCFFE0209, 0x01A88B01, 0xFE020000, 0x000003CF, 0x018CD501, 0xBC01CFFE, 0xE12001CA, 0x01099C01, 
0xBC012EEE, 0x445A01CA, 0x0100000B, 0xFE012BC5, 0xA88B01CF, 0x01000007, 0xFE016AAC, 0xA88B01CF, 0x02000002, 0x00018CD5, 0x445A0100, 0x026EF601, 0x5A01CFFE, 0x00000344, 0x01CFFE02, 0xFE01C66A, 
0x8CD501CF, 0x02000005, 0x5A01CFFE, 0x00000844, 0x018CD501, 0x6A01CFFE, 0x000006C6, 0x02E12001, 0x2001CDDD, 0x00000BE1, 0x01C66A01, 0xDD01CFFE, 0x000006CD, 0x01C66A01, 0x9C01CDDD, 0x00000109, 
0x01CDDD01, 0x8B01CFFE, 0x000005A8, 0x01E12001, 0x4101477B, 0x000001A3, 0x01E12001, 0xBC016EF6, 0x000003CA, 0x02CABC01, 0xBC01CFFE, 0xCFFE01CA, 0x03CDDD01, 0x6A010000, 0xCFFE01C6, 0x026EF601, 
0xC501CFFE, 0x00000B2B, 0x02477B01, 0x5A018CD5, 0x00000844, 0x018CD501, 0x6A01CFFE, 0x000001C6, 0x01099C01, 0x20016EF6, 0x000002E1, 0x02A88B01, 0xEE01CFFE, 0xE120012E, 0x02000002, 0x8B01CFFE, 
0xCFFE01A8, 0x05CABC01, 0xD5010000, 0xCFFE018C, 0x08A88B01, 0xD5010000, 0xCFFE018C, 0x05A88B01, 0x41010000, 0xCDDD01A3, 0x012BC501, 0x000CE120, 0xE1200100, 0x04CFFE02, 0x6A010000, 0x2BC501C6, 
0x01099C01, 0x0002E120, 0x6EF60100, 0x01CFFE01, 0x2001CDDD, 0x000008E1, 0x01A88B01, 0x9C01CFFE, 0xA3410109, 0x01000003, 0xFE03CABC, 0x6AAC01CF, 0x01000004, 0xFE048CD5, 0x2EEE01CF, 0x01099C01, 
0x2001C66A, 0x000003E1, 0x01445A01, 0xAC01477B, 0x2EEE016A, 0x018CD501, 0x000AC66A, 0x6EF60100, 0x01CFFE01, 0x8B010000, 0xCFFE01A8, 0x04C66A01, 0xAC010000, 0xCFFE026A, 0x022BC501, 0xFE020000, 
0x099C01CF, 0x01CFFE01, 0x0004099C, 0x445A0100, 0x01CABC01, 0xC501CFFE, 0x0000072B, 0x01A34101, 0xFE012EEE, 0x099C01CF, 0x01000004, 0xF601477B, 0x6AAC016E, 0x0200000F, 0x7B01CFFE, 0xA3410147, 
0x01099C01, 0x9C01CDDD, 0xE1200109, 0x01000004, 0xFE02A88B, 0x6EF601CF, 0x01CABC01, 0x6A03099C, 0xA88B01C6, 0x01099C01, 0xFE018CD5, 0x2EEE01CF, 0x05A34101, 0xBC010000, 0xCFFE02CA, 0x04477B01, 
0x6A010000, 0xCFFE01C6, 0x016AAC01, 0xBC01C66A, 0x6EF601CA, 0x01CFFE07, 0xAC018CD5, 0x445A016A, 0x0100000B, 0xFE02E120, 0xCABC01CF, 0x01CFFE01, 0x0006A88B, 0xCDDD0100, 0x01CFFE02, 0x5A01099C, 
0xCFFE0144, 0x012EEE01, 0xFE01CABC, 0xCABC01CF, 0x01C66A01, 0xDD01099C, 0xCFFE01CD, 0x01CABC01, 0xFE02A88B, 0x445A01CF, 0x01000005, 0xD501099C, 0x099C018C, 0x01CFFE01, 0x0002CABC, 0xE1200100, 
0x01CABC01, 0x7B016EF6, 0x00001047, 0x018CD501, 0xF601CFFE, 0x2EEE016E, 0x01099C01, 0x0007E120, 0xC66A0100, 0x06CDDD01, 0xEE01CFFE, 0xCABC012E, 0x09477B01, 0x9C010000, 0xC66A0109, 0x02000006, 
0x0003477B, 0xA3410100, 0x01C66A04, 0x000FE120, 0xA88B0100, 0x01CFFE03, 0x0007A88B, 0xE1200100, 0x026EF601, 0x9C01CFFE, 0xCFFE0109, 0x018CD501, 0xFE042EEE, 0x8CD501CF, 0x01C66A01, 0x20010000, 
0xCFFE02E1, 0x01CDDD01, 0x0001C66A, 0xA3410100, 0x01A88B01, 0xC5012EEE, 0xE120012B, 0x01099C01, 0xDD01CFFE, 0xE12001CD, 0x01099C01, 0xD5016EF6, 0xA341018C, 0x01000011, 0xC501099C, 0x477B012B, 
0x0100000C, 0x6A04E120, 0xE12001C6, 0x0100002E, 0xFE01C66A, 0x8CD501CF, 0x09445A01, 0x6A010000, 0xCFFE04C6, 0x02099C01, 0xDD01CFFE, 0x099C01CD, 0x04A34101, 0xAC010000, 0xCFFE056A, 0x016EF601, 
0x0002099C, 0xC66A0100, 0x02CFFE02, 0x9C016EF6, 0x00006409, 0x03099C01, 0x8B01CFFE, 0x445A01A8, 0x08E12001, 0xAC010000, 0xCFFE026A, 0x016EF601, 0x2001CABC, 0x000003E1, 0x02C66A01, 0xD501CFFE, 
0xA341018C, 0x01000066, 0xFE018CD5, 0x6EF601CF, 0x14A34101, 0xC5010000, 0x477B012B, 0x01000068, 0xBC01E120, 0x445A01CA, 0xFF0000FF, 0x00FF0000, 0x0000FE00
};
//
#endif
