
//{{BLOCK(keyboard)

//======================================================================
//
//	keyboard, 256x320@8, 
//	+ palette 32 entries, not compressed
//	+ bitmap lz77 compressed
//	Total size: 64 + 10576 = 10640
//
//	Time-stamp: 2019-09-01, 12:27:46
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.15
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_KEYBOARD_H
#define GRIT_KEYBOARD_H

#define keyboardBitmapLen 10576
extern const unsigned int keyboardBitmap[2644];

#define keyboardPalLen 64
extern const unsigned short keyboardPal[32];

#endif // GRIT_KEYBOARD_H

//}}BLOCK(keyboard)
