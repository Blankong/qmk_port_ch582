#pragma once

#ifdef USB_INDICATOR
#undef USB_INDICATOR
#endif
//#ifdef ESB_INDICATOR
//#undef ESB_INDICATOR
//#endif

#define USB_INDICATOR         [1][5]
//#define ESB_INDICATOR         [1][6]
#define USB_INDICATOR_COLOR_R 0xFF
#define USB_INDICATOR_COLOR_G 0xFF
#define USB_INDICATOR_COLOR_B 0xFF

ifdef RGB_RAW_ENABLE
#undef AUXILIARY_RGB_USE_UNIVERSAL_BRIGHTNESS
#endif
