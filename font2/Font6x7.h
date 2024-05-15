

/*
 *
 * Font6x7
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Font6x7.h
 * Date                : 06.05.2018
 * Font size in bytes  : 4246
 * Font width          : 6
 * Font height         : -8
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef FONT6X7_H
#define FONT6X7_H

#define FONT6X7_WIDTH 6
#define FONT6X7_HEIGHT -8

const static uint8_t Font6x7[] PROGMEM = {
    0x10, 0x96, // size
    0x06, // width
    0x08, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x06, 0x06, 0x03, 0x06, 0x06, 0x06, 0x06, 0x02, 0x03, 0x03, 
    0x03, 0x05, 0x02, 0x05, 0x02, 0x06, 0x06, 0x06, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x04, 0x02, 0x04, 0x04, 
    0x04, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
    0x06, 0x04, 0x07, 0x07, 0x06, 0x07, 0x07, 0x06, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x06, 0x07, 0x09, 0x07, 0x06, 0x06, 0x04, 
    0x06, 0x04, 0x05, 0x05, 0x02, 0x06, 0x06, 0x06, 0x06, 0x06, 
    0x05, 0x06, 0x06, 0x04, 0x06, 0x05, 0x04, 0x08, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x06, 0x05, 0x06, 0x06, 0x07, 0x05, 0x06, 
    0x06, 0x04, 0x02, 0x04, 0x06, 0x02, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
    0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00, // 33
    0x03, 0x00, 0x03, // 34
    0x14, 0x14, 0x7F, 0x14, 0x7F, 0x14, // 35
    0x24, 0x2A, 0x7F, 0x7F, 0x2A, 0x12, // 36
    0x43, 0x23, 0x10, 0x08, 0x64, 0x62, // 37
    0x2E, 0x51, 0x29, 0x56, 0x48, 0x48, // 38
    0x02, 0x01, // 39
    0x1C, 0x36, 0x41, // 40
    0x41, 0x63, 0x3E, // 41
    0x05, 0x02, 0x05, // 42
    0x08, 0x08, 0x3E, 0x08, 0x08, // 43
    0x50, 0x30, // 44
    0x08, 0x08, 0x08, 0x08, 0x08, // 45
    0x60, 0x60, // 46
    0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, // 47
    0x3E, 0x7F, 0x51, 0x49, 0x7F, 0x3E, // 48
    0x41, 0x41, 0x7F, 0x7F, 0x40, 0x40, // 49
    0x71, 0x79, 0x49, 0x49, 0x4F, 0x46, // 50
    0x41, 0x49, 0x49, 0x49, 0x7F, 0x36, // 51
    0x38, 0x3C, 0x22, 0x7F, 0x7F, 0x20, // 52
    0x4F, 0x4F, 0x45, 0x45, 0x7D, 0x39, // 53
    0x3E, 0x7F, 0x45, 0x45, 0x7D, 0x38, // 54
    0x01, 0x01, 0x71, 0x79, 0x0D, 0x07, // 55
    0x36, 0x7F, 0x49, 0x49, 0x7F, 0x36, // 56
    0x0E, 0x5F, 0x51, 0x51, 0x7F, 0x3E, // 57
    0x00, 0x36, 0x36, 0x00, // 58
    0x56, 0x36, // 59
    0x08, 0x14, 0x22, 0x41, // 60
    0x14, 0x14, 0x14, 0x14, // 61
    0x41, 0x22, 0x14, 0x08, // 62
    0x02, 0x03, 0x51, 0x59, 0x0F, 0x06, // 63
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 64
    0x7E, 0x7F, 0x09, 0x09, 0x7F, 0x7E, // 65
    0x7F, 0x7F, 0x49, 0x49, 0x7F, 0x36, // 66
    0x3E, 0x7F, 0x41, 0x41, 0x63, 0x22, // 67
    0x7F, 0x7F, 0x41, 0x41, 0x3E, 0x1C, // 68
    0x7F, 0x7F, 0x49, 0x49, 0x49, 0x41, // 69
    0x7F, 0x7F, 0x09, 0x09, 0x09, 0x01, // 70
    0x3E, 0x7F, 0x41, 0x49, 0x7B, 0x3A, // 71
    0x7F, 0x7F, 0x08, 0x08, 0x7F, 0x7F, // 72
    0x41, 0x7F, 0x7F, 0x41, // 73
    0x20, 0x60, 0x40, 0x41, 0x7F, 0x3F, 0x01, // 74
    0x7F, 0x7F, 0x08, 0x1C, 0x36, 0x63, 0x41, // 75
    0x7F, 0x7F, 0x40, 0x40, 0x40, 0x40, // 76
    0x7F, 0x7F, 0x06, 0x1C, 0x06, 0x7F, 0x7F, // 77
    0x7F, 0x7F, 0x06, 0x1C, 0x30, 0x7F, 0x7F, // 78
    0x3E, 0x7F, 0x41, 0x41, 0x7F, 0x3E, // 79
    0x7F, 0x7F, 0x11, 0x11, 0x1F, 0x0E, // 80
    0x3E, 0x7F, 0x41, 0x51, 0x2F, 0x5E, // 81
    0x7F, 0x7F, 0x09, 0x19, 0x7F, 0x76, // 82
    0x26, 0x6F, 0x49, 0x49, 0x7B, 0x32, // 83
    0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, // 84
    0x3F, 0x7F, 0x40, 0x40, 0x7F, 0x3F, // 85
    0x0F, 0x1F, 0x30, 0x60, 0x30, 0x1F, 0x0F, // 86
    0x1F, 0x3F, 0x60, 0x30, 0x18, 0x30, 0x60, 0x3F, 0x1F, // 87
    0x43, 0x66, 0x3C, 0x1C, 0x3C, 0x66, 0x43, // 88
    0x27, 0x6F, 0x48, 0x48, 0x7F, 0x3F, // 89
    0x61, 0x71, 0x59, 0x4D, 0x47, 0x43, // 90
    0x7F, 0x7F, 0x41, 0x41, // 91
    0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, // 92
    0x41, 0x41, 0x7F, 0x7F, // 93
    0x04, 0x02, 0x01, 0x02, 0x04, // 94
    0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x01, 0x02, // 96
    0x20, 0x54, 0x54, 0x54, 0x7C, 0x78, // 97
    0x7F, 0x7F, 0x44, 0x44, 0x7C, 0x38, // 98
    0x38, 0x7C, 0x44, 0x44, 0x6C, 0x28, // 99
    0x38, 0x7C, 0x44, 0x44, 0x7F, 0x7F, // 100
    0x38, 0x7C, 0x54, 0x54, 0x5C, 0x18, // 101
    0x04, 0x7E, 0x7F, 0x05, 0x05, // 102
    0x08, 0x9C, 0x94, 0x94, 0xFC, 0x7C, // 103
    0x7F, 0x7F, 0x08, 0x04, 0x7C, 0x78, // 104
    0x44, 0x7D, 0x7D, 0x40, // 105
    0x40, 0x80, 0x80, 0x84, 0xFD, 0x7D, // 106
    0x7F, 0x7F, 0x38, 0x6C, 0x44, // 107
    0x41, 0x7F, 0x7F, 0x40, // 108
    0x7C, 0x7C, 0x04, 0x7C, 0x78, 0x04, 0x7C, 0x78, // 109
    0x7C, 0x7C, 0x08, 0x04, 0x7C, 0x78, // 110
    0x38, 0x7C, 0x44, 0x44, 0x7C, 0x38, // 111
    0xFC, 0xFC, 0x14, 0x14, 0x1C, 0x08, // 112
    0x08, 0x14, 0x14, 0xFC, 0xFC, 0x80, // 113
    0x7C, 0x7C, 0x04, 0x04, 0x0C, 0x08, // 114
    0x08, 0x5C, 0x54, 0x54, 0x74, 0x20, // 115
    0x04, 0x3F, 0x7F, 0x44, 0x44, // 116
    0x3C, 0x7C, 0x40, 0x20, 0x7C, 0x7C, // 117
    0x1C, 0x3C, 0x60, 0x60, 0x3C, 0x1C, // 118
    0x3C, 0x7C, 0x40, 0x30, 0x40, 0x7C, 0x3C, // 119
    0x44, 0x28, 0x10, 0x28, 0x44, // 120
    0x4C, 0xDC, 0x90, 0x90, 0xFC, 0x7C, // 121
    0x64, 0x64, 0x54, 0x54, 0x4C, 0x4C, // 122
    0x08, 0x36, 0x41, 0x41, // 123
    0x7F, 0x7F, // 124
    0x41, 0x41, 0x36, 0x08, // 125
    0x10, 0x08, 0x08, 0x10, 0x10, 0x08, // 126
    0x00, 0x00 // 127
    
};

#endif
