/* 
 * File:   lcd.h
 * Author: M91541
 *
 * Created on January 31, 2019, 5:12 PM
 */

#ifndef LCD_H
#define	LCD_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "lcd_ssd1306.h"

#define lcd_setup() do {lcd_setup_ssd1306(); } while (0)
#define lcd_task() do {lcd_task_ssd1306(); } while (0)

#ifdef	__cplusplus
}
#endif

#endif	/* LCD_H */

