/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* Copyright(c) 2019 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  Website: http://www.nuvoton.com
//  E-Mail : MicroC-8bit@nuvoton.com
//***********************************************************************************************************

//***********************************************************************************************************
//  File Function: ML51 simple GPIO toggle out demo code
//***********************************************************************************************************

#include "ML51.h"
#include "rf/if.h"
#include "rf/hw_layer.h"
/**
 * @brief       CMT2300W demo
 * @param       None
 * @return      None
 * @details     UART <-> CMT2300A radio <-> CMT2300A radio <-> UART
 */

//project's definitions
#define VIRTUAL_PORT   //use UART0 connected to NuLink2 virtual USB-COM, comment for use UART1 pins
#define RXTOUT 100  //Timeout after RX byte for end of data 10 mS (value in x100uS)
#define SENDTOUT 1000 //Timeout for sending packets in test mode


#define MAXDATA 30  //maximal payload length (correspond CMT2300 buffer size!)

unsigned char tx_buf[MAXDATA+3]; //UART Tx buffer for output Radio received packets
volatile unsigned char tx_ptr=0; //pointer to byte will be outputted

unsigned char rx_buf[MAXDATA+3]; //UART RX buffer
volatile unsigned char rx_ptr=0; //pointer to byte will be received over UART

unsigned char tmp[MAXDATA+3]; //temporary buffer

unsigned char ison=0; //flag of Radio CMT2300A is connected
unsigned char send_cnt=0; //counter of sended packets in test mode



//------------------------Timer's managment-------------------------

//start unblocked sending timeout interval (value in 1 mS, maximum 1394mS)
void set_send_tout(unsigned short tout)
{
 clr_T2CON_TR2;              //Stop Timer2
 clr_T2CON_TF2;              //clear interupt flag
 if(tout) //set timeout and start timer
 {
  tout=tout * 47;           //value for clk=24MHz and div=512
  tout = tout - (tout>>10); //fine tune to 1000uS
  tout = tout - (tout>>9);  
  tout = ~tout;  //convert to counter init value
	 
  TL2 = LOBYTE(tout); //set counter's startup value
  TH2 = HIBYTE(tout);
  set_T2CON_TR2;  //start Timer 2
 }	
}


//start unblocked timeout interval (value in 100us)
void set_uart_tout(unsigned char tout)
{  //1 tick is 0.5 uS 
 unsigned short us;
 if(!tout) us=65535;
 else us=~((unsigned short)tout*200); //period is 65536-us*200
 clr_TCON_TR1; //stop timer 1
 clr_TCON_TF1;	//clear timeout flag
 TL1 = LOBYTE(us); //set low byte of period
 TH1 = HIBYTE(us); //set hight byte of period
 set_TCON_TR1;	//start timer		
}


//-------------------------Interupts--------------------------------

 //UART0 interupt
#ifdef VIRTUAL_PORT
 void Serial_ISR (void) interrupt 4 
 {
    if (RI)  //RX data enable
    {   	
			clr_SCON_RI; // Clear RI (Receive Interrupt).
			rx_buf[rx_ptr++]=SBUF; //put receved byte to RX buffer
      rx_ptr&=31; //restrict data length is 31 byte
			if(rx_ptr<30) set_uart_tout(RXTOUT); //clear UART timeout
			else  //we have 30 bytes
			{  
				cmt_set_cts(0); //or set CTS while rx buffer full
				set_uart_tout(0); //force timeout
				//after CTS=0 only one extra byte can be received into rx_buf[30]
				 //in this case rx_ptr will be 31
			}
					
    }
    if (TI)  //TX compleet
    {       
        clr_SCON_TI;  // Clear TI (Transmit Interrupt).
			  if(tx_ptr) SBUF = tx_buf[tx_ptr--]; //check there is unsended bytes, send next, move pointer		
    }
 }
#else
 //UART1 interupt
 void SerialPort1_ISR(void) interrupt 15 
 {
    if (RI_1==1) //RX data enable
    {                                     
			  clr_S1CON_RI_1;    //clear reception flag for next reception 
        rx_buf[rx_ptr++]=SBUF1; //put receved byte to RX buffer
        rx_ptr&=31; //restrict data length is 31 byte
			  if(rx_ptr<30) set_uart_tout(RXTOUT); //clear UART timeout
			  else  //we have 30 bytes
			  {  
				 cmt_set_cts(0); //or set CTS while rx buffer full
				 set_uart_tout(0); //force timeout
				//after CTS=0 only one extra byte can be received into rx_buf[30]
				 //in this case rx_ptr will be 31
			  }  
    }
    if(TI_1==1) //TX compleet
    {
        clr_S1CON_TI_1; // Clear TI (Transmit Interrupt).  
        if(tx_ptr) SBUF1 = tx_buf[tx_ptr--]; //check there is unsended bytes, send next, move pointer			
    }
 }

#endif

 
 //WakeUp timer Interupt
void WakeUp_Timer_ISR (void)   interrupt 17     //ISR for self wake-up timer
{
    clr_WKCON_WKTF;  //clear interrupt flag   
}


//--------------------------------main procedure-------------------------
void main (void) 
{
  unsigned char b; //temporary value
	
	start:	
	//-----------------GPIO Setup--------------------------
	
	//Outputs
	
	   //OnBoard LED
	   MFP_P32_GPIO;
	   P32=1;
	   P32_PUSHPULL_MODE;
	   
	   //TestOut
	   MFP_P17_GPIO;
	   P17=0;
	   P17_PUSHPULL_MODE;
	
	   //SPI DIO
	   MFP_P41_GPIO;
	   P41=1;
	   //P41_PUSHPULL_MODE;
	   P41_QUASI_MODE;
	   
	   //SPI SCK
		 MFP_P01_GPIO;
	   P01=1;
		 P01_PUSHPULL_MODE;
	   //SPI CS
	   MFP_P00_GPIO;
		 P00=1;
	   P00_PUSHPULL_MODE;
	   //SPI FB
		 MFP_P03_GPIO;
		 P03=1;
	   P03_PUSHPULL_MODE;
		 //UART CTS
		 MFP_P15_GPIO;
		 P15=1;
	   P15_PUSHPULL_MODE;

//Inputs with pull-up
     
		 //IN3
		 MFP_P40_GPIO;
		 P40=1;
	   P40_QUASI_MODE;
		 
	   //UART RTS
		 MFP_P14_GPIO;
		 P14=1;
	   P14_QUASI_MODE;
     		 
	   //TestIn (Jumper for activate sending test)
     MFP_P16_GPIO;
		 P16=1;
	   P16_QUASI_MODE;		 
	
	
	//setup timer0 for blocking delay in Radio driver
	  clr_CKCON_T0M;                                  //T0M=0, Timer0 Clock = Fsys/12
    TMOD |= 0x01;                                   //Timer0 is 16-bit mode
	
	//setup timer 1 for unblocking UART timeout
	  clr_CKCON_T1M;                                  //T1M=0, Timer1 Clock = Fsys/12
    TMOD |= 0x10;                                   //Timer01 is 16-bit mode
	
	// setup timer2 for unblocking sending timeout
	clr_T2CON_TR2;              //Stop Timer2
  clr_T2CON_TF2;              //clear interupt flag
  T2MOD&=0x8F;T2MOD|=0x70;  //Timer2 Clock = Fsys/512
  clr_T2CON_CMRL2;        //Timer 2 as auto-reload mode
  set_T2MOD_LDEN;
  set_T2MOD_CMPCR;       //Timer 2 value is auto-cleared as 0000H when a compare match occurs.
		
	//setup UART
#ifdef VIRTUAL_PORT
 	  MFP_P31_UART0_TXD; // set P3.1 and P3.0 as Quasi mode for UART0 trasnfer 
    MFP_P30_UART0_RXD;
    P31_QUASI_MODE;                                  
    P30_QUASI_MODE;
    UART_Open(24000000,UART0_Timer3,115200);  //run uart with boudrate generator is Timer3  
		UART_Interrupt_Enable(UART0,Enable); //enable UART0 RX and TX interupts
    ENABLE_GLOBAL_INTERRUPT; //enable interupts globally
#else		
		MFP_P23_UART1_TXD; // set P2.3 and P2.2 as Quasi mode for UART1 trasnfer 
		MFP_P22_UART1_RXD;
		P23_QUASI_MODE;
		P22_QUASI_MODE;
		UART_Open(24000000,UART1_Timer3,115200);  //run uart with boudrate generator is Timer3  
		UART_Interrupt_Enable(UART1,Enable); //enable UART1 RX and TX interupts
    ENABLE_GLOBAL_INTERRUPT; //enable interupts globally
#endif		
	
  //start Radio
	Radio_Init();  //initialize CMT2300A radio
	ison=Radio_On(1); //start receiving with testing device exist	
	if(ison) als1();  //indicate Radio started OK
  set_send_tout(SENDTOUT); //run autosend timer
	cmt_set_cts(1); //set flag UART is ready
	
	//main loop
	while(1)
	{
		//---------------------check having packet for transmitt-----------------------			
			//check some data readed and combytetimeout
			if(rx_ptr && ( TF1 ) )
			{ 
       cmt_set_cts(0); //deny reading uart				
			 for(b=0;b<rx_ptr;b++) tmp[b]=rx_buf[b]; //copy readed data to temporary buffer
			 
			 //normally rx_ptr is 1-30: a number of bytes for send
			 //rx_ptr can be maximum 31: one extra byte can be received after CTS=0  
				if(rx_ptr==31) //special case: one extra byte received
			 {
				b--; //decrese length of packet will be transmitted: 30 bytes is maximum
				rx_buf[0]=rx_buf[30]; //copy extra byte as first byte of new packet
				rx_ptr=1; //set pointer: one byte already received
				set_uart_tout(RXTOUT); //clear UART timeout					 
			 }
			 else rx_ptr=0; //1-30 bytes were received: all will be sended
			 cmt_set_cts(1); //allow reading uart
			 if(ison) Radio_Send_VarLen(tmp, b); //transmitt data (blocked), j is data length	  
			}
			
			//--------------------check receive packet------------------------------		
  //check for receive packet by CMT2300		 
   b=Radio_Recv_VarLen(tmp);	//b is length of receved packet	
	 if(b && (!tx_ptr)) //check data received and tx buffer is free
   { 
	   unsigned char i=0;
     tx_ptr=b; //set pointer to first byte will be output over UART	 
		 while(b) tx_buf[b--]=tmp[i++];	//copy received bytes in reverse order
#ifdef VIRTUAL_PORT     
		 UART_Send_Data(UART0,tx_buf[tx_ptr--]	); //start TX first byte over UART0		 
#else
		 UART_Send_Data(UART1,tx_buf[tx_ptr--]	); //start TX first byte over UART1	
#endif		 
		 P32 ^= 1; //blink LED on each received packet
	 }	
	 
	 //---------------------check for test sendigng mode--------------------
	 if((P16==0)&&(TF2)) //check test mode jumper is close and send timeout occured
	 {	
		 if(ison) Radio_Send_VarLen(&send_cnt, 1);  //check radio avaliable and send 1 byte of counter
		 P32 ^= 1; //blink LED on each sended packet in test mode
		 send_cnt++; //count sended packets	
		 set_send_tout(SENDTOUT); //restart autosend timerfor next sending
	 }
	 	 
	 
	 //-------------------------check for CTS signal entering sleep-----------------------	 
	 //read control from Master, go to POWER DOWN mode
	  if(! cmt_read_rts())
		{
			//entering power down mode:
			
		 //disable UART	
		 cmt_set_cts(0); //set CTS signal for master indicated sleep mode
			
#ifdef VIRTUAL_PORT
  	 UART_Interrupt_Enable(UART0,Disable); //disable UART0 RX and TX interupts
     MFP_P31_GPIO;  //set UART pins as GPIO                           
     MFP_P30_GPIO; 
#else
		 UART_Interrupt_Enable(UART1,Disable); //disable UART1 RX and TX interupts
     MFP_P23_GPIO;  //set UART pins as GPIO                           
     MFP_P22_GPIO; 
#endif			
				
		//sleep Radio	
		 Radio_On(0); //put CMT2300 to sleep mode  
  
     //set all GPIO as inputs
     ALL_GPIO_INPUT_MODE;

			
		//set special function for on-board LED, CTS and RTS	
    //LED
    MFP_P32_GPIO;
    P32=1;
    P32_PUSHPULL_MODE;

    //UART CTS output
    MFP_P15_GPIO;
    P15=0;
    P15_PUSHPULL_MODE;

    //UART RTS input
    MFP_P14_GPIO;
    P14=1;
    P14_QUASI_MODE;	


    //manage clock
		ClockEnable(FSYS_LIRC);
		FsysSelect(FSYS_LIRC); //select 38.4KHz internal clock
    ClockDisable(FSYS_HIRC); //disable 24MHz internal clock
    
		//start wake-up timer with 1 sec tick
		WKT_Open (LIRC,256,150); //Open wake-up timer 38400Hz / 256 = 150Hz -> 1sec
    WKT_Interrupt(Enable);    // Enable WKT interrupt
    ENABLE_GLOBAL_INTERRUPT;  // Enable Global interrupt
    DISABLE_BOD; //disable voltage fail dedtect for decrese current
    als0();	//of on-board LED 
		
		//put MCU power down mode with periodically wake by timer and poll RTS
		 //wake every 1 sec and check RTS pin level
		 while(! cmt_read_rts()) //check RTS pin level in loop
     {
			 set_PCON_PD; //1 sec power down while RTS=0 
			 P32 ^= 1; //1 sec blink in sleep mode (test only!)
		 }
     
		 //exiting power down mode	 
     ENABLE_BOD; //enable brownout detect
		 WKT_Close(); //stop wake-up timer
//manage clock
     FsysSelect(FSYS_HIRC); //select 24MHz system clock
     ClockDisable(FSYS_LIRC); //disable 34.8KHz clock
//restart all
    	tx_ptr=0; //clear global values
      rx_ptr=0;
      ison=0;
		  send_cnt=0;
      goto start; //restart firmware for entering work mode		 
		}		
		
	}
}
