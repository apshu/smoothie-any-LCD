#include <xc.h>
#include "../mcc_generated_files/mcc.h"
#include "lcd_ssd1306.h"
#include "../framebuffer.h"

static enum {
    LCDSSD1306_init,
    LCDSSD1306_waitIdle,
    LCDSSD1306_sendNextLine,
} lcdSSD1306_taskState;

static uint_fast8_t lcdSSD1306_line;
static const uint8_t lcdSSD1306_initCommand[] = {
    0x0ae,
    0x0d5, 0x080,
    0x0a8, 0x03f,
    0x0d3, 0x000,
    0x040,
    0x08d, 0x014,
    0x020, 0x000,
    0x0a1,
    0x0c8,
    0x0da, 0x002,
    0x081, 0x0cf,
    0x0d9, 0x0f1,
    0x0db, 0x040,
    0x02e,
    0x0a4,
    0x0a6,
    0x0af,
};

void lcd_setup_ssd1306(void) {
    lcdSSD1306_taskState = LCDSSD1306_init;
    lcdSSD1306_line = 0;
}

void lcd_task_ssd1306(void) {
    switch (lcdSSD1306_taskState) {
        case LCDSSD1306_init:
            lcdSSD1306_line = 0;
            //ResetLCD
            lcdSSD1306_chipSelPin(1);
            lcdSSD1306_datacmdPin(0);
            lcdSSD1306_resetPin(0);
            __delay_ms(8);
            lcdSSD1306_resetPin(1);
            //Wait for LCD reset sequence to complete
            __delay_ms(100);
            //Send init command
            lcdSSD1306_Exchange8bitBuffer((uint8_t*) lcdSSD1306_initCommand, sizeof (lcdSSD1306_initCommand), NULL);
            //After 1ms SPI transaction completes and enough time for all setup
            __delay_ms(1);
            //Deselect LCD
            lcdSSD1306_taskState = LCDSSD1306_waitIdle;
            break;
        case LCDSSD1306_waitIdle:
            //Wait for SPI transaction complete
            if (!lcdSSD1306_isCommActive()) {
                lcdSSD1306_chipSelPin(1);
                lcdSSD1306_taskState = LCDSSD1306_sendNextLine;
            }
            break;
        case LCDSSD1306_sendNextLine:
            //Send next line from framebuffer
            if (lcdSSD1306_line >= 64 / 8) {
                lcdSSD1306_line = 0;
            }
            uint8_t lcdCmdBuf[] = {0x40, 0x10, 0x00, 0xb0 | (lcdSSD1306_line)};
            lcdSSD1306_Exchange8bitBuffer(lcdCmdBuf, sizeof (lcdCmdBuf), NULL);
            lcdSSD1306_Exchange8bitBuffer(fb_LCDframeBuffer[lcdSSD1306_line++], sizeof (fb_LCDframeBuffer[0]), NULL);
            lcdSSD1306_taskState = LCDSSD1306_waitIdle;
            break;
    }
}
