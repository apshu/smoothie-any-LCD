#include <stdint.h>
#include "framebuffer.h"

volatile uint8_t fb_LCDframeBuffer[64 / 8][128]; //[row][column]]
