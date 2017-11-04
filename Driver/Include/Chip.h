/*
************************************************************************************************
* Filename   	: Chip.h
* Programmer : JiangJun
* Description	: Process clock/pins of STM8L151C8 
* Date           : 2014-08-26
************************************************************************************************
*/

#ifndef __CHIP_H__
#define __CHIP_H__


/*
*********************************************************************************************************
*                                                                        INCLUDE FILES
*********************************************************************************************************
*/



/*
*********************************************************************************************************
*                                                                         DEBUG SYSTEM
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                                                       MACROS & CONSTANTS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                            				     DEFINITIONS / TYPEDEFS
*********************************************************************************************************
*/
/* Device unique ID */
typedef uint32_t    DEV_ID;


/*
*********************************************************************************************************
*                                            				         GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                                                        FUNCTION PROTOTYPE
*********************************************************************************************************
*/
extern void chip_Init(void);
extern DEV_ID chip_GetDevID(void);
extern void chip_LEDOn(void);
extern void chip_LEDOff(void);
extern void chip_LEDToogle(void);
extern void chip_LED2Off(void);
extern void chip_LED2On(void);
extern void chip_LED2Toogle(void);
extern void chip_TwinkleLed(void);


#endif    /* __CHIP_H__ */


