// $Id: glcd_font_normal.c 43 2008-09-30 23:30:38Z tk $
// converted with 'convpix_c.pl glcd_font_normal.xpm'

#include <mios32.h>

const u8 GLCD_FONT_NORMAL[] = {
6, 1*8, 0, 6, // width, height, X0 offset, char offset
0x00,0x80,0x80,0x80,0x80,0x80,0x00,0xc0,0xc0,0xc0,0xc0,0xc0,0x00,0xe0,0xe0,0xe0,
0xe0,0xe0,0x00,0xf0,0xf0,0xf0,0xf0,0xf0,0x00,0xf8,0xf8,0xf8,0xf8,0xf8,0x00,0xfc,
0xfc,0xfc,0xfc,0xfc,0x00,0xfe,0xfe,0xfe,0xfe,0xfe,0x00,0xff,0xff,0xff,0xff,0xff,
0x00,0x18,0x3c,0x7e,0xff,0x00,0x00,0xff,0x7e,0x3c,0x18,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4f,0x00,0x00,0x00,0x00,0x07,0x00,
0x07,0x00,0x00,0x14,0x7f,0x14,0x7f,0x14,0x00,0x24,0x2a,0x7f,0x2a,0x12,0x00,0x23,
0x13,0x08,0x64,0x62,0x00,0x36,0x49,0x55,0x22,0x50,0x00,0x00,0x05,0x03,0x00,0x00,
0x00,0x00,0x1c,0x22,0x41,0x00,0x00,0x00,0x41,0x22,0x1c,0x00,0x00,0x14,0x08,0x3e,
0x08,0x14,0x00,0x08,0x08,0x3e,0x08,0x08,0x00,0x00,0x00,0x50,0x30,0x00,0x00,0x08,
0x08,0x08,0x08,0x08,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x20,0x10,0x08,0x04,0x02,
0x00,0x3e,0x51,0x49,0x45,0x3e,0x00,0x00,0x42,0x7f,0x40,0x00,0x00,0x42,0x61,0x51,
0x49,0x46,0x00,0x21,0x41,0x45,0x4b,0x31,0x00,0x18,0x14,0x12,0x7f,0x10,0x00,0x27,
0x45,0x45,0x45,0x39,0x00,0x3c,0x4a,0x49,0x49,0x30,0x00,0x01,0x71,0x09,0x05,0x03,
0x00,0x36,0x49,0x49,0x49,0x36,0x00,0x06,0x49,0x49,0x29,0x1e,0x00,0x00,0x00,0x36,
0x36,0x00,0x00,0x00,0x00,0x56,0x36,0x00,0x00,0x08,0x14,0x22,0x41,0x00,0x00,0x14,
0x14,0x14,0x14,0x14,0x00,0x00,0x41,0x22,0x14,0x08,0x00,0x02,0x01,0x51,0x09,0x06,
0x00,0x32,0x49,0x79,0x41,0x3e,0x00,0x7e,0x11,0x11,0x11,0x7e,0x00,0x7f,0x49,0x49,
0x49,0x36,0x00,0x3e,0x41,0x41,0x41,0x22,0x00,0x7f,0x41,0x41,0x22,0x1c,0x00,0x7f,
0x49,0x49,0x49,0x41,0x00,0x7f,0x09,0x09,0x09,0x01,0x00,0x3e,0x41,0x49,0x49,0x7a,
0x00,0x7f,0x08,0x08,0x08,0x7f,0x00,0x00,0x41,0x7f,0x41,0x00,0x00,0x20,0x40,0x41,
0x3f,0x01,0x00,0x7f,0x08,0x14,0x22,0x41,0x00,0x7f,0x40,0x40,0x40,0x40,0x00,0x7f,
0x02,0x0c,0x02,0x7f,0x00,0x7f,0x04,0x08,0x10,0x7f,0x00,0x3e,0x41,0x41,0x41,0x3e,
0x00,0x7f,0x09,0x09,0x09,0x06,0x00,0x3e,0x41,0x51,0x21,0x5e,0x00,0x7f,0x09,0x19,
0x29,0x46,0x00,0x46,0x49,0x49,0x49,0x31,0x00,0x01,0x01,0x7f,0x01,0x01,0x00,0x3f,
0x40,0x40,0x40,0x3f,0x00,0x1f,0x20,0x40,0x20,0x1f,0x00,0x3f,0x40,0x38,0x40,0x3f,
0x00,0x63,0x14,0x08,0x14,0x63,0x00,0x07,0x08,0x70,0x08,0x07,0x00,0x61,0x51,0x49,
0x45,0x43,0x00,0x00,0x7f,0x41,0x41,0x00,0x00,0x02,0x04,0x08,0x10,0x20,0x00,0x00,
0x41,0x41,0x7f,0x00,0x00,0x04,0x02,0x01,0x02,0x04,0x00,0x40,0x40,0x40,0x40,0x40,
0x00,0x00,0x01,0x02,0x04,0x00,0x00,0x20,0x54,0x54,0x54,0x78,0x00,0x7f,0x48,0x44,
0x44,0x38,0x00,0x38,0x44,0x44,0x44,0x20,0x00,0x38,0x44,0x44,0x48,0x7f,0x00,0x38,
0x54,0x54,0x54,0x18,0x00,0x08,0x7e,0x09,0x01,0x02,0x00,0x0c,0x52,0x52,0x52,0x3e,
0x00,0x7f,0x08,0x04,0x04,0x78,0x00,0x00,0x44,0x7d,0x40,0x00,0x00,0x20,0x40,0x44,
0x3d,0x00,0x00,0x7f,0x10,0x28,0x44,0x00,0x00,0x00,0x41,0x7f,0x40,0x00,0x00,0x7c,
0x04,0x18,0x04,0x78,0x00,0x7c,0x08,0x04,0x04,0x78,0x00,0x38,0x44,0x44,0x44,0x38,
0x00,0x7c,0x14,0x14,0x14,0x08,0x00,0x08,0x14,0x14,0x18,0x7c,0x00,0x7c,0x08,0x04,
0x04,0x08,0x00,0x48,0x54,0x54,0x54,0x20,0x00,0x08,0x3e,0x48,0x40,0x20,0x00,0x3c,
0x40,0x40,0x20,0x7c,0x00,0x1c,0x20,0x40,0x20,0x1c,0x00,0x3c,0x40,0x30,0x40,0x3c,
0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x0c,0x50,0x50,0x50,0x3c,0x00,0x44,0x64,0x54,
0x4c,0x44,0x00,0x00,0x08,0x36,0x41,0x00,0x00,0x00,0x00,0x7f,0x00,0x00,0x00,0x00,
0x00,0x41,0x36,0x08,0x00,0x02,0x01,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00
}; 


