#include "ML51.h"

#include "typedefs.h"
#include "hw_layer.h"

//************************************************************
//  HW abstraction layer must be impemented depends used CPU
//************************************************************




//=================Timings============================

//1us delay for software SPI by loop
void cmt_spi3_delay(void)
{
    volatile u16 n = SPI_DELAY_COUNT_MS; //use predefined itteration value, see .h file
    while(n--); //elementary delay in loop
}

//1-32766 us delay by timer
void system_delay_us(unsigned short us)
{	//1 tick is 0.5 uS 
 us=~(us<<1);                            //period is 65536-us*2	
 TL0 = LOBYTE(us);                       //set low byte of period
 TH0 = HIBYTE(us);                       //set hight byte of period
 set_TCON_TR0;                           //Start Timer0
 while (TF0 != 1);                       //Wait Timer0 Time-Out Flag
 clr_TCON_TR0;                           //Stop Timer0
 clr_TCON_TF0;                           //clear flag	
}





//=====================GPIO===================================

//initialize GPIO
void cmt_gpio_init(void)
{
 	//empty here: gpio initilazed on main procedure
}


//read control data from CMT2300
unsigned char cmt_read_p1(void)
{
 return !(!CMT2300A_ReadGpio1());		
}

unsigned char cmt_read_p2(void)
{
 return !(!CMT2300A_ReadGpio2());		
}

//only one line is INT3 will be used in this HW configuration
unsigned char cmt_read_p3(void)
{
 return !(!CMT2300A_ReadGpio3());		
}

//read RTS line of UART: master can force PowerDown mode by set 0
unsigned char cmt_read_rts(void)
{
	return !(!CMT2300A_ReadRTS());	
}

//set CTS control for Master: 0 is Master must stop TX data over UART and wait 1
void cmt_set_cts(unsigned char on)
{
	if(on) CMT2300A_WriteCTS_1();
	else CMT2300A_WriteCTS_0();
}



//void procedure for emty macro (see .h file)
void cmtvoid(void)
{
	
}

//change input/output mode of bidirectional SPI SDIO line
void cmt_spi3_sdio_out(void){P41_PUSHPULL_MODE;} //set SDIO as output
void cmt_spi3_sdio_in(void) //set SDIO as input
{
 	
 P41_QUASI_MODE; //quasi mode with puu-up
 P41 = 1; //for reading output must be set as 1
}

//set on-board LED lights (LED connected to VCC!)
void als0(void)
{
	CMT2300A_WriteTST_1();
}

//clear on-board LED no lights
void als1(void)
{
	CMT2300A_WriteTST_0();
}


/*
////void cmt_spi3_csb_out(void){}//      SET_GPIO_OUT(CMT_CSB_GPIO)
void cmt_spi3_fcsb_out(void){}//     SET_GPIO_OUT(CMT_FCSB_GPIO)
void cmt_spi3_sclk_out(void){}//     SET_GPIO_OUT(CMT_SCLK_GPIO)
void cmt_spi3_sdio_out(void){}//     SET_GPIO_OUT(CMT_SDIO_GPIO)
void cmt_spi3_sdio_in(void){}//      SET_GPIO_IN(CMT_SDIO_GPIO)

void cmt_spi3_csb_1(void){}//        SET_GPIO_H(CMT_CSB_GPIO)
void cmt_spi3_csb_0(void){}//        SET_GPIO_L(CMT_CSB_GPIO)

void cmt_spi3_fcsb_1(void){}//       SET_GPIO_H(CMT_FCSB_GPIO)
void cmt_spi3_fcsb_0(void){}//       SET_GPIO_L(CMT_FCSB_GPIO)
    
void cmt_spi3_sclk_1(void){}//       SET_GPIO_H(CMT_SCLK_GPIO)
void cmt_spi3_sclk_0(void){}//       SET_GPIO_L(CMT_SCLK_GPIO)

void cmt_spi3_sdio_1(void){}//       SET_GPIO_H(CMT_SDIO_GPIO)
void cmt_spi3_sdio_0(void){}//       SET_GPIO_L(CMT_SDIO_GPIO)
unsigned char cmt_spi3_sdio_read(void){return 0;}//    READ_GPIO_PIN(CMT_SDIO_GPIO)


void CMT2300A_SetGpio1In(void) //           SET_GPIO_IN(CMT_GPIO1_GPIO)
{
  //set GPIO to input mode
}

void CMT2300A_SetGpio2In(void) //           SET_GPIO_IN(CMT_GPIO2_GPIO)
{

 //set GPIO to input mode
}


void CMT2300A_SetGpio3In(void)//           SET_GPIO_IN(CMT_GPIO3_GPIO)
{
 //set GPIO to input mode
}

unsigned char CMT2300A_ReadGpio1(void)//            READ_GPIO_PIN(CMT_GPIO1_GPIO)
{
 return 0;
}

unsigned char CMT2300A_ReadGpio2(void)//            READ_GPIO_PIN(CMT_GPIO2_GPIO)
{
 return 0;
}

unsigned char CMT2300A_ReadGpio3(void)//            READ_GPIO_PIN(CMT_GPIO3_GPIO)
{
 return 0;
}

*/