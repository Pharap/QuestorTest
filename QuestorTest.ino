#include <Arduboy2.h>

const unsigned char PROGMEM questor_plus_mask[] = {
  // width, height,
  6, 8,
  // FRAME 00
  0x10, 0x10, 0xff, 0xff, 0x7d, 0x7f, 
  0x7f, 0x7f, 0xfd, 0xff, 0x10, 0x10, 
  // FRAME 01
  0x10, 0x10, 0x7f, 0x7f, 0xfd, 0xff, 
  0x7f, 0x7f, 0xfd, 0xff, 0x10, 0x10, 
  // FRAME 02
  0x10, 0x10, 0xff, 0xff, 0x7d, 0x7f, 
  0xff, 0xff, 0x7d, 0x7f, 0x10, 0x10, 
  // FRAME 03
  0x08, 0x08, 0x7f, 0x7f, 0xfd, 0xff, 
  0xff, 0xff, 0x7d, 0x7f, 0x08, 0x08,
};

//
// Bones sprite copyright of https://twitter.com/Hotpotatobuns
// Please ask permission before using
//

const unsigned char PROGMEM bones_plus_mask[] = {
// width, height,
74, 48,
// FRAME 00
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x83, 0x83, 0xc2, 0xc2, 0xf7, 0xf7, 0xb7, 0xf7, 0x16, 0xf6, 0xb4, 0xf4, 0xf0, 0xf0, 0xf1, 0xf1, 0xe2, 0xe2, 0xe3, 0xe3, 0xff, 0xff, 0xfe, 0xfe, 0x34, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0xc0, 0xc0, 0x70, 0x70, 0x20, 0x20, 0x60, 0x60, 0xf0, 0xf0, 0x40, 0x40, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x31, 0x31, 0x23, 0x23, 0x39, 0x39, 0x33, 0x33, 0x39, 0x39, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0xbf, 0xbf, 0xff, 0xff, 0x53, 0x53, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x07, 0x07, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x82, 0x97, 0x97, 0xfe, 0xfe, 0x54, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x08, 0x08, 0xc4, 0xc4, 0x18, 0x18, 0x60, 0x60, 0x08, 0x08, 0xf8, 0xf8, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x32, 0x19, 0x19, 0x3b, 0x3b, 0xd0, 0xd0, 0x80, 0x80, 0x10, 0x10, 0xd0, 0xd0, 0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 0xf8, 0xf8, 0x70, 0x70, 0x60, 0x60, 
0x70, 0x70, 0xe0, 0xe0, 0x70, 0x70, 0x60, 0x60, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0x40, 0x40, 0xc0, 0xc0, 0xc0, 0xc0, 0x92, 0x92, 0xb7, 0xb7, 0x36, 0x36, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x10, 0x10, 0x38, 0x38, 0x22, 0x22, 0x00, 0x00, 0x02, 0x02, 0x04, 0x04, 0x10, 0x10, 0xe7, 0xe7, 0xef, 0xef, 0x9c, 0x9c, 0xbc, 0xbc, 0x38, 0x38, 0xb0, 0xb0, 0x80, 0x80, 0x30, 0x30, 0x60, 0x60, 0x40, 0x40, 0xc0, 0xc0, 0x80, 0x80, 0x21, 0x21, 0x6d, 0x6d, 0x69, 0x69, 0x0b, 0x0b, 0x63, 0x63, 0x00, 0x00, 0x20, 0x20, 0x11, 0x11, 0x0e, 0x0e, 
0x40, 0x40, 0x21, 0x21, 0x1e, 0x1e, 0x80, 0x80, 0x43, 0x43, 0x3c, 0x3c, 0x01, 0x01, 0x43, 0x43, 0x3d, 0x3d, 0x01, 0x01, 0x03, 0x03, 0x01, 0x01, 0xc0, 0xc0, 0x60, 0x60, 0x70, 0x70, 0x09, 0x09, 0x01, 0x01, 0x07, 0x07, 0x04, 0x04, 0xe4, 0xe4, 0xf7, 0xf7, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x1c, 0x1c, 0x07, 0x07, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x02, 0x02, 0x09, 0x09, 0x18, 0x18, 0x10, 0x10, 0x90, 0x90, 0x58, 0x58, 0x7d, 0x7d, 0x03, 0x03, 0x03, 0x03, 0x0e, 0x0e, 0x20, 0x20, 0x60, 0x60, 0x10, 0x10, 0x18, 0x18, 0x18, 0x18, 0x08, 0x08, 0x8c, 0x8c, 0xde, 0xde, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// FRAME 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x83, 0x83, 0xc2, 0xc2, 0xf7, 0xf7, 0xb7, 0xf7, 0x16, 0xf6, 0xb4, 0xf4, 0xf0, 0xf0, 0xf1, 0xf1, 0xe2, 0xe2, 0xe3, 0xe3, 0xff, 0xff, 0xfe, 0xfe, 0x34, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0xc0, 0xc0, 0x70, 0x70, 0x20, 0x20, 0x60, 0x60, 0xf0, 0xf0, 0x40, 0x40, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x31, 0x31, 0x23, 0x23, 0x39, 0x39, 0x33, 0x33, 0x39, 0x39, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0xbf, 0xbf, 0xff, 0xff, 0x53, 0x53, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x07, 0x07, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x82, 0x97, 0x97, 0xfe, 0xfe, 0x54, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x32, 0x19, 0x19, 0x3b, 0x3b, 0xd0, 0xd0, 0x80, 0x80, 0x10, 0x10, 0xd0, 0xd0, 0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 0xf8, 0xf8, 0x70, 0x70, 0x60, 0x60, 
0x70, 0x70, 0xe0, 0xe0, 0x70, 0x70, 0x60, 0x60, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0x40, 0x40, 0xc0, 0xc0, 0xc0, 0xc0, 0x92, 0x92, 0xb7, 0xb7, 0x36, 0x36, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x20, 0x20, 0xd0, 0xd0, 0x28, 0x28, 0x20, 0x20, 0x4c, 0x4c, 0xb4, 0xb4, 0xc4, 0xc4, 0xb8, 0xb8, 0x60, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc9, 0xc9, 0x7d, 0x7d, 0x39, 0x39, 0x0b, 0x0b, 0x63, 0x63, 0x00, 0x00, 0x20, 0x20, 0x11, 0x11, 0x0e, 0x0e, 
0x40, 0x40, 0x21, 0x21, 0x1e, 0x1e, 0x80, 0x80, 0x43, 0x43, 0x3c, 0x3c, 0x01, 0x01, 0x43, 0x43, 0x3d, 0x3d, 0x01, 0x01, 0x03, 0x03, 0x01, 0x01, 0xc0, 0xc0, 0x60, 0x60, 0x70, 0x70, 0x09, 0x09, 0x01, 0x01, 0x07, 0x07, 0x04, 0x04, 0xe4, 0xe4, 0xf7, 0xf7, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x09, 0x09, 0x13, 0x13, 0x17, 0x17, 0x1c, 0x1c, 0x1b, 0x1b, 0x17, 0x17, 0x17, 0x17, 0x0f, 0x0f, 0x06, 0x06, 0x00, 0x00, 0x19, 0x19, 0x17, 0x17, 0x06, 0x06, 0x0e, 0x0e, 0x06, 0x06, 0x04, 0x04, 0x02, 0x02, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x03, 0x03, 0x01, 0x01, 0x80, 0x80, 0xc0, 0xc0, 0x1c, 0x1c, 0x07, 0x07, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x02, 0x02, 0x09, 0x09, 0x18, 0x18, 0x10, 0x10, 0x90, 0x90, 0x58, 0x58, 0x7d, 0x7d, 0x03, 0x03, 0x03, 0x03, 0x0e, 0x0e, 0x20, 0x20, 0x60, 0x60, 0x10, 0x10, 0x18, 0x18, 0x18, 0x18, 0x08, 0x08, 0x8c, 0x8c, 0xde, 0xde, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// FRAME 02
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x83, 0x83, 0xc2, 0xc2, 0xf7, 0xf7, 0xb7, 0xf7, 0x16, 0xf6, 0xb4, 0xf4, 0xf0, 0xf0, 0xf1, 0xf1, 0xe2, 0xe2, 0xe3, 0xe3, 0xff, 0xff, 0xfe, 0xfe, 0x34, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x40, 0x40, 0x30, 0x30, 0x60, 0x60, 0x10, 0x10, 0x18, 0x18, 0x10, 0x10, 0x30, 0x30, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x31, 0x31, 0x23, 0x23, 0x39, 0x39, 0x33, 0x33, 0x39, 0x39, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0xbf, 0xbf, 0xff, 0xff, 0x53, 0x53, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0xf2, 0xf2, 0xbe, 0xbe, 0x0f, 0x0f, 0x0b, 0x0b, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x08, 0x08, 0xc4, 0xc4, 0x18, 0x18, 0x60, 0x60, 0x08, 0x08, 0xf8, 0xf8, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x32, 0x19, 0x19, 0x3b, 0x3b, 0xd0, 0xd0, 0x80, 0x80, 0x10, 0x10, 0xd0, 0xd0, 0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 0xf8, 0xf8, 0x70, 0x70, 0x60, 0x60, 
0x70, 0x70, 0xe0, 0xe0, 0x70, 0x70, 0x60, 0x60, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0x40, 0x40, 0xc0, 0xc0, 0xc0, 0xc0, 0x90, 0x90, 0xb5, 0xb5, 0x37, 0x37, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x10, 0x10, 0x38, 0x38, 0x22, 0x22, 0x00, 0x00, 0x02, 0x02, 0x04, 0x04, 0x10, 0x10, 0xe7, 0xe7, 0xef, 0xef, 0x9c, 0x9c, 0xbc, 0xbc, 0x38, 0x38, 0xb0, 0xb0, 0x80, 0x80, 0x30, 0x30, 0x60, 0x60, 0x40, 0x40, 0xc0, 0xc0, 0x80, 0x80, 0x21, 0x21, 0x6d, 0x6d, 0x69, 0x69, 0x0b, 0x0b, 0x63, 0x63, 0x00, 0x00, 0x20, 0x20, 0x11, 0x11, 0x0e, 0x0e, 
0x40, 0x40, 0x21, 0x21, 0x1e, 0x1e, 0x80, 0x80, 0x43, 0x43, 0x3c, 0x3c, 0x01, 0x01, 0x43, 0x43, 0x3d, 0x3d, 0x01, 0x01, 0x03, 0x03, 0x01, 0x01, 0xc0, 0xc0, 0x60, 0x60, 0x70, 0x70, 0x09, 0x09, 0x01, 0x01, 0x07, 0x07, 0x04, 0x04, 0xe4, 0xe4, 0xf7, 0xf7, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x1c, 0x1c, 0x07, 0x07, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x02, 0x02, 0x09, 0x09, 0x18, 0x18, 0x10, 0x10, 0x90, 0x90, 0x58, 0x58, 0x7d, 0x7d, 0x03, 0x03, 0x03, 0x03, 0x0e, 0x0e, 0x20, 0x20, 0x60, 0x60, 0x10, 0x10, 0x18, 0x18, 0x18, 0x18, 0x08, 0x08, 0x8c, 0x8c, 0xde, 0xde, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

Arduboy2 arduboy;

int questorX = 0;
int questorY = 50;
byte questorSpriteNumber = 0;

int bonesX = 30;
int bonesY = 20;
byte bonesSpriteNumber = 0;


void setup()
{
	arduboy.begin();
	arduboy.setFrameRate(60);
}


void loop()
{
	if (!arduboy.nextFrame())
		return;

	if (arduboy.everyXFrames(30))
	{
		questorSpriteNumber++;
		bonesSpriteNumber++;
	}

	if (questorSpriteNumber > 3)
	{
		questorSpriteNumber = 0;  
	}   
  
	if (bonesSpriteNumber > 2)
	{
		bonesSpriteNumber = 0;  
	}
	
	arduboy.clear();

	// Sprite 1
	Sprites::drawPlusMask(questorX, questorY, questor_plus_mask, questorSpriteNumber);
	
	// Sprite 2
	Sprites::drawPlusMask(questorX + 8, questorY, questor_plus_mask, questorSpriteNumber); 

	// Sprite 3
	Sprites::drawPlusMask(bonesX, bonesY, bones_plus_mask, bonesSpriteNumber);

	// Sprite 4
	Sprites::drawPlusMask(bonesX + 16, bonesY, bones_plus_mask, bonesSpriteNumber);

	// Sprite 5
	Sprites::drawPlusMask(bonesX + 32, bonesY, bones_plus_mask, bonesSpriteNumber);
  
	arduboy.display();
}
