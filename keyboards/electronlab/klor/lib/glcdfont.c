/*
Copyright 2024 ElectronLab

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "progmem.h"

static const unsigned char PROGMEM font[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3E, 0x5B, 0x4F, 0x5B, 0x3E, 0x00,
    0x3E, 0x6B, 0x4F, 0x6B, 0x3E, 0x00,
    0x1C, 0x3E, 0x7C, 0x3E, 0x1C, 0x00,
    0x18, 0x3C, 0x7E, 0x3C, 0x18, 0x00,
    0x1C, 0x57, 0x7D, 0x57, 0x1C, 0x00,
    0x1C, 0x5E, 0x7F, 0x5E, 0x1C, 0x00,
    0x00, 0x18, 0x3C, 0x18, 0x00, 0x00,
    0xFF, 0xE7, 0xC3, 0xE7, 0xFF, 0x00,
    0x00, 0x18, 0x24, 0x18, 0x00, 0x00,
    0xFF, 0xE7, 0xDB, 0xE7, 0xFF, 0x00,
    0x30, 0x48, 0x3A, 0x06, 0x0E, 0x00,
    0x26, 0x29, 0x79, 0x29, 0x26, 0x00,
    0x40, 0x7F, 0x05, 0x05, 0x07, 0x00,
    0x40, 0x7F, 0x05, 0x25, 0x3F, 0x00,
    0x5A, 0x3C, 0xE7, 0x3C, 0x5A, 0x00,
    0x7F, 0x3E, 0x1C, 0x1C, 0x08, 0x00,
    0x08, 0x1C, 0x1C, 0x3E, 0x7F, 0x00,
    0x14, 0x22, 0x7F, 0x22, 0x14, 0x00,
    0x5F, 0x5F, 0x00, 0x5F, 0x5F, 0x00,
    0x06, 0x09, 0x7F, 0x01, 0x7F, 0x00,
    0x00, 0x66, 0x89, 0x95, 0x6A, 0x00,
    0x60, 0x60, 0x60, 0x60, 0x60, 0x00,
    0x94, 0xB6, 0xFF, 0xB6, 0x94, 0x00,
    0x08, 0x0C, 0x7E, 0x0C, 0x08, 0x00,
    0x10, 0x30, 0x7E, 0x30, 0x10, 0x00,
    0x08, 0x08, 0x3E, 0x1C, 0x08, 0x00,
    0x08, 0x1C, 0x3E, 0x08, 0x08, 0x00,
    0x1E, 0x10, 0x10, 0x10, 0x10, 0x00,
    0x0C, 0x1E, 0x0C, 0x1E, 0x0C, 0x00,
    0x30, 0x38, 0x3E, 0x38, 0x30, 0x00,
    0x06, 0x0E, 0x3E, 0x0E, 0x06, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x5F, 0x00, 0x00, 0x00,
    0x00, 0x07, 0x00, 0x07, 0x00, 0x00,
    0x14, 0x3E, 0x14, 0x3E, 0x14, 0x00,
    0x2E, 0x2A, 0x7F, 0x2A, 0x3A, 0x00,
    0x20, 0x12, 0x08, 0x24, 0x02, 0x00,
    0x37, 0x49, 0x49, 0x37, 0x50, 0x00,
    0x00, 0x08, 0x07, 0x03, 0x00, 0x00,
    0x00, 0x1C, 0x22, 0x41, 0x00, 0x00,
    0x00, 0x41, 0x22, 0x1C, 0x00, 0x00,
    0x2A, 0x1C, 0x7F, 0x1C, 0x2A, 0x00,
    0x08, 0x08, 0x3E, 0x08, 0x08, 0x00,
    0x00, 0x80, 0x70, 0x30, 0x00, 0x00,
    0x08, 0x08, 0x08, 0x08, 0x08, 0x00,
    0x00, 0x00, 0x60, 0x60, 0x00, 0x00,
    0x20, 0x10, 0x08, 0x04, 0x02, 0x00,
    0x7F, 0x51, 0x49, 0x45, 0x7F, 0x00,
    0x08, 0x04, 0x02, 0x7F, 0x00, 0x00,
    0x71, 0x49, 0x49, 0x49, 0x4F, 0x00,
    0x41, 0x41, 0x49, 0x49, 0x77, 0x00,
    0x0F, 0x10, 0x10, 0x10, 0x7F, 0x00,
    0x4F, 0x49, 0x49, 0x49, 0x71, 0x00,
    0x7E, 0x49, 0x49, 0x49, 0x70, 0x00,
    0x01, 0x01, 0x71, 0x09, 0x07, 0x00,
    0x77, 0x49, 0x49, 0x49, 0x77, 0x00,
    0x07, 0x49, 0x49, 0x49, 0x3F, 0x00,
    0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
    0x00, 0x40, 0x34, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x14, 0x22, 0x41, 0x00,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x00,
    0x00, 0x41, 0x22, 0x14, 0x08, 0x00,
    0x01, 0x01, 0x59, 0x09, 0x0F, 0x00,
    0x7F, 0x41, 0x5D, 0x59, 0x4F, 0x00,
    0x7F, 0x09, 0x09, 0x09, 0x7F, 0x00,
    0x7F, 0x49, 0x49, 0x49, 0x76, 0x00,
    0x7F, 0x41, 0x41, 0x41, 0x41, 0x00,
    0x7F, 0x41, 0x41, 0x41, 0x7E, 0x00,
    0x7F, 0x49, 0x49, 0x49, 0x49, 0x00,
    0x7F, 0x09, 0x09, 0x09, 0x09, 0x00,
    0x7F, 0x41, 0x41, 0x49, 0x7B, 0x00,
    0x7F, 0x08, 0x08, 0x08, 0x7F, 0x00,
    0x00, 0x00, 0x7F, 0x00, 0x00, 0x00,
    0x70, 0x40, 0x40, 0x40, 0x7F, 0x00,
    0x7F, 0x08, 0x08, 0x08, 0x77, 0x00,
    0x7F, 0x40, 0x40, 0x40, 0x40, 0x00,
    0x7F, 0x01, 0x1F, 0x01, 0x7F, 0x00,
    0x7F, 0x04, 0x08, 0x10, 0x7F, 0x00,
    0x7F, 0x41, 0x41, 0x41, 0x7F, 0x00,
    0x7F, 0x09, 0x09, 0x09, 0x0F, 0x00,
    0x7F, 0x41, 0x71, 0x41, 0x7F, 0x00,
    0x7F, 0x09, 0x09, 0x19, 0x6F, 0x00,
    0x47, 0x49, 0x49, 0x49, 0x79, 0x00,
    0x01, 0x01, 0x7F, 0x01, 0x01, 0x00,
    0x7F, 0x40, 0x40, 0x40, 0x7F, 0x00,
    0x1F, 0x20, 0x40, 0x20, 0x1F, 0x00,
    0x7F, 0x40, 0x7F, 0x40, 0x7F, 0x00,
    0x77, 0x08, 0x08, 0x08, 0x77, 0x00,
    0x4F, 0x48, 0x48, 0x48, 0x7F, 0x00,
    0x61, 0x51, 0x49, 0x45, 0x43, 0x00,
    0x00, 0x7F, 0x41, 0x41, 0x00, 0x00,
    0x02, 0x04, 0x08, 0x10, 0x20, 0x00,
    0x00, 0x41, 0x41, 0x7F, 0x00, 0x00,
    0x04, 0x02, 0x01, 0x02, 0x04, 0x00,
    0x40, 0x40, 0x40, 0x40, 0x40, 0x00,
    0x00, 0x00, 0x07, 0x08, 0x00, 0x00,
    0x60, 0x54, 0x54, 0x54, 0x7C, 0x00,
    0x7F, 0x44, 0x44, 0x44, 0x78, 0x00,
    0x7C, 0x44, 0x44, 0x44, 0x44, 0x00,
    0x78, 0x44, 0x44, 0x44, 0x7F, 0x00,
    0x7C, 0x54, 0x54, 0x54, 0x5C, 0x00,
    0x08, 0x7F, 0x09, 0x09, 0x09, 0x00,
    0x38, 0xA4, 0xA4, 0xA4, 0xFC, 0x00,
    0x7F, 0x04, 0x04, 0x04, 0x78, 0x00,
    0x00, 0x00, 0x7D, 0x00, 0x00, 0x00,
    0x70, 0x40, 0x40, 0x7D, 0x00, 0x00,
    0x7F, 0x08, 0x08, 0x08, 0x76, 0x00,
    0x00, 0x00, 0x7F, 0x40, 0x00, 0x00,
    0x7C, 0x04, 0x7C, 0x04, 0x7C, 0x00,
    0x7C, 0x04, 0x04, 0x04, 0x78, 0x00,
    0x7C, 0x44, 0x44, 0x44, 0x7C, 0x00,
    0xFC, 0x24, 0x24, 0x24, 0x38, 0x00,
    0x38, 0x24, 0x24, 0x24, 0xFC, 0x00,
    0x7C, 0x04, 0x04, 0x04, 0x04, 0x00,
    0x5C, 0x54, 0x54, 0x54, 0x74, 0x00,
    0x04, 0x04, 0x7F, 0x04, 0x04, 0x00,
    0x7C, 0x40, 0x40, 0x40, 0x7C, 0x00,
    0x1C, 0x20, 0x40, 0x20, 0x1C, 0x00,
    0x7C, 0x40, 0x7C, 0x40, 0x7C, 0x00,
    0x6C, 0x10, 0x10, 0x10, 0x6C, 0x00,
    0xBC, 0xA0, 0xA0, 0xA0, 0xFC, 0x00,
    0x44, 0x64, 0x54, 0x4C, 0x44, 0x00,
    0x00, 0x08, 0x36, 0x41, 0x00, 0x00,
    0x00, 0x00, 0x77, 0x00, 0x00, 0x00,
    0x00, 0x41, 0x36, 0x08, 0x00, 0x00,
    0x02, 0x01, 0x02, 0x04, 0x02, 0x00,
    0x3C, 0x26, 0x23, 0x26, 0x3C, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7E, 0xF8,
    0xF0, 0xFE, 0xFE, 0x9E, 0xCE, 0xCE,
    0x9E, 0xFE, 0xFC, 0xFC, 0xFC, 0x9D,
    0xCD, 0xCD, 0x9D, 0xFF, 0xFE, 0xF0,
    0xF8, 0x7E, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xE0, 0x10, 0x08, 0x04, 0x02, 0x02,
    0x02, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x02, 0x02, 0x02, 0x04, 0x08,
    0x10, 0xE0, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0xFF,
    0x7F, 0x51, 0x55, 0x55, 0x45, 0x7F,
    0x41, 0x5F, 0x5F, 0x5F, 0x7F, 0x00,
    0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F,
    0x41, 0x5F, 0x5F, 0x5F, 0x7F, 0x00,
    0x7F, 0x41, 0x5D, 0x5D, 0x5D, 0x7F,
    0x41, 0x5F, 0x5F, 0x5F, 0x7F, 0x00,
    0xC0, 0xE0, 0xF0, 0xF0, 0xF0, 0xE0,
    0xE6, 0xF7, 0xF3, 0xF0, 0x60, 0x00,
    0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x00,
    0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x00,
    0xF8, 0x1C, 0xDE, 0x1F, 0xFF, 0xFF,
    0xFF, 0x1F, 0xDE, 0x1C, 0xF8, 0x00,
    0xC0, 0xE2, 0xB4, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xB4, 0xE2, 0xC0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0x0F, 0x3F, 0x7B, 0xF3, 0xE3, 0xC7,
    0xC7, 0x8F, 0x9F, 0x9F, 0xBF, 0xBF,
    0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x0F,
    0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0x00, 0x00, 0xC0, 0x30, 0x0C,
    0x33, 0xC0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xC0, 0x3F, 0x00, 0x00, 0x00,
    0xFF, 0x08, 0x08, 0x08, 0x08, 0x08,
    0x08, 0x38, 0xC8, 0x08, 0x08, 0x0F,
    0x7E, 0x00, 0x00, 0x7F, 0x00, 0x00,
    0x78, 0x00, 0x00, 0x7E, 0x00, 0x00,
    0x24, 0x24, 0x12, 0x12, 0x24, 0x24,
    0x48, 0x48, 0x24, 0x24, 0x12, 0x12,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0F, 0x1F, 0x3F, 0x7F, 0x7F, 0x3F,
    0x3F, 0x7F, 0x7F, 0x38, 0x10, 0x00,
    0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00,
    0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00,
    0x0F, 0x14, 0x21, 0x40, 0x45, 0x41,
    0x45, 0x40, 0x21, 0x14, 0x0F, 0x00,
    0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D,
    0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0x0C, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x0C, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x3F, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x01, 0x02, 0x04, 0x08, 0x10, 0x10,
    0x10, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x10, 0x10, 0x10, 0x08, 0x04,
    0x02, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x0C, 0x30,
    0x40, 0x00, 0x00, 0x40, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x40, 0x00, 0x00,
    0x1C, 0x3E, 0x3E, 0x3E, 0x1C, 0x00,
    0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00,
    0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
