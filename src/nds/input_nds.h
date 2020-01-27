#ifndef _INPUT_NDS_H_
#define _INPUT_NDS_H_

#include <nds.h>
#include "akey.h"

bool NDS_IsControlPressed(void);
u8 NDS_GetKbdOverlayId(void);

typedef struct
{
	u8 x, y, w, h;
	s16 keycode;
	u8 flags;
} touch_area_t;

#define TA_FLAG_SLANTED 1
#define TA_FLAG_PRESSED 2

#define KBD_OVERLAY_NORMAL 0
#define KBD_OVERLAY_5200 1

#endif /* _INPUT_NDS_H */
