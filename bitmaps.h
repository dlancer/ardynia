#ifndef bitmaps_h
#define bitmaps_h

const uint8_t PROGMEM blob_tiles[] = {
// width, height,
16, 16,
// TILE 00
0x00, 0x00, 0xe0, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0x1f, 0x3f, 0x7f, 0x7f, 0x67, 0x7f, 0x7f, 0x67, 0x7f, 0x3f, 0x1f, 0x00, 0x00, 
// TILE 01
0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x1e, 0xfe, 0xfe, 0x1e, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x7c, 0x7f, 0x7f, 0x7c, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM blob_mask_tiles[] = {
// TILE 00
0x00, 0xe0, 0xf8, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xe0, 0x00, 
0x00, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x00, 
// TILE 01
0x00, 0x00, 0x00, 0x00, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x70, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x70, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM dungeon_tiles[] = {
// width, height,
16, 16,
// TILE 00
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// TILE 01
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// TILE 02
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// TILE 03
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
// TILE 04
0xff, 0xff, 0x0f, 0x0f, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x0f, 0x0f, 0xff, 0xff, 
0xff, 0xff, 0xfc, 0xfc, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xfc, 0xfc, 0xff, 0xff, 
// TILE 05
0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 
0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 
// TILE 06
0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0xc0, 0xc0, 
};

const uint8_t PROGMEM dungeon_mask_tiles[] = {
// TILE 00
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 01
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 02
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 03
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 04
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 05
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 06
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

const uint8_t PROGMEM overworld_tiles[] = {
// width, height,
16, 16,
// TILE 00
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 02
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 03
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
// TILE 04
0x00, 0x00, 0xf0, 0xf0, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf0, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x03, 0x03, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x03, 0x03, 0x00, 0x00, 
// TILE 05
0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
// TILE 06
0xcf, 0xcf, 0xcf, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0xf3, 0xf3, 0xff, 0xff, 0x3f, 0x3f, 
};

const uint8_t PROGMEM overworld_mask_tiles[] = {
// TILE 00
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 01
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 02
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 03
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 04
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 05
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 06
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

const uint8_t PROGMEM overworld_door_tiles[] = {
// width, height,
16, 16,
// TILE 00
0xff, 0x1f, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x1f, 0xff, 
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
};

const uint8_t PROGMEM overworld_door_mask_tiles[] = {
// TILE 00
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

const uint8_t PROGMEM playerWalk_tiles[] = {
// width, height,
16, 16,
// TILE 00
0x00, 0xf8, 0x24, 0x42, 0xf1, 0x81, 0xe1, 0xf1, 0xe1, 0x01, 0x35, 0x19, 0x02, 0x04, 0xf8, 0x00, 
0x00, 0x00, 0x01, 0x3e, 0x60, 0xd9, 0x99, 0x9d, 0x86, 0x86, 0x9a, 0x9c, 0xe0, 0x10, 0x0f, 0x00, 
// TILE 01
0x00, 0xf0, 0x48, 0x84, 0xe2, 0x02, 0xc2, 0xe2, 0xc2, 0x02, 0x6a, 0x32, 0x04, 0x08, 0xf0, 0x00, 
0x00, 0x01, 0x1a, 0xe4, 0x99, 0x83, 0x9b, 0x9b, 0x9d, 0x9c, 0x9c, 0x80, 0x98, 0xd8, 0x27, 0x18, 
// TILE 02
0x00, 0xf0, 0x0c, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x0c, 0xf0, 0x00, 
0x00, 0x07, 0x78, 0x88, 0x90, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0x90, 0x90, 0xc0, 0x33, 0x0c, 0x00, 
// TILE 03
0xf0, 0x08, 0x04, 0x62, 0x81, 0x81, 0x01, 0x81, 0x81, 0x01, 0x81, 0x81, 0x62, 0x04, 0xf8, 0x00, 
0x0f, 0x10, 0x6c, 0x86, 0x91, 0x9b, 0x9a, 0xbb, 0xbb, 0xa2, 0x9b, 0x99, 0xee, 0x10, 0x0f, 0x00, 
};

const uint8_t PROGMEM playerWalk_mask_tiles[] = {
// TILE 00
0x00, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0x00, 
0x00, 0x00, 0x01, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x0f, 0x00, 
// TILE 01
0x00, 0xf0, 0xf8, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf0, 0x00, 
0x00, 0x01, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x18, 
// TILE 02
0x00, 0xf0, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf0, 0x00, 
0x00, 0x07, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0c, 0x00, 
// TILE 03
0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0x00, 
0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x0f, 0x00, 
};

const uint8_t PROGMEM sword_tiles[] = {
// width, height,
16, 16,
// TILE 00
0x00, 0x00, 0x3f, 0xf8, 0xe0, 0x80, 0x00, 0x80, 0xc0, 0xe0, 0x70, 0x3a, 0x16, 0x0e, 0x1c, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0d, 0x0e, 0x07, 0x0b, 0x1d, 0x18, 0x38, 0x30, 0x30, 0x20, 0x20, 0x20, 
// TILE 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xee, 0xee, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// TILE 02
0x00, 0x00, 0x00, 0x00, 0xb0, 0x70, 0xe0, 0xd0, 0xb8, 0x18, 0x1c, 0x0c, 0x0c, 0x04, 0x04, 0x04, 
0x00, 0x00, 0xfc, 0x1f, 0x07, 0x01, 0x00, 0x01, 0x03, 0x07, 0x0e, 0x5c, 0x68, 0x70, 0x38, 0x00, 
// TILE 03
0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0xc0, 0xc0, 0x80, 0x00, 
0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x03, 0x03, 0x01, 0x00, 
// TILE 04
0x04, 0x04, 0x04, 0x0c, 0x0c, 0x1c, 0x18, 0xb8, 0xd0, 0xe0, 0x70, 0xb0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x38, 0x70, 0x68, 0x5c, 0x0e, 0x07, 0x03, 0x01, 0x00, 0x01, 0x07, 0x1f, 0xfc, 0x00, 0x00, 
// TILE 05
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x77, 0x77, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// TILE 06
0x00, 0x1c, 0x0e, 0x16, 0x3a, 0x70, 0xe0, 0xc0, 0x80, 0x00, 0x80, 0xe0, 0xf8, 0x3f, 0x00, 0x00, 
0x20, 0x20, 0x20, 0x30, 0x30, 0x38, 0x18, 0x1d, 0x0b, 0x07, 0x0e, 0x0d, 0x00, 0x00, 0x00, 0x00, 
// TILE 07
0x00, 0x80, 0xc0, 0xc0, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 
0x00, 0x01, 0x03, 0x03, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
};

const uint8_t PROGMEM sword_mask_tiles[] = {
// TILE 00
0x00, 0x3f, 0xff, 0xff, 0xf8, 0xe0, 0x80, 0xc0, 0xe0, 0xf0, 0xfa, 0x7f, 0x3f, 0x1f, 0x3f, 0x1e, 
0x00, 0x00, 0x00, 0x0d, 0x1f, 0x1f, 0x0f, 0x1f, 0x3f, 0x3d, 0x7c, 0x78, 0x78, 0x70, 0x70, 0x70, 
// TILE 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 0xff, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x7f, 0x7f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// TILE 02
0x00, 0x00, 0x00, 0xb0, 0xf8, 0xf8, 0xf0, 0xf8, 0xfc, 0xbc, 0x3e, 0x1e, 0x1e, 0x0e, 0x0e, 0x0e, 
0x00, 0xfc, 0xff, 0xff, 0x1f, 0x07, 0x01, 0x03, 0x07, 0x0f, 0x5f, 0xfe, 0xfc, 0xf8, 0xfc, 0x78, 
// TILE 03
0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 
0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x07, 0x07, 0x03, 0x03, 
// TILE 04
0x0e, 0x0e, 0x0e, 0x1e, 0x1e, 0x3e, 0xbc, 0xfc, 0xf8, 0xf0, 0xf8, 0xf8, 0xb0, 0x00, 0x00, 0x00, 
0x78, 0xfc, 0xf8, 0xfc, 0xfe, 0x5f, 0x0f, 0x07, 0x03, 0x01, 0x07, 0x1f, 0xff, 0xff, 0xfc, 0x00, 
// TILE 05
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfe, 0xfe, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xff, 0xff, 0xff, 0xff, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 
// TILE 06
0x1e, 0x3f, 0x1f, 0x3f, 0x7f, 0xfa, 0xf0, 0xe0, 0xc0, 0x80, 0xe0, 0xf8, 0xff, 0xff, 0x3f, 0x00, 
0x70, 0x70, 0x70, 0x78, 0x78, 0x7c, 0x3d, 0x3f, 0x1f, 0x0f, 0x1f, 0x1f, 0x0d, 0x00, 0x00, 0x00, 
// TILE 07
0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 
0x03, 0x03, 0x07, 0x07, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 
};

const uint8_t PROGMEM weaponsAndItemIcons_tiles[] = {
// width, height,
16, 16,
// TILE 00
0x00, 0xfc, 0x02, 0x02, 0x02, 0x02, 0xc2, 0xda, 0xe2, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfc, 0x00, 
0x00, 0x3f, 0x40, 0x48, 0x58, 0x58, 0x5f, 0x58, 0x5f, 0x58, 0x5c, 0x52, 0x4c, 0x40, 0x3f, 0x00, 
// TILE 01
0x00, 0xfc, 0x02, 0x02, 0x82, 0x02, 0x02, 0x82, 0xc2, 0xe2, 0x72, 0x3a, 0x1a, 0x02, 0xfc, 0x00, 
0x00, 0x3f, 0x40, 0x48, 0x54, 0x4b, 0x45, 0x47, 0x49, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3f, 0x00, 
// TILE 02
0x00, 0xfc, 0x02, 0x02, 0x02, 0x82, 0xc2, 0xb2, 0xaa, 0x4a, 0x8a, 0x12, 0x02, 0x02, 0xfc, 0x00, 
0x00, 0x3f, 0x40, 0x40, 0x47, 0x48, 0x50, 0x57, 0x5f, 0x5f, 0x4f, 0x47, 0x40, 0x40, 0x3f, 0x00, 
// TILE 03
0x00, 0xfc, 0x02, 0x02, 0x82, 0x4a, 0x3a, 0x0a, 0x0a, 0x3a, 0x4a, 0x82, 0x02, 0x02, 0xfc, 0x00, 
0x00, 0x3f, 0x40, 0x40, 0x4f, 0x5f, 0x5d, 0x57, 0x5f, 0x5b, 0x5f, 0x4f, 0x40, 0x40, 0x3f, 0x00, 
};

const uint8_t PROGMEM weaponsAndItemIcons_mask_tiles[] = {
// TILE 00
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 01
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 02
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
// TILE 03
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

#endif