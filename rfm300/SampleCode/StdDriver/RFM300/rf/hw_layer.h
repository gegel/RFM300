#ifndef __HW_LAYER_H
#define __HW_LAYER_H

#include "typedefs.h"

#ifdef __cplusplus 
extern "C" { 
#endif



// ************************************************************************
//  The following need to be modified by user
//  ************************************************************************ 




//===========================Timings================================

#define SPI_DELAY_COUNT_MS 100 //24 //loop itteration for ius delay depends by HW speed

void cmt_spi3_delay(void); //delay 1mS by loop
void system_delay_us (unsigned short us); //delay in us by timer


//===============================GPIO===================================

void cmt_gpio_init(void);
unsigned char cmt_read_p1(void);
unsigned char cmt_read_p2(void);
unsigned char cmt_read_p3(void);

unsigned char cmt_read_rts(void);
void cmt_set_cts(unsigned char on);

void cmt_set_tmr(unsigned char tout);
unsigned char cmt_get_tmr(void);


void cmtvoid(void);

//===================Macros for control IO======================

//pin direction not changed because startup is used
#define cmt_spi3_csb_out()      cmtvoid()
#define cmt_spi3_csb_out()      cmtvoid()
#define cmt_spi3_fcsb_out()     cmtvoid()
#define cmt_spi3_sclk_out()     cmtvoid()

//set spi outputs
#define cmt_spi3_sdio_1()       P41=1
#define cmt_spi3_sdio_0()       P41=0

#define cmt_spi3_sclk_1()       P01=1
#define cmt_spi3_sclk_0()       P01=0

#define cmt_spi3_csb_1()        P00=1
#define cmt_spi3_csb_0()        P00=0

#define cmt_spi3_fcsb_1()       P03=1
#define cmt_spi3_fcsb_0()       P03=0
    

//read SPI data
#define cmt_spi3_sdio_read()    P41

//read gpion input controls
#define CMT2300A_ReadGpio1()    P40
#define CMT2300A_ReadGpio2()    P40
#define CMT2300A_ReadGpio3()    P40

//pin directing not changed because startup is used
#define CMT2300A_SetGpio1In()   cmtvoid()
#define CMT2300A_SetGpio2In()   cmtvoid()
#define CMT2300A_SetGpio3In()   cmtvoid()

//port control 
#define CMT2300A_ReadRTS()     P14 
#define CMT2300A_WriteCTS_1()  P15=1
#define CMT2300A_WriteCTS_0()  P15=0

//on-board LED
#define CMT2300A_WriteTST_1()  P32=1
#define CMT2300A_WriteTST_0()  P32=0

//SDIO input/output (realized as function in .c, not macro!)
void cmt_spi3_sdio_out(void);
void cmt_spi3_sdio_in(void);

//on / off on-board led
void als1(void);
void als0(void);

/*
void cmt_spi3_csb_out(void);
void cmt_spi3_fcsb_out(void);
void cmt_spi3_sclk_out(void);
void cmt_spi3_sdio_out(void);
void cmt_spi3_sdio_in(void);

void cmt_spi3_csb_1(void);
void cmt_spi3_csb_0(void);

void cmt_spi3_fcsb_1(void);
void cmt_spi3_fcsb_0(void);
    
void cmt_spi3_sclk_1(void);
void cmt_spi3_sclk_0(void);

void cmt_spi3_sdio_1(void);
void cmt_spi3_sdio_0(void);
unsigned char cmt_spi3_sdio_read(void);
*/

//====================================================

/*
void CMT2300A_SetGpio1In(void); //           SET_GPIO_IN(CMT_GPIO1_GPIO)
void CMT2300A_SetGpio2In(void); //           SET_GPIO_IN(CMT_GPIO2_GPIO)
void CMT2300A_SetGpio3In(void); //           SET_GPIO_IN(CMT_GPIO3_GPIO)
unsigned char CMT2300A_ReadGpio1(void);//            READ_GPIO_PIN(CMT_GPIO1_GPIO)
unsigned char CMT2300A_ReadGpio2(void);//            READ_GPIO_PIN(CMT_GPIO2_GPIO)
unsigned char CMT2300A_ReadGpio3(void);//            READ_GPIO_PIN(CMT_GPIO3_GPIO)
*/


#ifdef __cplusplus
} 
#endif

#endif







