/* 
 * File:   spi_in_handler.h
 * Author: M91541
 *
 * Created on January 31, 2019, 3:21 PM
 */

#ifndef HOST_HANDLER_H
#define	HOST_HANDLER_H

#ifdef	__cplusplus
extern "C" {
#endif

    void in_configureHostHandler(void);
    uint8_t in_gotSPIchar(uint8_t dataByte);
    void in_executeCommand(void);

#ifdef	__cplusplus
}
#endif

#endif	/* HOST_HANDLER_H */

