#include "../lib/deps.h"

#ifdef _ICONV_CONVERTER_KOI8_R
#include "../lib/endian.h"

_CONST unsigned char _iconv_ccs_table_koi8_r[] = {
	3, 'C', 'S', 'C', 'T', ICONV_ORDER, 8, 1,
	_1l(0x00, 0x00, 0x00, 0x08), _1l(0x00, 0x00, 0x02, 0x08),
	_2s(0x00, 0x00, 0x00, 0x01), _2s(0x00, 0x02, 0x00, 0x03),
	_2s(0x00, 0x04, 0x00, 0x05), _2s(0x00, 0x06, 0x00, 0x07),
	_2s(0x00, 0x08, 0x00, 0x09), _2s(0x00, 0x0A, 0x00, 0x0B),
	_2s(0x00, 0x0C, 0x00, 0x0D), _2s(0x00, 0x0E, 0x00, 0x0F),
	_2s(0x00, 0x10, 0x00, 0x11), _2s(0x00, 0x12, 0x00, 0x13),
	_2s(0x00, 0x14, 0x00, 0x15), _2s(0x00, 0x16, 0x00, 0x17),
	_2s(0x00, 0x18, 0x00, 0x19), _2s(0x00, 0x1A, 0x00, 0x1B),
	_2s(0x00, 0x1C, 0x00, 0x1D), _2s(0x00, 0x1E, 0x00, 0x1F),
	_2s(0x00, 0x20, 0x00, 0x21), _2s(0x00, 0x22, 0x00, 0x23),
	_2s(0x00, 0x24, 0x00, 0x25), _2s(0x00, 0x26, 0x00, 0x27),
	_2s(0x00, 0x28, 0x00, 0x29), _2s(0x00, 0x2A, 0x00, 0x2B),
	_2s(0x00, 0x2C, 0x00, 0x2D), _2s(0x00, 0x2E, 0x00, 0x2F),
	_2s(0x00, 0x30, 0x00, 0x31), _2s(0x00, 0x32, 0x00, 0x33),
	_2s(0x00, 0x34, 0x00, 0x35), _2s(0x00, 0x36, 0x00, 0x37),
	_2s(0x00, 0x38, 0x00, 0x39), _2s(0x00, 0x3A, 0x00, 0x3B),
	_2s(0x00, 0x3C, 0x00, 0x3D), _2s(0x00, 0x3E, 0x00, 0x3F),
	_2s(0x00, 0x40, 0x00, 0x41), _2s(0x00, 0x42, 0x00, 0x43),
	_2s(0x00, 0x44, 0x00, 0x45), _2s(0x00, 0x46, 0x00, 0x47),
	_2s(0x00, 0x48, 0x00, 0x49), _2s(0x00, 0x4A, 0x00, 0x4B),
	_2s(0x00, 0x4C, 0x00, 0x4D), _2s(0x00, 0x4E, 0x00, 0x4F),
	_2s(0x00, 0x50, 0x00, 0x51), _2s(0x00, 0x52, 0x00, 0x53),
	_2s(0x00, 0x54, 0x00, 0x55), _2s(0x00, 0x56, 0x00, 0x57),
	_2s(0x00, 0x58, 0x00, 0x59), _2s(0x00, 0x5A, 0x00, 0x5B),
	_2s(0x00, 0x5C, 0x00, 0x5D), _2s(0x00, 0x5E, 0x00, 0x5F),
	_2s(0x00, 0x60, 0x00, 0x61), _2s(0x00, 0x62, 0x00, 0x63),
	_2s(0x00, 0x64, 0x00, 0x65), _2s(0x00, 0x66, 0x00, 0x67),
	_2s(0x00, 0x68, 0x00, 0x69), _2s(0x00, 0x6A, 0x00, 0x6B),
	_2s(0x00, 0x6C, 0x00, 0x6D), _2s(0x00, 0x6E, 0x00, 0x6F),
	_2s(0x00, 0x70, 0x00, 0x71), _2s(0x00, 0x72, 0x00, 0x73),
	_2s(0x00, 0x74, 0x00, 0x75), _2s(0x00, 0x76, 0x00, 0x77),
	_2s(0x00, 0x78, 0x00, 0x79), _2s(0x00, 0x7A, 0x00, 0x7B),
	_2s(0x00, 0x7C, 0x00, 0x7D), _2s(0x00, 0x7E, 0x00, 0x7F),
	_2s(0x25, 0x00, 0x25, 0x02), _2s(0x25, 0x0C, 0x25, 0x10),
	_2s(0x25, 0x14, 0x25, 0x18), _2s(0x25, 0x1C, 0x25, 0x24),
	_2s(0x25, 0x2C, 0x25, 0x34), _2s(0x25, 0x3C, 0x25, 0x80),
	_2s(0x25, 0x84, 0x25, 0x88), _2s(0x25, 0x8C, 0x25, 0x90),
	_2s(0x25, 0x91, 0x25, 0x92), _2s(0x25, 0x93, 0x23, 0x20),
	_2s(0x25, 0xA0, 0x22, 0x19), _2s(0x22, 0x1A, 0x22, 0x48),
	_2s(0x22, 0x64, 0x22, 0x65), _2s(0x00, 0xA0, 0x23, 0x21),
	_2s(0x00, 0xB0, 0x00, 0xB2), _2s(0x00, 0xB7, 0x00, 0xF7),
	_2s(0x25, 0x50, 0x25, 0x51), _2s(0x25, 0x52, 0x04, 0x51),
	_2s(0x25, 0x53, 0x25, 0x54), _2s(0x25, 0x55, 0x25, 0x56),
	_2s(0x25, 0x57, 0x25, 0x58), _2s(0x25, 0x59, 0x25, 0x5A),
	_2s(0x25, 0x5B, 0x25, 0x5C), _2s(0x25, 0x5D, 0x25, 0x5E),
	_2s(0x25, 0x5F, 0x25, 0x60), _2s(0x25, 0x61, 0x04, 0x01),
	_2s(0x25, 0x62, 0x25, 0x63), _2s(0x25, 0x64, 0x25, 0x65),
	_2s(0x25, 0x66, 0x25, 0x67), _2s(0x25, 0x68, 0x25, 0x69),
	_2s(0x25, 0x6A, 0x25, 0x6B), _2s(0x25, 0x6C, 0x00, 0xA9),
	_2s(0x04, 0x4E, 0x04, 0x30), _2s(0x04, 0x31, 0x04, 0x46),
	_2s(0x04, 0x34, 0x04, 0x35), _2s(0x04, 0x44, 0x04, 0x33),
	_2s(0x04, 0x45, 0x04, 0x38), _2s(0x04, 0x39, 0x04, 0x3A),
	_2s(0x04, 0x3B, 0x04, 0x3C), _2s(0x04, 0x3D, 0x04, 0x3E),
	_2s(0x04, 0x3F, 0x04, 0x4F), _2s(0x04, 0x40, 0x04, 0x41),
	_2s(0x04, 0x42, 0x04, 0x43), _2s(0x04, 0x36, 0x04, 0x32),
	_2s(0x04, 0x4C, 0x04, 0x4B), _2s(0x04, 0x37, 0x04, 0x48),
	_2s(0x04, 0x4D, 0x04, 0x49), _2s(0x04, 0x47, 0x04, 0x4A),
	_2s(0x04, 0x2E, 0x04, 0x10), _2s(0x04, 0x11, 0x04, 0x26),
	_2s(0x04, 0x14, 0x04, 0x15), _2s(0x04, 0x24, 0x04, 0x13),
	_2s(0x04, 0x25, 0x04, 0x18), _2s(0x04, 0x19, 0x04, 0x1A),
	_2s(0x04, 0x1B, 0x04, 0x1C), _2s(0x04, 0x1D, 0x04, 0x1E),
	_2s(0x04, 0x1F, 0x04, 0x2F), _2s(0x04, 0x20, 0x04, 0x21),
	_2s(0x04, 0x22, 0x04, 0x23), _2s(0x04, 0x16, 0x04, 0x12),
	_2s(0x04, 0x2C, 0x04, 0x2B), _2s(0x04, 0x17, 0x04, 0x28),
	_2s(0x04, 0x2D, 0x04, 0x29), _2s(0x04, 0x27, 0x04, 0x2A),
	_1l(0x00, 0x00, 0x04, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x06, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x08, 0x00), _1l(0x00, 0x00, 0x0A, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x0C, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_2s(0x00, 0x00, 0x00, 0x01), _2s(0x00, 0x02, 0x00, 0x03),
	_2s(0x00, 0x04, 0x00, 0x05), _2s(0x00, 0x06, 0x00, 0x07),
	_2s(0x00, 0x08, 0x00, 0x09), _2s(0x00, 0x0A, 0x00, 0x0B),
	_2s(0x00, 0x0C, 0x00, 0x0D), _2s(0x00, 0x0E, 0x00, 0x0F),
	_2s(0x00, 0x10, 0x00, 0x11), _2s(0x00, 0x12, 0x00, 0x13),
	_2s(0x00, 0x14, 0x00, 0x15), _2s(0x00, 0x16, 0x00, 0x17),
	_2s(0x00, 0x18, 0x00, 0x19), _2s(0x00, 0x1A, 0x00, 0x1B),
	_2s(0x00, 0x1C, 0x00, 0x1D), _2s(0x00, 0x1E, 0x00, 0x1F),
	_2s(0x00, 0x20, 0x00, 0x21), _2s(0x00, 0x22, 0x00, 0x23),
	_2s(0x00, 0x24, 0x00, 0x25), _2s(0x00, 0x26, 0x00, 0x27),
	_2s(0x00, 0x28, 0x00, 0x29), _2s(0x00, 0x2A, 0x00, 0x2B),
	_2s(0x00, 0x2C, 0x00, 0x2D), _2s(0x00, 0x2E, 0x00, 0x2F),
	_2s(0x00, 0x30, 0x00, 0x31), _2s(0x00, 0x32, 0x00, 0x33),
	_2s(0x00, 0x34, 0x00, 0x35), _2s(0x00, 0x36, 0x00, 0x37),
	_2s(0x00, 0x38, 0x00, 0x39), _2s(0x00, 0x3A, 0x00, 0x3B),
	_2s(0x00, 0x3C, 0x00, 0x3D), _2s(0x00, 0x3E, 0x00, 0x3F),
	_2s(0x00, 0x40, 0x00, 0x41), _2s(0x00, 0x42, 0x00, 0x43),
	_2s(0x00, 0x44, 0x00, 0x45), _2s(0x00, 0x46, 0x00, 0x47),
	_2s(0x00, 0x48, 0x00, 0x49), _2s(0x00, 0x4A, 0x00, 0x4B),
	_2s(0x00, 0x4C, 0x00, 0x4D), _2s(0x00, 0x4E, 0x00, 0x4F),
	_2s(0x00, 0x50, 0x00, 0x51), _2s(0x00, 0x52, 0x00, 0x53),
	_2s(0x00, 0x54, 0x00, 0x55), _2s(0x00, 0x56, 0x00, 0x57),
	_2s(0x00, 0x58, 0x00, 0x59), _2s(0x00, 0x5A, 0x00, 0x5B),
	_2s(0x00, 0x5C, 0x00, 0x5D), _2s(0x00, 0x5E, 0x00, 0x5F),
	_2s(0x00, 0x60, 0x00, 0x61), _2s(0x00, 0x62, 0x00, 0x63),
	_2s(0x00, 0x64, 0x00, 0x65), _2s(0x00, 0x66, 0x00, 0x67),
	_2s(0x00, 0x68, 0x00, 0x69), _2s(0x00, 0x6A, 0x00, 0x6B),
	_2s(0x00, 0x6C, 0x00, 0x6D), _2s(0x00, 0x6E, 0x00, 0x6F),
	_2s(0x00, 0x70, 0x00, 0x71), _2s(0x00, 0x72, 0x00, 0x73),
	_2s(0x00, 0x74, 0x00, 0x75), _2s(0x00, 0x76, 0x00, 0x77),
	_2s(0x00, 0x78, 0x00, 0x79), _2s(0x00, 0x7A, 0x00, 0x7B),
	_2s(0x00, 0x7C, 0x00, 0x7D), _2s(0x00, 0x7E, 0x00, 0x7F),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x9A, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0x00, 0xBF), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x9C, 0xFF, 0xFE), _2s(0x00, 0x9D, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0x00, 0x9E),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0x00, 0x9F),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0x00, 0xB3), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0xE1, 0x00, 0xE2), _2s(0x00, 0xF7, 0x00, 0xE7),
	_2s(0x00, 0xE4, 0x00, 0xE5), _2s(0x00, 0xF6, 0x00, 0xFA),
	_2s(0x00, 0xE9, 0x00, 0xEA), _2s(0x00, 0xEB, 0x00, 0xEC),
	_2s(0x00, 0xED, 0x00, 0xEE), _2s(0x00, 0xEF, 0x00, 0xF0),
	_2s(0x00, 0xF2, 0x00, 0xF3), _2s(0x00, 0xF4, 0x00, 0xF5),
	_2s(0x00, 0xE6, 0x00, 0xE8), _2s(0x00, 0xE3, 0x00, 0xFE),
	_2s(0x00, 0xFB, 0x00, 0xFD), _2s(0x00, 0xFF, 0x00, 0xF9),
	_2s(0x00, 0xF8, 0x00, 0xFC), _2s(0x00, 0xE0, 0x00, 0xF1),
	_2s(0x00, 0xC1, 0x00, 0xC2), _2s(0x00, 0xD7, 0x00, 0xC7),
	_2s(0x00, 0xC4, 0x00, 0xC5), _2s(0x00, 0xD6, 0x00, 0xDA),
	_2s(0x00, 0xC9, 0x00, 0xCA), _2s(0x00, 0xCB, 0x00, 0xCC),
	_2s(0x00, 0xCD, 0x00, 0xCE), _2s(0x00, 0xCF, 0x00, 0xD0),
	_2s(0x00, 0xD2, 0x00, 0xD3), _2s(0x00, 0xD4, 0x00, 0xD5),
	_2s(0x00, 0xC6, 0x00, 0xC8), _2s(0x00, 0xC3, 0x00, 0xDE),
	_2s(0x00, 0xDB, 0x00, 0xDD), _2s(0x00, 0xDF, 0x00, 0xD9),
	_2s(0x00, 0xD8, 0x00, 0xDC), _2s(0x00, 0xC0, 0x00, 0xD1),
	_2s(0xFF, 0xFE, 0x00, 0xA3), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0x00, 0x95), _2s(0x00, 0x96, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x97, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x98, 0x00, 0x99), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x93, 0x00, 0x9B), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x80, 0xFF, 0xFE), _2s(0x00, 0x81, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x82, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x83, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x84, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x85, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x86, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x87, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x88, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x89, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x8A, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0xA0, 0x00, 0xA1), _2s(0x00, 0xA2, 0x00, 0xA4),
	_2s(0x00, 0xA5, 0x00, 0xA6), _2s(0x00, 0xA7, 0x00, 0xA8),
	_2s(0x00, 0xA9, 0x00, 0xAA), _2s(0x00, 0xAB, 0x00, 0xAC),
	_2s(0x00, 0xAD, 0x00, 0xAE), _2s(0x00, 0xAF, 0x00, 0xB0),
	_2s(0x00, 0xB1, 0x00, 0xB2), _2s(0x00, 0xB4, 0x00, 0xB5),
	_2s(0x00, 0xB6, 0x00, 0xB7), _2s(0x00, 0xB8, 0x00, 0xB9),
	_2s(0x00, 0xBA, 0x00, 0xBB), _2s(0x00, 0xBC, 0x00, 0xBD),
	_2s(0x00, 0xBE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x8B, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x8C, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x8D, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x8E, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x8F, 0x00, 0x90), _2s(0x00, 0x91, 0x00, 0x92),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0x00, 0x94, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
};

#endif /* #ifdef _ICONV_CONVERTER_KOI8_R */

