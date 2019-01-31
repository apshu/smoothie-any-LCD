/* 
 * File:   lcd_ssd1306.h
 * Author: M91541
 *
 * Created on January 31, 2019, 5:08 PM
 */

#ifndef LCD_SSD1306_H
#define	LCD_SSD1306_H

#ifdef	__cplusplus
extern "C" {
#endif

#define lcdSSD1306_chipSelPin(isHigh) do { } while(0)
#define lcdSSD1306_resetPin(isHigh)   do { } while(0) 
#define lcdSSD1306_datacmdPin(isHigh) do { } while(0)
#define lcdSSD1306_Exchange8bitBuffer SPI2_Exchange8bitBuffer
#define lcdSSD1306_isCommActive()     (SPI2_IsBufferFull())
    
    void lcd_setup_ssd1306(void);
    void lcd_task_ssd1306(void);
    


#ifdef	__cplusplus
}
#endif

#endif	/* LCD_SSD1306_H */

