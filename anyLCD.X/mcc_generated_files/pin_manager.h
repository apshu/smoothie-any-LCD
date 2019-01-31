/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F18857
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SS1 aliases
#define SS1_TRIS                 TRISAbits.TRISA5
#define SS1_LAT                  LATAbits.LATA5
#define SS1_PORT                 PORTAbits.RA5
#define SS1_WPU                  WPUAbits.WPUA5
#define SS1_OD                   ODCONAbits.ODCA5
#define SS1_ANS                  ANSELAbits.ANSA5
#define SS1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SS1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SS1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SS1_GetValue()           PORTAbits.RA5
#define SS1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SS1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SS1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SS1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SS1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define SS1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define SS1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define SS1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set SDO2 aliases
#define SDO2_TRIS                 TRISBbits.TRISB0
#define SDO2_LAT                  LATBbits.LATB0
#define SDO2_PORT                 PORTBbits.RB0
#define SDO2_WPU                  WPUBbits.WPUB0
#define SDO2_OD                   ODCONBbits.ODCB0
#define SDO2_ANS                  ANSELBbits.ANSB0
#define SDO2_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SDO2_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SDO2_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SDO2_GetValue()           PORTBbits.RB0
#define SDO2_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SDO2_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SDO2_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define SDO2_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define SDO2_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define SDO2_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define SDO2_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define SDO2_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set SCK2 aliases
#define SCK2_TRIS                 TRISBbits.TRISB1
#define SCK2_LAT                  LATBbits.LATB1
#define SCK2_PORT                 PORTBbits.RB1
#define SCK2_WPU                  WPUBbits.WPUB1
#define SCK2_OD                   ODCONBbits.ODCB1
#define SCK2_ANS                  ANSELBbits.ANSB1
#define SCK2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define SCK2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define SCK2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define SCK2_GetValue()           PORTBbits.RB1
#define SCK2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define SCK2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define SCK2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define SCK2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define SCK2_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define SCK2_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define SCK2_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define SCK2_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set SDI2 aliases
#define SDI2_TRIS                 TRISBbits.TRISB2
#define SDI2_LAT                  LATBbits.LATB2
#define SDI2_PORT                 PORTBbits.RB2
#define SDI2_WPU                  WPUBbits.WPUB2
#define SDI2_OD                   ODCONBbits.ODCB2
#define SDI2_ANS                  ANSELBbits.ANSB2
#define SDI2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define SDI2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define SDI2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define SDI2_GetValue()           PORTBbits.RB2
#define SDI2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define SDI2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define SDI2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define SDI2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define SDI2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define SDI2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define SDI2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define SDI2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set SCK1 aliases
#define SCK1_TRIS                 TRISCbits.TRISC3
#define SCK1_LAT                  LATCbits.LATC3
#define SCK1_PORT                 PORTCbits.RC3
#define SCK1_WPU                  WPUCbits.WPUC3
#define SCK1_OD                   ODCONCbits.ODCC3
#define SCK1_ANS                  ANSELCbits.ANSC3
#define SCK1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCK1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCK1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCK1_GetValue()           PORTCbits.RC3
#define SCK1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCK1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCK1_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SCK1_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SCK1_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SCK1_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SCK1_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCK1_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDI1 aliases
#define SDI1_TRIS                 TRISCbits.TRISC4
#define SDI1_LAT                  LATCbits.LATC4
#define SDI1_PORT                 PORTCbits.RC4
#define SDI1_WPU                  WPUCbits.WPUC4
#define SDI1_OD                   ODCONCbits.ODCC4
#define SDI1_ANS                  ANSELCbits.ANSC4
#define SDI1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDI1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDI1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDI1_GetValue()           PORTCbits.RC4
#define SDI1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDI1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDI1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SDI1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SDI1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SDI1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SDI1_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SDI1_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/