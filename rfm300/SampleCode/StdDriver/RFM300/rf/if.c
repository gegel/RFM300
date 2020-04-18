
#include "hw_layer.h"
#include "radio.h"
#include "if.h"

/*******************************************************
; Mode                      = Advanced
; Part Number               = CMT2300A
; Frequency                 = 433.920 MHz
; Xtal Frequency            = 26.0000 MHz
; Demodulation              = GFSK
; AGC                       = On
; Data Rate                 = 9.6 kbps
; Deviation                 = 20.0 kHz
; Tx Xtal Tol.              = 20 ppm
; Rx Xtal Tol.              = 20 ppm
; TRx Matching Network Type = 20 dBm
; Tx Power                  = +20 dBm
; Gaussian BT               = 0.5
; Bandwidth                 = Auto-Select kHz
; Data Mode                 = Packet
; Whitening                 = Disable
; Packet Type               = Fixed Length
; Payload Length            = 32
*********************************************************/

unsigned char id=0; //ID of last received packet


//Inialize radio on startup
void Radio_Init(void)
{
	RF_Init();
}

//check receive up to 30 bytes data by Radio to pBuf
//returns number of bytes in received packet or 0 in waiting
unsigned char Radio_Recv_VarLen(unsigned char* pBuf)
{
  //if(CMT2300A_MASK_PKT_OK_FLG & CMT2300A_ReadReg(CMT2300A_CUS_INT_FLAG))  // poll PKT_OK flag     
	if(cmt_read_p3())  //poll INT3, PKT_DONE 
  {   //some data was received
						
		        unsigned char len;  //length of packet paylosd
		        CMT2300A_GoStby(); //switch to standby mode
						CMT2300A_ReadFifo(&len,1);	//read first byte is data length
						if(len>31) len=31; //restrict to buffer size
						CMT2300A_ReadFifo(&id,1);	//first byte of data is node id
						len--; //paylod length is data length - 1
						
		        CMT2300A_ReadFifo(pBuf,len); //read payload of receved packet
						CMT2300A_ClearRxFifo(); //clear rx buffer
						CMT2300A_ClearInterruptFlags(); //clear interupt flags
						CMT2300A_GoRx(); //return back to receiving
						return len; //ok
	}
	return 0; //no data yet
}

//transmit up to 30 bytes payload in pBuf over radio
//returns 1 if transmitted OK or 0 in fail
unsigned char Radio_Send_VarLen(unsigned char* pBuf, unsigned char len)
{
	u16 delay; //counter of TX process timeout
	
	CMT2300A_GoStby(); //swithc to standby mode
	CMT2300A_ClearInterruptFlags(); //clear interupts flags
	CMT2300A_SetPayloadLength(len+1); //set length of data (payload + one byte node id	
	CMT2300A_ClearTxFifo(); //clear tx buffer
	CMT2300A_EnableWriteFifo(); //enable write new data to buffer	
	CMT2300A_WriteFifo(pBuf, len); // write payload to buffer
	CMT2300A_GoTx(); //start tx
	delay = 1000; //set tx timeout
	while(1) //waith for TX compleet or timeout in loop
	{
    //poll CMT2300A interupt for TX done flag
		if(CMT2300A_MASK_TX_DONE_FLG & CMT2300A_ReadReg(CMT2300A_CUS_INT_CLR1))  // Read TX_DONE flag 
		{ //TX compleet
			CMT2300A_ClearInterruptFlags();	//clear interupt flags
      CMT2300A_EnableReadFifo();	//enable read fifo for next RX
			CMT2300A_GoRx(); //return back to receiving
			return 1; //returns tx ok
		}
		
		delay--; //downcont timer
		if(delay==0) //on TX timeout
		{
			RF_Init(); //reinit Radio: can be some error in setup 
      CMT2300A_EnableReadFifo(); //enable read fifo for next RX			
			CMT2300A_GoRx(); //return back to receiving
			return 0; //returns tx fail
		}
		
	}
}


//set node ID of transmitted packet
//0 is broadcast packet
void Radio_Set_TX_ID(unsigned char d)
{
	CMT2300A_SetNodeID(d);
}

//get node ID of last received packet
//0 is broadcast packet
unsigned char Radio_Get_RX_ID(void)
{
	return id;
}

//turn on/off Radio
//on=0 for sleep mode of CMT2300, 1 for wake and RX mode
//returns 0 on entering sleep or Radio error and 1 if entering receiving is OK
unsigned char Radio_On(unsigned char on)
{
 if(on) //turn on
 {
	        CMT2300A_GoStby(); //goto standby mode first
	        if(0==CMT2300A_IsExist()) return 0; //check CMT2300 is exist - fail
					CMT2300A_ClearInterruptFlags(); //clear interupts flags
					CMT2300A_ClearRxFifo(); //clear FIFO
	        CMT2300A_GoRx(); //goto RX mode
	        return 1; //run
 }
 
 CMT2300A_GoSleep(); //goto sleep mode
 return 0; //stop
 
}


