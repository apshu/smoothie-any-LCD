/* 
 * File:   framebuffer.h
 * Author: M91541
 *
 * Created on January 31, 2019, 4:24 PM
 */

#ifndef FRAMEBUFFER_H
#define	FRAMEBUFFER_H

#ifdef	__cplusplus
extern "C" {
#endif

    extern volatile uint8_t fb_LCDframeBuffer[64 / 8][128]; //[row][column]]


#ifdef	__cplusplus
}
#endif

#endif	/* FRAMEBUFFER_H */

