/*--------------------------------------------------------------------------
ML51 Function_define.h V1.00

All function define inital setting file for Nuvoton ML51
--------------------------------------------------------------------------*/

#define nop _nop_();

/****************************************************************************/
/* Software loop delay by HIRC, about 3ms 
/****************************************************************************/
#define _delay_()                      \
{                                      \
  unsigned char data i,j;              \
    for (j=0;j<0x1A;j++)               \
    {                                  \
       for (i=0;i<0xff;i++)            \
       {                               \
          _nop_();                     \
       }                               \
    }                                  \
}                                  

/*****************************************************************************************
* IAP function process 
*****************************************************************************************/
#define     READ_CID                0x0B
#define     READ_DID                0x0C
#define     READ_UID                0x04

#define     PAGE_ERASE_APROM        0x22
#define     BYTE_READ_APROM         0x00
#define     BYTE_PROGRAM_APROM      0x21

#define     PAGE_ERASE_LDROM        0x62
#define     BYTE_READ_LDROM         0x40
#define     BYTE_PROGRAM_LDROM      0x61

#define     PAGE_ERASE_CONFIG       0xE2
#define     BYTE_READ_CONFIG        0xC0
#define     BYTE_PROGRAM_CONFIG     0xE1

/*****************************************************************************************
*interrupt function process 
*****************************************************************************************/
#define    ENABLE_GLOBAL_INTERRUPT    EA=1
#define    DISABLE_GLOBAL_INTERRUPT    EA=0

#define    ENABLE_ADC_INTERRUPT         set_IE_EADC
#define    ENABLE_BOD_INTERRUPT         set_IE_EBOD
#define    ENABLE_UART0_INTERRUPT       set_IE_ES
#define    ENABLE_TIMER1_INTERRUPT      set_IE_ET1
#define    ENABLE_INT1_INTERRUPT        set_IE_EX1
#define    ENABLE_TIMER0_INTERRUPT      set_IE_ET0
#define    ENABLE_INT0_INTERRUPT        set_IE_EX0
          
#define    ENABLE_TIMER2_INTERRUPT      set_EIE0_ET2
#define    ENABLE_SPI0_INTERRUPT        set_EIE0_ESPI0 
#define    ENABLE_PWM0_FB_INTERRUPT     set_EIE0_EFB0  
#define    ENABLE_WDT_INTERRUPT         set_EIE0_EWDT  
#define    ENABLE_PWMM0_INTERRUPT       set_EIE0_EPWM0  
#define    ENABLE_CAPTURE_INTERRUPT     set_EIE0_ECAP  
#define    ENABLE_PIN_INTERRUPT         set_EIE0_EPI  
#define    ENABLE_I2C_INTERRUPT         set_EIE0_EI2C0
          
#define    ENABLE_PWM1_FB_INTERRUPT     set_EIE1_ET2
#define    ENABLE_PWM1_INTERRUPT        set_EIE1_ESPI0
#define    ENABLE_I2C1_INTERRUPT        set_EIE1_EFB0
#define    ENABLE_ESPI1_INTERRUPT       set_EIE1_EWDT
#define    ENABLE_HARDFAULT_INTERRUPT   set_EIE1_EHFI
#define    ENABLE_WKT_INTERRUPT         set_EIE1_EWKT
#define    ENABLE_TIMER3_INTERRUPT      set_EIE1_ET3
#define    ENABLE_UART1_INTERRUPT       set_EIE1_ES1
          
#define    ENABLE_SC0_AUTO_CONVENTION_ERROR_INTERRUPT    SFRS=0;SC0IE|=SET_BIT4
#define    ENABLE_SC0_BLOCK_GUARD_TIMER_INTERRUPT        SFRS=0;SC0IE|=SET_BIT3
#define    ENABLE_SC0_TRANSFER_ERROR_INTERRUPT           SFRS=0;SC0IE|=SET_BIT2
#define    ENABLE_SC0_TRASMIT_BUFFER_EMPTY_INTERRUPT     SFRS=0;SC0IE|=SET_BIT1
#define    ENABLE_SC0_RECEIVE_DATA_REACH_INTERRUPT       SFRS=0;SC0IE|=SET_BIT0
          
#define    ENABLE_SC1_AUTO_CONVENTION_ERROR_INTERRUPT    SFRS=2;SC1IE|=SET_BIT4
#define    ENABLE_SC1_BLOCK_GUARD_TIMER_INTERRUPT        SFRS=2;SC1IE|=SET_BIT3
#define    ENABLE_SC1_TRANSFER_ERROR_INTERRUPT           SFRS=2;SC1IE|=SET_BIT2
#define    ENABLE_SC1_TRASMIT_BUFFER_EMPTY_INTERRUPT     SFRS=2;SC1IE|=SET_BIT1
#define    ENABLE_SC1_RECEIVE_DATA_REACH_INTERRUPT       SFRS=2;SC1IE|=SET_BIT0
          
#define    ENABLE_PDMA0_HALFDONE_INT          SFRS=0;DMA0CR|=SET_BIT3
#define    ENABLE_PDMA0_FULLDONE_INT          SFRS=0;DMA0CR|=SET_BIT2
#define    ENABLE_PDMA1_HALFDONE_INT          SFRS=0;DMA1CR|=SET_BIT3
#define    ENABLE_PDMA1_FULLDONE_INT          SFRS=0;DMA1CR|=SET_BIT2
#define    ENABLE_PDMA2_HALFDONE_INT          SFRS=2;DMA2CR|=SET_BIT3
#define    ENABLE_PDMA2_FULLDONE_INT          SFRS=2;DMA2CR|=SET_BIT2
#define    ENABLE_PDMA3_HALFDONE_INT          SFRS=2;DMA3CR|=SET_BIT3
#define    ENABLE_PDMA3_FULLDONE_INT          SFRS=2;DMA3CR|=SET_BIT2 
          
#define    ENABLE_ACMP0_INTERRUPT             set_ACMPCR0_ACMPIE
#define    ENABLE_ACMP1_INTERRUPT             set_ACMPCR1_ACMPIE
          
/*DISABLE INTERRUPT*/ 
#define    DISABLE_ADC_INTERRUPT         set_IE_EADC
#define    DISABLE_BOD_INTERRUPT         set_IE_EBOD
#define    DISABLE_UART0_INTERRUPT       clr_IE_ES
#define    DISABLE_TIMER1_INTERRUPT      clr_IE_ET1
#define    DISABLE_INT1_INTERRUPT        clr_IE_EX1
#define    DISABLE_TIMER0_INTERRUPT      clr_IE_ET0
#define    DISABLE_INT0_INTERRUPT        clr_IE_EX0
          
#define    DISABLE_TIMER2_INTERRUPT      clr_EIE0_ET2
#define    DISABLE_SPI0_INTERRUPT        clr_EIE0_ESPI0 
#define    DISABLE_PWM0_FB_INTERRUPT     clr_EIE0_EFB0  
#define    DISABLE_WDT_INTERRUPT         clr_EIE0_EWDT  
#define    DISABLE_PWMM0_INTERRUPT       clr_EIE0_EPWM0  
#define    DISABLE_CAPTURE_INTERRUPT     clr_EIE0_ECAP  
#define    DISABLE_PIN_INTERRUPT         clr_EIE0_EPI  
#define    DISABLE_I2C_INTERRUPT         clr_EIE0_EI2C0
          
#define    DISABLE_PWM1_FB_INTERRUPT     clr_EIE1_ET2
#define    DISABLE_PWM1_INTERRUPT        clr_EIE1_ESPI0
#define    DISABLE_I2C1_INTERRUPT        clr_EIE1_EFB0
#define    DISABLE_ESPI1_INTERRUPT       clr_EIE1_EWDT
#define    DISABLE_HARDFAULT_INTERRUPT   clr_EIE1_EHFI
#define    DISABLE_WKT_INTERRUPT         clr_EIE1_EWKT
#define    DISABLE_TIMER3_INTERRUPT      clr_EIE1_ET3
#define    DISABLE_UART1_INTERRUPT       clr_EIE1_ES1
          
#define    DISABLE_SC0_AUTO_CONVENTION_ERROR_INTERRUPT    SFRS=0;SC0IE&=CLR_BIT4
#define    DISABLE_SC0_BLOCK_GUARD_TIMER_INTERRUPT        SFRS=0;SC0IE&=CLR_BIT3
#define    DISABLE_SC0_TRANSFER_ERROR_INTERRUPT           SFRS=0;SC0IE&=CLR_BIT2
#define    DISABLE_SC0_TRASMIT_BUFFER_EMPTY_INTERRUPT     SFRS=0;SC0IE&=CLR_BIT1
#define    DISABLE_SC0_RECEIVE_DATA_REACH_INTERRUPT       SFRS=0;SC0IE&=CLR_BIT0
          
#define    DISABLE_SC1_AUTO_CONVENTION_ERROR_INTERRUPT    SFRS=2;SC1IE&=CLR_BIT4
#define    DISABLE_SC1_BLOCK_GUARD_TIMER_INTERRUPT        SFRS=2;SC1IE&=CLR_BIT3
#define    DISABLE_SC1_TRANSFER_ERROR_INTERRUPT           SFRS=2;SC1IE&=CLR_BIT2
#define    DISABLE_SC1_TRASMIT_BUFFER_EMPTY_INTERRUPT     SFRS=2;SC1IE&=CLR_BIT1
#define    DISABLE_SC1_RECEIVE_DATA_REACH_INTERRUPT       SFRS=2;SC1IE&=CLR_BIT0
          
#define    DISABLE_PDMA0_HALFDONE_INT          SFRS=0;DMA0CR&=CLR_BIT3
#define    DISABLE_PDMA0_FULLDONE_INT          SFRS=0;DMA0CR&=CLR_BIT2
#define    DISABLE_PDMA1_HALFDONE_INT          SFRS=0;DMA1CR&=CLR_BIT3
#define    DISABLE_PDMA1_FULLDONE_INT          SFRS=0;DMA1CR&=CLR_BIT2
#define    DISABLE_PDMA2_HALFDONE_INT          SFRS=2;DMA2CR&=CLR_BIT3
#define    DISABLE_PDMA2_FULLDONE_INT          SFRS=2;DMA2CR&=CLR_BIT2
#define    DISABLE_PDMA3_HALFDONE_INT          SFRS=2;DMA3CR&=CLR_BIT3
#define    DISABLE_PDMA3_FULLDONE_INT          SFRS=2;DMA3CR&=CLR_BIT2 
          
#define    DISABLE_ACMP0_INTERRUPT             clr_ACMPCR0_ACMPIE
#define    DISABLE_ACMP1_INTERRUPT             clr_ACMPCR1_ACMPIE
/*******************************************************************************
*   POR/LVR/BOD Define
********************************************************************************/
#define    ENABLE_VBOD18                  SFRS=1;DMA0CR|=SET_BIT3    

/*******************************************************************************
*   TIMER Function Define
********************************************************************************/
#define    ENABLE_CLOCK_OUT             set_CKCON_CLOEN;
/*-------------------- Timer0 basic define --------------------*/
#define    ENABLE_TIMER1_MODE0          SFRS=0;TMOD&=0x0F
#define    ENABLE_TIMER1_MODE1          SFRS=0;TMOD&=0x0F;TMOD|=0x10
#define    ENABLE_TIMER1_MODE2          SFRS=0;TMOD&=0x0F;TMOD|=0x20
#define    ENABLE_TIMER1_MODE3          SFRS=0;TMOD&=0x0F;TMOD|=0x30
#define    TIMER0_FSYS                  set_CKCON_T0M
#define    TIMER0_FSYS_DIV12            clr_CKCON_T0M

#define    TIMER0_MODE0_ENABLE   SFRS=0;TMOD&=0xF0
#define    TIMER0_MODE1_ENABLE   SFRS=0;TMOD&=0xF0;TMOD|=0x01
#define    TIMER0_MODE2_ENABLE   SFRS=0;TMOD&=0xF0;TMOD|=0x02
#define    TIMER0_MODE3_ENABLE   SFRS=0;TMOD&=0xF0;TMOD|=0x03
/*-------------------- Timer1 basic define --------------------*/
#define    ENABLE_TIMER0_MODE0          SFRS=0;TMOD&=0xF0
#define    ENABLE_TIMER0_MODE1          SFRS=0;TMOD&=0xF0;TMOD|=0x01
#define    ENABLE_TIMER0_MODE2          SFRS=0;TMOD&=0xF0;TMOD|=0x02
#define    ENABLE_TIMER0_MODE3          SFRS=0;TMOD&=0xF0;TMOD|=0x03
#define    TIMER1_FSYS                  set_CKCON_T1M
#define    TIMER1_FSYS_DIV12            clr_CKCON_T1M

#define    TIMER1_MODE0_ENABLE   SFRS=0;TMOD&=0x0F
#define    TIMER1_MODE1_ENABLE   SFRS=0;TMOD&=0x0F;TMOD|=0x10
#define    TIMER1_MODE2_ENABLE   SFRS=0;TMOD&=0x0F;TMOD|=0x20
#define    TIMER1_MODE3_ENABLE   SFRS=0;TMOD&=0x0F;TMOD|=0x30
/*-------------------- Timer2 basic define --------------------*/
#define    TIMER2_DIV_4                 SFRS=0;T2MOD|=0x10;T2MOD&=0x9F
#define    TIMER2_DIV_16                SFRS=0;T2MOD|=0x20;T2MOD&=0xAF
#define    TIMER2_DIV_32                SFRS=0;T2MOD|=0x30;T2MOD&=0xBF
#define    TIMER2_DIV_64                SFRS=0;T2MOD|=0x40;T2MOD&=0xCF
#define    TIMER2_DIV_128               SFRS=0;T2MOD|=0x50;T2MOD&=0xDF
#define    TIMER2_DIV_256               SFRS=0;T2MOD|=0x60;T2MOD&=0xEF
#define    TIMER2_DIV_512               SFRS=0;T2MOD|=0x70
#define    TIMER2_DELAY_MODE            SFRS=0;T2CON&=~SET_BIT0;T2MOD|=SET_BIT7;T2MOD|=SET_BIT3
#define    TIMER2_CAPTURE_MODE          SFRS=0;T2CON|=SET_BIT0;T2MOD&=~SET_BIT7;T2MOD|=SET_BIT2
#define    TIMER2_Auto_Reload_Delay_Mode        SFRS=0;T2CON&=~SET_BIT0;T2MOD|=SET_BIT7;T2MOD|=SET_BIT3
#define    TIMER2_Compare_Capture_Mode          SFRS=0;T2CON|=SET_BIT0;T2MOD&=~SET_BIT7;T2MOD|=SET_BIT2
/*-------------------- Timer3 basic define --------------------*/
#define    TIMER3_DIV_1                 SFRS=0;T3CON&=0xF8;
#define    TIMER3_DIV_2                 SFRS=0;T3CON&=0xF8;T3CON|=0x01
#define    TIMER3_DIV_4                 SFRS=0;T3CON&=0xF8;T3CON|=0x02
#define    TIMER3_DIV_8                 SFRS=0;T3CON&=0xF8;T3CON|=0x03
#define    TIMER3_DIV_16                SFRS=0;T3CON&=0xF8;T3CON|=0x04
#define    TIMER3_DIV_32                SFRS=0;T3CON&=0xF8;T3CON|=0x05
#define    TIMER3_DIV_64                SFRS=0;T3CON&=0xF8;T3CON|=0x06
#define    TIMER3_DIV_128               SFRS=0;T3CON|=0x07
/*-------------------- Timer2 Capture define --------------------*/
/*--- Falling Edge -----*/
#define    ENABLE_TIMER2_CAP0_FALLINGEDGE    SFRS=1;CAPCON1&=0xFC;CAPCON0|=SET_BIT4;CAPCON2|=SET_BIT4
#define    ENABLE_TIMER2_CAP1_FALLINGEDGE    SFRS=1;CAPCON1&=0xF3;CAPCON0|=SET_BIT5;CAPCON0|=SET_BIT5
#define    ENABLE_TIMER2_CAP2_FALLINGEDGE    SFRS=1;CAPCON1&=0x0F;CAPCON0|=SET_BIT6;CAPCON2|=SET_BIT6
/*----- Rising edge ----*/
#define    ENABLE_TIMER2_CAP0_RISINGEDGE     SFRS=1;CAPCON1&=0xFC;CAPCON1|=0x01;CAPCON0|=SET_BIT4;CAPCON2|=SET_BIT4
#define    ENABLE_TIMER2_CAP1_RISINGEDGE     SFRS=1;CAPCON1&=0xF3;CAPCON1|=0x04;CAPCON0|=SET_BIT5;CAPCON2|=SET_BIT5
#define    ENABLE_TIMER2_CAP2_RISINGEDGE     SFRS=1;CAPCON1&=0x0F;CAPCON1|=0x10;CAPCON0|=SET_BIT6;CAPCON2|=SET_BIT6
/*-----BOTH  edge ----*/
#define    ENABLE_TIMER2_CAP0_EITHEREDGE     SFRS=1;CAPCON1&=0xFC;CAPCON1|=0x02;CAPCON0|=SET_BIT4;CAPCON2|=SET_BIT4
#define    ENABLE_TIMER2_CAP1_EITHEREDGE     SFRS=1;CAPCON1&=0xF3;CAPCON1|=0x08;CAPCON0|=SET_BIT5;CAPCON2|=SET_BIT5
#define    ENABLE_TIMER2_CAP2_EITHEREDGE     SFRS=1;CAPCON1&=0x0F;CAPCON1|=0x20;CAPCON0|=SET_BIT6;CAPCON2|=SET_BIT6;
/*----- Capture disable ----*/
#define    DISABLE_TIMER2_CAP0                SFRS=1;CAPCON0&=~SET_BIT6
#define    DISABLE_TIMER2_CAP1                SFRS=1;CAPCON0&=~SET_BIT5
#define    DISABLE_TIMER2_CAP2                SFRS=1;CAPCON0&=~SET_BIT4

/* ------------------------ TIMER Value define  ------------------------- *
* setting is base on " option -> C51 -> Preprocesser Symbols -> Define "  */
/* define timer base value Fsys = 11.0592MHz  */
#define    TIMER_DIV12_VALUE_10us_FOSC_110592      65536-9      //9*12/11.0592 = 10 uS,      // Timer divider = 12   for TM0/TM1
#define    TIMER_DIV12_VALUE_1ms_FOSC_110592        65536-923    //923*12/11.0592 = 1 mS      // Timer divider = 12
#define    TIMER_DIV12_VALUE_10ms_FOSC_110592      65536-9216    //18432*12/22118400 = 10 ms    // Timer divider = 12
#define    TIMER_DIV4_VALUE_10us_FOSC_110592        65536-28    //28*4/11.0592 = 10 uS      // Timer divider = 4  for TM2/TM3
#define    TIMER_DIV4_VALUE_1ms_FOSC_110592        65536-2765    //2765*4/11.0592 = 1 mS      // Timer divider = 4
#define    TIMER_DIV4_VALUE_100us_FOSC_110592      65536-277    //553*4/22118400 = 100 us    // Timer divider = 4
#define    TIMER_DIV4_VALUE_200us_FOSC_110592      65536-553    //1106*4/22118400 = 200 us    // Timer divider = 4
#define    TIMER_DIV4_VALUE_500us_FOSC_110592      65536-1383    //2765*4/22118400 = 500 us    // Timer divider = 4    
#define    TIMER_DIV16_VALUE_10ms_FOSC_110592      65536-6912    //1500*16/22118400 = 10 ms    // Timer divider = 16
#define    TIMER_DIV64_VALUE_30ms_FOSC_110592      65536-5184    //10368*64/22118400 = 30 ms    // Timer divider = 64
#define    TIMER_DIV128_VALUE_100ms_FOSC_110592    65536-8640    //17280*128/22118400 = 100 ms    // Timer divider = 128
#define    TIMER_DIV128_VALUE_200ms_FOSC_110592    65536-17280    //34560*128/22118400 = 200 ms    // Timer divider = 128
#define    TIMER_DIV256_VALUE_500ms_FOSC_110592    65536-21600    //43200*256/22118400 = 500 ms     // Timer divider = 256
#define    TIMER_DIV512_VALUE_1s_FOSC_110592        65536-21600    //43200*512/22118400 = 1 s    // Timer divider = 512
/* define timer base value Fsys = 16MHz */
#define    TIMER_DIV12_VALUE_10us_FOSC_160000      65536-8    //13*12/16000000 = 10 uS,        // Timer divider = 12 for TM0/TM1
#define    TIMER_DIV12_VALUE_100us_FOSC_160000      65536-130    //130*12/16000000 = 10 uS,      // Timer divider = 12 
#define    TIMER_DIV12_VALUE_1ms_FOSC_160000        65536-1334    //1334*12/16000000 = 1 mS,       // Timer divider = 12 
#define    TIMER_DIV12_VALUE_10ms_FOSC_160000      65536-13334    //13334*12/16000000 = 10 mS     // Timer divider = 12 
#define    TIMER_DIV12_VALUE_40ms_FOSC_160000      65536-53336    //53336*12/16000000 = 40 ms      // Timer divider = 12 
#define    TIMER_DIV4_VALUE_10us_FOSC_160000        65536-30    //40*4/16000000 = 10 uS,        // Timer divider = 4  for TM2/TM3
#define    TIMER_DIV4_VALUE_100us_FOSC_160000      65536-400    //400*4/16000000 = 100 us        // Timer divider = 4
#define    TIMER_DIV4_VALUE_200us_FOSC_160000      65536-800    //800*4/16000000 = 200 us        // Timer divider = 4
#define    TIMER_DIV4_VALUE_416us_FOSC_160000      65536-1650
#define    TIMER_DIV4_VALUE_500us_FOSC_160000      65536-2000    //2000*4/16000000 = 500 us      // Timer divider = 4
#define    TIMER_DIV4_VALUE_1ms_FOSC_160000        65536-4000    //4000*4/16000000 = 1 mS,       // Timer divider = 4
#define    TIMER_DIV4_VALUE_10ms_FOSC_160000        65536-40000    //40000*4/16000000 = 10 mS,       // Timer divider = 4
#define    TIMER_DIV16_VALUE_10ms_FOSC_160000      65536-10000    //10000*16/16000000 = 10 ms      // Timer  divider = 16
#define    TIMER_DIV64_VALUE_30ms_FOSC_160000      65536-7500    //7500*64/16000000 = 30 ms      // Timer divider = 64
#define    TIMER_DIV128_VALUE_1ms_FOSC_160000      65536-125      //125*128/16000000 = 1 ms    // Timer divider = 128
#define    TIMER_DIV128_VALUE_10ms_FOSC_160000      65536-1250    //1250*128/16000000 = 10 ms    // Timer divider = 128
#define    TIMER_DIV128_VALUE_100ms_FOSC_160000    65536-12500    //12500*128/16000000 = 100 ms    // Timer divider = 128
#define    TIMER_DIV128_VALUE_200ms_FOSC_160000    65536-25000    //25000*128/16000000 = 200 ms    // Timer divider = 128
#define    TIMER_DIV256_VALUE_500ms_FOSC_160000    65536-31250    //31250*256/16000000 = 500 ms   // Timer divider = 256
#define    TIMER_DIV512_VALUE_100ms_FOSC_160000    65536-3125    //3125*512/16000000 = 100ms.      // Timer Divider = 512
#define    TIMER_DIV512_VALUE_1s_FOSC_160000        65536-31250    //31250*512/16000000 = 1 s.      // Timer Divider = 512
/* define timer base value Fsys = 16.6MHz */
#define    TIMER_DIV12_VALUE_10us_FOSC_166000      65536-14    //14*12/16600000 = 10 uS,        // Timer divider = 12 for TM0/TM1
#define    TIMER_DIV12_VALUE_100us_FOSC_166000      65536-138    //138*12/16600000 = 100 uS,      // Timer divider = 12 
#define    TIMER_DIV12_VALUE_1ms_FOSC_166000        65536-1384  //1384*12/16600000 = 1 mS,       // Timer divider = 12 
#define    TIMER_DIV12_VALUE_10ms_FOSC_166000      65536-13834  //13834*12/16600000 = 10 mS     // Timer divider = 12 
#define    TIMER_DIV12_VALUE_40ms_FOSC_166000      65536-55333  //55333*12/16600000 = 40 ms      // Timer divider = 12 
#define    TIMER_DIV4_VALUE_10us_FOSC_166000        65536-41    //41*4/16600000 = 10 uS,        // Timer divider = 4  for TM2/TM3
#define    TIMER_DIV4_VALUE_100us_FOSC_166000      65536-415    //415*4/16600000 = 100 us        // Timer divider = 4
#define    TIMER_DIV4_VALUE_200us_FOSC_166000      65536-830    //830*4/16600000 = 200 us        // Timer divider = 4
#define    TIMER_DIV4_VALUE_500us_FOSC_166000      65536-2075  //2075*4/16600000 = 500 us      // Timer divider = 4
#define    TIMER_DIV4_VALUE_1ms_FOSC_166000        65536-4150  //4150*4/16600000 = 1 mS,       // Timer divider = 4
#define    TIMER_DIV16_VALUE_10ms_FOSC_166000      65536-10375  //10375*16/16600000 = 10 ms      // Timer  divider = 16
#define    TIMER_DIV64_VALUE_30ms_FOSC_166000      65536-7781  //7781*64/16600000 = 30 ms      // Timer divider = 64
#define    TIMER_DIV128_VALUE_100ms_FOSC_166000    65536-12969  //12969*128/16600000 = 100 ms    // Timer divider = 128
#define    TIMER_DIV128_VALUE_200ms_FOSC_166000    65536-25937  //25937*128/16600000 = 200 ms    // Timer divider = 128
#define    TIMER_DIV256_VALUE_500ms_FOSC_166000    65536-32422  //32422*256/16600000 = 500 ms   // Timer divider = 256
#define    TIMER_DIV512_VALUE_1s_FOSC_166000        65536-32421  //32421*512/16600000 = 1 s.      // Timer Divider = 512
/* define timer base value Fsys = 18.432MHz */
#define    TIMER_DIV12_VALUE_10us_FOSC_184320      65536-15        //15*12/18.432 = 10 uS,  Timer Clock = Fsys/12
#define    TIMER_DIV12_VALUE_1ms_FOSC_184320        65536-1536      //1536*12/18.432 = 1 mS, Timer Clock = Fsys/12
#define    TIMER_DIV4_VALUE_10us_FOSC_184320        65536-46        //46*4/18.432 = 10 uS,   Timer Clock = Fsys/4
#define    TIMER_DIV4_VALUE_1ms_FOSC_184320        65536-4608      //4608*4/18.432 = 1 mS,  Timer Clock = Fsys/4
/* define timer base value Fsys = 20 MHz*/
#define    TIMER_DIV12_VALUE_10us_FOSC_200000      65536-17    //17*12/20000000 = 10 uS,  Timer Clock = Fsys/12
#define    TIMER_DIV12_VALUE_1ms_FOSC_200000        65536-1667      //1667*12/20000000 = 1 mS, Timer Clock = Fsys/12
#define    TIMER_DIV4_VALUE_10us_FOSC_200000        65536-50        //50*4/20000000 = 10 uS,    Timer Clock = Fsys/4
#define    TIMER_DIV4_VALUE_1ms_FOSC_200000        65536-5000      //5000*4/20000000 = 1 mS,   Timer Clock = Fsys/4
/* define timer base value Fsys = 22.1184 MHz  */
#define    TIMER_DIV12_VALUE_10us_FOSC_221184      65536-18         //18*12/22118400 = 10 uS,        // Timer divider = 12
#define    TIMER_DIV12_VALUE_100us_FOSC_221184      65536-184       //184*12/22118400 = 10 uS,        // Timer divider = 12
#define    TIMER_DIV12_VALUE_1ms_FOSC_221184        65536-1843      //1843*12/22118400 = 1 mS,       // Timer divider = 12
#define    TIMER_DIV12_VALUE_10ms_FOSC_221184      65536-18432      //18432*12/22118400 = 10 ms      // Timer divider = 12
#define    TIMER_DIV4_VALUE_10us_FOSC_221184        65536-56      //9*4/22118400 = 10 uS,          // Timer divider = 4
#define    TIMER_DIV4_VALUE_1ms_FOSC_221184        65536-5530      //923*4/22118400 = 1 mS,         // Timer divider = 4
#define    TIMER_DIV4_VALUE_100us_FOSC_221184      65536-553      //553*4/22118400 = 100 us      // Timer divider = 4
#define    TIMER_DIV4_VALUE_200us_FOSC_221184      65536-1106      //1106*4/22118400 = 200 us      // Timer divider = 4
#define    TIMER_DIV4_VALUE_500us_FOSC_221184      65536-2765      //2765*4/22118400 = 500 us      // Timer divider = 4    
#define    TIMER_DIV16_VALUE_10ms_FOSC_221184      65536-13824      //1500*16/22118400 = 10 ms      // Timer divider = 16
#define    TIMER_DIV64_VALUE_30ms_FOSC_221184      65536-10368      //10368*64/22118400 = 30 ms      // Timer divider = 64
#define    TIMER_DIV128_VALUE_100ms_FOSC_221184    65536-17280      //17280*128/22118400 = 100 ms      // Timer divider = 128
#define    TIMER_DIV128_VALUE_200ms_FOSC_221184    65536-34560      //34560*128/22118400 = 200 ms      // Timer divider = 128
#define    TIMER_DIV256_VALUE_500ms_FOSC_221184    65536-43200      //43200*256/22118400 = 500 ms       // Timer divider = 256
#define    TIMER_DIV512_VALUE_1s_FOSC_221184        65536-43200      //43200*512/22118400 = 1 s      // Timer divider = 512
/* define timer base value Fsys = 24 MHz*/
#define    TIMER_DIV12_VALUE_10us_FOSC_240000      65536-20        //20*12/24000000 = 10 uS,        // Timer divider = 12
#define    TIMER_DIV12_VALUE_100us_FOSC_240000      65536-200        //130*12/16000000 = 10 uS,      // Timer divider = 12 
#define    TIMER_DIV12_VALUE_1ms_FOSC_240000        65536-2000      //2000*12/24000000 = 1 mS,       // Timer divider = 12
#define    TIMER_DIV12_VALUE_10ms_FOSC_240000      65536-20000      //2000*12/24000000 = 10 mS       // Timer divider = 12
#define    TIMER_DIV4_VALUE_10us_FOSC_240000        65536-60        //60*4/24000000 = 10 uS,          // Timer divider = 4
#define    TIMER_DIV4_VALUE_100us_FOSC_240000      65536-600        //600*4/24000000 = 100 us      // Timer divider = 4
#define    TIMER_DIV4_VALUE_200us_FOSC_240000      65536-1200      //1200*4/24000000 = 200 us      // Timer divider = 4
#define    TIMER_DIV4_VALUE_500us_FOSC_240000      65536-3000      //3000*4/24000000 = 500 us      // Timer divider = 4
#define    TIMER_DIV4_VALUE_1ms_FOSC_240000        65536-6000      //6000*4/24000000 = 1 mS,         // Timer divider = 4
#define    TIMER_DIV4_VALUE_10ms_FOSC_240000        65536-60000      //60000*4/2400000 = 10 ms
#define    TIMER_DIV16_VALUE_10ms_FOSC_240000      65536-15000      //15000*16/24000000 = 10 ms      // Timer divider = 16
#define    TIMER_DIV64_VALUE_30ms_FOSC_240000      65536-11250      //11250*64/24000000 = 30 ms      // Timer divider = 64
#define    TIMER_DIV128_VALUE_1ms_FOSC_240000      65536-187        //187*128/24000000 = 1 ms      // Timer divider = 128
#define    TIMER_DIV128_VALUE_10ms_FOSC_240000      65536-1875      //1875*128/24000000 = 10 ms      // Timer divider = 128
#define    TIMER_DIV128_VALUE_100ms_FOSC_240000    65536-18750      //18750*128/24000000 = 100 ms      // Timer divider = 128
#define    TIMER_DIV128_VALUE_200ms_FOSC_240000    65536-37500      //37500*128/24000000 = 200 ms      // Timer divider = 128
#define    TIMER_DIV256_VALUE_500ms_FOSC_240000    65536-46875      //46875*256/24000000 = 500 ms       // Timer divider = 256
#define    TIMER_DIV512_VALUE_10ms_FOSC_240000      65536-468        //468*512/24000000 = 100 ms       // Timer divider = 512  
#define    TIMER_DIV512_VALUE_100ms_FOSC_240000    65536-4687      //4687*512/24000000 = 100 ms       // Timer divider = 512
#define    TIMER_DIV512_VALUE_500ms_FOSC_240000    65536-23437      //4687*512/24000000 = 500 ms       // Timer divider = 512
#define    TIMER_DIV512_VALUE_1s_FOSC_240000        65536-46875      //46875*512/24000000 = 1 s.        // Timer Divider = 512


/*****************************************************************************************
* For PWM setting 
*****************************************************************************************/
/*--------- PMW clock source select define ---------------------*/
#define    PWM_CLOCK_FSYS                    SFRS=0;CKCON&=CLR_BIT6
#define    PWM_CLOCK_TIMER1                 SFRS=0;CKCON|=SET_BIT6
/*---------- PWM0 clock devide define ----------------------------*/
#define    PWM0_CLOCK_DIV_1                 SFRS=1;PWM0CON1&=0xF8
#define    PWM0_CLOCK_DIV_2                 SFRS=1;PWM0CON1&=0xF8;PWM0CON1|=0x01
#define    PWM0_CLOCK_DIV_4                 SFRS=1;PWM0CON1&=0xF8;PWM0CON1|=0x02
#define    PWM0_CLOCK_DIV_8                 SFRS=1;PWM0CON1&=0xF8;PWM0CON1|=0x03
#define    PWM0_CLOCK_DIV_16                SFRS=1;PWM0CON1&=0xF8;PWM0CON1|=0x04
#define    PWM0_CLOCK_DIV_32                SFRS=1;PWM0CON1&=0xF8;PWM0CON1|=0x05
#define    PWM0_CLOCK_DIV_64                SFRS=1;PWM0CON1&=0xF8;PWM0CON1|=0x06
#define    PWM0_CLOCK_DIV_128               SFRS=1;PWM0CON1&=0xF8;PWM0CON1|=0x07
/*---------- PWM1 clock devide define ----------------------------*/
#define    PWM1_CLOCK_DIV_1                 SFRS=2;PWM1CON1&=0xF8               
#define    PWM1_CLOCK_DIV_2                 SFRS=2;PWM1CON1&=0xF8;PWM1CON1|=0x01
#define    PWM1_CLOCK_DIV_4                 SFRS=2;PWM1CON1&=0xF8;PWM1CON1|=0x02
#define    PWM1_CLOCK_DIV_8                 SFRS=2;PWM1CON1&=0xF8;PWM1CON1|=0x03
#define    PWM1_CLOCK_DIV_16                SFRS=2;PWM1CON1&=0xF8;PWM1CON1|=0x04
#define    PWM1_CLOCK_DIV_32                SFRS=2;PWM1CON1&=0xF8;PWM1CON1|=0x05
#define    PWM1_CLOCK_DIV_64                SFRS=2;PWM1CON1&=0xF8;PWM1CON1|=0x06 
#define    PWM1_CLOCK_DIV_128               SFRS=2;PWM1CON1&=0xF8;PWM1CON1|=0x07
/*--------- PWM0 type define ------------------------------------*/
#define    PWM0_EDGE_TYPE                   SFRS=1;PWM0CON1&=CLR_BIT4
#define    PWM0_CENTER_TYPE                 SFRS=1;PWM0CON1|=SET_BIT4
/*--------- PWM1 type define ------------------------------------*/
#define    PWM1_EDGE_TYPE                   SFRS=2;PWM1CON1&=CLR_BIT4
#define    PWM1_CENTER_TYPE                 SFRS=2;PWM1CON1|=SET_BIT4
/*--------- PWM0 mode define ------------------------------------*/
#define    PWM0_IMDEPENDENT_MODE            SFRS=1;PWM0CON1&=0x3F
#define    PWM0_COMPLEMENTARY_MODE          SFRS=1;PWM0CON1&=0x3F;PWM0CON1|=SET_BIT6
#define    PWM0_SYNCHRONIZED_MODE           SFRS=1;PWM0CON1&=0x3F;PWM0CON1|=SET_BIT7
#define    ENABLE_PWM0_GP_MODE              SFRS=1;PWM0CON1|=SET_BIT5
#define    DISABLE_PWM0_GP_MODE             SFRS=1;PWM0CON1&=CLR_BIT5
/*--------- PWM1 mode define ------------------------------------*/
#define    PWM1_IMDEPENDENT_MODE            SFRS=2;PWM1CON1&=0x3F
#define    PWM1_COMPLEMENTARY_MODE          SFRS=2;PWM1CON1&=0x3F;PWM0CON1|=SET_BIT6
#define    PWM1_SYNCHRONIZED_MODE           SFRS=2;PWM1CON1&=0x3F;PWM0CON1|=SET_BIT7
#define    ENABLE_PWM1_GP_MODE              SFRS=2;PWM1CON1|=SET_BIT5
#define    DISABLE_PWM1_GP_MODE             SFRS=2;PWM1CON1&=CLR_BIT5
/*--------- PMW0 interrupt setting ------------------------------*/
#define    PWM0_FALLING_INT                 SFRS=1;PWM0INTC&=0xCF
#define    PWM0_RISING_INT                  SFRS=1;PWM0INTC&=0xCF;PWM0INTC|=0x10
#define    PWM0_CENTRAL_POINT_INT           SFRS=1;PWM0INTC&=0xCFP;WM0INTC|=0x20
#define    PWM0_PERIOD_END_INT              SFRS=1;PWM0INTC&=0xCF;PWM0INTC|=0x30
/*--------- PMW1 interrupt setting ------------------------------*/
#define    PWM1_FALLING_INT                 SFRS=2;PWM1INTC&=0xCF               
#define    PWM1_RISING_INT                  SFRS=2;PWM1INTC&=0xCF;PWM0INTC|=0x10
#define    PWM1_CENTRAL_POINT_INT           SFRS=2;PWM1INTC&=0xCFP;WM0INTC|=0x20
#define    PWM1_PERIOD_END_INT              SFRS=2;PWM1INTC&=0xCF;PWM0INTC|=0x30
/*--------- PWM0 interrupt pin select ---------------------------*/
#define    ENABLE_PWM0_CHANNEL0_INT         SFRS=1;PWM0INTC&=0xF8
#define    ENABLE_PWM0_CHANNEL1_INT         SFRS=1;PWM0INTC&=0xF8;PWM0INTC|=0x01
#define    ENABLE_PWM0_CHANNEL2_INT         SFRS=1;PWM0INTC&=0xF8;PWM0INTC|=0x02
#define    ENABLE_PWM0_CHANNEL3_INT         SFRS=1;PWM0INTC&=0xF8;PWM0INTC|=0x03
#define    ENABLE_PWM0_CHANNEL4_INT         SFRS=1;PWM0INTC&=0xF8;PWM0INTC|=0x04
#define    ENABLE_PWM0_CHANNEL5_INT         SFRS=1;PWM0INTC&=0xF8;PWM0INTC|=0x05
/*--------- PWM interrupt pin select ---------------------------*/
#define    ENABLE_PWM1_CHANNEL0_INT         SFRS=2;PWM1INTC&=0xF8
#define    ENABLE_PWM1_CHANNEL1_INT         SFRS=2;PWM1INTC&=0xF8;PWM0INTC|=0x01
#define    ENABLE_PWM1_CHANNEL2_INT         SFRS=2;PWM1INTC&=0xF8;PWM0INTC|=0x02
#define    ENABLE_PWM1_CHANNEL3_INT         SFRS=2;PWM1INTC&=0xF8;PWM0INTC|=0x03
#define    ENABLE_PWM1_CHANNEL4_INT         SFRS=2;PWM1INTC&=0xF8;PWM0INTC|=0x04
#define    ENABLE_PWM1_CHANNEL5_INT         SFRS=2;PWM1INTC&=0xF8;PWM0INTC|=0x05
/*--------- PWM0 Dead time setting ------------------------------*/                                          
#define    ENABLE_PWM0_CHANNEL45_DEADTIME   SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN|=0x04;EA=BIT_TMP
#define    ENABLE_PWM0_CHANNEL34_DEADTIME   SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN|=0x02;EA=BIT_TMP
#define    ENABLE_PWM0_CHANNEL01_DEADTIME   SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN|=0x01;EA=BIT_TMP
#define    ENABLE_PWM0_ALLCHANNEL_DEADTIME  SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN|=0x07;EA=BIT_TMP                                       
/*--------- PWM1 Dead time setting ------------------------------*/                                          
#define    ENABLE_PWM1_CHANNEL45_DEADTIME   SFRS=2;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM1DTEN=0x04;EA=BIT_TMP
#define    ENABLE_PWM1_CHANNEL34_DEADTIME   SFRS=2;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM1DTEN=0x02;EA=BIT_TMP
#define    ENABLE_PWM1_CHANNEL01_DEADTIME   SFRS=2;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM1DTEN=0x01;EA=BIT_TMP
#define    ENABLE_PWM1_ALLCHANNEL_DEADTIME  SFRS=2;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM1DTEN=0x07;EA=BIT_TMP
/*--------- PMM1 Mask Output ENABLE -----------------------*/ 
#define    ENABLE_PWM0_CHANNEL0_MASK        SFRS=1;PWM0MEN|=SET_BIT0
#define    ENABLE_PWM0_CHANNEL1_MASK        SFRS=1;PWM0MEN|=SET_BIT1
#define    ENABLE_PWM0_CHANNEL2_MASK        SFRS=1;PWM0MEN|=SET_BIT2
#define    ENABLE_PWM0_CHANNEL3_MASK        SFRS=1;PWM0MEN|=SET_BIT3
#define    ENABLE_PWM0_CHANNEL4_MASK        SFRS=1;PWM0MEN|=SET_BIT4
#define    ENABLE_PWM0_CHANNEL5_MASK        SFRS=1;PWM0MEN|=SET_BIT5
#define    DISABLE_PWM0_CHANNEL0_MASK       SFRS=1;PWM0MEN&=CLR_BIT0
#define    DISABLE_PWM0_CHANNEL1_MASK       SFRS=1;PWM0MEN&=CLR_BIT1
#define    DISABLE_PWM0_CHANNEL2_MASK       SFRS=1;PWM0MEN&=CLR_BIT2
#define    DISABLE_PWM0_CHANNEL3_MASK       SFRS=1;PWM0MEN&=CLR_BIT3
#define    DISABLE_PWM0_CHANNEL4_MASK       SFRS=1;PWM0MEN&=CLR_BIT4
#define    DISABLE_PWM0_CHANNEL5_MASK       SFRS=1;PWM0MEN&=CLR_BIT5
/*--------- PMM1 Mask Output ENABLE -----------------------*/ 
#define    ENABLE_PWM1_CHANNEL0_MASK        SFRS=2;PWM1MEN|=SET_BIT0
#define    ENABLE_PWM1_CHANNEL1_MASK        SFRS=2;PWM1MEN|=SET_BIT1
#define    ENABLE_PWM1_CHANNEL2_MASK        SFRS=2;PWM1MEN|=SET_BIT2
#define    ENABLE_PWM1_CHANNEL3_MASK        SFRS=2;PWM1MEN|=SET_BIT3
#define    ENABLE_PWM1_CHANNEL4_MASK        SFRS=2;PWM1MEN|=SET_BIT4
#define    ENABLE_PWM1_CHANNEL5_MASK        SFRS=2;PWM1MEN|=SET_BIT5
#define    DISABLE_PWM1_CHANNEL0_MASK       SFRS=2;PWM1MEN&=CLR_BIT0
#define    DISABLE_PWM1_CHANNEL1_MASK       SFRS=2;PWM1MEN&=CLR_BIT1
#define    DISABLE_PWM1_CHANNEL2_MASK       SFRS=2;PWM1MEN&=CLR_BIT2
#define    DISABLE_PWM1_CHANNEL3_MASK       SFRS=2;PWM1MEN&=CLR_BIT3
#define    DISABLE_PWM1_CHANNEL4_MASK       SFRS=2;PWM1MEN&=CLR_BIT4
#define    DISABLE_PWM1_CHANNEL5_MASK       SFRS=2;PWM1MEN&=CLR_BIT5
/*--------- PMM1 Mask Output Value -----------------------*/ 
#define    PWM0_CHANNEL0_MASK_0             SFRS=1;PWM0MD&=CLR_BIT0
#define    PWM0_CHANNEL1_MASK_0             SFRS=1;PWM0MD&=CLR_BIT1
#define    PWM0_CHANNEL2_MASK_0             SFRS=1;PWM0MD&=CLR_BIT2
#define    PWM0_CHANNEL3_MASK_0             SFRS=1;PWM0MD&=CLR_BIT3
#define    PWM0_CHANNEL4_MASK_0             SFRS=1;PWM0MD&=CLR_BIT4
#define    PWM0_CHANNEL5_MASK_0             SFRS=1;PWM0MD&=CLR_BIT5
#define    PWM0_CHANNEL0_MASK_1             SFRS=1;PWM0MD|=SET_BIT0
#define    PWM0_CHANNEL1_MASK_1             SFRS=1;PWM0MD|=SET_BIT1
#define    PWM0_CHANNEL2_MASK_1             SFRS=1;PWM0MD|=SET_BIT2
#define    PWM0_CHANNEL3_MASK_1             SFRS=1;PWM0MD|=SET_BIT3
#define    PWM0_CHANNEL4_MASK_1             SFRS=1;PWM0MD|=SET_BIT4
#define    PWM0_CHANNEL5_MASK_1             SFRS=1;PWM0MD|=SET_BIT5
/*--------- PMM1 Mask Output Value -----------------------*/  
#define    PWM1_CHANNEL0_MASK_0             SFRS=2;PWM1MD&=CLR_BIT0
#define    PWM1_CHANNEL1_MASK_0             SFRS=2;PWM1MD&=CLR_BIT1
#define    PWM1_CHANNEL2_MASK_0             SFRS=2;PWM1MD&=CLR_BIT2
#define    PWM1_CHANNEL3_MASK_0             SFRS=2;PWM1MD&=CLR_BIT3
#define    PWM1_CHANNEL4_MASK_0             SFRS=2;PWM1MD&=CLR_BIT4
#define    PWM1_CHANNEL5_MASK_0             SFRS=2;PWM1MD&=CLR_BIT5
#define    PWM1_CHANNEL0_MASK_1             SFRS=2;PWM1MD|=SET_BIT0
#define    PWM1_CHANNEL1_MASK_1             SFRS=2;PWM1MD|=SET_BIT1
#define    PWM1_CHANNEL2_MASK_1             SFRS=2;PWM1MD|=SET_BIT2
#define    PWM1_CHANNEL3_MASK_1             SFRS=2;PWM1MD|=SET_BIT3
#define    PWM1_CHANNEL4_MASK_1             SFRS=2;PWM1MD|=SET_BIT4
#define    PWM1_CHANNEL5_MASK_1             SFRS=2;PWM1MD|=SET_BIT5
/*--------- PMM0 Fault break Setting -----------------------*/
#define    ENABLE_PWM0_FB                   SFRS=1;PWM0CON1|=SET_BIT3
#define    DISABLE_PWM0_FB                  SFRS=1;PWM0CON1&=CLR_BIT3
#define    PWM0_FB_INPUT_FALLINGEDGE        SFRS=1;PWM0FBD&=CLR_BIT6
#define    PWM0_FB_INPUT_RISINGEDGE         SFRS=1;PWM0FBD|=SET_BIT6
#define    PWM0_CHANNEL0_FB_OUTPUT_0        SFRS=1;PWM0FBD&=CLR_BIT0
#define    PWM0_CHANNEL1_FB_OUTPUT_0        SFRS=1;PWM0FBD&=CLR_BIT1
#define    PWM0_CHANNEL2_FB_OUTPUT_0        SFRS=1;PWM0FBD&=CLR_BIT2
#define    PWM0_CHANNEL3_FB_OUTPUT_0        SFRS=1;PWM0FBD&=CLR_BIT3
#define    PWM0_CHANNEL4_FB_OUTPUT_0        SFRS=1;PWM0FBD&=CLR_BIT4
#define    PWM0_CHANNEL5_FB_OUTPUT_0        SFRS=1;PWM0FBD&=CLR_BIT5
#define    PWM0_CHANNEL0_FB_OUTPUT_1        SFRS=1;PWM0FBD|=SET_BIT0
#define    PWM0_CHANNEL1_FB_OUTPUT_1        SFRS=1;PWM0FBD|=SET_BIT1
#define    PWM0_CHANNEL2_FB_OUTPUT_1        SFRS=1;PWM0FBD|=SET_BIT2
#define    PWM0_CHANNEL3_FB_OUTPUT_1        SFRS=1;PWM0FBD|=SET_BIT3
#define    PWM0_CHANNEL4_FB_OUTPUT_1        SFRS=1;PWM0FBD|=SET_BIT4
#define    PWM0_CHANNEL5_FB_OUTPUT_1        SFRS=1;PWM0FBD|=SET_BIT5
/*--------- PMM1 Fault break Setting -----------------------*/
#define    ENABLE_PWM1_FB                   SFRS=2;PWM1CON1|=SET_BIT3
#define    DISABLE_PWM1_FB                  SFRS=2;PWM1CON1&=CLR_BIT3
#define    PWM1_FB_INPUT_FALLINGEDGE        SFRS=2;PWM1FBD&=CLR_BIT6
#define    PWM1_FB_INPUT_RISINGEDGE         SFRS=2;PWM1FBD|=SET_BIT6
#define    PWM1_CHANNEL0_FB_OUTPUT_0        SFRS=2;PWM1FBD&=CLR_BIT0
#define    PWM1_CHANNEL1_FB_OUTPUT_0        SFRS=2;PWM1FBD&=CLR_BIT1
#define    PWM1_CHANNEL2_FB_OUTPUT_0        SFRS=2;PWM1FBD&=CLR_BIT2
#define    PWM1_CHANNEL3_FB_OUTPUT_0        SFRS=2;PWM1FBD&=CLR_BIT3
#define    PWM1_CHANNEL4_FB_OUTPUT_0        SFRS=2;PWM1FBD&=CLR_BIT4
#define    PWM1_CHANNEL5_FB_OUTPUT_0        SFRS=2;PWM1FBD&=CLR_BIT5
#define    PWM1_CHANNEL0_FB_OUTPUT_1        SFRS=2;PWM1FBD|=SET_BIT0
#define    PWM1_CHANNEL1_FB_OUTPUT_1        SFRS=2;PWM1FBD|=SET_BIT1
#define    PWM1_CHANNEL2_FB_OUTPUT_1        SFRS=2;PWM1FBD|=SET_BIT2
#define    PWM1_CHANNEL3_FB_OUTPUT_1        SFRS=2;PWM1FBD|=SET_BIT3
#define    PWM1_CHANNEL4_FB_OUTPUT_1        SFRS=2;PWM1FBD|=SET_BIT4
#define    PWM1_CHANNEL5_FB_OUTPUT_1        SFRS=2;PWM1FBD|=SET_BIT5
/*--------- PWM0 I/O Polarity Control ---------------------------*/
#define    PWM0_CHANNEL5_OUTPUT_INVERSE     SFRS=1;PWM0NP|=SET_BIT5
#define    PWM0_CHANNEL4_OUTPUT_INVERSE     SFRS=1;PWM0NP|=SET_BIT4
#define    PWM0_CHANNEL3_OUTPUT_INVERSE     SFRS=1;PWM0NP|=SET_BIT3
#define    PWM0_CHANNEL2_OUTPUT_INVERSE     SFRS=1;PWM0NP|=SET_BIT2
#define    PWM0_CHANNEL1_OUTPUT_INVERSE     SFRS=1;PWM0NP|=SET_BIT1
#define    PWM0_CHANNEL0_OUTPUT_INVERSE     SFRS=1;PWM0NP|=SET_BIT0
#define    PWM0_ALL_OUTPUT_INVERSE          SFRS=1;PWM0NP=0xFF
#define    PWM0_CHANNEL5_OUTPUT_NORMAL      SFRS=1;PWM0NP|=SET_BIT5
#define    PWM0_CHANNEL4_OUTPUT_NORMAL      SFRS=1;PWM0NP|=SET_BIT4
#define    PWM0_CHANNEL3_OUTPUT_NORMAL      SFRS=1;PWM0NP|=SET_BIT3
#define    PWM0_CHANNEL2_OUTPUT_NORMAL      SFRS=1;PWM0NP|=SET_BIT2
#define    PWM0_CHANNEL1_OUTPUT_NORMAL      SFRS=1;PWM0NP|=SET_BIT1
#define    PWM0_CHANNEL0_OUTPUT_NORMAL      SFRS=1;PWM0NP|=SET_BIT0
#define    PWM0_ALL_OUTPUT_NORMAL           SFRS=1;PWM0NP=0x00
/*--------- PWM1 I/O Polarity Control ---------------------------*/
#define    PWM1_CHANNEL5_OUTPUT_INVERSE     SFRS=2;PWM1NP|=SET_BIT5
#define    PWM1_CHANNEL4_OUTPUT_INVERSE     SFRS=2;PWM1NP|=SET_BIT4
#define    PWM1_CHANNEL3_OUTPUT_INVERSE     SFRS=2;PWM1NP|=SET_BIT3
#define    PWM1_CHANNEL2_OUTPUT_INVERSE     SFRS=2;PWM1NP|=SET_BIT2
#define    PWM1_CHANNEL1_OUTPUT_INVERSE     SFRS=2;PWM1NP|=SET_BIT1
#define    PWM1_CHANNEL0_OUTPUT_INVERSE     SFRS=2;PWM1NP|=SET_BIT0
#define    PWM1_ALL_OUTPUT_INVERSE          SFRS=2;PWM1NP=0xFF
#define    PWM1_CHANNEL5_OUTPUT_NORMAL      SFRS=2;PWM1NP|=SET_BIT5
#define    PWM1_CHANNEL4_OUTPUT_NORMAL      SFRS=2;PWM1NP|=SET_BIT4
#define    PWM1_CHANNEL3_OUTPUT_NORMAL      SFRS=2;PWM1NP|=SET_BIT3
#define    PWM1_CHANNEL2_OUTPUT_NORMAL      SFRS=2;PWM1NP|=SET_BIT2
#define    PWM1_CHANNEL1_OUTPUT_NORMAL      SFRS=2;PWM1NP|=SET_BIT1
#define    PWM1_CHANNEL0_OUTPUT_NORMAL      SFRS=2;PWM1NP|=SET_BIT0
#define    PWM1_ALL_OUTPUT_NORMAL           SFRS=2;PWM1NP=0x00
/*****************************************************************************************
* For ADC setting 
*****************************************************************************************/
/*---- ADC input setting , disable digital function & enable ADC -------*/
#define    ADC_INPUT_CHANNEL0               SFRS=0;ADCCON0&=0xF0;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT1
#define    ENABLE_ADC_AIN0                  SFRS=0;ADCCON0&=0xF0;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT1
#define    ADC_INPUT_CHANNEL1               SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x01;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT2
#define    ENABLE_ADC_AIN1                  SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x01;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT2
#define    ADC_INPUT_CHANNEL2               SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x02;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT2
#define    ENABLE_ADC_AIN2                  SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x02;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT2
#define    ADC_INPUT_CHANNEL3               SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x03;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT3
#define    ENABLE_ADC_AIN3                  SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x03;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT3
#define    ADC_INPUT_CHANNEL4               SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x04;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT4
#define    ENABLE_ADC_AIN4                  SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x04;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT4
#define    ADC_INPUT_CHANNEL5               SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x05;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT5
#define    ENABLE_ADC_AIN5                  SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x05;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT5
#define    ADC_INPUT_CHANNEL6               SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x06;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT6
#define    ENABLE_ADC_AIN6                  SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x06;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT6
#define    ADC_INPUT_CHANNEL7               SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x07;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT7
#define    ENABLE_ADC_AIN7                  SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x07;ADCCON1|=SET_BIT0;SFRS=1;AINDIDS|=SET_BIT7
#define    ADC_INPUT_VBG                    SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x08;ADCCON1|=SET_BIT0
#define    ENABLE_ADC_BANDGAP               SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x08;ADCCON1|=SET_BIT0
#define    ADC_INPUT_VTEMP                  SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x09;ADCCON1|=SET_BIT0
#define    ADC_INPUT_VLDO                   SFRS=0;ADCCON0&=0xF0;ADCCON0|=0x0A;ADCCON1|=SET_BIT0

/*------ ENABLE ADC pin digital function ---------*/
#define    ENABLE_ADC_CHANNEL0_DIGITAL      SFRS=1;AINDIDS&=CLR_BIT1
#define    ENABLE_ADC_CHANNEL1_DIGITAL      SFRS=1;AINDIDS&=CLR_BIT2
#define    ENABLE_ADC_CHANNEL2_DIGITAL      SFRS=1;AINDIDS&=CLR_BIT2
#define    ENABLE_ADC_CHANNEL3_DIGITAL      SFRS=1;AINDIDS&=CLR_BIT3
#define    ENABLE_ADC_CHANNEL4_DIGITAL      SFRS=1;AINDIDS&=CLR_BIT4
#define    ENABLE_ADC_CHANNEL5_DIGITAL      SFRS=1;AINDIDS&=CLR_BIT5
#define    ENABLE_ADC_CHANNEL6_DIGITAL      SFRS=1;AINDIDS&=CLR_BIT6
#define    ENABLE_ADC_CHANNEL7_DIGITAL      SFRS=1;AINDIDS&=CLR_BIT7
/*------ ADC clock divider ---------*/
#define    ADC_CLOCK_DIV_1                  SFRS=0;ADCSR&=0x8F
#define    ADC_CLOCK_DIV_2                  SFRS=0;ADCSR&=0x8F;ADCSR|=0x10
#define    ADC_CLOCK_DIV_4                  SFRS=0;ADCSR&=0x8F;ADCSR|=0x20
#define    ADC_CLOCK_DIV_8                  SFRS=0;ADCSR&=0x8F;ADCSR|=0x30
#define    ADC_CLOCK_DIV_16                 SFRS=0;ADCSR&=0x8F;ADCSR|=0x40
#define    ADC_CLOCK_DIV_32                 SFRS=0;ADCSR&=0x8F;ADCSR|=0x50
#define    ADC_CLOCK_DIV_64                 SFRS=0;ADCSR&=0x8F;ADCSR|=0x60
#define    ADC_CLOCK_DIV_128                SFRS=0;ADCSR&=0x8F;ADCSR|=0x70
/*------ ADC external trig setting and enable extern trig ------*/
#define    ADC_EXTTRIG_PWM0_FALLINGEDGE     SFRS=0;ADCCON0&=0xCF;ADCCON1&=0xF3;ADCCON1|=SET_BIT1
#define    ADC_EXTTRIG_PWM0_RISINGEDGE      SFRS=0;ADCCON0&=0xCF;ADCCON1&=0xF3;ADCCON1|=SET_BIT4;ADCCON1|=SET_BIT1
#define    ADC_EXTTRIG_PWM2_FALLINGEDGE     SFRS=0;ADCCON0&=0xCF;ADCCON0|=SET_BIT2;ADCCON1&=0xF3;ADCCON1|=SET_BIT1
#define    ADC_EXTTRIG_PWM2_RISINGEDGE      SFRS=0;ADCCON0&=0xCF;ADCCON0|=SET_BIT2;ADCCON1&=0xF3;ADCCON1|=SET_BIT4;ADCCON1|=SET_BIT1
#define    ADC_EXTTRIG_PWM4_FALLINGEDGE     SFRS=0;ADCCON0&=0xCF;ADCCON0|=SET_BIT3;ADCCON1&=0xF3;ADCCON1|=SET_BIT1
#define    ADC_EXTTRIG_PWM4_RISINGEDGE      SFRS=0;ADCCON0&=0xCF;ADCCON0|=SET_BIT3;ADCCON1&=0xF3;ADCCON1|=SET_BIT4;ADCCON1|=SET_BIT1
#define    ADC_EXTTRIG_STADC_FALLINGEDGE    SFRS=0;ADCCON0&=0xCF;ADCCON0|=0x30;ADCCON1&=0xF3;ADCCON1|=SET_BIT1
#define    ADC_EXTTRIG_STADC_RISINGEDGE     SFRS=0;ADCCON0&=0xCF;ADCCON0|=0x30;ADCCON1&=0xF3;ADCCON1|=SET_BIT2;ADCCON1|=SET_BIT1
#define    ADC_EXTTRIG_PWM_CENTRAL          SFRS=0;ADCCON1&=0xF3;ADCCON1|=SET_BIT3;ADCCON1|=SET_BIT1
#define    ADC_EXTTRIG_PWM_END              SFRS=0;ADCCON1&=0xF3;ADCCON1|=0x0C;ADCCON1|=SET_BIT1
/*------ ADC continue mode ------*/
#define    ENABLE_ADC_CONTINUE_MODE                SFRS=0;ADCCON1|=SET_BIT4
#define    ENABLE_ADC_CONTINUE_HALFDONE_INT        SFRS=0;ADCCON1|=SET_BIT5
#define    ENABLE_ADC_CONTINUE_FULLDONE_INT        SFRS=0;ADCCON1&=CLR_BIT5
/*------ ADC disable ------*/
#define    DISABLE_ADC                      SFRS=0;ADCCON1&=CLR_BIT0
/****************************************************************************
  VREF function define
***************************************************************************/
#define    ENABLE_VREF_1538MV      SFRS=1;VRFCON&=0x8F;VRFCON|=0x03;_delay_();VRFCON&=0xFD
#define    ENABLE_VREF_2048MV      SFRS=1;VRFCON&=0x8F;VRFCON|=0x10;VRFCON|=0x03;_delay_();VRFCON&=0xFD
#define    ENABLE_VREF_2560MV      SFRS=1;VRFCON&=0x8F;VRFCON|=0x20;VRFCON|=0x03;_delay_();VRFCON&=0xFD
#define    ENABLE_VREF_3072MV      SFRS=1;VRFCON&=0x8F;VRFCON|=0x30;VRFCON|=0x03;_delay_();VRFCON&=0xFD
#define    ENABLE_VREF_4096MV      SFRS=1;VRFCON&=0x8F;VRFCON|=0x40;VRFCON|=0x03;_delay_();VRFCON&=0xFD

/****************************************************************************
  ACMP function define
***************************************************************************/
#define    ENABLE_ACMP0_POSSELP25_NEGSELP24   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0x01
#define    ENABLE_ACMP0_POSSELP25_NEGSELCRV   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0x11;SFRS=0x02;ACMPCR2|=SET_BIT0
#define    ENABLE_ACMP0_POSSELP25_NEGSELVBG   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0x21
#define    ENABLE_ACMP0_POSSELP25_NEGSELP20   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0x31
#define    ENABLE_ACMP0_POSSELP23_NEGSELP24   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0x41
#define    ENABLE_ACMP0_POSSELP23_NEGSELCRV   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0x51;SFRS=0x02;ACMPCR2|=SET_BIT0
#define    ENABLE_ACMP0_POSSELP23_NEGSELVBG   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0x61
#define    ENABLE_ACMP0_POSSELP23_NEGSELP20   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0x71
#define    ENABLE_ACMP0_POSSELP21_NEGSELP24   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0x81
#define    ENABLE_ACMP0_POSSELP21_NEGSELCRV   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0x91;SFRS=0x02;ACMPCR2|=SET_BIT0
#define    ENABLE_ACMP0_POSSELP21_NEGSELVBG   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0xA1
#define    ENABLE_ACMP0_POSSELP21_NEGSELP20   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0xB1
#define    ENABLE_ACMP0_POSSELP31_NEGSELP24   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0xC1
#define    ENABLE_ACMP0_POSSELP31_NEGSELCRV   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0xD1;SFRS=0x02;ACMPCR2|=SET_BIT0
#define    ENABLE_ACMP0_POSSELP31_NEGSELVBG   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0xE1
#define    ENABLE_ACMP0_POSSELP31_NEGSELP20   SFRS=0;ACMPCR0&=0x0F;ACMPCR0|=0xF1
#define    ENABLE_ACMP0_HYSEN                 SFRS=0;ACMPCR0|=SET_BIT2
#define    DISABLE_ACMP0_HYSEN                SFRS=0;ACMPCR0&=CLR_BIT2
#define    ENABLE_ACMP0_PD_WAKEUP             SFRS=0;ACMPCR0|=SET_BIT3
#define    DISABLE_ACMP0_PD_WAKEUP            SFRS=0;ACMPCR0&=CLR_BIT3
#define    ENABLE_ACMP0_INT                   SFRS=0;ACMPCR0|=SET_BIT2
#define    DISABLE_ACMP0_INT                  SFRS=0;ACMPCR0&=CLR_BIT2
#define    ENABLE_ACMP1_OUTPUTP40             SFRS=0;ACMPCR2|=SET_BIT5
#define    DISABLE_ACMP1_OUTPUTP40            SFRS=0;ACMPCR2&=CLR_BIT5
#define    ENABLE_ACMP0_OUTPUTP41             SFRS=0;ACMPCR2|=SET_BIT4
#define    DISABLE_ACMP0_OUTPUTP41            SFRS=0;ACMPCR2&=CLR_BIT4
#define    ENABLE_ACMP0_CRV_VREF              SFRS=0;ACMPCR2|=SET_BIT1
#define    ENABLE_ACMP0_CRV_VDD               SFRS=0;ACMPCR2&=CLR_BIT1
           
#define    ENABLE_ACMP1_POSSELP25_NEGSELP22   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0x01
#define    ENABLE_ACMP1_POSSELP25_NEGSELCRV   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0x11;SFRS=0x02;ACMPCR2|=SET_BIT0
#define    ENABLE_ACMP1_POSSELP25_NEGSELVBG   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0x21
#define    ENABLE_ACMP1_POSSELP25_NEGSELP32   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0x31
#define    ENABLE_ACMP1_POSSELP23_NEGSELP22   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0x41
#define    ENABLE_ACMP1_POSSELP23_NEGSELCRV   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0x51;SFRS=0x02;ACMPCR2|=SET_BIT0
#define    ENABLE_ACMP1_POSSELP23_NEGSELVBG   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0x61
#define    ENABLE_ACMP1_POSSELP23_NEGSELP32   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0x71
#define    ENABLE_ACMP1_POSSELP21_NEGSELP22   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0x81
#define    ENABLE_ACMP1_POSSELP21_NEGSELCRV   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0x91;SFRS=0x02;ACMPCR2|=SET_BIT0
#define    ENABLE_ACMP1_POSSELP21_NEGSELVBG   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0xA1
#define    ENABLE_ACMP1_POSSELP21_NEGSELP32   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0xB1
#define    ENABLE_ACMP1_POSSELP31_NEGSELP22   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0xC1
#define    ENABLE_ACMP1_POSSELP31_NEGSELCRV   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0xD1;SFRS=0x02;ACMPCR2|=SET_BIT0
#define    ENABLE_ACMP1_POSSELP31_NEGSELVBG   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0xE1
#define    ENABLE_ACMP1_POSSELP31_NEGSELP32   SFRS=0;ACMPCR1&=0x0F;ACMPCR1|=0xF1
#define    ENABLE_ACMP1_HYSEN                 SFRS=0;ACMPCR1|=SET_BIT2
#define    ENABLE_ACMP1_PD_WAKEUP             SFRS=0;ACMPCR1|=SET_BIT3
#define    ENABLE_ACMP1_INT                   SFRS=0;ACMPCR1|=SET_BIT2
#define    DISABLE_ACMP1_HYSEN                SFRS=0;ACMPCR1&=CLR_BIT2
#define    DISABLE_ACMP1_PD_WAKEUP            SFRS=0;ACMPCR1&=CLR_BIT3
#define    DISABLE_ACMP1_INT                  SFRS=0;ACMPCR1&=CLR_BIT2

/*****************************************************************************************
* For PDMA setting 
*****************************************************************************************/
/*----- PDMA0 -----*/
#define    PDMA0_XRAM_TO_XRAM                 SFRS=0;DMA0CR&=0x0E
#define    PDMA0_SPI0RX_TO_XRAM               SFRS=0;DMA0CR&=0x0E;DMA0CR|=0x10;SFRS=1;SPI0CR1|=SET_BIT2
#define    PDMA0_SC0RX_TO_XRAM                SFRS=0;DMA0CR&=0x0E;DMA0CR|=0x20
#define    PDMA0_SPI1RX_TO_XRAM               SFRS=0;DMA0CR&=0x0E;DMA0CR|=0x30;SFRS=0;SPI1CR1|=SET_BIT2
#define    PDMA0_SPI0TX_TO_XRAM               SFRS=0;DMA0CR&=0x0E;DMA0CR|=0x50;SFRS=1;SPI0CR1|=SET_BIT3
#define    PDMA0_SC0TX_TO_XRAM                SFRS=0;DMA0CR&=0x0E;DMA0CR|=0x60
#define    PDMA0_SPI1TX_TO_XRAM               SFRS=0;DMA0CR&=0x0E;DMA0CR|=0x70;SFRS=0;SPI1CR1|=SET_BIT3
#define    PDMA0_HALFDONE_INT_ENABLE          SFRS=0;DMA0CR|=SET_BIT3
#define    PDMA0_FULLDONE_INT_ENABLE          SFRS=0;DMA0CR|=SET_BIT2
/*----- PDMA1 -----*/
#define    PDMA1_XRAM_TO_XRAM                 SFRS=0;DMA1CR&=0x0E
#define    PDMA1_SPI0RX_TO_XRAM               SFRS=0;DMA1CR&=0x0E;DMA1CR|=0x10;SFRS=1;SPI0CR1|=SET_BIT2
#define    PDMA1_SC0RX_TO_XRAM                SFRS=0;DMA1CR&=0x0E;DMA1CR|=0x20                         
#define    PDMA1_SPI1RX_TO_XRAM               SFRS=0;DMA1CR&=0x0E;DMA1CR|=0x30;SFRS=0;SPI1CR1|=SET_BIT2
#define    PDMA1_SPI0TX_TO_XRAM               SFRS=0;DMA1CR&=0x0E;DMA1CR|=0x50;SFRS=1;SPI0CR1|=SET_BIT3
#define    PDMA1_SC0TX_TO_XRAM                SFRS=0;DMA1CR&=0x0E;DMA1CR|=0x60                         
#define    PDMA1_SPI1TX_TO_XRAM               SFRS=0;DMA1CR&=0x0E;DMA1CR|=0x70;SFRS=0;SPI1CR1|=SET_BIT3
#define    PDMA1_HALFDONE_INT_ENABLE          SFRS=0;DMA1CR|=SET_BIT3
#define    PDMA1_FULLDONE_INT_ENABLE          SFRS=0;DMA1CR|=SET_BIT2
/*----- PDMA2 -----*/
#define    PDMA2_XRAM_TO_XRAM                 SFRS=2;DMA2CR&=0x0E
#define    PDMA2_SPI0RX_TO_XRAM               SFRS=2;DMA2CR&=0x0E;DMA2CR|=0x10;SFRS=1;SPI0CR1|=SET_BIT2
#define    PDMA2_SC0RX_TO_XRAM                SFRS=2;DMA2CR&=0x0E;DMA2CR|=0x20                         
#define    PDMA2_SPI1RX_TO_XRAM               SFRS=2;DMA2CR&=0x0E;DMA2CR|=0x30;SFRS=0;SPI1CR1|=SET_BIT2
#define    PDMA2_SPI0TX_TO_XRAM               SFRS=2;DMA2CR&=0x0E;DMA2CR|=0x50;SFRS=1;SPI0CR1|=SET_BIT3
#define    PDMA2_SC0TX_TO_XRAM                SFRS=2;DMA2CR&=0x0E;DMA2CR|=0x60                         
#define    PDMA2_SPI1TX_TO_XRAM               SFRS=2;DMA2CR&=0x0E;DMA2CR|=0x70;SFRS=0;SPI1CR1|=SET_BIT3
#define    PDMA2_HALFDONE_INT_ENABLE          SFRS=2;DMA2CR|=SET_BIT3
#define    PDMA2_FULLDONE_INT_ENABLE          SFRS=2;DMA2CR|=SET_BIT2
/*----- PDMA3-----*/
#define    PDMA3_XRAM_TO_XRAM                 SFRS=2;DMA3CR&=0x0E
#define    PDMA3_SPI0RX_TO_XRAM               SFRS=2;DMA3CR&=0x0E;DMA3CR|=0x10;SFRS=1;SPI0CR1|=SET_BIT2
#define    PDMA3_SC0RX_TO_XRAM                SFRS=2;DMA3CR&=0x0E;DMA3CR|=0x20                         
#define    PDMA3_SPI1RX_TO_XRAM               SFRS=2;DMA3CR&=0x0E;DMA3CR|=0x30;SFRS=0;SPI1CR1|=SET_BIT2
#define    PDMA3_SPI0TX_TO_XRAM               SFRS=2;DMA3CR&=0x0E;DMA3CR|=0x50;SFRS=1;SPI0CR1|=SET_BIT3
#define    PDMA3_SC0TX_TO_XRAM                SFRS=2;DMA3CR&=0x0E;DMA3CR|=0x60                         
#define    PDMA3_SPI1TX_TO_XRAM               SFRS=2;DMA3CR&=0x0E;DMA3CR|=0x70;SFRS=0;SPI1CR1|=SET_BIT3
#define    PDMA3_HALFDONE_INT_ENABLE          SFRS=2;DMA3CR|=SET_BIT3
#define    PDMA3_FULLDONE_INT_ENABLE          SFRS=2;DMA3CR|=SET_BIT2 
/*****************************************************************************************
* For SPI setting 
*****************************************************************************************/
/*---- SPI0 ------*/
#define    SPI0_MASTER_MODE                   SFRS=0;SPI0CR0|=SET_BIT4;SPI0CR0|=SET_BIT6
#define    SPI0_SLAVE_MODE                    SFRS=0;SPI0CR0&=CLR_BIT4;SPI0CR0|=SET_BIT6
#define    SPI0_LSB_FIRST                     SFRS=0;SPI0CR0|=SET_BIT4;SPI0CR0|=SET_BIT6
#define    SPI0_MSB_FIRST                     SFRS=0;SPI0CR0&=CLR_BIT4;SPI0CR0|=SET_BIT6
#define    SPI0_MODE0                         SFRS=0;SPI0CR0&=OxFC
#define    SPI0_MODE1                         SFRS=0;SPI0CR0&=OxFC;SPI0CR0|=0x01
#define    SPI0_MODE2                         SFRS=0;SPI0CR0&=OxFC;SPI0CR0|=0x02
#define    SPI0_MODE3                         SFRS=0;SPI0CR0|=0x03
#define    SPI0_SS_OUTPUT_ENABLE              SFRS=0;SPI0CR0|=SET_BIT7
#define    SPI0_SS_OUTPUT_ENABLE              SFRS=0;SPI0CR0|=SET_BIT7
/*---- SPI0 clock------*/
#define    SPI0_CLOCK_DIV_2                   SFRS=0;SPI0CR0&=0xFC;SFRS=1;SPI0CR1&=0x0F
#define    SPI0_CLOCK_DIV_4                   SFRS=0;SPI0CR0&=0xFC;SPI0CR0|=SET_BIT0;SFRS=1;SPI0CR1&=0x0F
#define    SPI0_CLOCK_DIV_8                   SFRS=0;SPI0CR0&=0xFC;SPI0CR0|=SET_BIT1;SFRS=1;SPI0CR1&=0x0F
#define    SPI0_CLOCK_DIV_16                  SFRS=0;SPI0CR0|=0x03;SFRS=1;SPI0CR1&=0x0F
#define    SPI0_CLOCK_DIV_32                  SFRS=0;SPI0CR0&=0xFC;SFRS=1;SPI0CR1&=0x0F;SPI0CR1|=SET_BIT4
#define    SPI0_CLOCK_DIV_64                  SFRS=0;SPI0CR0&=0xFC;SPI0CR0|=SET_BIT0;SFRS=1;SPI0CR1&=0x0F;SPI0CR1|=SET_BIT4
#define    SPI0_CLOCK_DIV_128                 SFRS=0;SPI0CR0&=0xFC;SPI0CR0|=SET_BIT1;SFRS=1;SPI0CR1&=0x0F;SPI0CR1|=SET_BIT4
#define    SPI0_CLOCK_DIV_256                 SFRS=0;SPI0CR0|=0x03;SFRS=1;SPI0CR1&=0x0F;SPI0CR1|=SET_BIT4
#define    SPI0_CLOCK_DIV_3                   SFRS=0;SPI0CR0&=0xFC;SFRS=1;SPI0CR1&=0x0F;SPI0CR1|=SET_BIT5
#define    SPI0_CLOCK_DIV_6                   SFRS=0;SPI0CR0&=0xFC;SPI0CR0|=SET_BIT0;SFRS=1;SPI0CR1&=0x0F;SPI0CR1|=SET_BIT5
#define    SPI0_CLOCK_DIV_12                  SFRS=0;SPI0CR0&=0xFC;SPI0CR0|=SET_BIT1;SFRS=1;SPI0CR1&=0x0F;SPI0CR1|=SET_BIT5
#define    SPI0_CLOCK_DIV_24                  SFRS=0;SPI0CR0|=0x03;SFRS=1;SPI0CR1&=0x0F;SPI0CR1|=SET_BIT5
#define    SPI0_CLOCK_DIV_48                  SFRS=0;SPI0CR0&=0xFC;SFRS=1;SPI0CR1|=0x30
#define    SPI0_CLOCK_DIV_96                  SFRS=0;SPI0CR0&=0xFC;SPI0CR0|=SET_BIT0;SFRS=1;SPI0CR1|=0x30
#define    SPI0_CLOCK_DIV_192                 SFRS=0;SPI0CR0&=0xFC;SPI0CR0|=SET_BIT1;SFRS=1;SPI0CR1|=0x30
#define    SPI0_CLOCK_DIV_384                 SFRS=0;SPI0CR0|=0x03;SFRS=1;SPI0CR1|=0x30
/*---- SPI1 ------*/
#define    SPI1_MASTER_MODE                   SFRS=0;SPI1CR0|=SET_BIT4;SPI0CR0|=SET_BIT6
#define    SPI1_SLAVE_MODE                    SFRS=0;SPI1CR0&=CLR_BIT4;SPI0CR0|=SET_BIT6
#define    SPI1_LSB_FIRST                     SFRS=0;SPI1CR0|=SET_BIT4;SPI0CR0|=SET_BIT6
#define    SPI1_MSB_FIRST                     SFRS=0;SPI1CR0&=CLR_BIT4;SPI0CR0|=SET_BIT6
#define    SPI1_MODE0                         SFRS=0;SPI1CR0&=OxFC
#define    SPI1_MODE1                         SFRS=0;SPI1CR0&=OxFC;SPI0CR0|=0x01
#define    SPI1_MODE2                         SFRS=0;SPI1CR0&=OxFC;SPI0CR0|=0x02
#define    SPI1_MODE3                         SFRS=0;SPI1CR0|=0x03
#define    SPI1_SS_OUTPUT_ENABLE              SFRS=0;SPI1CR0|=SET_BIT7
#define    SPI1_SS_OUTPUT_ENABLE              SFRS=0;SPI1CR0|=SET_BIT7
/*---- SPI1 clock------*/
#define    SPI1_CLOCK_DIV_2                   SFRS=0;SPI1CR0&=0xFC;SPI1CR1&=0x0F
#define    SPI1_CLOCK_DIV_4                   SFRS=0;SPI1CR0&=0xFC;SPI1CR0|=SET_BIT0;SPI1CR1&=0x0F
#define    SPI1_CLOCK_DIV_8                   SFRS=0;SPI1CR0&=0xFC;SPI1CR0|=SET_BIT1;SPI1CR1&=0x0F
#define    SPI1_CLOCK_DIV_16                  SFRS=0;SPI1CR0|=0x03;SPI1CR1&=0x0F
#define    SPI1_CLOCK_DIV_32                  SFRS=0;SPI1CR0&=0xFC;SPI1CR1&=0x0F;SPI1CR1|=SET_BIT4
#define    SPI1_CLOCK_DIV_64                  SFRS=0;SPI1CR0&=0xFC;SPI1CR0|=SET_BIT0;SPI1CR1&=0x0F;SPI1CR1|=SET_BIT4
#define    SPI1_CLOCK_DIV_128                 SFRS=0;SPI1CR0&=0xFC;SPI1CR0|=SET_BIT1;SPI1CR1&=0x0F;SPI1CR1|=SET_BIT4
#define    SPI1_CLOCK_DIV_256                 SFRS=0;SPI1CR0|=0x03;SPI1CR1&=0x0F;SPI0CR1|=SET_BIT4
#define    SPI1_CLOCK_DIV_3                   SFRS=0;SPI1CR0&=0xFC;SPI1CR1&=0x0F;SPI0CR1|=SET_BIT5
#define    SPI1_CLOCK_DIV_6                   SFRS=0;SPI1CR0&=0xFC;SPI1CR0|=SET_BIT0;SPI1CR1&=0x0F;SPI1CR1|=SET_BIT5
#define    SPI1_CLOCK_DIV_12                  SFRS=0;SPI1CR0&=0xFC;SPI1CR0|=SET_BIT1;SPI1CR1&=0x0F;SPI1CR1|=SET_BIT5
#define    SPI1_CLOCK_DIV_24                  SFRS=0;SPI1CR0|=0x03;SPI1CR1&=0x0F;SPI1CR1|=SET_BIT5
#define    SPI1_CLOCK_DIV_48                  SFRS=0;SPI1CR0&=0xFC;SPI1CR1|=0x30
#define    SPI1_CLOCK_DIV_96                  SFRS=0;SPI1CR0&=0xFC;SPI1CR0|=SET_BIT0;SPI1CR1|=0x30
#define    SPI1_CLOCK_DIV_192                 SFRS=0;SPI1CR0&=0xFC;SPI1CR0|=SET_BIT1;SPI1CR1|=0x30
#define    SPI1_CLOCK_DIV_384                 SFRS=0;SPI1CR0|=0x03;SPI1CR1|=0x30

/*****************************************************************************************
* For I2C setting 
*****************************************************************************************/
#define    ENABLE_I2C0_HOLDTIME_EXTEND        SFRS=0;I2C0CON|=SET_BIT7
#define    DISABLE_I2C0_HOLDTIME_EXTEND       SFRS=0;I2C0CON&=CLR_BIT7
#define    ENABLE_I2C1_HOLDTIME_EXTEND        SFRS=0;I2C1CON|=SET_BIT7
#define    DISABLE_I2C1_HOLDTIME_EXTEND       SFRS=0;I2C1CON&=CLR_BIT7

/*****************************************************************************************
* For BOD setting 
*****************************************************************************************/
#define    ENABLE_BOD                          SFRS=0;TA=0xAA;TA=0x55;BODCON0&=0x7B
#define    DISABLE_BOD                         SFRS=0;TA=0xAA;TA=0x55;BODCON0|=0x80

/*****************************************************************************************
* For UART0 and UART1 and printf funcion 
*****************************************************************************************/
#define    ENABLE_UART0_PRINTF            set_SCON_TI            //For printf function must setting TI = 1
#define    DISABLE_UART0_PRINTF           clr_SCON_TI
#define    ENABLE_UART1_PRINTF            set_S1CON_TI_1
#define    DISABLE_UART1_PRINTF           clr_S1CON_TI_1



/*****************************************************************************************
* For GPIO Multi-function Pin Setting
*****************************************************************************************/
/*----- ------ ------ P0 MFP ------ ------ ------*/
/* P0.0 */  /* Mapping == PA0 */
#define    MFP_P00_GPIO                    SFRS=0x02;P0MF10&=0xF0         /*!<  P0.0 MFP setting for GPIO       */
#define    MFP_P00_SPI0_MOSI               SFRS=0x02;P0MF10&=0xF0;P0MF10|=0x03  
#define    MFP_P00_SPI1_MOSI               SFRS=0x02;P0MF10&=0xF0;P0MF10|=0x04  
#define    MFP_P00_UART0_RXD               SFRS=0x02;P0MF10&=0xF0;P0MF10|=0x07   
#define    MFP_P00_PWM0_CH5                SFRS=0x02;P0MF10&=0xF0;P0MF10|=0x0D   
           
/* P0.1 */  /* Mapping == PA1 */
#define    MFP_P01_GPIO                    SFRS=0x02;P0MF10&=0x0F         /*!<  P0.1 MFP setting for GPIO       */
#define    MFP_P01_SPI0_MISO               SFRS=0x02;P0MF10&=0x0F;P0MF10|=0x30  
#define    MFP_P01_SPI1_MISO               SFRS=0x02;P0MF10&=0x0F;P0MF10|=0x40
#define    MFP_P01_UART0_TXD               SFRS=0x02;P0MF10&=0x0F;P0MF10|=0x70  
#define    MFP_P01_PWM0_CH4                SFRS=0x02;P0MF10&=0x0F;P0MF10|=0xD0
           
/* P0.2 */  /* Mapping == PA2 */
#define    MFP_P02_GPIO                    SFRS=0x02;P0MF32&=0xF0         /*!<  P0.2 MFP setting for GPIO       */
#define    MFP_P02_SPI0_CLK                SFRS=0x02;P0MF32&=0xF0;P0MF32|=0x03  
#define    MFP_P02_SPI1_CLK                SFRS=0x02;P0MF32&=0xF0;P0MF32|=0x04  
#define    MFP_P02_UART1_RXD               SFRS=0x02;P0MF32&=0xF0;P0MF32|=0x08   
#define    MFP_P02_I2C1_SDA                SFRS=0x02;P0MF32&=0xF0;P0MF32|=0x09   
#define    MFP_P02_PWM0_CH3                SFRS=0x02;P0MF32&=0xF0;P0MF32|=0x0D   
           
/* P0.3 */  /* Mapping == PA3 */
#define    MFP_P03_GPIO                    SFRS=0x02;P0MF32&=0x0F         /*!<  P0.3 MFP setting for GPIO       */
#define    MFP_P03_SPI0_SS                 SFRS=0x02;P0MF32&=0x0F;P0MF32|=0x30  
#define    MFP_P03_SPI1_SS                 SFRS=0x02;P0MF32&=0x0F;P0MF32|=0x40
#define    MFP_P03_UART1_TXD               SFRS=0x02;P0MF32&=0x0F;P0MF32|=0x80
#define    MFP_P03_I2C1_SCL                SFRS=0x02;P0MF32&=0x0F;P0MF32|=0x90  
#define    MFP_P03_STADC                   SFRS=0x02;P0MF32&=0x0F;P0MF32|=0xB0
#define    MFP_P03_PWM0_CH2                SFRS=0x02;P0MF32&=0x0F;P0MF32|=0xD0
#define    MFP_P03_PWM1_BRAKE              SFRS=0x02;P0MF32&=0x0F;P0MF32|=0xF0
           
/* P0.4 */  /* Mapping == PA4 */
#define    MFP_P04_GPIO                    SFRS=0x02;P0MF54&=0xF0         /*!<  P0.4 MFP setting for GPIO       */
#define    MFP_P04_UART0_RXD               SFRS=0x02;P0MF54&=0xF0;P0MF54|=0x08  
#define    MFP_P04_I2C0_SDA                SFRS=0x02;P0MF54&=0xF0;P0MF54|=0x09  
#define    MFP_P04_PWM0_CH1                SFRS=0x02;P0MF54&=0xF0;P0MF54|=0x0D  
           
/* P0.5 */  /* Mapping == PA5 */
#define    MFP_P05_GPIO                    SFRS=0x02;P0MF54&=0x0F         /*!<  P0.5 MFP setting for GPIO       */
#define    MFP_P05_UART0_TXD               SFRS=0x02;P0MF54&=0x0F;P0MF54|=0x80  
#define    MFP_P05_I2C0_SCL                SFRS=0x02;P0MF54&=0x0F;P0MF54|=0x90
#define    MFP_P05_PWM0_CH0                SFRS=0x02;P0MF54&=0x0F;P0MF54|=0xD0
           
/* P0.6 */  /* Mapping == PA6 */
#define    MFP_P06_GPIO                    SFRS=0x02;P0MF76&=0xF0         /*!<  P0.6 MFP setting for GPIO       */
#define    MFP_P06_UART0_RXD               SFRS=0x02;P0MF76&=0xF0;P0MF76|=0x07  
#define    MFP_P06_I2C1_SDA                SFRS=0x02;P0MF76&=0xF0;P0MF76|=0x08  
#define    MFP_P06_PWM1_CH5                SFRS=0x02;P0MF76&=0xF0;P0MF76|=0x0B   
#define    MFP_P06_INT0                    SFRS=0x02;P0MF76&=0xF0;P0MF76|=0x0F   
           
/* P0.7 */  /* Mapping == PA7 */
#define    MFP_P07_GPIO                    SFRS=0x02;P0MF76&=0x0F         /*!<  P0.7 MFP setting for GPIO       */
#define    MFP_P07_UART0_TXD               SFRS=0x02;P0MF76&=0x0F;P0MF76|=0x70
#define    MFP_P07_I2C1_SCL                SFRS=0x02;P0MF76&=0x0F;P0MF76|=0x80  
#define    MFP_P07_PWM1_CH4                SFRS=0x02;P0MF76&=0x0F;P0MF76|=0xB0
#define    MFP_P07_INT1                    SFRS=0x02;P0MF76&=0x0F;P0MF76|=0xF0
/*----- ------ ------ ------ ------ ------ ------*/
           
/*----- ------ ------ P1 MFP ------ ------ ------*/
/* P1.0 */ /* Mapping == PA8 */
#define    MFP_P10_GPIO                    SFRS=0x02;P1MF10&=0xF0               /*!<  P1.0 MFP setting for GPIO       */
#define    MFP_P10_UART1_RXD               SFRS=0x02;P1MF10&=0xF0;P1MF10|=0x05
#define    MFP_P10_IC0                SFRS=0x02;P1MF10&=0xF0;P1MF10|=0x0D  
           
/* P1.1 */  /* Mapping == PA9 */
#define    MFP_P11_GPIO                    SFRS=0x02;P1MF10&=0x0F         /*!<  P1.1 MFP setting for GPIO       */
#define    MFP_P11_UART3_RXD               SFRS=0x02;P1MF10&=0x0F;P1MF10|=0x60  
#define    MFP_P11_UART1_TXD               SFRS=0x02;P1MF10&=0x0F;P1MF10|=0x70
#define    MFP_P11_IC2                SFRS=0x02;P1MF10&=0x0F;P1MF10|=0xD0  
           
/* P1.2 */  /* Mapping == PA10 */
#define    MFP_P12_GPIO                    SFRS=0x02;P1MF32&=0xF0         /*!<  P1.2 MFP setting for GPIO       */
#define    MFP_P12_UART3_TXD               SFRS=0x02;P1MF32&=0xF0;P1MF32|=0x06  
#define    MFP_P12_IC1                SFRS=0x02;P1MF32&=0xF0;P1MF32|=0x0D  
           
/* P1.3 */  /* Mapping == PA11 */                                                                
#define    MFP_P13_GPIO        SFRS=0x02;P1MF32&=0x0F         /*!<  P1.3 MFP setting for GPIO      */
#define    MFP_P13_IC0    SFRS=0x02;P1MF32&=0x0F;P1MF32|=0xD0                                  
           
/* P1.4 */  /* Mapping == PA12 */
#define    MFP_P14_GPIO        SFRS=0x02;P1MF54&=0xF0         /*!<  P1.4 MFP setting for GPIO       */
#define    MFP_P14_I2C1_SCL    SFRS=0x02;P1MF54&=0xF0;P1MF54|=0x04
           
/* P1.5 */  /* Mapping == PA13 */
#define    MFP_P15_GPIO        SFRS=0x02;P1MF54&=0x0F         /*!<  P1.5 MFP setting for GPIO       */
#define    MFP_P15_I2C1_SDA    SFRS=0x02;P1MF54&=0x0F;P1MF54|=0x40  
           
/* P1.6 */  /* Mapping == PA14 */
#define    MFP_P16_GPIO        SFRS=0x02;P1MF76&=0xF0         /*!<  P1.6 MFP setting for GPIO       */
#define    MFP_P16_UART0_TXD    SFRS=0x02;P1MF76&=0xF0;P1MF76|=0x03  
           
/* P1.7 */  /* Mapping == PA15 */                                   
#define    MFP_P17_GPIO        SFRS=0x02;P1MF76&=0x0F          /*!<  P1.7 MFP setting for GPIO       */
#define    MFP_P17_UART0_RXD    SFRS=0x02;P1MF76&=0x0F;P1MF76|=0x30       
/*----- ------ ------ ------ ------ ------ ------*/
           
/*----- ------ ------ P2 MFP ------ ------ ------*/
/* P2.0    */  /* Mapping == PB0 */                                   
#define    MFP_P20_GPIO        SFRS=0x02;P2MF10&=0xF0         /*!<  P2.0 MFP setting for GPIO       */   
#define    MFP_P20_ADC_CH5      SFRS=0x02;P2MF10&=0xF0;P2MF10|=0x01
#define    MFP_P20_ACMP0_N1    SFRS=0x02;P2MF10&=0xF0;P2MF10|=0x01  
#define    MFP_P20_UART2_RXD    SFRS=0x02;P2MF10&=0xF0;P2MF10|=0x07  
#define    MFP_P20_I2C1_SDA    SFRS=0x02;P2MF10&=0xF0;P2MF10|=0x09       
#define    MFP_P20_PWM0_CH5    SFRS=0x02;P2MF10&=0xF0;P2MF10|=0x0B
#define    MFP_P20_PWM1_CH5    SFRS=0x02;P2MF10&=0xF0;P2MF10|=0x0C
#define    MFP_P20_PWM0_BRAKE  SFRS=0x02;P2MF10&=0xF0;P2MF10|=0x0D       
           
/* P2.1    */  /* Mapping == PB1 */
#define    MFP_P21_GPIO        SFRS=0x02;P2MF10&=0x0F         /*!<  P2.1 MFP setting for GPIO       */
#define    MFP_P21_ADC_CH4      SFRS=0x02;P2MF10&=0x0F;P2MF10|=0x10  
#define    MFP_P21_ACMP0_P2    SFRS=0x02;P2MF10&=0x0F;P2MF10|=0x10  
#define    MFP_P21_ACMP1_P2    SFRS=0x02;P2MF10&=0x0F;P2MF10|=0x10  
#define    MFP_P21_UART2_TXD    SFRS=0x02;P2MF10&=0x0F;P2MF10|=0x70
#define    MFP_P21_I2C1_SCL    SFRS=0x02;P2MF10&=0x0F;P2MF10|=0x90  
#define    MFP_P21_PWM0_CH4    SFRS=0x02;P2MF10&=0x0F;P2MF10|=0xB0
#define    MFP_P21_PWM1_CH4    SFRS=0x02;P2MF10&=0x0F;P2MF10|=0xC0
#define    MFP_P21_PWM0_BRAKE  SFRS=0x02;P2MF10&=0x0F;P2MF10|=0xD0
           
/* P2.2    */  /* Mapping == PB2 */
#define    MFP_P22_GPIO        SFRS=0x02;P2MF32&=0xF0         /*!<  P2.2 MFP setting for GPIO       */
#define    MFP_P22_ADC_CH3      SFRS=0x02;P2MF32&=0xF0;P2MF32|=0x01
#define    MFP_P22_ACMP1_N0    SFRS=0x02;P2MF32&=0xF0;P2MF32|=0x01
#define    MFP_P22_I2C1_SDA    SFRS=0x02;P2MF32&=0xF0;P2MF32|=0x04  
#define    MFP_P22_UART1_RXD    SFRS=0x02;P2MF32&=0xF0;P2MF32|=0x06   
#define    MFP_P22_PWM0_CH3    SFRS=0x02;P2MF32&=0xF0;P2MF32|=0x0B 
           
/* P2.3    */  /* Mapping == PB3 */
#define    MFP_P23_GPIO        SFRS=0x02;P2MF32&=0x0F         /*!<  P2.3 MFP setting for GPIO       */
#define    MFP_P23_ADC_CH2      SFRS=0x02;P2MF32&=0x0F;P2MF32|=0x10  
#define    MFP_P23_ACMP0_P1    SFRS=0x02;P2MF32&=0x0F;P2MF32|=0x10
#define    MFP_P23_ACMP1_P1    SFRS=0x02;P2MF32&=0x0F;P2MF32|=0x10
#define    MFP_P23_I2C1_SCL    SFRS=0x02;P2MF32&=0x0F;P2MF32|=0x40
#define    MFP_P23_UART1_TXD    SFRS=0x02;P2MF32&=0x0F;P2MF32|=0x60
#define    MFP_P23_PWM0_CH2    SFRS=0x02;P2MF32&=0x0F;P2MF32|=0xB0  
#define    MFP_P23_PWM0_BRAKE  SFRS=0x02;P2MF32&=0x0F;P2MF32|=0xD0
           
/* P2.4    */  /* Mapping == PB4 */
#define    MFP_P24_GPIO        SFRS=0x02;P2MF54&=0xF0         /*!<  P2.4 MFP setting for GPIO       */
#define    MFP_P24_ADC_CH1      SFRS=0x02;P2MF54&=0xF0;P2MF54|=0x01  
#define    MFP_P24_ACMP0_N0    SFRS=0x02;P2MF54&=0xF0;P2MF54|=0x01  
#define    MFP_P24_I2C0_SDA    SFRS=0x02;P2MF54&=0xF0;P2MF54|=0x06  
#define    MFP_P24_PWM0_CH1    SFRS=0x02;P2MF54&=0xF0;P2MF54|=0x0B
#define    MFP_P24_UART2_RXD    SFRS=0x02;P2MF54&=0xF0;P2MF54|=0x0D
#define    MFP_P24_T1          SFRS=0x02;P2MF54&=0xF0;P2MF54|=0x0E
#define    MFP_P24_INT1        SFRS=0x02;P2MF54&=0xF0;P2MF54|=0x0F
           
/* P2.5    */  /* Mapping == PB5 */
#define    MFP_P25_GPIO                    SFRS=0x02;P2MF54&=0x0F         /*!<  P2.5 MFP setting for GPIO       */
#define    MFP_P25_ADC_CH0                 SFRS=0x02;P2MF54&=0x0F;P2MF54|=0x10
#define    MFP_P25_ACMP0_P0                SFRS=0x02;P2MF54&=0x0F;P2MF54|=0x10
#define    MFP_P25_ACMP1_P0                SFRS=0x02;P2MF54&=0x0F;P2MF54|=0x10
#define    MFP_P25_I2C0_SCL                SFRS=0x02;P2MF54&=0x0F;P2MF54|=0x60
#define    MFP_P25_PWM0_CH0                SFRS=0x02;P2MF54&=0x0F;P2MF54|=0xB0
#define    MFP_P25_UART2_TXD               SFRS=0x02;P2MF54&=0x0F;P2MF54|=0xD0
#define    MFP_P25_T0                      SFRS=0x02;P2MF54&=0x0F;P2MF54|=0xE0
#define    MFP_P25_INT0                    SFRS=0x02;P2MF54&=0x0F;P2MF54|=0xF0
           
/* P2.6    */  /* Mapping == PB6 */
#define    MFP_P26_GPIO                    SFRS=0x02;P2MF76&=0xF0         /*!<  P2.6 MFP setting for GPIO       */
#define    MFP_P26_UART1_RXD               SFRS=0x02;P2MF76&=0xF0;P2MF76|=0x06  
#define    MFP_P26_PWM1_BRAKE              SFRS=0x02;P2MF76&=0xF0;P2MF76|=0x0B  
#define    MFP_P26_PWM1_CH5                SFRS=0x02;P2MF76&=0xF0;P2MF76|=0x0C   
#define    MFP_P26_ACMP1_O                 SFRS=0x02;P2MF76&=0xF0;P2MF76|=0x0F 

/* P2.7 */  /* Mapping == PB7 */
#define    MFP_P27_GPIO                    SFRS=0x02;P2MF76&=0x0F         /*!<  P2.7 MFP setting for GPIO       */
#define    MFP_P27_UART1_TXD               SFRS=0x02;P2MF76&=0x0F;P2MF76|=0x60
#define    MFP_P27_PWM1_BRAKE              SFRS=0x02;P2MF76&=0x0F;P2MF76|=0xB0  
#define    MFP_P27_PWM1_CH4                SFRS=0x02;P2MF76&=0x0F;P2MF76|=0xC0
#define    MFP_P27_ACMP0_O                 SFRS=0x02;P2MF76&=0x0F;P2MF76|=0xF0  
/*----- ------ ------ ------ ------ ------ ------*/

/*----- ------ ------ P3 MFP ------ ------ ------*/
/* P3.0 */ /* Mapping == PB12 */
#define    MFP_P30_GPIO                    SFRS=0x02;P3MF10&=0xF0         /*!<  P3.0 MFP setting for GPIO       */
#define    MFP_P30_SPI1_MOSI               SFRS=0x02;P3MF10&=0xF0;P3MF10|=0x04
#define    MFP_P30_UART0_RXD               SFRS=0x02;P3MF10&=0xF0;P3MF10|=0x06
#define    MFP_P30_PWM1_CH3                SFRS=0x02;P3MF10&=0xF0;P3MF10|=0x0B
#define    MFP_P30_IC0                     SFRS=0x02;P3MF10&=0xF0;P3MF10|=0x0D
           
/* P3.1    */  /* Mapping == PB13 */
#define    MFP_P31_GPIO                    SFRS=0x02;P3MF10&=0x0F         /*!<  P3.1 MFP setting for GPIO       */
#define    MFP_P31_ADC_CH6                 SFRS=0x02;P3MF10&=0x0F;P3MF10|=0x10
#define    MFP_P31_ACMP0_P3                SFRS=0x02;P3MF10&=0x0F;P3MF10|=0x10
#define    MFP_P31_ACMP1_P3                SFRS=0x02;P3MF10&=0x0F;P3MF10|=0x10
#define    MFP_P31_SPI1_MISO               SFRS=0x02;P3MF10&=0x0F;P3MF10|=0x40
#define    MFP_P31_UART3_TXD               SFRS=0x02;P3MF10&=0x0F;P3MF10|=0x50
#define    MFP_P31_UART0_TXD               SFRS=0x02;P3MF10&=0x0F;P3MF10|=0x60
#define    MFP_P31_PWM1_CH2                SFRS=0x02;P3MF10&=0x0F;P3MF10|=0xB0
#define    MFP_P31_IC2                     SFRS=0x02;P3MF10&=0x0F;P3MF10|=0xD0
           
/* P3.2    */  /* Mapping == PB14 */
#define    MFP_P32_GPIO                    SFRS=0x02;P3MF32&=0xF0         /*!<  P3.2 MFP setting for GPIO       */
#define    MFP_P32_ADC_CH7                 SFRS=0x02;P3MF32&=0xF0;P3MF32|=0x01
#define    MFP_P32_ACMP1_N1                SFRS=0x02;P3MF32&=0xF0;P3MF32|=0x01
#define    MFP_P32_SPI1_CLK                SFRS=0x02;P3MF32&=0xF0;P3MF32|=0x04
#define    MFP_P32_UART3_RXD               SFRS=0x02;P3MF32&=0xF0;P3MF32|=0x05
#define    MFP_P32_PWM1_CH1                SFRS=0x02;P3MF32&=0xF0;P3MF32|=0x0B
#define    MFP_P32_IC1                     SFRS=0x02;P3MF32&=0xF0;P3MF32|=0x0D
#define    MFP_P32_CLKO                    SFRS=0x02;P3MF32&=0xF0;P3MF32|=0x0E
           
/* P3.3    */  /* Mapping == PB15 */  
#define    MFP_P33_GPIO                    SFRS=0x02;P3MF32&=0x0F          /*!<  P3.3 MFP setting for GPIO       */
#define    MFP_P33_SPI1_SS                 SFRS=0x02;P3MF32&=0x0F;P3MF32|=0x40
#define    MFP_P33_PWM1_CH0                SFRS=0x02;P3MF32&=0x0F;P3MF32|=0xB0  
#define    MFP_P33_IC0                     SFRS=0x02;P3MF32&=0x0F;P3MF32|=0xD0  
#define    MFP_P33_PWM0_BRAKE              SFRS=0x02;P3MF32&=0x0F;P3MF32|=0x30  
/*-----    ------ ------ ------ ------ ------ ------*/
           
/*-----    ------ ------ P4 MFP ------ ------ ------*/
/* P4.0    */  /* Mapping == PC0 */                                   
#define    MFP_P40_GPIO                    SFRS=0x02;P4MF10&=0xF0         /*!<  P4.0 MFP setting for GPIO       */   
#define    MFP_P40_UART2_RXD               SFRS=0x02;P4MF10&=0xF0;P4MF10|=0x08  
#define    MFP_P40_I2C0_SDA                SFRS=0x02;P4MF10&=0xF0;P4MF10|=0x09  
#define    MFP_P40_PWM1_CH5                SFRS=0x02;P4MF10&=0xF0;P4MF10|=0x0C
#define    MFP_P40_ACMP1_O                 SFRS=0x02;P4MF10&=0xF0;P4MF10|=0x0E
#define    MFP_P40_INT1                    SFRS=0x02;P4MF10&=0xF0;P4MF10|=0x0F
           
/* P4.1    */  /* Mapping == PC1 */
#define    MFP_P41_GPIO                    SFRS=0x02;P4MF10&=0x0F         /*!<  P4.1 MFP setting for GPIO       */
#define    MFP_P41_UART2_TXD                SFRS=0x02;P4MF10&=0x0F;P4MF10|=0x80
#define    MFP_P41_I2C0_SCL                SFRS=0x02;P4MF10&=0x0F;P4MF10|=0x90  
#define    MFP_P41_PWM1_CH4                SFRS=0x02;P4MF10&=0x0F;P4MF10|=0xC0
#define    MFP_P41_ACMP0_O                  SFRS=0x02;P4MF10&=0x0F;P4MF10|=0xE0

/* P4.2    */  /* Mapping == PC2 */
#define    MFP_P42_GPIO                    SFRS=0x02;P4MF32&=0xF0         /*!<  P4.2 MFP setting for GPIO       */
#define    MFP_P42_PWM1_CH3                SFRS=0x02;P4MF32&=0xF0;P4MF32|=0x0C

/* P4.3    */  /* Mapping == PC3 */
#define    MFP_P43_GPIO                    SFRS=0x02;P4MF32&=0x0F         /*!<  P4.3 MFP setting for GPIO       */
#define    MFP_P43_PWM1_CH2                SFRS=0x02;P4MF32&=0x0F;P4MF32|=0xC0

/* P4.4    */  /* Mapping == PC4 */
#define    MFP_P44_GPIO                    SFRS=0x02;P4MF54&=0xF0         /*!<  P4.4 MFP setting for GPIO       */
#define    MFP_P44_UART2_RXD                SFRS=0x02;P4MF54&=0xF0;P4MF54|=0x08
#define    MFP_P44_I2C1_SDA                SFRS=0x02;P4MF54&=0xF0;P4MF54|=0x09
#define    MFP_P44_PWM1_CH1                SFRS=0x02;P4MF54&=0xF0;P4MF54|=0x0C

/* P4.5    */  /* Mapping == PC5 */
#define    MFP_P45_GPIO                    SFRS=0x02;P4MF54&=0x0F         /*!<  P4.5 MFP setting for GPIO       */
#define    MFP_P45_UART2_TXD                SFRS=0x02;P4MF54&=0x0F;P4MF54|=0x80  
#define    MFP_P45_I2C1_SCL                SFRS=0x02;P4MF54&=0x0F;P4MF54|=0x90
#define    MFP_P45_PWM1_CH0                SFRS=0x02;P4MF54&=0x0F;P4MF54|=0xC0

/* P4.6    */  /* Mapping == PC15 */  
#define    MFP_P46_GPIO                    SFRS=0x02;P4MF76&=0xF0         /*!<  P4.6 MFP setting for GPIO       */
#define    MFP_P46_PWM1_BRAKE              SFRS=0x02;P4MF76&=0xF0;P4MF76|=0x0B
#define    MFP_P46_PWM0_CH0                SFRS=0x02;P4MF76&=0xF0;P4MF76|=0x0C
#define    MFP_P46_T0                      SFRS=0x02;P4MF76&=0xF0;P4MF76|=0x0D
#define    MFP_P46_CLKO                    SFRS=0x02;P4MF76&=0xF0;P4MF76|=0x0E
#define    MFP_P46_INT0                    SFRS=0x02;P4MF76&=0x0F;P4MF76|=0x0F

/* P4.7    */  /* Mapping == PC15 */  
#define    MFP_P47_GPIO                    SFRS=0x02;P4MF76&=0x0F         /*!<  P4.7 MFP setting for GPIO       */
#define    MFP_P47_T1              SFRS=0x02;P4MF76&=0x0F;P4MF76|=0xD0     
/*----- ------ ------ ------ ------ ------ ------*/

/*----- ------ ------ P5 MFP ------ ------ ------*/
/* P5.0 */  /* Mapping == PF0 */
#define    MFP_P50_GPIO             SFRS=0x02;P5MF10&=0xF0         /*!<  P5.0 MFP setting for GPIO       */
#define    MFP_P50_UART1_TXD        SFRS=0x02;P5MF10&=0xF0;P5MF10|=0x02  
#define    MFP_P50_I2C1_SCL         SFRS=0x02;P5MF10&=0xF0;P5MF10|=0x03  
#define    MFP_P50_UART0_TXD        SFRS=0x02;P5MF10&=0xF0;P5MF10|=0x04   
#define    MFP_P50_ICE_DAT          SFRS=0x02;P5MF10&=0xF0;P5MF10|=0x0E
           
/* P5.1    */  /* Mapping == PF1 */
#define    MFP_P51_GPIO             SFRS=0x02;P5MF10&=0x0F         /*!<  P5.1 MFP setting for GPIO       */
#define    MFP_P51_UART1_RXD        SFRS=0x02;P5MF10&=0x0F;P5MF10|=0x20  
#define    MFP_P51_I2C1_SDA         SFRS=0x02;P5MF10&=0x0F;P5MF10|=0x30
#define    MFP_P51_UART0_RXD        SFRS=0x02;P5MF10&=0x0F;P5MF10|=0x40  
#define    MFP_P51_ICE_CLK          SFRS=0x02;P5MF10&=0x0F;P5MF10|=0xE0
           
/* P5.2    */  /* Mapping == PF2 */
#define    MFP_P52_GPIO             SFRS=0x02;P5MF32&=0xF0         /*!<  P5.2 MFP setting for GPIO       */
#define    MFP_P52_UART0_RXD        SFRS=0x02;P5MF32&=0xF0;P5MF32|=0x03  
#define    MFP_P52_I2C0_SDA         SFRS=0x02;P5MF32&=0xF0;P5MF32|=0x04  
#define    MFP_P52_XT1_OUT          SFRS=0x02;P5MF32&=0xF0;P5MF32|=0x0A   
           
/* P5.3    */  /* Mapping == PF3 */
#define    MFP_P53_GPIO             SFRS=0x02;P5MF32&=0x0F         /*!<  P5.3 MFP setting for GPIO       */
#define    MFP_P53_UART0_TXD        SFRS=0x02;P5MF32&=0x0F;P5MF32|=0x30  
#define    MFP_P53_I2C0_SCL         SFRS=0x02;P5MF32&=0x0F;P5MF32|=0x40
#define    MFP_P53_XT1_IN           SFRS=0x02;P5MF32&=0x0F;P5MF32|=0xA0
           
/* P5.4    */  /* Mapping == PF4 */
#define    MFP_P54_GPIO             SFRS=0x02;P5MF54&=0xF0         /*!<  P5.4 MFP setting for GPIO       */
#define    MFP_P54_UART2_TXD        SFRS=0x02;P5MF54&=0xF0;P5MF54|=0x02  
#define    MFP_P54_PWM0_CH1         SFRS=0x02;P5MF54&=0xF0;P5MF54|=0x07  
#define    MFP_P54_X32_OUT          SFRS=0x02;P5MF54&=0xF0;P5MF54|=0x0A
           
/* P5.5    */  /* Mapping == PF5 */
#define    MFP_P55_GPIO             SFRS=0x02;P5MF54&=0x0F         /*!<  P5.5 MFP setting for GPIO       */
#define    MFP_P55_UART2_RXD        SFRS=0x02;P5MF54&=0x0F;P5MF54|=0x20  
#define    MFP_P55_PWM0_CH0         SFRS=0x02;P5MF54&=0x0F;P5MF54|=0x70
#define    MFP_P55_X32_IN           SFRS=0x02;P5MF54&=0x0F;P5MF54|=0xA0
#define    MFP_P55_STADC            SFRS=0x02;P5MF54&=0x0F;P5MF54|=0xB0
           
/* P5.6    */  /* Mapping == PF15 */
#define    MFP_P56_GPIO             SFRS=0x02;P5MF76&=0xF0         /*!<  P5.6 MFP setting for GPIO       */
#define    MFP_P56_PWM0_BRAKE        SFRS=0x02;P5MF76&=0xF0;P5MF76|=0x0B  
#define    MFP_P56_PWM0_CH1         SFRS=0x02;P5MF76&=0xF0;P5MF76|=0x0C  
#define    MFP_P56_CLKO             SFRS=0x02;P5MF76&=0xF0;P5MF76|=0x0E

/* MFP all */
#define    MFP_ALL_GPIO        SFRS=0x02;P0MF10=0;P0MF32=0;P0MF54=0;P0MF76=0;\
                               P1MF10=0;P1MF32=0;P1MF54=0;P1MF76=0;\
                               P2MF10=0;P2MF32=0;P2MF54=0;P2MF76=0;\
                               P3MF10=0;P3MF32=0;P3MF54=0;P3MF76=0;\
                               P4MF10=0;P4MF32=0;P4MF54=0;P4MF76=0;\
                               P5MF10=0;P5MF32=0;P5MF54=0;P5MF76=0

/*****************************************************************************************
*  GPIO Mode setting 
*****************************************************************************************/
//------------------- Define Port as Quasi mode  -------------------
#define    P00_QUASI_MODE          SFRS=0x01;P0M1&=~SET_BIT0;P0M2&=~SET_BIT0
#define    P01_QUASI_MODE          SFRS=0x01;P0M1&=~SET_BIT1;P0M2&=~SET_BIT1
#define    P02_QUASI_MODE          SFRS=0x01;P0M1&=~SET_BIT2;P0M2&=~SET_BIT2
#define    P03_QUASI_MODE          SFRS=0x01;P0M1&=~SET_BIT3;P0M2&=~SET_BIT3
#define    P04_QUASI_MODE          SFRS=0x01;P0M1&=~SET_BIT4;P0M2&=~SET_BIT4
#define    P05_QUASI_MODE          SFRS=0x01;P0M1&=~SET_BIT5;P0M2&=~SET_BIT5
#define    P06_QUASI_MODE          SFRS=0x01;P0M1&=~SET_BIT6;P0M2&=~SET_BIT6
#define    P07_QUASI_MODE          SFRS=0x01;P0M1&=~SET_BIT7;P0M2&=~SET_BIT7
#define    P10_QUASI_MODE          SFRS=0x01;P1M1&=~SET_BIT0;P1M2&=~SET_BIT0
#define    P11_QUASI_MODE          SFRS=0x01;P1M1&=~SET_BIT1;P1M2&=~SET_BIT1
#define    P12_QUASI_MODE          SFRS=0x01;P1M1&=~SET_BIT2;P1M2&=~SET_BIT2
#define    P13_QUASI_MODE          SFRS=0x01;P1M1&=~SET_BIT3;P1M2&=~SET_BIT3
#define    P14_QUASI_MODE          SFRS=0x01;P1M1&=~SET_BIT4;P1M2&=~SET_BIT4
#define    P15_QUASI_MODE          SFRS=0x01;P1M1&=~SET_BIT5;P1M2&=~SET_BIT5
#define    P16_QUASI_MODE          SFRS=0x01;P1M1&=~SET_BIT6;P1M2&=~SET_BIT6
#define    P17_QUASI_MODE          SFRS=0x01;P1M1&=~SET_BIT7;P1M2&=~SET_BIT7
#define    P20_QUASI_MODE          SFRS=0x01;P2M1&=~SET_BIT0;P2M2&=~SET_BIT0
#define    P21_QUASI_MODE          SFRS=0x01;P2M1&=~SET_BIT1;P2M2&=~SET_BIT1
#define    P22_QUASI_MODE          SFRS=0x01;P2M1&=~SET_BIT2;P2M2&=~SET_BIT2
#define    P23_QUASI_MODE          SFRS=0x01;P2M1&=~SET_BIT3;P2M2&=~SET_BIT3
#define    P24_QUASI_MODE          SFRS=0x01;P2M1&=~SET_BIT4;P2M2&=~SET_BIT4
#define    P25_QUASI_MODE          SFRS=0x01;P2M1&=~SET_BIT5;P2M2&=~SET_BIT5
#define    P26_QUASI_MODE          SFRS=0x01;P2M1&=~SET_BIT6;P2M2&=~SET_BIT6
#define    P27_QUASI_MODE          SFRS=0x01;P2M1&=~SET_BIT7;P2M2&=~SET_BIT7
#define    P30_QUASI_MODE          SFRS=0x01;P3M1&=~SET_BIT0;P3M2&=~SET_BIT0
#define    P31_QUASI_MODE          SFRS=0x01;P3M1&=~SET_BIT1;P3M2&=~SET_BIT1
#define    P32_QUASI_MODE          SFRS=0x01;P3M1&=~SET_BIT2;P3M2&=~SET_BIT2
#define    P33_QUASI_MODE          SFRS=0x01;P3M1&=~SET_BIT3;P3M2&=~SET_BIT3
#define    P34_QUASI_MODE          SFRS=0x01;P3M1&=~SET_BIT4;P3M2&=~SET_BIT4
#define    P35_QUASI_MODE          SFRS=0x01;P3M1&=~SET_BIT5;P3M2&=~SET_BIT5
#define    P36_QUASI_MODE          SFRS=0x01;P3M1&=~SET_BIT6;P3M2&=~SET_BIT6
#define    P37_QUASI_MODE          SFRS=0x01;P3M1&=~SET_BIT7;P3M2&=~SET_BIT7
#define    P40_QUASI_MODE          SFRS=0x01;P4M1&=~SET_BIT0;P4M2&=~SET_BIT0
#define    P41_QUASI_MODE          SFRS=0x01;P4M1&=~SET_BIT1;P4M2&=~SET_BIT1
#define    P42_QUASI_MODE          SFRS=0x01;P4M1&=~SET_BIT2;P4M2&=~SET_BIT2
#define    P43_QUASI_MODE          SFRS=0x01;P4M1&=~SET_BIT3;P4M2&=~SET_BIT3
#define    P44_QUASI_MODE          SFRS=0x01;P4M1&=~SET_BIT4;P4M2&=~SET_BIT4
#define    P45_QUASI_MODE          SFRS=0x01;P4M1&=~SET_BIT5;P4M2&=~SET_BIT5
#define    P46_QUASI_MODE          SFRS=0x01;P4M1&=~SET_BIT6;P4M2&=~SET_BIT6
#define    P47_QUASI_MODE          SFRS=0x01;P4M1&=~SET_BIT7;P4M2&=~SET_BIT7
#define    P50_QUASI_MODE          SFRS=0x01;P5M1&=~SET_BIT0;P5M2&=~SET_BIT0
#define    P51_QUASI_MODE          SFRS=0x01;P5M1&=~SET_BIT1;P5M2&=~SET_BIT1
#define    P52_QUASI_MODE          SFRS=0x01;P5M1&=~SET_BIT2;P5M2&=~SET_BIT2
#define    P53_QUASI_MODE          SFRS=0x01;P5M1&=~SET_BIT3;P5M2&=~SET_BIT3
#define    P54_QUASI_MODE          SFRS=0x01;P5M1&=~SET_BIT4;P5M2&=~SET_BIT4
#define    P55_QUASI_MODE          SFRS=0x01;P5M1&=~SET_BIT5;P5M2&=~SET_BIT5
#define    P56_QUASI_MODE          SFRS=0x01;P5M1&=~SET_BIT6;P5M2&=~SET_BIT6
#define    P57_QUASI_MODE          SFRS=0x01;P5M1&=~SET_BIT7;P5M2&=~SET_BIT7
#define    ALL_GPIO_QUASI_MODE     SFRS=0x01;P0M1=0;P0M2=0;P1M1=0;P1M2=0;P2M1=0;P2M2=0;\
                                   P3M1=0;P3M2=0;P4M1=0;P4M2=0;P5M1=0;P5M2=0;
//------   ------------- Define Port as Push Pull mode -------------------
#define    P00_PUSHPULL_MODE       SFRS=0x01;SFRS=0x01;P0M1&=~SET_BIT0;P0M2|=SET_BIT0
#define    P01_PUSHPULL_MODE       SFRS=0x01;P0M1&=~SET_BIT1;P0M2|=SET_BIT1
#define    P02_PUSHPULL_MODE       SFRS=0x01;P0M1&=~SET_BIT2;P0M2|=SET_BIT2
#define    P03_PUSHPULL_MODE       SFRS=0x01;P0M1&=~SET_BIT3;P0M2|=SET_BIT3
#define    P04_PUSHPULL_MODE       SFRS=0x01;P0M1&=~SET_BIT4;P0M2|=SET_BIT4
#define    P05_PUSHPULL_MODE       SFRS=0x01;P0M1&=~SET_BIT5;P0M2|=SET_BIT5
#define    P06_PUSHPULL_MODE       SFRS=0x01;P0M1&=~SET_BIT6;P0M2|=SET_BIT6
#define    P07_PUSHPULL_MODE       SFRS=0x01;P0M1&=~SET_BIT7;P0M2|=SET_BIT7
#define    P10_PUSHPULL_MODE       SFRS=0x01;P1M1&=~SET_BIT0;P1M2|=SET_BIT0
#define    P11_PUSHPULL_MODE       SFRS=0x01;P1M1&=~SET_BIT1;P1M2|=SET_BIT1
#define    P12_PUSHPULL_MODE       SFRS=0x01;P1M1&=~SET_BIT2;P1M2|=SET_BIT2
#define    P13_PUSHPULL_MODE       SFRS=0x01;P1M1&=~SET_BIT3;P1M2|=SET_BIT3
#define    P14_PUSHPULL_MODE       SFRS=0x01;P1M1&=~SET_BIT4;P1M2|=SET_BIT4
#define    P15_PUSHPULL_MODE       SFRS=0x01;P1M1&=~SET_BIT5;P1M2|=SET_BIT5
#define    P16_PUSHPULL_MODE       SFRS=0x01;P1M1&=~SET_BIT6;P1M2|=SET_BIT6
#define    P17_PUSHPULL_MODE       SFRS=0x01;P1M1&=~SET_BIT7;P1M2|=SET_BIT7
#define    P20_PUSHPULL_MODE       SFRS=0x01;P2M1&=~SET_BIT0;P2M2|=SET_BIT0
#define    P21_PUSHPULL_MODE       SFRS=0x01;P2M1&=~SET_BIT1;P2M2|=SET_BIT1
#define    P22_PUSHPULL_MODE       SFRS=0x01;P2M1&=~SET_BIT2;P2M2|=SET_BIT2
#define    P23_PUSHPULL_MODE       SFRS=0x01;P2M1&=~SET_BIT3;P2M2|=SET_BIT3
#define    P24_PUSHPULL_MODE       SFRS=0x01;P2M1&=~SET_BIT4;P2M2|=SET_BIT4
#define    P25_PUSHPULL_MODE       SFRS=0x01;P2M1&=~SET_BIT5;P2M2|=SET_BIT5
#define    P26_PUSHPULL_MODE       SFRS=0x01;P2M1&=~SET_BIT6;P2M2|=SET_BIT6
#define    P27_PUSHPULL_MODE       SFRS=0x01;P2M1&=~SET_BIT7;P2M2|=SET_BIT7
#define    P30_PUSHPULL_MODE       SFRS=0x01;P3M1&=~SET_BIT0;P3M2|=SET_BIT0
#define    P31_PUSHPULL_MODE       SFRS=0x01;P3M1&=~SET_BIT1;P3M2|=SET_BIT1
#define    P32_PUSHPULL_MODE       SFRS=0x01;P3M1&=~SET_BIT2;P3M2|=SET_BIT2
#define    P33_PUSHPULL_MODE       SFRS=0x01;P3M1&=~SET_BIT3;P3M2|=SET_BIT3
#define    P34_PUSHPULL_MODE       SFRS=0x01;P3M1&=~SET_BIT4;P3M2|=SET_BIT4
#define    P35_PUSHPULL_MODE       SFRS=0x01;P3M1&=~SET_BIT5;P3M2|=SET_BIT5
#define    P36_PUSHPULL_MODE       SFRS=0x01;P3M1&=~SET_BIT6;P3M2|=SET_BIT6
#define    P37_PUSHPULL_MODE       SFRS=0x01;P3M1&=~SET_BIT7;P3M2|=SET_BIT7
#define    P40_PUSHPULL_MODE       SFRS=0x01;P4M1&=~SET_BIT0;P4M2|=SET_BIT0
#define    P41_PUSHPULL_MODE       SFRS=0x01;P4M1&=~SET_BIT1;P4M2|=SET_BIT1
#define    P42_PUSHPULL_MODE       SFRS=0x01;P4M1&=~SET_BIT2;P4M2|=SET_BIT2
#define    P43_PUSHPULL_MODE       SFRS=0x01;P4M1&=~SET_BIT3;P4M2|=SET_BIT3
#define    P44_PUSHPULL_MODE       SFRS=0x01;P4M1&=~SET_BIT4;P4M2|=SET_BIT4
#define    P45_PUSHPULL_MODE       SFRS=0x01;P4M1&=~SET_BIT5;P4M2|=SET_BIT5
#define    P46_PUSHPULL_MODE       SFRS=0x01;P4M1&=~SET_BIT6;P4M2|=SET_BIT6
#define    P47_PUSHPULL_MODE       SFRS=0x01;P4M1&=~SET_BIT7;P4M2|=SET_BIT7
#define    P50_PUSHPULL_MODE       SFRS=0x01;P5M1&=~SET_BIT0;P5M2|=SET_BIT0
#define    P51_PUSHPULL_MODE       SFRS=0x01;P5M1&=~SET_BIT1;P5M2|=SET_BIT1
#define    P52_PUSHPULL_MODE       SFRS=0x01;P5M1&=~SET_BIT2;P5M2|=SET_BIT2
#define    P53_PUSHPULL_MODE       SFRS=0x01;P5M1&=~SET_BIT3;P5M2|=SET_BIT3
#define    P54_PUSHPULL_MODE       SFRS=0x01;P5M1&=~SET_BIT4;P5M2|=SET_BIT4
#define    P55_PUSHPULL_MODE       SFRS=0x01;P5M1&=~SET_BIT5;P5M2|=SET_BIT5
#define    P56_PUSHPULL_MODE       SFRS=0x01;P5M1&=~SET_BIT6;P5M2|=SET_BIT6
#define    P57_PushPull_Mode       SFRS=0x01;P5M1&=~SET_BIT7;P5M2|=SET_BIT7
#define    All_GPIO_PUSHPULL_MODE  SFRS=0x01;P0M1=0;P0M2=0xFF;P1M1=0;P1M2=0XFF;P2M1=0;P2M2=0XFF;\
                                   P3M1=0;P3M2=0XFF;P4M1=0;P4M2=0XFF;P5M1=0;P5M2=0XFF;
//------   ------------- Define Port as Input Only mode -------------------
#define    P00_INPUT_MODE          SFRS=0x01;P0M1|=SET_BIT0;P0M2&=~SET_BIT0
#define    P01_INPUT_MODE          SFRS=0x01;P0M1|=SET_BIT1;P0M2&=~SET_BIT1
#define    P02_INPUT_MODE          SFRS=0x01;P0M1|=SET_BIT2;P0M2&=~SET_BIT2
#define    P03_INPUT_MODE          SFRS=0x01;P0M1|=SET_BIT3;P0M2&=~SET_BIT3
#define    P04_INPUT_MODE          SFRS=0x01;P0M1|=SET_BIT4;P0M2&=~SET_BIT4
#define    P05_INPUT_MODE          SFRS=0x01;P0M1|=SET_BIT5;P0M2&=~SET_BIT5
#define    P06_INPUT_MODE          SFRS=0x01;P0M1|=SET_BIT6;P0M2&=~SET_BIT6
#define    P07_INPUT_MODE          SFRS=0x01;P0M1|=SET_BIT7;P0M2&=~SET_BIT7
#define    P10_INPUT_MODE          SFRS=0x01;P1M1|=SET_BIT0;P1M2&=~SET_BIT0
#define    P11_INPUT_MODE          SFRS=0x01;P1M1|=SET_BIT1;P1M2&=~SET_BIT1
#define    P12_INPUT_MODE          SFRS=0x01;P1M1|=SET_BIT2;P1M2&=~SET_BIT2
#define    P13_INPUT_MODE          SFRS=0x01;P1M1|=SET_BIT3;P1M2&=~SET_BIT3
#define    P14_INPUT_MODE          SFRS=0x01;P1M1|=SET_BIT4;P1M2&=~SET_BIT4
#define    P15_INPUT_MODE          SFRS=0x01;P1M1|=SET_BIT5;P1M2&=~SET_BIT5
#define    P16_INPUT_MODE          SFRS=0x01;P1M1|=SET_BIT6;P1M2&=~SET_BIT6
#define    P17_INPUT_MODE          SFRS=0x01;P1M1|=SET_BIT7;P1M2&=~SET_BIT7
#define    P20_INPUT_MODE          SFRS=0x01;P2M1|=SET_BIT0;P2M2&=~SET_BIT0
#define    P21_INPUT_MODE          SFRS=0x01;P2M1|=SET_BIT1;P2M2&=~SET_BIT1
#define    P22_INPUT_MODE          SFRS=0x01;P2M1|=SET_BIT2;P2M2&=~SET_BIT2
#define    P23_INPUT_MODE          SFRS=0x01;P2M1|=SET_BIT3;P2M2&=~SET_BIT3
#define    P24_INPUT_MODE          SFRS=0x01;P2M1|=SET_BIT4;P2M2&=~SET_BIT4
#define    P25_INPUT_MODE          SFRS=0x01;P2M1|=SET_BIT5;P2M2&=~SET_BIT5
#define    P26_INPUT_MODE          SFRS=0x01;P2M1|=SET_BIT6;P2M2&=~SET_BIT6
#define    P27_INPUT_MODE          SFRS=0x01;P2M1|=SET_BIT7;P2M2&=~SET_BIT7
#define    P30_INPUT_MODE          SFRS=0x01;P3M1|=SET_BIT0;P3M2&=~SET_BIT0
#define    P31_INPUT_MODE          SFRS=0x01;P3M1|=SET_BIT1;P3M2&=~SET_BIT1
#define    P32_INPUT_MODE          SFRS=0x01;P3M1|=SET_BIT2;P3M2&=~SET_BIT2
#define    P33_INPUT_MODE          SFRS=0x01;P3M1|=SET_BIT3;P3M2&=~SET_BIT3
#define    P34_INPUT_MODE          SFRS=0x01;P3M1|=SET_BIT4;P3M2&=~SET_BIT4
#define    P35_INPUT_MODE          SFRS=0x01;P3M1|=SET_BIT5;P3M2&=~SET_BIT5
#define    P36_INPUT_MODE          SFRS=0x01;P3M1|=SET_BIT6;P3M2&=~SET_BIT6
#define    P37_INPUT_MODE          SFRS=0x01;P3M1|=SET_BIT7;P3M2&=~SET_BIT7
#define    P40_INPUT_MODE          SFRS=0x01;P4M1|=SET_BIT0;P4M2&=~SET_BIT0
#define    P41_INPUT_MODE          SFRS=0x01;P4M1|=SET_BIT1;P4M2&=~SET_BIT1
#define    P42_INPUT_MODE          SFRS=0x01;P4M1|=SET_BIT2;P4M2&=~SET_BIT2
#define    P43_INPUT_MODE          SFRS=0x01;P4M1|=SET_BIT3;P4M2&=~SET_BIT3
#define    P44_INPUT_MODE          SFRS=0x01;P4M1|=SET_BIT4;P4M2&=~SET_BIT4
#define    P45_INPUT_MODE          SFRS=0x01;P4M1|=SET_BIT5;P4M2&=~SET_BIT5
#define    P46_INPUT_MODE          SFRS=0x01;P4M1|=SET_BIT6;P4M2&=~SET_BIT6
#define    P47_INPUT_MODE          SFRS=0x01;P4M1|=SET_BIT7;P4M2&=~SET_BIT7
#define    P50_INPUT_MODE          SFRS=0x01;P5M1|=SET_BIT0;P5M2&=~SET_BIT0
#define    P51_INPUT_MODE          SFRS=0x01;P5M1|=SET_BIT1;P5M2&=~SET_BIT1
#define    P52_INPUT_MODE          SFRS=0x01;P5M1|=SET_BIT2;P5M2&=~SET_BIT2
#define    P53_INPUT_MODE          SFRS=0x01;P5M1|=SET_BIT3;P5M2&=~SET_BIT3
#define    P54_INPUT_MODE          SFRS=0x01;P5M1|=SET_BIT4;P5M2&=~SET_BIT4
#define    P55_INPUT_MODE          SFRS=0x01;P5M1|=SET_BIT5;P5M2&=~SET_BIT5
#define    P56_INPUT_MODE          SFRS=0x01;P5M1|=SET_BIT6;P5M2&=~SET_BIT6
#define    P57_INPUT_MODE          SFRS=0x01;P5M1|=SET_BIT7;P5M2&=~SET_BIT7
#define    ALL_GPIO_INPUT_MODE     SFRS=0x01;P0M1=0XFF;P0M2=0;P1M1=0XFF;P1M2=0;P2M1=0XFF;\
                                   P2M2=0;P3M1=0XFF;P3M2=0;P4M1=0XFF;P4M2=0;P5M1=0XFF;P5M2=0;
/*------   -------------Define Port as Open Drain mode -------------------*/
#define    P00_OPENDRAIN_MODE      SFRS=0x01;P0M1|=SET_BIT0;P0M2|=SET_BIT0
#define    P01_OPENDRAIN_MODE      SFRS=0x01;P0M1|=SET_BIT1;P0M2|=SET_BIT1
#define    P02_OPENDRAIN_MODE      SFRS=0x01;P0M1|=SET_BIT2;P0M2|=SET_BIT2
#define    P03_OPENDRAIN_MODE      SFRS=0x01;P0M1|=SET_BIT3;P0M2|=SET_BIT3
#define    P04_OPENDRAIN_MODE      SFRS=0x01;P0M1|=SET_BIT4;P0M2|=SET_BIT4
#define    P05_OPENDRAIN_MODE      SFRS=0x01;P0M1|=SET_BIT5;P0M2|=SET_BIT5
#define    P06_OPENDRAIN_MODE      SFRS=0x01;P0M1|=SET_BIT6;P0M2|=SET_BIT6
#define    P07_OPENDRAIN_MODE      SFRS=0x01;P0M1|=SET_BIT7;P0M2|=SET_BIT7
#define    P10_OPENDRAIN_MODE      SFRS=0x01;P1M1|=SET_BIT0;P1M2|=SET_BIT0
#define    P11_OPENDRAIN_MODE      SFRS=0x01;P1M1|=SET_BIT1;P1M2|=SET_BIT1
#define    P12_OPENDRAIN_MODE      SFRS=0x01;P1M1|=SET_BIT2;P1M2|=SET_BIT2
#define    P13_OPENDRAIN_MODE      SFRS=0x01;P1M1|=SET_BIT3;P1M2|=SET_BIT3
#define    P14_OPENDRAIN_MODE      SFRS=0x01;P1M1|=SET_BIT4;P1M2|=SET_BIT4
#define    P15_OPENDRAIN_MODE      SFRS=0x01;P1M1|=SET_BIT5;P1M2|=SET_BIT5
#define    P16_OPENDRAIN_MODE      SFRS=0x01;P1M1|=SET_BIT6;P1M2|=SET_BIT6
#define    P17_OPENDRAIN_MODE      SFRS=0x01;P1M1|=SET_BIT7;P1M2|=SET_BIT7
#define    P20_OPENDRAIN_MODE      SFRS=0x01;P2M1|=SET_BIT0;P2M2|=SET_BIT0
#define    P21_OPENDRAIN_MODE      SFRS=0x01;P2M1|=SET_BIT1;P2M2|=SET_BIT1
#define    P22_OPENDRAIN_MODE      SFRS=0x01;P2M1|=SET_BIT2;P2M2|=SET_BIT2
#define    P23_OPENDRAIN_MODE      SFRS=0x01;P2M1|=SET_BIT3;P2M2|=SET_BIT3
#define    P24_OPENDRAIN_MODE      SFRS=0x01;P2M1|=SET_BIT4;P2M2|=SET_BIT4
#define    P25_OPENDRAIN_MODE      SFRS=0x01;P2M1|=SET_BIT5;P2M2|=SET_BIT5
#define    P26_OPENDRAIN_MODE      SFRS=0x01;P2M1|=SET_BIT6;P2M2|=SET_BIT6
#define    P27_OPENDRAIN_MODE      SFRS=0x01;P2M1|=SET_BIT7;P2M2|=SET_BIT7
#define    P30_OPENDRAIN_MODE      SFRS=0x01;P3M1|=SET_BIT0;P3M2|=SET_BIT0
#define    P31_OPENDRAIN_MODE      SFRS=0x01;P3M1|=SET_BIT1;P3M2|=SET_BIT1
#define    P32_OPENDRAIN_MODE      SFRS=0x01;P3M1|=SET_BIT2;P3M2|=SET_BIT2
#define    P33_OPENDRAIN_MODE      SFRS=0x01;P3M1|=SET_BIT3;P3M2|=SET_BIT3
#define    P34_OPENDRAIN_MODE      SFRS=0x01;P3M1|=SET_BIT4;P3M2|=SET_BIT4
#define    P35_OPENDRAIN_MODE      SFRS=0x01;P3M1|=SET_BIT5;P3M2|=SET_BIT5
#define    P36_OPENDRAIN_MODE      SFRS=0x01;P3M1|=SET_BIT6;P3M2|=SET_BIT6
#define    P37_OPENDRAIN_MODE      SFRS=0x01;P3M1|=SET_BIT7;P3M2|=SET_BIT7
#define    P40_OPENDRAIN_MODE      SFRS=0x01;P4M1|=SET_BIT0;P4M2|=SET_BIT0
#define    P41_OPENDRAIN_MODE      SFRS=0x01;P4M1|=SET_BIT1;P4M2|=SET_BIT1
#define    P42_OPENDRAIN_MODE      SFRS=0x01;P4M1|=SET_BIT2;P4M2|=SET_BIT2
#define    P43_OPENDRAIN_MODE      SFRS=0x01;P4M1|=SET_BIT3;P4M2|=SET_BIT3
#define    P44_OPENDRAIN_MODE      SFRS=0x01;P4M1|=SET_BIT4;P4M2|=SET_BIT4
#define    P45_OPENDRAIN_MODE      SFRS=0x01;P4M1|=SET_BIT5;P4M2|=SET_BIT5
#define    P46_OPENDRAIN_MODE      SFRS=0x01;P4M1|=SET_BIT6;P4M2|=SET_BIT6
#define    P47_OPENDRAIN_MODE      SFRS=0x01;P4M1|=SET_BIT7;P4M2|=SET_BIT7
#define    P50_OPENDRAIN_MODE      SFRS=0x01;P5M1|=SET_BIT0;P5M2|=SET_BIT0
#define    P51_OPENDRAIN_MODE      SFRS=0x01;P5M1|=SET_BIT1;P5M2|=SET_BIT1
#define    P52_OPENDRAIN_MODE      SFRS=0x01;P5M1|=SET_BIT2;P5M2|=SET_BIT2
#define    P53_OPENDRAIN_MODE      SFRS=0x01;P5M1|=SET_BIT3;P5M2|=SET_BIT3
#define    P54_OPENDRAIN_MODE      SFRS=0x01;P5M1|=SET_BIT4;P5M2|=SET_BIT4
#define    P55_OPENDRAIN_MODE      SFRS=0x01;P5M1|=SET_BIT5;P5M2|=SET_BIT5
#define    P56_OPENDRAIN_MODE      SFRS=0x01;P5M1|=SET_BIT6;P5M2|=SET_BIT6
#define    P57_OPENDRAIN_MODE      SFRS=0x01;P5M1|=SET_BIT7;P5M2|=SET_BIT7
#define    All_GPIO_OEPNDRAIN_MODE SFRS=0x01;P0M1=0XFF;P0M2=0XFF;P1M1=0XFF;P1M2=0XFF;\
                                   P2M1=0XFF;P2M2=0XFF;P3M1=0XFF;P3M2=0XFF;\
                                   P4M1=0XFF;P4M2=0XFF;P5M1=0XFF;P5M2=0XFF
/*------   ------------- GPIO pull up enable -------------------*/  
#define    ENABLE_P00_PULLUP       SFRS=0x01;P0UP|=SET_BIT0
#define    ENABLE_P01_PULLUP       SFRS=0x01;P0UP|=SET_BIT1
#define    ENABLE_P02_PULLUP       SFRS=0x01;P0UP|=SET_BIT2
#define    ENABLE_P03_PULLUP       SFRS=0x01;P0UP|=SET_BIT3
#define    ENABLE_P04_PULLUP       SFRS=0x01;P0UP|=SET_BIT4
#define    ENABLE_P05_PULLUP       SFRS=0x01;P0UP|=SET_BIT5
#define    ENABLE_P06_PULLUP       SFRS=0x01;P0UP|=SET_BIT6
#define    ENABLE_P07_PULLUP       SFRS=0x01;P0UP|=SET_BIT7
#define    ENABLE_P10_PULLUP       SFRS=0x01;P1UP|=SET_BIT0
#define    ENABLE_P11_PULLUP       SFRS=0x01;P1UP|=SET_BIT1
#define    ENABLE_P12_PULLUP       SFRS=0x01;P1UP|=SET_BIT2
#define    ENABLE_P13_PULLUP       SFRS=0x01;P1UP|=SET_BIT3
#define    ENABLE_P14_PULLUP       SFRS=0x01;P1UP|=SET_BIT4
#define    ENABLE_P15_PULLUP       SFRS=0x01;P1UP|=SET_BIT5
#define    ENABLE_P16_PULLUP       SFRS=0x01;P1UP|=SET_BIT6
#define    ENABLE_P17_PULLUP       SFRS=0x01;P1UP|=SET_BIT7
#define    ENABLE_P20_PULLUP       SFRS=0x01;P2UP|=SET_BIT0
#define    ENABLE_P21_PULLUP       SFRS=0x01;P2UP|=SET_BIT1
#define    ENABLE_P22_PULLUP       SFRS=0x01;P2UP|=SET_BIT2
#define    ENABLE_P23_PULLUP       SFRS=0x01;P2UP|=SET_BIT3
#define    ENABLE_P24_PULLUP       SFRS=0x01;P2UP|=SET_BIT4
#define    ENABLE_P25_PULLUP       SFRS=0x01;P2UP|=SET_BIT5
#define    ENABLE_P26_PULLUP       SFRS=0x01;P2UP|=SET_BIT6
#define    ENABLE_P27_PULLUP       SFRS=0x01;P2UP|=SET_BIT7
#define    ENABLE_P30_PULLUP       SFRS=0x01;P3UP|=SET_BIT0
#define    ENABLE_P31_PULLUP       SFRS=0x01;P3UP|=SET_BIT1
#define    ENABLE_P32_PULLUP       SFRS=0x01;P3UP|=SET_BIT2
#define    ENABLE_P33_PULLUP       SFRS=0x01;P3UP|=SET_BIT3
#define    ENABLE_P34_PULLUP       SFRS=0x01;P3UP|=SET_BIT4
#define    ENABLE_P35_PULLUP       SFRS=0x01;P3UP|=SET_BIT5
#define    ENABLE_P36_PULLUP       SFRS=0x01;P3UP|=SET_BIT6
#define    ENABLE_P37_PULLUP       SFRS=0x01;P3UP|=SET_BIT7
#define    ENABLE_P40_PULLUP       SFRS=0x01;P4UP|=SET_BIT0
#define    ENABLE_P41_PULLUP       SFRS=0x01;P4UP|=SET_BIT1
#define    ENABLE_P42_PULLUP       SFRS=0x01;P4UP|=SET_BIT2
#define    ENABLE_P43_PULLUP       SFRS=0x01;P4UP|=SET_BIT3
#define    ENABLE_P44_PULLUP       SFRS=0x01;P4UP|=SET_BIT4
#define    ENABLE_P45_PULLUP       SFRS=0x01;P4UP|=SET_BIT5
#define    ENABLE_P46_PULLUP       SFRS=0x01;P4UP|=SET_BIT6
#define    ENABLE_P47_PULLUP       SFRS=0x01;P4UP|=SET_BIT7
#define    ENABLE_P50_PULLUP       SFRS=0x01;P5UP|=SET_BIT0
#define    ENABLE_P51_PULLUP       SFRS=0x01;P5UP|=SET_BIT1
#define    ENABLE_P52_PULLUP       SFRS=0x01;P5UP|=SET_BIT2
#define    ENABLE_P53_PULLUP       SFRS=0x01;P5UP|=SET_BIT3
#define    ENABLE_P54_PULLUP       SFRS=0x01;P5UP|=SET_BIT4
#define    ENABLE_P55_PULLUP       SFRS=0x01;P5UP|=SET_BIT5
#define    ENABLE_P56_PULLUP       SFRS=0x01;P5UP|=SET_BIT6
#define    ENABLE_P57_PULLUP       SFRS=0x01;P5UP|=SET_BIT7
/*------------------- GPIO pull up disable -------------------*/                              
#define    DISABLE_P00_PULLUP     SFRS=0x01;P0UP&=CLR_BIT0
#define    DISABLE_P01_PULLUP     SFRS=0x01;P0UP&=CLR_BIT1
#define    DISABLE_P02_PULLUP     SFRS=0x01;P0UP&=CLR_BIT2
#define    DISABLE_P03_PULLUP     SFRS=0x01;P0UP&=CLR_BIT3
#define    DISABLE_P04_PULLUP     SFRS=0x01;P0UP&=CLR_BIT4
#define    DISABLE_P05_PULLUP     SFRS=0x01;P0UP&=CLR_BIT5
#define    DISABLE_P06_PULLUP     SFRS=0x01;P0UP&=CLR_BIT6
#define    DISABLE_P07_PULLUP     SFRS=0x01;P0UP&=CLR_BIT7
#define    DISABLE_P10_PULLUP     SFRS=0x01;P1UP&=CLR_BIT0
#define    DISABLE_P11_PULLUP     SFRS=0x01;P1UP&=CLR_BIT1
#define    DISABLE_P12_PULLUP     SFRS=0x01;P1UP&=CLR_BIT2
#define    DISABLE_P13_PULLUP     SFRS=0x01;P1UP&=CLR_BIT3
#define    DISABLE_P14_PULLUP     SFRS=0x01;P1UP&=CLR_BIT4
#define    DISABLE_P15_PULLUP     SFRS=0x01;P1UP&=CLR_BIT5
#define    DISABLE_P16_PULLUP     SFRS=0x01;P1UP&=CLR_BIT6
#define    DISABLE_P17_PULLUP     SFRS=0x01;P1UP&=CLR_BIT7
#define    DISABLE_P20_PULLUP     SFRS=0x01;P2UP&=CLR_BIT0
#define    DISABLE_P21_PULLUP     SFRS=0x01;P2UP&=CLR_BIT1
#define    DISABLE_P22_PULLUP     SFRS=0x01;P2UP&=CLR_BIT2
#define    DISABLE_P23_PULLUP     SFRS=0x01;P2UP&=CLR_BIT3
#define    DISABLE_P24_PULLUP     SFRS=0x01;P2UP&=CLR_BIT4
#define    DISABLE_P25_PULLUP     SFRS=0x01;P2UP&=CLR_BIT5
#define    DISABLE_P26_PULLUP     SFRS=0x01;P2UP&=CLR_BIT6
#define    DISABLE_P27_PULLUP     SFRS=0x01;P2UP&=CLR_BIT7
#define    DISABLE_P30_PULLUP     SFRS=0x01;P3UP&=CLR_BIT0
#define    DISABLE_P31_PULLUP     SFRS=0x01;P3UP&=CLR_BIT1
#define    DISABLE_P32_PULLUP     SFRS=0x01;P3UP&=CLR_BIT2
#define    DISABLE_P33_PULLUP     SFRS=0x01;P3UP&=CLR_BIT3
#define    DISABLE_P34_PULLUP     SFRS=0x01;P3UP&=CLR_BIT4
#define    DISABLE_P35_PULLUP     SFRS=0x01;P3UP&=CLR_BIT5
#define    DISABLE_P36_PULLUP     SFRS=0x01;P3UP&=CLR_BIT6
#define    DISABLE_P37_PULLUP     SFRS=0x01;P3UP&=CLR_BIT7
#define    DISABLE_P40_PULLUP     SFRS=0x01;P4UP&=CLR_BIT0
#define    DISABLE_P41_PULLUP     SFRS=0x01;P4UP&=CLR_BIT1
#define    DISABLE_P42_PULLUP     SFRS=0x01;P4UP&=CLR_BIT2
#define    DISABLE_P43_PULLUP     SFRS=0x01;P4UP&=CLR_BIT3
#define    DISABLE_P44_PULLUP     SFRS=0x01;P4UP&=CLR_BIT4
#define    DISABLE_P45_PULLUP     SFRS=0x01;P4UP&=CLR_BIT5
#define    DISABLE_P46_PULLUP     SFRS=0x01;P4UP&=CLR_BIT6
#define    DISABLE_P47_PULLUP     SFRS=0x01;P4UP&=CLR_BIT7
#define    DISABLE_P50_PULLUP     SFRS=0x01;P5UP&=CLR_BIT0
#define    DISABLE_P51_PULLUP     SFRS=0x01;P5UP&=CLR_BIT1
#define    DISABLE_P52_PULLUP     SFRS=0x01;P5UP&=CLR_BIT2
#define    DISABLE_P53_PULLUP     SFRS=0x01;P5UP&=CLR_BIT3
#define    DISABLE_P54_PULLUP     SFRS=0x01;P5UP&=CLR_BIT4
#define    DISABLE_P55_PULLUP     SFRS=0x01;P5UP&=CLR_BIT5
#define    DISABLE_P56_PULLUP     SFRS=0x01;P5UP&=CLR_BIT6
#define    DISABLE_P57_PULLUP     SFRS=0x01;P5UP&=CLR_BIT7
/*------   ------------- GPIO pull down enable -------------------*/  
#define    ENABLE_P00_PULLDOWN     SFRS=0x01;P0DW|=SET_BIT0
#define    ENABLE_P01_PULLDOWN     SFRS=0x01;P0DW|=SET_BIT1
#define    ENABLE_P02_PULLDOWN     SFRS=0x01;P0DW|=SET_BIT2
#define    ENABLE_P03_PULLDOWN     SFRS=0x01;P0DW|=SET_BIT3
#define    ENABLE_P04_PULLDOWN     SFRS=0x01;P0DW|=SET_BIT4
#define    ENABLE_P05_PULLDOWN     SFRS=0x01;P0DW|=SET_BIT5
#define    ENABLE_P06_PULLDOWN     SFRS=0x01;P0DW|=SET_BIT6
#define    ENABLE_P07_PULLDOWN     SFRS=0x01;P0DW|=SET_BIT7
#define    ENABLE_P10_PULLDOWN     SFRS=0x01;P1DW|=SET_BIT0
#define    ENABLE_P11_PULLDOWN     SFRS=0x01;P1DW|=SET_BIT1
#define    ENABLE_P12_PULLDOWN     SFRS=0x01;P1DW|=SET_BIT2
#define    ENABLE_P13_PULLDOWN     SFRS=0x01;P1DW|=SET_BIT3
#define    ENABLE_P14_PULLDOWN     SFRS=0x01;P1DW|=SET_BIT4
#define    ENABLE_P15_PULLDOWN     SFRS=0x01;P1DW|=SET_BIT5
#define    ENABLE_P16_PULLDOWN     SFRS=0x01;P1DW|=SET_BIT6
#define    ENABLE_P17_PULLDOWN     SFRS=0x01;P1DW|=SET_BIT7
#define    ENABLE_P20_PULLDOWN     SFRS=0x01;P2DW|=SET_BIT0
#define    ENABLE_P21_PULLDOWN     SFRS=0x01;P2DW|=SET_BIT1
#define    ENABLE_P22_PULLDOWN     SFRS=0x01;P2DW|=SET_BIT2
#define    ENABLE_P23_PULLDOWN     SFRS=0x01;P2DW|=SET_BIT3
#define    ENABLE_P24_PULLDOWN     SFRS=0x01;P2DW|=SET_BIT4
#define    ENABLE_P25_PULLDOWN     SFRS=0x01;P2DW|=SET_BIT5
#define    ENABLE_P26_PULLDOWN     SFRS=0x01;P2DW|=SET_BIT6
#define    ENABLE_P27_PULLDOWN     SFRS=0x01;P2DW|=SET_BIT7
#define    ENABLE_P30_PULLDOWN     SFRS=0x01;P3DW|=SET_BIT0
#define    ENABLE_P31_PULLDOWN     SFRS=0x01;P3DW|=SET_BIT1
#define    ENABLE_P32_PULLDOWN     SFRS=0x01;P3DW|=SET_BIT2
#define    ENABLE_P33_PULLDOWN     SFRS=0x01;P3DW|=SET_BIT3
#define    ENABLE_P34_PULLDOWN     SFRS=0x01;P3DW|=SET_BIT4
#define    ENABLE_P35_PULLDOWN     SFRS=0x01;P3DW|=SET_BIT5
#define    ENABLE_P36_PULLDOWN     SFRS=0x01;P3DW|=SET_BIT6
#define    ENABLE_P37_PULLDOWN     SFRS=0x01;P3DW|=SET_BIT7
#define    ENABLE_P40_PULLDOWN     SFRS=0x01;P4DW|=SET_BIT0
#define    ENABLE_P41_PULLDOWN     SFRS=0x01;P4DW|=SET_BIT1
#define    ENABLE_P42_PULLDOWN     SFRS=0x01;P4DW|=SET_BIT2
#define    ENABLE_P43_PULLDOWN     SFRS=0x01;P4DW|=SET_BIT3
#define    ENABLE_P44_PULLDOWN     SFRS=0x01;P4DW|=SET_BIT4
#define    ENABLE_P45_PULLDOWN     SFRS=0x01;P4DW|=SET_BIT5
#define    ENABLE_P46_PULLDOWN     SFRS=0x01;P4DW|=SET_BIT6
#define    ENABLE_P47_PULLDOWN     SFRS=0x01;P4DW|=SET_BIT7
#define    ENABLE_P50_PULLDOWN     SFRS=0x01;P5DW|=SET_BIT0
#define    ENABLE_P51_PULLDOWN     SFRS=0x01;P5DW|=SET_BIT1
#define    ENABLE_P52_PULLDOWN     SFRS=0x01;P5DW|=SET_BIT2
#define    ENABLE_P53_PULLDOWN     SFRS=0x01;P5DW|=SET_BIT3
#define    ENABLE_P54_PULLDOWN     SFRS=0x01;P5DW|=SET_BIT4
#define    ENABLE_P55_PULLDOWN     SFRS=0x01;P5DW|=SET_BIT5
#define    ENABLE_P56_PULLDOWN     SFRS=0x01;P5DW|=SET_BIT6
#define    ENABLE_P57_PULLDOWN     SFRS=0x01;P5DW|=SET_BIT7
/*------   ------------- GPIO pull down disable -------------------*/
#define    DISABLE_P00_PULLDOWN    SFRS=0x01;P0DW&=CLR_BIT0
#define    DISABLE_P01_PULLDOWN    SFRS=0x01;P0DW&=CLR_BIT1
#define    DISABLE_P02_PULLDOWN    SFRS=0x01;P0DW&=CLR_BIT2
#define    DISABLE_P03_PULLDOWN    SFRS=0x01;P0DW&=CLR_BIT3
#define    DISABLE_P04_PULLDOWN    SFRS=0x01;P0DW&=CLR_BIT4
#define    DISABLE_P05_PULLDOWN    SFRS=0x01;P0DW&=CLR_BIT5
#define    DISABLE_P06_PULLDOWN    SFRS=0x01;P0DW&=CLR_BIT6
#define    DISABLE_P07_PULLDOWN    SFRS=0x01;P0DW&=CLR_BIT7
#define    DISABLE_P10_PULLDOWN    SFRS=0x01;P1DW&=CLR_BIT0
#define    DISABLE_P11_PULLDOWN    SFRS=0x01;P1DW&=CLR_BIT1
#define    DISABLE_P12_PULLDOWN    SFRS=0x01;P1DW&=CLR_BIT2
#define    DISABLE_P13_PULLDOWN    SFRS=0x01;P1DW&=CLR_BIT3
#define    DISABLE_P14_PULLDOWN    SFRS=0x01;P1DW&=CLR_BIT4
#define    DISABLE_P15_PULLDOWN    SFRS=0x01;P1DW&=CLR_BIT5
#define    DISABLE_P16_PULLDOWN    SFRS=0x01;P1DW&=CLR_BIT6
#define    DISABLE_P17_PULLDOWN    SFRS=0x01;P1DW&=CLR_BIT7
#define    DISABLE_P20_PULLDOWN    SFRS=0x01;P2DW&=CLR_BIT0
#define    DISABLE_P21_PULLDOWN    SFRS=0x01;P2DW&=CLR_BIT1
#define    DISABLE_P22_PULLDOWN    SFRS=0x01;P2DW&=CLR_BIT2
#define    DISABLE_P23_PULLDOWN    SFRS=0x01;P2DW&=CLR_BIT3
#define    DISABLE_P24_PULLDOWN    SFRS=0x01;P2DW&=CLR_BIT4
#define    DISABLE_P25_PULLDOWN    SFRS=0x01;P2DW&=CLR_BIT5
#define    DISABLE_P26_PULLDOWN    SFRS=0x01;P2DW&=CLR_BIT6
#define    DISABLE_P27_PULLDOWN    SFRS=0x01;P2DW&=CLR_BIT7
#define    DISABLE_P30_PULLDOWN    SFRS=0x01;P3DW&=CLR_BIT0
#define    DISABLE_P31_PULLDOWN    SFRS=0x01;P3DW&=CLR_BIT1
#define    DISABLE_P32_PULLDOWN    SFRS=0x01;P3DW&=CLR_BIT2
#define    DISABLE_P33_PULLDOWN    SFRS=0x01;P3DW&=CLR_BIT3
#define    DISABLE_P34_PULLDOWN    SFRS=0x01;P3DW&=CLR_BIT4
#define    DISABLE_P35_PULLDOWN    SFRS=0x01;P3DW&=CLR_BIT5
#define    DISABLE_P36_PULLDOWN    SFRS=0x01;P3DW&=CLR_BIT6
#define    DISABLE_P37_PULLDOWN    SFRS=0x01;P3DW&=CLR_BIT7
#define    DISABLE_P40_PULLDOWN    SFRS=0x01;P4DW&=CLR_BIT0
#define    DISABLE_P41_PULLDOWN    SFRS=0x01;P4DW&=CLR_BIT1
#define    DISABLE_P42_PULLDOWN    SFRS=0x01;P4DW&=CLR_BIT2
#define    DISABLE_P43_PULLDOWN    SFRS=0x01;P4DW&=CLR_BIT3
#define    DISABLE_P44_PULLDOWN    SFRS=0x01;P4DW&=CLR_BIT4
#define    DISABLE_P45_PULLDOWN    SFRS=0x01;P4DW&=CLR_BIT5
#define    DISABLE_P46_PULLDOWN    SFRS=0x01;P4DW&=CLR_BIT6
#define    DISABLE_P47_PULLDOWN    SFRS=0x01;P4DW&=CLR_BIT7
#define    DISABLE_P50_PULLDOWN    SFRS=0x01;P5DW&=CLR_BIT0
#define    DISABLE_P51_PULLDOWN    SFRS=0x01;P5DW&=CLR_BIT1
#define    DISABLE_P52_PULLDOWN    SFRS=0x01;P5DW&=CLR_BIT2
#define    DISABLE_P53_PULLDOWN    SFRS=0x01;P5DW&=CLR_BIT3
#define    DISABLE_P54_PULLDOWN    SFRS=0x01;P5UP&=CLR_BIT4
#define    DISABLE_P55_PULLDOWN    SFRS=0x01;P5UP&=CLR_BIT5
#define    DISABLE_P56_PULLDOWN    SFRS=0x01;P5UP&=CLR_BIT6
#define    DISABLE_P57_PULLDOWN    SFRS=0x01;P5UP&=CLR_BIT7

/****************************************************************************
    PIN interrupt define
***************************************************************************/
//---------------- Pin interrupt channel 0 PIT0 ------------------------
#define    ENABLE_PIT0_P00_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x00
#define    ENABLE_PIT0_P01_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x01
#define    ENABLE_PIT0_P02_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x02
#define    ENABLE_PIT0_P03_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x03
#define    ENABLE_PIT0_P04_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x04
#define    ENABLE_PIT0_P05_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x05
#define    ENABLE_PIT0_P06_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x06
#define    ENABLE_PIT0_P07_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x07
#define    ENABLE_PIT0_P10_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x10
#define    ENABLE_PIT0_P11_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x11
#define    ENABLE_PIT0_P12_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x12
#define    ENABLE_PIT0_P13_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x13
#define    ENABLE_PIT0_P14_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x14
#define    ENABLE_PIT0_P15_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x15
#define    ENABLE_PIT0_P16_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x16
#define    ENABLE_PIT0_P17_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x17
#define    ENABLE_PIT0_P20_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x20
#define    ENABLE_PIT0_P21_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x21
#define    ENABLE_PIT0_P22_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x22
#define    ENABLE_PIT0_P23_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x23
#define    ENABLE_PIT0_P24_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x24
#define    ENABLE_PIT0_P25_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x25
#define    ENABLE_PIT0_P26_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x26
#define    ENABLE_PIT0_P27_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x27
#define    ENABLE_PIT0_P30_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x30
#define    ENABLE_PIT0_P31_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x31
#define    ENABLE_PIT0_P32_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x32
#define    ENABLE_PIT0_P33_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x33
#define    ENABLE_PIT0_P34_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x34
#define    ENABLE_PIT0_P35_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x35
#define    ENABLE_PIT0_P36_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x36
#define    ENABLE_PIT0_P37_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x37
#define    ENABLE_PIT0_P40_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x40
#define    ENABLE_PIT0_P41_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x41
#define    ENABLE_PIT0_P42_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x42
#define    ENABLE_PIT0_P43_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x43
#define    ENABLE_PIT0_P44_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x44
#define    ENABLE_PIT0_P45_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x45
#define    ENABLE_PIT0_P46_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x46
#define    ENABLE_PIT0_P47_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x47
#define    ENABLE_PIT0_P50_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x50
#define    ENABLE_PIT0_P51_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x51
#define    ENABLE_PIT0_P52_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x52
#define    ENABLE_PIT0_P53_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x53
#define    ENABLE_PIT0_P54_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x54
#define    ENABLE_PIT0_P55_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x55
#define    ENABLE_PIT0_P56_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x56
#define    ENABLE_PIT0_P57_LOWLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x57
           
#define    ENABLE_PIT0_P00_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x00
#define    ENABLE_PIT0_P01_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x01
#define    ENABLE_PIT0_P02_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x02
#define    ENABLE_PIT0_P03_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x03
#define    ENABLE_PIT0_P04_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x04
#define    ENABLE_PIT0_P05_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x05
#define    ENABLE_PIT0_P06_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x06
#define    ENABLE_PIT0_P07_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x07
#define    ENABLE_PIT0_P10_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x10
#define    ENABLE_PIT0_P11_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x11
#define    ENABLE_PIT0_P12_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x12
#define    ENABLE_PIT0_P13_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x13
#define    ENABLE_PIT0_P14_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x14
#define    ENABLE_PIT0_P15_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x15
#define    ENABLE_PIT0_P16_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x16
#define    ENABLE_PIT0_P17_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x17
#define    ENABLE_PIT0_P20_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x20
#define    ENABLE_PIT0_P21_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x21
#define    ENABLE_PIT0_P22_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x22
#define    ENABLE_PIT0_P23_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x23
#define    ENABLE_PIT0_P24_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x24
#define    ENABLE_PIT0_P25_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x25
#define    ENABLE_PIT0_P26_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x26
#define    ENABLE_PIT0_P27_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x27
#define    ENABLE_PIT0_P30_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x30
#define    ENABLE_PIT0_P31_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x31
#define    ENABLE_PIT0_P32_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x32
#define    ENABLE_PIT0_P33_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x33
#define    ENABLE_PIT0_P34_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x34
#define    ENABLE_PIT0_P35_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x35
#define    ENABLE_PIT0_P36_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x36
#define    ENABLE_PIT0_P37_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x37
#define    ENABLE_PIT0_P40_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x40
#define    ENABLE_PIT0_P41_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x41
#define    ENABLE_PIT0_P42_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x42
#define    ENABLE_PIT0_P43_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x43
#define    ENABLE_PIT0_P44_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x44
#define    ENABLE_PIT0_P45_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x45
#define    ENABLE_PIT0_P46_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x46
#define    ENABLE_PIT0_P47_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x47
#define    ENABLE_PIT0_P50_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x50
#define    ENABLE_PIT0_P51_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x51
#define    ENABLE_PIT0_P52_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x52
#define    ENABLE_PIT0_P53_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x53
#define    ENABLE_PIT0_P54_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x54
#define    ENABLE_PIT0_P55_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x55
#define    ENABLE_PIT0_P56_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x56
#define    ENABLE_PIT0_P57_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x57
           
#define    ENABLE_PIT0_P00_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x00
#define    ENABLE_PIT0_P01_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x01
#define    ENABLE_PIT0_P02_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x02
#define    ENABLE_PIT0_P03_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x03
#define    ENABLE_PIT0_P04_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x04
#define    ENABLE_PIT0_P05_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x05
#define    ENABLE_PIT0_P06_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x06
#define    ENABLE_PIT0_P07_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x07
#define    ENABLE_PIT0_P10_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x10
#define    ENABLE_PIT0_P11_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x11
#define    ENABLE_PIT0_P12_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x12
#define    ENABLE_PIT0_P13_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x13
#define    ENABLE_PIT0_P14_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x14
#define    ENABLE_PIT0_P15_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x15
#define    ENABLE_PIT0_P16_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x16
#define    ENABLE_PIT0_P17_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x17
#define    ENABLE_PIT0_P20_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x20
#define    ENABLE_PIT0_P21_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x21
#define    ENABLE_PIT0_P22_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x22
#define    ENABLE_PIT0_P23_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x23
#define    ENABLE_PIT0_P24_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x24
#define    ENABLE_PIT0_P25_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x25
#define    ENABLE_PIT0_P26_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x26
#define    ENABLE_PIT0_P27_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x27
#define    ENABLE_PIT0_P30_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x30
#define    ENABLE_PIT0_P31_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x31
#define    ENABLE_PIT0_P32_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x32
#define    ENABLE_PIT0_P33_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x33
#define    ENABLE_PIT0_P34_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x34
#define    ENABLE_PIT0_P35_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x35
#define    ENABLE_PIT0_P36_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x36
#define    ENABLE_PIT0_P37_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x37
#define    ENABLE_PIT0_P40_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x40
#define    ENABLE_PIT0_P41_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x41
#define    ENABLE_PIT0_P42_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x42
#define    ENABLE_PIT0_P43_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x43
#define    ENABLE_PIT0_P44_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x44
#define    ENABLE_PIT0_P45_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x45
#define    ENABLE_PIT0_P46_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x46
#define    ENABLE_PIT0_P47_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x47
#define    ENABLE_PIT0_P50_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x50
#define    ENABLE_PIT0_P51_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x51
#define    ENABLE_PIT0_P52_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x52
#define    ENABLE_PIT0_P53_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x53
#define    ENABLE_PIT0_P54_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x54
#define    ENABLE_PIT0_P55_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x55
#define    ENABLE_PIT0_P56_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x56
#define    ENABLE_PIT0_P57_FALLINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN|=SET_BIT0;PIPEN&=CLR_BIT0;PIPS0=0x57
           
#define    ENABLE_PIT0_P00_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x00
#define    ENABLE_PIT0_P01_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x01
#define    ENABLE_PIT0_P02_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x02
#define    ENABLE_PIT0_P03_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x03
#define    ENABLE_PIT0_P04_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x04
#define    ENABLE_PIT0_P05_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x05
#define    ENABLE_PIT0_P06_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x06
#define    ENABLE_PIT0_P07_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x07
#define    ENABLE_PIT0_P10_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x10
#define    ENABLE_PIT0_P11_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x11
#define    ENABLE_PIT0_P12_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x12
#define    ENABLE_PIT0_P13_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x13
#define    ENABLE_PIT0_P14_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x14
#define    ENABLE_PIT0_P15_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x15
#define    ENABLE_PIT0_P16_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x16
#define    ENABLE_PIT0_P17_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x17
#define    ENABLE_PIT0_P20_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x20
#define    ENABLE_PIT0_P21_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x21
#define    ENABLE_PIT0_P22_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x22
#define    ENABLE_PIT0_P23_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x23
#define    ENABLE_PIT0_P24_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x24
#define    ENABLE_PIT0_P25_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x25
#define    ENABLE_PIT0_P26_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x26
#define    ENABLE_PIT0_P27_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x27
#define    ENABLE_PIT0_P30_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x30
#define    ENABLE_PIT0_P31_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x31
#define    ENABLE_PIT0_P32_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x32
#define    ENABLE_PIT0_P33_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x33
#define    ENABLE_PIT0_P34_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x34
#define    ENABLE_PIT0_P35_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x35
#define    ENABLE_PIT0_P36_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x36
#define    ENABLE_PIT0_P37_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x37
#define    ENABLE_PIT0_P40_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x40
#define    ENABLE_PIT0_P41_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x41
#define    ENABLE_PIT0_P42_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x42
#define    ENABLE_PIT0_P43_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x43
#define    ENABLE_PIT0_P44_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x44
#define    ENABLE_PIT0_P45_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x45
#define    ENABLE_PIT0_P46_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x46
#define    ENABLE_PIT0_P47_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x47
#define    ENABLE_PIT0_P50_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x50
#define    ENABLE_PIT0_P51_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x51
#define    ENABLE_PIT0_P52_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x52
#define    ENABLE_PIT0_P53_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x53
#define    ENABLE_PIT0_P54_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x54
#define    ENABLE_PIT0_P55_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x55
#define    ENABLE_PIT0_P56_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x56
#define    ENABLE_PIT0_P57_RISINGEDGE     SFRS=1;PICON|=SET_BIT0;PINEN&=CLR_BIT0;PIPEN|=SET_BIT0;PIPS0=0x57
           
//-------- -------- Pin interrupt channel 1 PIT1 ------------------------
#define    ENABLE_PIT1_P00_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x00
#define    ENABLE_PIT1_P01_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x01
#define    ENABLE_PIT1_P02_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x02
#define    ENABLE_PIT1_P03_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x03
#define    ENABLE_PIT1_P04_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x04
#define    ENABLE_PIT1_P05_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x05
#define    ENABLE_PIT1_P06_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x06
#define    ENABLE_PIT1_P07_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x07
#define    ENABLE_PIT1_P10_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x10
#define    ENABLE_PIT1_P11_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x11
#define    ENABLE_PIT1_P12_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x12
#define    ENABLE_PIT1_P13_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x13
#define    ENABLE_PIT1_P14_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x14
#define    ENABLE_PIT1_P15_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x15
#define    ENABLE_PIT1_P16_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x16
#define    ENABLE_PIT1_P17_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x17
#define    ENABLE_PIT1_P20_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x20
#define    ENABLE_PIT1_P21_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x21
#define    ENABLE_PIT1_P22_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x22
#define    ENABLE_PIT1_P23_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x23
#define    ENABLE_PIT1_P24_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x24
#define    ENABLE_PIT1_P25_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x25
#define    ENABLE_PIT1_P26_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x26
#define    ENABLE_PIT1_P27_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x27
#define    ENABLE_PIT1_P30_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x30
#define    ENABLE_PIT1_P31_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x31
#define    ENABLE_PIT1_P32_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x32
#define    ENABLE_PIT1_P33_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x33
#define    ENABLE_PIT1_P34_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x34
#define    ENABLE_PIT1_P35_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x35
#define    ENABLE_PIT1_P36_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x36
#define    ENABLE_PIT1_P37_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x37
#define    ENABLE_PIT1_P40_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x40
#define    ENABLE_PIT1_P41_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x41
#define    ENABLE_PIT1_P42_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x42
#define    ENABLE_PIT1_P43_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x43
#define    ENABLE_PIT1_P44_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x44
#define    ENABLE_PIT1_P45_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x45
#define    ENABLE_PIT1_P46_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x46
#define    ENABLE_PIT1_P47_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x47
#define    ENABLE_PIT1_P50_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x50
#define    ENABLE_PIT1_P51_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x51
#define    ENABLE_PIT1_P52_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x52
#define    ENABLE_PIT1_P53_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x53
#define    ENABLE_PIT1_P54_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x54
#define    ENABLE_PIT1_P55_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x55
#define    ENABLE_PIT1_P56_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x56
#define    ENABLE_PIT1_P57_LOWLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x57
           
#define    ENABLE_PIT1_P00_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x00
#define    ENABLE_PIT1_P01_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x01
#define    ENABLE_PIT1_P02_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x02
#define    ENABLE_PIT1_P03_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x03
#define    ENABLE_PIT1_P04_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x04
#define    ENABLE_PIT1_P05_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x05
#define    ENABLE_PIT1_P06_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x06
#define    ENABLE_PIT1_P07_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x07
#define    ENABLE_PIT1_P10_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x10
#define    ENABLE_PIT1_P11_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x11
#define    ENABLE_PIT1_P12_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x12
#define    ENABLE_PIT1_P13_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x13
#define    ENABLE_PIT1_P14_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x14
#define    ENABLE_PIT1_P15_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x15
#define    ENABLE_PIT1_P16_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x16
#define    ENABLE_PIT1_P17_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x17
#define    ENABLE_PIT1_P20_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x20
#define    ENABLE_PIT1_P21_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x21
#define    ENABLE_PIT1_P22_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x22
#define    ENABLE_PIT1_P23_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x23
#define    ENABLE_PIT1_P24_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x24
#define    ENABLE_PIT1_P25_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x25
#define    ENABLE_PIT1_P26_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x26
#define    ENABLE_PIT1_P27_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x27
#define    ENABLE_PIT1_P30_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x30
#define    ENABLE_PIT1_P31_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x31
#define    ENABLE_PIT1_P32_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x32
#define    ENABLE_PIT1_P33_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x33
#define    ENABLE_PIT1_P34_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x34
#define    ENABLE_PIT1_P35_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x35
#define    ENABLE_PIT1_P36_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x36
#define    ENABLE_PIT1_P37_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x37
#define    ENABLE_PIT1_P40_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x40
#define    ENABLE_PIT1_P41_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x41
#define    ENABLE_PIT1_P42_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x42
#define    ENABLE_PIT1_P43_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x43
#define    ENABLE_PIT1_P44_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x44
#define    ENABLE_PIT1_P45_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x45
#define    ENABLE_PIT1_P46_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x46
#define    ENABLE_PIT1_P47_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x47
#define    ENABLE_PIT1_P50_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x50
#define    ENABLE_PIT1_P51_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x51
#define    ENABLE_PIT1_P52_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x52
#define    ENABLE_PIT1_P53_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x53
#define    ENABLE_PIT1_P54_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x54
#define    ENABLE_PIT1_P55_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x55
#define    ENABLE_PIT1_P56_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x56
#define    ENABLE_PIT1_P57_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x57
           
#define    ENABLE_PIT1_P00_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x00
#define    ENABLE_PIT1_P01_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x01
#define    ENABLE_PIT1_P02_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x02
#define    ENABLE_PIT1_P03_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x03
#define    ENABLE_PIT1_P04_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x04
#define    ENABLE_PIT1_P05_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x05
#define    ENABLE_PIT1_P06_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x06
#define    ENABLE_PIT1_P07_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x07
#define    ENABLE_PIT1_P10_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x10
#define    ENABLE_PIT1_P11_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x11
#define    ENABLE_PIT1_P12_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x12
#define    ENABLE_PIT1_P13_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x13
#define    ENABLE_PIT1_P14_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x14
#define    ENABLE_PIT1_P15_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x15
#define    ENABLE_PIT1_P16_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x16
#define    ENABLE_PIT1_P17_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x17
#define    ENABLE_PIT1_P20_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x20
#define    ENABLE_PIT1_P21_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x21
#define    ENABLE_PIT1_P22_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x22
#define    ENABLE_PIT1_P23_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x23
#define    ENABLE_PIT1_P24_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x24
#define    ENABLE_PIT1_P25_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x25
#define    ENABLE_PIT1_P26_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x26
#define    ENABLE_PIT1_P27_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x27
#define    ENABLE_PIT1_P30_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x30
#define    ENABLE_PIT1_P31_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x31
#define    ENABLE_PIT1_P32_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x32
#define    ENABLE_PIT1_P33_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x33
#define    ENABLE_PIT1_P34_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x34
#define    ENABLE_PIT1_P35_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x35
#define    ENABLE_PIT1_P36_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x36
#define    ENABLE_PIT1_P37_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x37
#define    ENABLE_PIT1_P40_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x40
#define    ENABLE_PIT1_P41_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x41
#define    ENABLE_PIT1_P42_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x42
#define    ENABLE_PIT1_P43_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x43
#define    ENABLE_PIT1_P44_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x44
#define    ENABLE_PIT1_P45_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x45
#define    ENABLE_PIT1_P46_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x46
#define    ENABLE_PIT1_P47_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x47
#define    ENABLE_PIT1_P50_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x50
#define    ENABLE_PIT1_P51_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x51
#define    ENABLE_PIT1_P52_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x52
#define    ENABLE_PIT1_P53_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x53
#define    ENABLE_PIT1_P54_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x54
#define    ENABLE_PIT1_P55_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x55
#define    ENABLE_PIT1_P56_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x56
#define    ENABLE_PIT1_P57_FALLINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN|=SET_BIT1;PIPEN&=CLR_BIT1;PIPS1=0x57
           
#define    ENABLE_PIT1_P00_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x00
#define    ENABLE_PIT1_P01_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x01
#define    ENABLE_PIT1_P02_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x02
#define    ENABLE_PIT1_P03_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x03
#define    ENABLE_PIT1_P04_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x04
#define    ENABLE_PIT1_P05_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x05
#define    ENABLE_PIT1_P06_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x06
#define    ENABLE_PIT1_P07_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x07
#define    ENABLE_PIT1_P10_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x10
#define    ENABLE_PIT1_P11_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x11
#define    ENABLE_PIT1_P12_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x12
#define    ENABLE_PIT1_P13_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x13
#define    ENABLE_PIT1_P14_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x14
#define    ENABLE_PIT1_P15_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x15
#define    ENABLE_PIT1_P16_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x16
#define    ENABLE_PIT1_P17_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x17
#define    ENABLE_PIT1_P20_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x20
#define    ENABLE_PIT1_P21_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x21
#define    ENABLE_PIT1_P22_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x22
#define    ENABLE_PIT1_P23_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x23
#define    ENABLE_PIT1_P24_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x24
#define    ENABLE_PIT1_P25_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x25
#define    ENABLE_PIT1_P26_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x26
#define    ENABLE_PIT1_P27_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x27
#define    ENABLE_PIT1_P30_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x30
#define    ENABLE_PIT1_P31_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x31
#define    ENABLE_PIT1_P32_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x32
#define    ENABLE_PIT1_P33_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x33
#define    ENABLE_PIT1_P34_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x34
#define    ENABLE_PIT1_P35_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x35
#define    ENABLE_PIT1_P36_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x36
#define    ENABLE_PIT1_P37_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x37
#define    ENABLE_PIT1_P40_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x40
#define    ENABLE_PIT1_P41_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x41
#define    ENABLE_PIT1_P42_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x42
#define    ENABLE_PIT1_P43_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x43
#define    ENABLE_PIT1_P44_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x44
#define    ENABLE_PIT1_P45_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x45
#define    ENABLE_PIT1_P46_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x46
#define    ENABLE_PIT1_P47_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x47
#define    ENABLE_PIT1_P50_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x50
#define    ENABLE_PIT1_P51_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x51
#define    ENABLE_PIT1_P52_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x52
#define    ENABLE_PIT1_P53_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x53
#define    ENABLE_PIT1_P54_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x54
#define    ENABLE_PIT1_P55_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x55
#define    ENABLE_PIT1_P56_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x56
#define    ENABLE_PIT1_P57_RISINGEDGE     SFRS=1;PICON|=SET_BIT1;PINEN&=CLR_BIT1;PIPEN|=SET_BIT1;PIPS1=0x57
           
//-------- -------- Pin interrupt channel 2 PIT2 ------------------------
#define    ENABLE_PIT2_P00_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x00
#define    ENABLE_PIT2_P01_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x01
#define    ENABLE_PIT2_P02_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x02
#define    ENABLE_PIT2_P03_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x03
#define    ENABLE_PIT2_P04_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x04
#define    ENABLE_PIT2_P05_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x05
#define    ENABLE_PIT2_P06_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x06
#define    ENABLE_PIT2_P07_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x07
#define    ENABLE_PIT2_P10_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x10
#define    ENABLE_PIT2_P11_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x11
#define    ENABLE_PIT2_P12_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x12
#define    ENABLE_PIT2_P13_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x13
#define    ENABLE_PIT2_P14_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x14
#define    ENABLE_PIT2_P15_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x15
#define    ENABLE_PIT2_P16_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x16
#define    ENABLE_PIT2_P17_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x17
#define    ENABLE_PIT2_P20_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x20
#define    ENABLE_PIT2_P21_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x21
#define    ENABLE_PIT2_P22_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x22
#define    ENABLE_PIT2_P23_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x23
#define    ENABLE_PIT2_P24_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x24
#define    ENABLE_PIT2_P25_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x25
#define    ENABLE_PIT2_P26_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x26
#define    ENABLE_PIT2_P27_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x27
#define    ENABLE_PIT2_P30_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x30
#define    ENABLE_PIT2_P31_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x31
#define    ENABLE_PIT2_P32_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x32
#define    ENABLE_PIT2_P33_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x33
#define    ENABLE_PIT2_P34_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x34
#define    ENABLE_PIT2_P35_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x35
#define    ENABLE_PIT2_P36_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x36
#define    ENABLE_PIT2_P37_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x37
#define    ENABLE_PIT2_P40_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x40
#define    ENABLE_PIT2_P41_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x41
#define    ENABLE_PIT2_P42_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x42
#define    ENABLE_PIT2_P43_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x43
#define    ENABLE_PIT2_P44_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x44
#define    ENABLE_PIT2_P45_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x45
#define    ENABLE_PIT2_P46_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x46
#define    ENABLE_PIT2_P47_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x47
#define    ENABLE_PIT2_P50_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x50
#define    ENABLE_PIT2_P51_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x51
#define    ENABLE_PIT2_P52_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x52
#define    ENABLE_PIT2_P53_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x53
#define    ENABLE_PIT2_P54_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x54
#define    ENABLE_PIT2_P55_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x55
#define    ENABLE_PIT2_P56_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x56
#define    ENABLE_PIT2_P57_LOWLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x57
           
#define    ENABLE_PIT2_P00_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x00
#define    ENABLE_PIT2_P01_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x01
#define    ENABLE_PIT2_P02_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x02
#define    ENABLE_PIT2_P03_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x03
#define    ENABLE_PIT2_P04_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x04
#define    ENABLE_PIT2_P05_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x05
#define    ENABLE_PIT2_P06_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x06
#define    ENABLE_PIT2_P07_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x07
#define    ENABLE_PIT2_P10_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x10
#define    ENABLE_PIT2_P11_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x11
#define    ENABLE_PIT2_P12_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x12
#define    ENABLE_PIT2_P13_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x13
#define    ENABLE_PIT2_P14_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x14
#define    ENABLE_PIT2_P15_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x15
#define    ENABLE_PIT2_P16_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x16
#define    ENABLE_PIT2_P17_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x17
#define    ENABLE_PIT2_P20_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x20
#define    ENABLE_PIT2_P21_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x21
#define    ENABLE_PIT2_P22_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x22
#define    ENABLE_PIT2_P23_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x23
#define    ENABLE_PIT2_P24_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x24
#define    ENABLE_PIT2_P25_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x25
#define    ENABLE_PIT2_P26_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x26
#define    ENABLE_PIT2_P27_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x27
#define    ENABLE_PIT2_P30_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x30
#define    ENABLE_PIT2_P31_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x31
#define    ENABLE_PIT2_P32_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x32
#define    ENABLE_PIT2_P33_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x33
#define    ENABLE_PIT2_P34_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x34
#define    ENABLE_PIT2_P35_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x35
#define    ENABLE_PIT2_P36_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x36
#define    ENABLE_PIT2_P37_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x37
#define    ENABLE_PIT2_P40_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x40
#define    ENABLE_PIT2_P41_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x41
#define    ENABLE_PIT2_P42_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x42
#define    ENABLE_PIT2_P43_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x43
#define    ENABLE_PIT2_P44_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x44
#define    ENABLE_PIT2_P45_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x45
#define    ENABLE_PIT2_P46_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x46
#define    ENABLE_PIT2_P47_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x47
#define    ENABLE_PIT2_P50_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x50
#define    ENABLE_PIT2_P51_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x51
#define    ENABLE_PIT2_P52_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x52
#define    ENABLE_PIT2_P53_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x53
#define    ENABLE_PIT2_P54_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x54
#define    ENABLE_PIT2_P55_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x55
#define    ENABLE_PIT2_P56_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x56
#define    ENABLE_PIT2_P57_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x57
           
#define    ENABLE_PIT2_P00_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x00
#define    ENABLE_PIT2_P01_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x01
#define    ENABLE_PIT2_P02_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x02
#define    ENABLE_PIT2_P03_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x03
#define    ENABLE_PIT2_P04_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x04
#define    ENABLE_PIT2_P05_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x05
#define    ENABLE_PIT2_P06_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x06
#define    ENABLE_PIT2_P07_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x07
#define    ENABLE_PIT2_P10_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x10
#define    ENABLE_PIT2_P11_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x11
#define    ENABLE_PIT2_P12_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x12
#define    ENABLE_PIT2_P13_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x13
#define    ENABLE_PIT2_P14_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x14
#define    ENABLE_PIT2_P15_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x15
#define    ENABLE_PIT2_P16_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x16
#define    ENABLE_PIT2_P17_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x17
#define    ENABLE_PIT2_P20_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x20
#define    ENABLE_PIT2_P21_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x21
#define    ENABLE_PIT2_P22_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x22
#define    ENABLE_PIT2_P23_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x23
#define    ENABLE_PIT2_P24_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x24
#define    ENABLE_PIT2_P25_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x25
#define    ENABLE_PIT2_P26_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x26
#define    ENABLE_PIT2_P27_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x27
#define    ENABLE_PIT2_P30_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x30
#define    ENABLE_PIT2_P31_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x31
#define    ENABLE_PIT2_P32_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x32
#define    ENABLE_PIT2_P33_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x33
#define    ENABLE_PIT2_P34_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x34
#define    ENABLE_PIT2_P35_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x35
#define    ENABLE_PIT2_P36_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x36
#define    ENABLE_PIT2_P37_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x37
#define    ENABLE_PIT2_P40_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x40
#define    ENABLE_PIT2_P41_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x41
#define    ENABLE_PIT2_P42_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x42
#define    ENABLE_PIT2_P43_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x43
#define    ENABLE_PIT2_P44_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x44
#define    ENABLE_PIT2_P45_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x45
#define    ENABLE_PIT2_P46_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x46
#define    ENABLE_PIT2_P47_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x47
#define    ENABLE_PIT2_P50_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x50
#define    ENABLE_PIT2_P51_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x51
#define    ENABLE_PIT2_P52_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x52
#define    ENABLE_PIT2_P53_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x53
#define    ENABLE_PIT2_P54_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x54
#define    ENABLE_PIT2_P55_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x55
#define    ENABLE_PIT2_P56_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x56
#define    ENABLE_PIT2_P57_FALLINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN|=SET_BIT2;PIPEN&=CLR_BIT2;PIPS2=0x57
           
#define    ENABLE_PIT2_P00_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x00
#define    ENABLE_PIT2_P01_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x01
#define    ENABLE_PIT2_P02_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x02
#define    ENABLE_PIT2_P03_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x03
#define    ENABLE_PIT2_P04_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x04
#define    ENABLE_PIT2_P05_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x05
#define    ENABLE_PIT2_P06_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x06
#define    ENABLE_PIT2_P07_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x07
#define    ENABLE_PIT2_P10_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x10
#define    ENABLE_PIT2_P11_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x11
#define    ENABLE_PIT2_P12_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x12
#define    ENABLE_PIT2_P13_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x13
#define    ENABLE_PIT2_P14_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x14
#define    ENABLE_PIT2_P15_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x15
#define    ENABLE_PIT2_P16_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x16
#define    ENABLE_PIT2_P17_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x17
#define    ENABLE_PIT2_P20_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x20
#define    ENABLE_PIT2_P21_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x21
#define    ENABLE_PIT2_P22_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x22
#define    ENABLE_PIT2_P23_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x23
#define    ENABLE_PIT2_P24_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x24
#define    ENABLE_PIT2_P25_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x25
#define    ENABLE_PIT2_P26_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x26
#define    ENABLE_PIT2_P27_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x27
#define    ENABLE_PIT2_P30_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x30
#define    ENABLE_PIT2_P31_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x31
#define    ENABLE_PIT2_P32_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x32
#define    ENABLE_PIT2_P33_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x33
#define    ENABLE_PIT2_P34_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x34
#define    ENABLE_PIT2_P35_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x35
#define    ENABLE_PIT2_P36_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x36
#define    ENABLE_PIT2_P37_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x37
#define    ENABLE_PIT2_P40_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x40
#define    ENABLE_PIT2_P41_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x41
#define    ENABLE_PIT2_P42_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x42
#define    ENABLE_PIT2_P43_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x43
#define    ENABLE_PIT2_P44_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x44
#define    ENABLE_PIT2_P45_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x45
#define    ENABLE_PIT2_P46_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x46
#define    ENABLE_PIT2_P47_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x47
#define    ENABLE_PIT2_P50_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x50
#define    ENABLE_PIT2_P51_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x51
#define    ENABLE_PIT2_P52_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x52
#define    ENABLE_PIT2_P53_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x53
#define    ENABLE_PIT2_P54_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x54
#define    ENABLE_PIT2_P55_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x55
#define    ENABLE_PIT2_P56_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x56
#define    ENABLE_PIT2_P57_RISINGEDGE     SFRS=1;PICON|=SET_BIT2;PINEN&=CLR_BIT2;PIPEN|=SET_BIT2;PIPS2=0x57
           
//-------- -------- Pin interrupt channel 3 PIT3 ------------------------
#define    ENABLE_PIT3_P00_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x00
#define    ENABLE_PIT3_P01_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x01
#define    ENABLE_PIT3_P02_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x02
#define    ENABLE_PIT3_P03_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x03
#define    ENABLE_PIT3_P04_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x04
#define    ENABLE_PIT3_P05_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x05
#define    ENABLE_PIT3_P06_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x06
#define    ENABLE_PIT3_P07_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x07
#define    ENABLE_PIT3_P10_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x10
#define    ENABLE_PIT3_P11_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x11
#define    ENABLE_PIT3_P12_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x12
#define    ENABLE_PIT3_P13_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x13
#define    ENABLE_PIT3_P14_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x14
#define    ENABLE_PIT3_P15_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x15
#define    ENABLE_PIT3_P16_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x16
#define    ENABLE_PIT3_P17_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x17
#define    ENABLE_PIT3_P20_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x20
#define    ENABLE_PIT3_P21_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x21
#define    ENABLE_PIT3_P22_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x22
#define    ENABLE_PIT3_P23_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x23
#define    ENABLE_PIT3_P24_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x24
#define    ENABLE_PIT3_P25_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x25
#define    ENABLE_PIT3_P26_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x26
#define    ENABLE_PIT3_P27_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x27
#define    ENABLE_PIT3_P30_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x30
#define    ENABLE_PIT3_P31_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x31
#define    ENABLE_PIT3_P32_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x32
#define    ENABLE_PIT3_P33_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x33
#define    ENABLE_PIT3_P34_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x34
#define    ENABLE_PIT3_P35_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x35
#define    ENABLE_PIT3_P36_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x36
#define    ENABLE_PIT3_P37_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x37
#define    ENABLE_PIT3_P40_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x40
#define    ENABLE_PIT3_P41_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x41
#define    ENABLE_PIT3_P42_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x42
#define    ENABLE_PIT3_P43_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x43
#define    ENABLE_PIT3_P44_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x44
#define    ENABLE_PIT3_P45_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x45
#define    ENABLE_PIT3_P46_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x46
#define    ENABLE_PIT3_P47_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x47
#define    ENABLE_PIT3_P50_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x50
#define    ENABLE_PIT3_P51_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x51
#define    ENABLE_PIT3_P52_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x52
#define    ENABLE_PIT3_P53_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x53
#define    ENABLE_PIT3_P54_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x54
#define    ENABLE_PIT3_P55_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x55
#define    ENABLE_PIT3_P56_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x56
#define    ENABLE_PIT3_P57_LOWLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x57
           
#define    ENABLE_PIT3_P00_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x00
#define    ENABLE_PIT3_P01_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x01
#define    ENABLE_PIT3_P02_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x02
#define    ENABLE_PIT3_P03_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x03
#define    ENABLE_PIT3_P04_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x04
#define    ENABLE_PIT3_P05_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x05
#define    ENABLE_PIT3_P06_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x06
#define    ENABLE_PIT3_P07_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x07
#define    ENABLE_PIT3_P10_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x10
#define    ENABLE_PIT3_P11_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x11
#define    ENABLE_PIT3_P12_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x12
#define    ENABLE_PIT3_P13_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x13
#define    ENABLE_PIT3_P14_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x14
#define    ENABLE_PIT3_P15_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x15
#define    ENABLE_PIT3_P16_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x16
#define    ENABLE_PIT3_P17_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x17
#define    ENABLE_PIT3_P20_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x20
#define    ENABLE_PIT3_P21_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x21
#define    ENABLE_PIT3_P22_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x22
#define    ENABLE_PIT3_P23_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x23
#define    ENABLE_PIT3_P24_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x24
#define    ENABLE_PIT3_P25_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x25
#define    ENABLE_PIT3_P26_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x26
#define    ENABLE_PIT3_P27_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x27
#define    ENABLE_PIT3_P30_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x30
#define    ENABLE_PIT3_P31_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x31
#define    ENABLE_PIT3_P32_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x32
#define    ENABLE_PIT3_P33_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x33
#define    ENABLE_PIT3_P34_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x34
#define    ENABLE_PIT3_P35_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x35
#define    ENABLE_PIT3_P36_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x36
#define    ENABLE_PIT3_P37_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x37
#define    ENABLE_PIT3_P40_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x40
#define    ENABLE_PIT3_P41_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x41
#define    ENABLE_PIT3_P42_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x42
#define    ENABLE_PIT3_P43_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x43
#define    ENABLE_PIT3_P44_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x44
#define    ENABLE_PIT3_P45_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x45
#define    ENABLE_PIT3_P46_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x46
#define    ENABLE_PIT3_P47_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x47
#define    ENABLE_PIT3_P50_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x50
#define    ENABLE_PIT3_P51_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x51
#define    ENABLE_PIT3_P52_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x52
#define    ENABLE_PIT3_P53_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x53
#define    ENABLE_PIT3_P54_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x54
#define    ENABLE_PIT3_P55_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x55
#define    ENABLE_PIT3_P56_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x56
#define    ENABLE_PIT3_P57_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x57
           
#define    ENABLE_PIT3_P00_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x00
#define    ENABLE_PIT3_P01_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x01
#define    ENABLE_PIT3_P02_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x02
#define    ENABLE_PIT3_P03_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x03
#define    ENABLE_PIT3_P04_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x04
#define    ENABLE_PIT3_P05_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x05
#define    ENABLE_PIT3_P06_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x06
#define    ENABLE_PIT3_P07_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x07
#define    ENABLE_PIT3_P10_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x10
#define    ENABLE_PIT3_P11_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x11
#define    ENABLE_PIT3_P12_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x12
#define    ENABLE_PIT3_P13_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x13
#define    ENABLE_PIT3_P14_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x14
#define    ENABLE_PIT3_P15_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x15
#define    ENABLE_PIT3_P16_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x16
#define    ENABLE_PIT3_P17_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x17
#define    ENABLE_PIT3_P20_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x20
#define    ENABLE_PIT3_P21_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x21
#define    ENABLE_PIT3_P22_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x22
#define    ENABLE_PIT3_P23_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x23
#define    ENABLE_PIT3_P24_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x24
#define    ENABLE_PIT3_P25_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x25
#define    ENABLE_PIT3_P26_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x26
#define    ENABLE_PIT3_P27_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x27
#define    ENABLE_PIT3_P30_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x30
#define    ENABLE_PIT3_P31_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x31
#define    ENABLE_PIT3_P32_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x32
#define    ENABLE_PIT3_P33_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x33
#define    ENABLE_PIT3_P34_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x34
#define    ENABLE_PIT3_P35_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x35
#define    ENABLE_PIT3_P36_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x36
#define    ENABLE_PIT3_P37_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x37
#define    ENABLE_PIT3_P40_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x40
#define    ENABLE_PIT3_P41_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x41
#define    ENABLE_PIT3_P42_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x42
#define    ENABLE_PIT3_P43_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x43
#define    ENABLE_PIT3_P44_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x44
#define    ENABLE_PIT3_P45_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x45
#define    ENABLE_PIT3_P46_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x46
#define    ENABLE_PIT3_P47_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x47
#define    ENABLE_PIT3_P50_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x50
#define    ENABLE_PIT3_P51_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x51
#define    ENABLE_PIT3_P52_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x52
#define    ENABLE_PIT3_P53_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x53
#define    ENABLE_PIT3_P54_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x54
#define    ENABLE_PIT3_P55_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x55
#define    ENABLE_PIT3_P56_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x56
#define    ENABLE_PIT3_P57_FALLINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN|=SET_BIT3;PIPEN&=CLR_BIT3;PIPS3=0x57
           
#define    ENABLE_PIT3_P00_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x00
#define    ENABLE_PIT3_P01_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x01
#define    ENABLE_PIT3_P02_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x02
#define    ENABLE_PIT3_P03_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x03
#define    ENABLE_PIT3_P04_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x04
#define    ENABLE_PIT3_P05_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x05
#define    ENABLE_PIT3_P06_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x06
#define    ENABLE_PIT3_P07_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x07
#define    ENABLE_PIT3_P10_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x10
#define    ENABLE_PIT3_P11_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x11
#define    ENABLE_PIT3_P12_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x12
#define    ENABLE_PIT3_P13_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x13
#define    ENABLE_PIT3_P14_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x14
#define    ENABLE_PIT3_P15_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x15
#define    ENABLE_PIT3_P16_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x16
#define    ENABLE_PIT3_P17_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x17
#define    ENABLE_PIT3_P20_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x20
#define    ENABLE_PIT3_P21_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x21
#define    ENABLE_PIT3_P22_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x22
#define    ENABLE_PIT3_P23_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x23
#define    ENABLE_PIT3_P24_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x24
#define    ENABLE_PIT3_P25_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x25
#define    ENABLE_PIT3_P26_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x26
#define    ENABLE_PIT3_P27_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x27
#define    ENABLE_PIT3_P30_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x30
#define    ENABLE_PIT3_P31_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x31
#define    ENABLE_PIT3_P32_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x32
#define    ENABLE_PIT3_P33_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x33
#define    ENABLE_PIT3_P34_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x34
#define    ENABLE_PIT3_P35_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x35
#define    ENABLE_PIT3_P36_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x36
#define    ENABLE_PIT3_P37_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x37
#define    ENABLE_PIT3_P40_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x40
#define    ENABLE_PIT3_P41_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x41
#define    ENABLE_PIT3_P42_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x42
#define    ENABLE_PIT3_P43_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x43
#define    ENABLE_PIT3_P44_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x44
#define    ENABLE_PIT3_P45_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x45
#define    ENABLE_PIT3_P46_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x46
#define    ENABLE_PIT3_P47_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x47
#define    ENABLE_PIT3_P50_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x50
#define    ENABLE_PIT3_P51_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x51
#define    ENABLE_PIT3_P52_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x52
#define    ENABLE_PIT3_P53_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x53
#define    ENABLE_PIT3_P54_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x54
#define    ENABLE_PIT3_P55_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x55
#define    ENABLE_PIT3_P56_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x56
#define    ENABLE_PIT3_P57_RISINGEDGE     SFRS=1;PICON|=SET_BIT3;PINEN&=CLR_BIT3;PIPEN|=SET_BIT3;PIPS3=0x57
           
//-------- -------- Pin interrupt channel 4 PIT4 ------------------------
#define    ENABLE_PIT4_P00_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x00
#define    ENABLE_PIT4_P01_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x01
#define    ENABLE_PIT4_P02_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x02
#define    ENABLE_PIT4_P03_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x03
#define    ENABLE_PIT4_P04_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x04
#define    ENABLE_PIT4_P05_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x05
#define    ENABLE_PIT4_P06_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x06
#define    ENABLE_PIT4_P07_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x07
#define    ENABLE_PIT4_P10_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x10
#define    ENABLE_PIT4_P11_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x11
#define    ENABLE_PIT4_P12_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x12
#define    ENABLE_PIT4_P13_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x13
#define    ENABLE_PIT4_P14_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x14
#define    ENABLE_PIT4_P15_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x15
#define    ENABLE_PIT4_P16_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x16
#define    ENABLE_PIT4_P17_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x17
#define    ENABLE_PIT4_P20_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x20
#define    ENABLE_PIT4_P21_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x21
#define    ENABLE_PIT4_P22_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x22
#define    ENABLE_PIT4_P23_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x23
#define    ENABLE_PIT4_P24_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x24
#define    ENABLE_PIT4_P25_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x25
#define    ENABLE_PIT4_P26_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x26
#define    ENABLE_PIT4_P27_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x27
#define    ENABLE_PIT4_P30_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x30
#define    ENABLE_PIT4_P31_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x31
#define    ENABLE_PIT4_P32_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x32
#define    ENABLE_PIT4_P33_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x33
#define    ENABLE_PIT4_P34_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x34
#define    ENABLE_PIT4_P35_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x35
#define    ENABLE_PIT4_P36_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x36
#define    ENABLE_PIT4_P37_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x37
#define    ENABLE_PIT4_P40_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x40
#define    ENABLE_PIT4_P41_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x41
#define    ENABLE_PIT4_P42_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x42
#define    ENABLE_PIT4_P43_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x43
#define    ENABLE_PIT4_P44_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x44
#define    ENABLE_PIT4_P45_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x45
#define    ENABLE_PIT4_P46_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x46
#define    ENABLE_PIT4_P47_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x47
#define    ENABLE_PIT4_P50_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x50
#define    ENABLE_PIT4_P51_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x51
#define    ENABLE_PIT4_P52_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x52
#define    ENABLE_PIT4_P53_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x53
#define    ENABLE_PIT4_P54_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x54
#define    ENABLE_PIT4_P55_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x55
#define    ENABLE_PIT4_P56_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x56
#define    ENABLE_PIT4_P57_LOWLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x57
           
#define    ENABLE_PIT4_P00_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x00
#define    ENABLE_PIT4_P01_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x01
#define    ENABLE_PIT4_P02_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x02
#define    ENABLE_PIT4_P03_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x03
#define    ENABLE_PIT4_P04_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x04
#define    ENABLE_PIT4_P05_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x05
#define    ENABLE_PIT4_P06_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x06
#define    ENABLE_PIT4_P07_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x07
#define    ENABLE_PIT4_P10_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x10
#define    ENABLE_PIT4_P11_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x11
#define    ENABLE_PIT4_P12_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x12
#define    ENABLE_PIT4_P13_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x13
#define    ENABLE_PIT4_P14_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x14
#define    ENABLE_PIT4_P15_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x15
#define    ENABLE_PIT4_P16_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x16
#define    ENABLE_PIT4_P17_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x17
#define    ENABLE_PIT4_P20_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x20
#define    ENABLE_PIT4_P21_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x21
#define    ENABLE_PIT4_P22_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x22
#define    ENABLE_PIT4_P23_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x23
#define    ENABLE_PIT4_P24_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x24
#define    ENABLE_PIT4_P25_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x25
#define    ENABLE_PIT4_P26_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x26
#define    ENABLE_PIT4_P27_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x27
#define    ENABLE_PIT4_P30_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x30
#define    ENABLE_PIT4_P31_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x31
#define    ENABLE_PIT4_P32_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x32
#define    ENABLE_PIT4_P33_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x33
#define    ENABLE_PIT4_P34_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x34
#define    ENABLE_PIT4_P35_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x35
#define    ENABLE_PIT4_P36_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x36
#define    ENABLE_PIT4_P37_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x37
#define    ENABLE_PIT4_P40_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x40
#define    ENABLE_PIT4_P41_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x41
#define    ENABLE_PIT4_P42_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x42
#define    ENABLE_PIT4_P43_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x43
#define    ENABLE_PIT4_P44_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x44
#define    ENABLE_PIT4_P45_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x45
#define    ENABLE_PIT4_P46_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x46
#define    ENABLE_PIT4_P47_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x47
#define    ENABLE_PIT4_P50_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x50
#define    ENABLE_PIT4_P51_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x51
#define    ENABLE_PIT4_P52_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x52
#define    ENABLE_PIT4_P53_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x53
#define    ENABLE_PIT4_P54_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x54
#define    ENABLE_PIT4_P55_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x55
#define    ENABLE_PIT4_P56_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x56
#define    ENABLE_PIT4_P57_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x57
           
#define    ENABLE_PIT4_P00_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x00
#define    ENABLE_PIT4_P01_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x01
#define    ENABLE_PIT4_P02_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x02
#define    ENABLE_PIT4_P03_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x03
#define    ENABLE_PIT4_P04_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x04
#define    ENABLE_PIT4_P05_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x05
#define    ENABLE_PIT4_P06_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x06
#define    ENABLE_PIT4_P07_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x07
#define    ENABLE_PIT4_P10_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x10
#define    ENABLE_PIT4_P11_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x11
#define    ENABLE_PIT4_P12_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x12
#define    ENABLE_PIT4_P13_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x13
#define    ENABLE_PIT4_P14_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x14
#define    ENABLE_PIT4_P15_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x15
#define    ENABLE_PIT4_P16_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x16
#define    ENABLE_PIT4_P17_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x17
#define    ENABLE_PIT4_P20_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x20
#define    ENABLE_PIT4_P21_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x21
#define    ENABLE_PIT4_P22_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x22
#define    ENABLE_PIT4_P23_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x23
#define    ENABLE_PIT4_P24_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x24
#define    ENABLE_PIT4_P25_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x25
#define    ENABLE_PIT4_P26_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x26
#define    ENABLE_PIT4_P27_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x27
#define    ENABLE_PIT4_P30_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x30
#define    ENABLE_PIT4_P31_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x31
#define    ENABLE_PIT4_P32_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x32
#define    ENABLE_PIT4_P33_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x33
#define    ENABLE_PIT4_P34_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x34
#define    ENABLE_PIT4_P35_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x35
#define    ENABLE_PIT4_P36_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x36
#define    ENABLE_PIT4_P37_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x37
#define    ENABLE_PIT4_P40_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x40
#define    ENABLE_PIT4_P41_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x41
#define    ENABLE_PIT4_P42_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x42
#define    ENABLE_PIT4_P43_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x43
#define    ENABLE_PIT4_P44_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x44
#define    ENABLE_PIT4_P45_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x45
#define    ENABLE_PIT4_P46_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x46
#define    ENABLE_PIT4_P47_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x47
#define    ENABLE_PIT4_P50_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x50
#define    ENABLE_PIT4_P51_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x51
#define    ENABLE_PIT4_P52_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x52
#define    ENABLE_PIT4_P53_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x53
#define    ENABLE_PIT4_P54_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x54
#define    ENABLE_PIT4_P55_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x55
#define    ENABLE_PIT4_P56_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x56
#define    ENABLE_PIT4_P57_FALLINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN|=SET_BIT4;PIPEN&=CLR_BIT4;PIPS4=0x57
           
#define    ENABLE_PIT4_P00_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x00
#define    ENABLE_PIT4_P01_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x01
#define    ENABLE_PIT4_P02_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x02
#define    ENABLE_PIT4_P03_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x03
#define    ENABLE_PIT4_P04_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x04
#define    ENABLE_PIT4_P05_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x05
#define    ENABLE_PIT4_P06_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x06
#define    ENABLE_PIT4_P07_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x07
#define    ENABLE_PIT4_P10_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x10
#define    ENABLE_PIT4_P11_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x11
#define    ENABLE_PIT4_P12_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x12
#define    ENABLE_PIT4_P13_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x13
#define    ENABLE_PIT4_P14_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x14
#define    ENABLE_PIT4_P15_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x15
#define    ENABLE_PIT4_P16_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x16
#define    ENABLE_PIT4_P17_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x17
#define    ENABLE_PIT4_P20_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x20
#define    ENABLE_PIT4_P21_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x21
#define    ENABLE_PIT4_P22_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x22
#define    ENABLE_PIT4_P23_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x23
#define    ENABLE_PIT4_P24_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x24
#define    ENABLE_PIT4_P25_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x25
#define    ENABLE_PIT4_P26_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x26
#define    ENABLE_PIT4_P27_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x27
#define    ENABLE_PIT4_P30_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x30
#define    ENABLE_PIT4_P31_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x31
#define    ENABLE_PIT4_P32_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x32
#define    ENABLE_PIT4_P33_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x33
#define    ENABLE_PIT4_P34_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x34
#define    ENABLE_PIT4_P35_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x35
#define    ENABLE_PIT4_P36_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x36
#define    ENABLE_PIT4_P37_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x37
#define    ENABLE_PIT4_P40_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x40
#define    ENABLE_PIT4_P41_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x41
#define    ENABLE_PIT4_P42_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x42
#define    ENABLE_PIT4_P43_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x43
#define    ENABLE_PIT4_P44_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x44
#define    ENABLE_PIT4_P45_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x45
#define    ENABLE_PIT4_P46_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x46
#define    ENABLE_PIT4_P47_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x47
#define    ENABLE_PIT4_P50_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x50
#define    ENABLE_PIT4_P51_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x51
#define    ENABLE_PIT4_P52_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x52
#define    ENABLE_PIT4_P53_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x53
#define    ENABLE_PIT4_P54_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x54
#define    ENABLE_PIT4_P55_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x55
#define    ENABLE_PIT4_P56_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x56
#define    ENABLE_PIT4_P57_RISINGEDGE     SFRS=1;PICON|=SET_BIT4;PINEN&=CLR_BIT4;PIPEN|=SET_BIT4;PIPS4=0x57
           
//-------- -------- Pin interrupt channel 5 PIT5 ------------------------
#define    ENABLE_PIT5_P00_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x00
#define    ENABLE_PIT5_P01_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x01
#define    ENABLE_PIT5_P02_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x02
#define    ENABLE_PIT5_P03_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x03
#define    ENABLE_PIT5_P04_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x04
#define    ENABLE_PIT5_P05_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x05
#define    ENABLE_PIT5_P06_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x06
#define    ENABLE_PIT5_P07_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x07
#define    ENABLE_PIT5_P10_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x10
#define    ENABLE_PIT5_P11_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x11
#define    ENABLE_PIT5_P12_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x12
#define    ENABLE_PIT5_P13_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x13
#define    ENABLE_PIT5_P14_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x14
#define    ENABLE_PIT5_P15_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x15
#define    ENABLE_PIT5_P16_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x16
#define    ENABLE_PIT5_P17_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x17
#define    ENABLE_PIT5_P20_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x20
#define    ENABLE_PIT5_P21_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x21
#define    ENABLE_PIT5_P22_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x22
#define    ENABLE_PIT5_P23_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x23
#define    ENABLE_PIT5_P24_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x24
#define    ENABLE_PIT5_P25_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x25
#define    ENABLE_PIT5_P26_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x26
#define    ENABLE_PIT5_P27_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x27
#define    ENABLE_PIT5_P30_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x30
#define    ENABLE_PIT5_P31_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x31
#define    ENABLE_PIT5_P32_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x32
#define    ENABLE_PIT5_P33_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x33
#define    ENABLE_PIT5_P34_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x34
#define    ENABLE_PIT5_P35_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x35
#define    ENABLE_PIT5_P36_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x36
#define    ENABLE_PIT5_P37_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x37
#define    ENABLE_PIT5_P40_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x40
#define    ENABLE_PIT5_P41_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x41
#define    ENABLE_PIT5_P42_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x42
#define    ENABLE_PIT5_P43_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x43
#define    ENABLE_PIT5_P44_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x44
#define    ENABLE_PIT5_P45_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x45
#define    ENABLE_PIT5_P46_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x46
#define    ENABLE_PIT5_P47_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x47
#define    ENABLE_PIT5_P50_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x50
#define    ENABLE_PIT5_P51_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x51
#define    ENABLE_PIT5_P52_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x52
#define    ENABLE_PIT5_P53_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x53
#define    ENABLE_PIT5_P54_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x54
#define    ENABLE_PIT5_P55_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x55
#define    ENABLE_PIT5_P56_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x56
#define    ENABLE_PIT5_P57_LOWLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x57
           
#define    ENABLE_PIT5_P00_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x00
#define    ENABLE_PIT5_P01_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x01
#define    ENABLE_PIT5_P02_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x02
#define    ENABLE_PIT5_P03_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x03
#define    ENABLE_PIT5_P04_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x04
#define    ENABLE_PIT5_P05_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x05
#define    ENABLE_PIT5_P06_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x06
#define    ENABLE_PIT5_P07_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x07
#define    ENABLE_PIT5_P10_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x10
#define    ENABLE_PIT5_P11_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x11
#define    ENABLE_PIT5_P12_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x12
#define    ENABLE_PIT5_P13_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x13
#define    ENABLE_PIT5_P14_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x14
#define    ENABLE_PIT5_P15_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x15
#define    ENABLE_PIT5_P16_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x16
#define    ENABLE_PIT5_P17_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x17
#define    ENABLE_PIT5_P20_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x20
#define    ENABLE_PIT5_P21_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x21
#define    ENABLE_PIT5_P22_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x22
#define    ENABLE_PIT5_P23_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x23
#define    ENABLE_PIT5_P24_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x24
#define    ENABLE_PIT5_P25_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x25
#define    ENABLE_PIT5_P26_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x26
#define    ENABLE_PIT5_P27_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x27
#define    ENABLE_PIT5_P30_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x30
#define    ENABLE_PIT5_P31_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x31
#define    ENABLE_PIT5_P32_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x32
#define    ENABLE_PIT5_P33_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x33
#define    ENABLE_PIT5_P34_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x34
#define    ENABLE_PIT5_P35_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x35
#define    ENABLE_PIT5_P36_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x36
#define    ENABLE_PIT5_P37_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x37
#define    ENABLE_PIT5_P40_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x40
#define    ENABLE_PIT5_P41_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x41
#define    ENABLE_PIT5_P42_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x42
#define    ENABLE_PIT5_P43_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x43
#define    ENABLE_PIT5_P44_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x44
#define    ENABLE_PIT5_P45_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x45
#define    ENABLE_PIT5_P46_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x46
#define    ENABLE_PIT5_P47_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x47
#define    ENABLE_PIT5_P50_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x50
#define    ENABLE_PIT5_P51_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x51
#define    ENABLE_PIT5_P52_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x52
#define    ENABLE_PIT5_P53_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x53
#define    ENABLE_PIT5_P54_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x54
#define    ENABLE_PIT5_P55_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x55
#define    ENABLE_PIT5_P56_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x56
#define    ENABLE_PIT5_P57_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x57
           
#define    ENABLE_PIT5_P00_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x00
#define    ENABLE_PIT5_P01_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x01
#define    ENABLE_PIT5_P02_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x02
#define    ENABLE_PIT5_P03_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x03
#define    ENABLE_PIT5_P04_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x04
#define    ENABLE_PIT5_P05_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x05
#define    ENABLE_PIT5_P06_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x06
#define    ENABLE_PIT5_P07_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x07
#define    ENABLE_PIT5_P10_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x10
#define    ENABLE_PIT5_P11_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x11
#define    ENABLE_PIT5_P12_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x12
#define    ENABLE_PIT5_P13_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x13
#define    ENABLE_PIT5_P14_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x14
#define    ENABLE_PIT5_P15_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x15
#define    ENABLE_PIT5_P16_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x16
#define    ENABLE_PIT5_P17_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x17
#define    ENABLE_PIT5_P20_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x20
#define    ENABLE_PIT5_P21_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x21
#define    ENABLE_PIT5_P22_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x22
#define    ENABLE_PIT5_P23_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x23
#define    ENABLE_PIT5_P24_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x24
#define    ENABLE_PIT5_P25_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x25
#define    ENABLE_PIT5_P26_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x26
#define    ENABLE_PIT5_P27_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x27
#define    ENABLE_PIT5_P30_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x30
#define    ENABLE_PIT5_P31_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x31
#define    ENABLE_PIT5_P32_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x32
#define    ENABLE_PIT5_P33_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x33
#define    ENABLE_PIT5_P34_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x34
#define    ENABLE_PIT5_P35_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x35
#define    ENABLE_PIT5_P36_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x36
#define    ENABLE_PIT5_P37_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x37
#define    ENABLE_PIT5_P40_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x40
#define    ENABLE_PIT5_P41_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x41
#define    ENABLE_PIT5_P42_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x42
#define    ENABLE_PIT5_P43_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x43
#define    ENABLE_PIT5_P44_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x44
#define    ENABLE_PIT5_P45_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x45
#define    ENABLE_PIT5_P46_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x46
#define    ENABLE_PIT5_P47_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x47
#define    ENABLE_PIT5_P50_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x50
#define    ENABLE_PIT5_P51_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x51
#define    ENABLE_PIT5_P52_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x52
#define    ENABLE_PIT5_P53_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x53
#define    ENABLE_PIT5_P54_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x54
#define    ENABLE_PIT5_P55_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x55
#define    ENABLE_PIT5_P56_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x56
#define    ENABLE_PIT5_P57_FALLINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN|=SET_BIT5;PIPEN&=CLR_BIT5;PIPS5=0x57
           
#define    ENABLE_PIT5_P00_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x00
#define    ENABLE_PIT5_P01_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x01
#define    ENABLE_PIT5_P02_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x02
#define    ENABLE_PIT5_P03_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x03
#define    ENABLE_PIT5_P04_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x04
#define    ENABLE_PIT5_P05_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x05
#define    ENABLE_PIT5_P06_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x06
#define    ENABLE_PIT5_P07_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x07
#define    ENABLE_PIT5_P10_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x10
#define    ENABLE_PIT5_P11_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x11
#define    ENABLE_PIT5_P12_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x12
#define    ENABLE_PIT5_P13_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x13
#define    ENABLE_PIT5_P14_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x14
#define    ENABLE_PIT5_P15_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x15
#define    ENABLE_PIT5_P16_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x16
#define    ENABLE_PIT5_P17_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x17
#define    ENABLE_PIT5_P20_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x20
#define    ENABLE_PIT5_P21_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x21
#define    ENABLE_PIT5_P22_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x22
#define    ENABLE_PIT5_P23_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x23
#define    ENABLE_PIT5_P24_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x24
#define    ENABLE_PIT5_P25_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x25
#define    ENABLE_PIT5_P26_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x26
#define    ENABLE_PIT5_P27_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x27
#define    ENABLE_PIT5_P30_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x30
#define    ENABLE_PIT5_P31_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x31
#define    ENABLE_PIT5_P32_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x32
#define    ENABLE_PIT5_P33_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x33
#define    ENABLE_PIT5_P34_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x34
#define    ENABLE_PIT5_P35_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x35
#define    ENABLE_PIT5_P36_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x36
#define    ENABLE_PIT5_P37_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x37
#define    ENABLE_PIT5_P40_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x40
#define    ENABLE_PIT5_P41_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x41
#define    ENABLE_PIT5_P42_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x42
#define    ENABLE_PIT5_P43_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x43
#define    ENABLE_PIT5_P44_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x44
#define    ENABLE_PIT5_P45_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x45
#define    ENABLE_PIT5_P46_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x46
#define    ENABLE_PIT5_P47_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x47
#define    ENABLE_PIT5_P50_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x50
#define    ENABLE_PIT5_P51_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x51
#define    ENABLE_PIT5_P52_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x52
#define    ENABLE_PIT5_P53_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x53
#define    ENABLE_PIT5_P54_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x54
#define    ENABLE_PIT5_P55_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x55
#define    ENABLE_PIT5_P56_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x56
#define    ENABLE_PIT5_P57_RISINGEDGE     SFRS=1;PICON|=SET_BIT5;PINEN&=CLR_BIT5;PIPEN|=SET_BIT5;PIPS5=0x57
           
//-------- -------- Pin interrupt channel 6 PIT6 ------------------------
#define    ENABLE_PIT6_P00_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x00
#define    ENABLE_PIT6_P01_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x01
#define    ENABLE_PIT6_P02_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x02
#define    ENABLE_PIT6_P03_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x03
#define    ENABLE_PIT6_P04_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x04
#define    ENABLE_PIT6_P05_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x05
#define    ENABLE_PIT6_P06_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x06
#define    ENABLE_PIT6_P07_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x07
#define    ENABLE_PIT6_P10_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x10
#define    ENABLE_PIT6_P11_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x11
#define    ENABLE_PIT6_P12_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x12
#define    ENABLE_PIT6_P13_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x13
#define    ENABLE_PIT6_P14_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x14
#define    ENABLE_PIT6_P15_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x15
#define    ENABLE_PIT6_P16_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x16
#define    ENABLE_PIT6_P17_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x17
#define    ENABLE_PIT6_P20_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x20
#define    ENABLE_PIT6_P21_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x21
#define    ENABLE_PIT6_P22_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x22
#define    ENABLE_PIT6_P23_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x23
#define    ENABLE_PIT6_P24_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x24
#define    ENABLE_PIT6_P25_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x25
#define    ENABLE_PIT6_P26_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x26
#define    ENABLE_PIT6_P27_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x27
#define    ENABLE_PIT6_P30_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x30
#define    ENABLE_PIT6_P31_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x31
#define    ENABLE_PIT6_P32_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x32
#define    ENABLE_PIT6_P33_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x33
#define    ENABLE_PIT6_P34_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x34
#define    ENABLE_PIT6_P35_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x35
#define    ENABLE_PIT6_P36_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x36
#define    ENABLE_PIT6_P37_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x37
#define    ENABLE_PIT6_P40_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x40
#define    ENABLE_PIT6_P41_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x41
#define    ENABLE_PIT6_P42_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x42
#define    ENABLE_PIT6_P43_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x43
#define    ENABLE_PIT6_P44_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x44
#define    ENABLE_PIT6_P45_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x45
#define    ENABLE_PIT6_P46_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x46
#define    ENABLE_PIT6_P47_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x47
#define    ENABLE_PIT6_P50_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x50
#define    ENABLE_PIT6_P51_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x51
#define    ENABLE_PIT6_P52_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x52
#define    ENABLE_PIT6_P53_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x53
#define    ENABLE_PIT6_P54_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x54
#define    ENABLE_PIT6_P55_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x55
#define    ENABLE_PIT6_P56_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x56
#define    ENABLE_PIT6_P57_LOWLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x57
           
#define    ENABLE_PIT6_P00_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x00
#define    ENABLE_PIT6_P01_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x01
#define    ENABLE_PIT6_P02_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x02
#define    ENABLE_PIT6_P03_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x03
#define    ENABLE_PIT6_P04_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x04
#define    ENABLE_PIT6_P05_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x05
#define    ENABLE_PIT6_P06_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x06
#define    ENABLE_PIT6_P07_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x07
#define    ENABLE_PIT6_P10_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x10
#define    ENABLE_PIT6_P11_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x11
#define    ENABLE_PIT6_P12_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x12
#define    ENABLE_PIT6_P13_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x13
#define    ENABLE_PIT6_P14_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x14
#define    ENABLE_PIT6_P15_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x15
#define    ENABLE_PIT6_P16_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x16
#define    ENABLE_PIT6_P17_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x17
#define    ENABLE_PIT6_P20_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x20
#define    ENABLE_PIT6_P21_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x21
#define    ENABLE_PIT6_P22_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x22
#define    ENABLE_PIT6_P23_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x23
#define    ENABLE_PIT6_P24_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x24
#define    ENABLE_PIT6_P25_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x25
#define    ENABLE_PIT6_P26_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x26
#define    ENABLE_PIT6_P27_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x27
#define    ENABLE_PIT6_P30_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x30
#define    ENABLE_PIT6_P31_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x31
#define    ENABLE_PIT6_P32_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x32
#define    ENABLE_PIT6_P33_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x33
#define    ENABLE_PIT6_P34_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x34
#define    ENABLE_PIT6_P35_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x35
#define    ENABLE_PIT6_P36_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x36
#define    ENABLE_PIT6_P37_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x37
#define    ENABLE_PIT6_P40_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x40
#define    ENABLE_PIT6_P41_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x41
#define    ENABLE_PIT6_P42_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x42
#define    ENABLE_PIT6_P43_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x43
#define    ENABLE_PIT6_P44_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x44
#define    ENABLE_PIT6_P45_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x45
#define    ENABLE_PIT6_P46_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x46
#define    ENABLE_PIT6_P47_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x47
#define    ENABLE_PIT6_P50_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x50
#define    ENABLE_PIT6_P51_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x51
#define    ENABLE_PIT6_P52_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x52
#define    ENABLE_PIT6_P53_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x53
#define    ENABLE_PIT6_P54_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x54
#define    ENABLE_PIT6_P55_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x55
#define    ENABLE_PIT6_P56_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x56
#define    ENABLE_PIT6_P57_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x57
           
#define    ENABLE_PIT6_P00_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x00
#define    ENABLE_PIT6_P01_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x01
#define    ENABLE_PIT6_P02_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x02
#define    ENABLE_PIT6_P03_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x03
#define    ENABLE_PIT6_P04_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x04
#define    ENABLE_PIT6_P05_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x05
#define    ENABLE_PIT6_P06_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x06
#define    ENABLE_PIT6_P07_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x07
#define    ENABLE_PIT6_P10_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x10
#define    ENABLE_PIT6_P11_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x11
#define    ENABLE_PIT6_P12_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x12
#define    ENABLE_PIT6_P13_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x13
#define    ENABLE_PIT6_P14_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x14
#define    ENABLE_PIT6_P15_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x15
#define    ENABLE_PIT6_P16_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x16
#define    ENABLE_PIT6_P17_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x17
#define    ENABLE_PIT6_P20_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x20
#define    ENABLE_PIT6_P21_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x21
#define    ENABLE_PIT6_P22_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x22
#define    ENABLE_PIT6_P23_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x23
#define    ENABLE_PIT6_P24_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x24
#define    ENABLE_PIT6_P25_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x25
#define    ENABLE_PIT6_P26_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x26
#define    ENABLE_PIT6_P27_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x27
#define    ENABLE_PIT6_P30_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x30
#define    ENABLE_PIT6_P31_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x31
#define    ENABLE_PIT6_P32_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x32
#define    ENABLE_PIT6_P33_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x33
#define    ENABLE_PIT6_P34_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x34
#define    ENABLE_PIT6_P35_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x35
#define    ENABLE_PIT6_P36_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x36
#define    ENABLE_PIT6_P37_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x37
#define    ENABLE_PIT6_P40_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x40
#define    ENABLE_PIT6_P41_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x41
#define    ENABLE_PIT6_P42_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x42
#define    ENABLE_PIT6_P43_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x43
#define    ENABLE_PIT6_P44_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x44
#define    ENABLE_PIT6_P45_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x45
#define    ENABLE_PIT6_P46_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x46
#define    ENABLE_PIT6_P47_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x47
#define    ENABLE_PIT6_P50_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x50
#define    ENABLE_PIT6_P51_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x51
#define    ENABLE_PIT6_P52_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x52
#define    ENABLE_PIT6_P53_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x53
#define    ENABLE_PIT6_P54_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x54
#define    ENABLE_PIT6_P55_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x55
#define    ENABLE_PIT6_P56_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x56
#define    ENABLE_PIT6_P57_FALLINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN|=SET_BIT6;PIPEN&=CLR_BIT6;PIPS6=0x57
             
#define    ENABLE_PIT6_P00_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x00
#define    ENABLE_PIT6_P01_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x01
#define    ENABLE_PIT6_P02_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x02
#define    ENABLE_PIT6_P03_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x03
#define    ENABLE_PIT6_P04_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x04
#define    ENABLE_PIT6_P05_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x05
#define    ENABLE_PIT6_P06_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x06
#define    ENABLE_PIT6_P07_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x07
#define    ENABLE_PIT6_P10_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x10
#define    ENABLE_PIT6_P11_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x11
#define    ENABLE_PIT6_P12_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x12
#define    ENABLE_PIT6_P13_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x13
#define    ENABLE_PIT6_P14_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x14
#define    ENABLE_PIT6_P15_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x15
#define    ENABLE_PIT6_P16_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x16
#define    ENABLE_PIT6_P17_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x17
#define    ENABLE_PIT6_P20_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x20
#define    ENABLE_PIT6_P21_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x21
#define    ENABLE_PIT6_P22_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x22
#define    ENABLE_PIT6_P23_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x23
#define    ENABLE_PIT6_P24_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x24
#define    ENABLE_PIT6_P25_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x25
#define    ENABLE_PIT6_P26_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x26
#define    ENABLE_PIT6_P27_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x27
#define    ENABLE_PIT6_P30_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x30
#define    ENABLE_PIT6_P31_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x31
#define    ENABLE_PIT6_P32_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x32
#define    ENABLE_PIT6_P33_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x33
#define    ENABLE_PIT6_P34_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x34
#define    ENABLE_PIT6_P35_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x35
#define    ENABLE_PIT6_P36_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x36
#define    ENABLE_PIT6_P37_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x37
#define    ENABLE_PIT6_P40_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x40
#define    ENABLE_PIT6_P41_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x41
#define    ENABLE_PIT6_P42_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x42
#define    ENABLE_PIT6_P43_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x43
#define    ENABLE_PIT6_P44_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x44
#define    ENABLE_PIT6_P45_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x45
#define    ENABLE_PIT6_P46_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x46
#define    ENABLE_PIT6_P47_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x47
#define    ENABLE_PIT6_P50_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x50
#define    ENABLE_PIT6_P51_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x51
#define    ENABLE_PIT6_P52_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x52
#define    ENABLE_PIT6_P53_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x53
#define    ENABLE_PIT6_P54_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x54
#define    ENABLE_PIT6_P55_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x55
#define    ENABLE_PIT6_P56_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x56
#define    ENABLE_PIT6_P57_RISINGEDGE     SFRS=1;PICON|=SET_BIT6;PINEN&=CLR_BIT6;PIPEN|=SET_BIT6;PIPS6=0x57
           
//-------- -------- Pin interrupt channel 7 PIT7 ------------------------
#define    ENABLE_PIT7_P00_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x00
#define    ENABLE_PIT7_P01_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x01
#define    ENABLE_PIT7_P02_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x02
#define    ENABLE_PIT7_P03_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x03
#define    ENABLE_PIT7_P04_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x04
#define    ENABLE_PIT7_P05_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x05
#define    ENABLE_PIT7_P06_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x06
#define    ENABLE_PIT7_P07_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x07
#define    ENABLE_PIT7_P10_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x10
#define    ENABLE_PIT7_P11_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x11
#define    ENABLE_PIT7_P12_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x12
#define    ENABLE_PIT7_P13_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x13
#define    ENABLE_PIT7_P14_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x14
#define    ENABLE_PIT7_P15_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x15
#define    ENABLE_PIT7_P16_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x16
#define    ENABLE_PIT7_P17_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x17
#define    ENABLE_PIT7_P20_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x20
#define    ENABLE_PIT7_P21_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x21
#define    ENABLE_PIT7_P22_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x22
#define    ENABLE_PIT7_P23_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x23
#define    ENABLE_PIT7_P24_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x24
#define    ENABLE_PIT7_P25_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x25
#define    ENABLE_PIT7_P26_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x26
#define    ENABLE_PIT7_P27_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x27
#define    ENABLE_PIT7_P30_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x30
#define    ENABLE_PIT7_P31_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x31
#define    ENABLE_PIT7_P32_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x32
#define    ENABLE_PIT7_P33_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x33
#define    ENABLE_PIT7_P34_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x34
#define    ENABLE_PIT7_P35_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x35
#define    ENABLE_PIT7_P36_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x36
#define    ENABLE_PIT7_P37_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x37
#define    ENABLE_PIT7_P40_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x40
#define    ENABLE_PIT7_P41_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x41
#define    ENABLE_PIT7_P42_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x42
#define    ENABLE_PIT7_P43_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x43
#define    ENABLE_PIT7_P44_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x44
#define    ENABLE_PIT7_P45_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x45
#define    ENABLE_PIT7_P46_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x46
#define    ENABLE_PIT7_P47_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x47
#define    ENABLE_PIT7_P50_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x50
#define    ENABLE_PIT7_P51_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x51
#define    ENABLE_PIT7_P52_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x52
#define    ENABLE_PIT7_P53_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x53
#define    ENABLE_PIT7_P54_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x54
#define    ENABLE_PIT7_P55_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x55
#define    ENABLE_PIT7_P56_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x56
#define    ENABLE_PIT7_P57_LOWLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x57
           
#define    ENABLE_PIT7_P00_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x00
#define    ENABLE_PIT7_P01_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x01
#define    ENABLE_PIT7_P02_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x02
#define    ENABLE_PIT7_P03_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x03
#define    ENABLE_PIT7_P04_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x04
#define    ENABLE_PIT7_P05_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x05
#define    ENABLE_PIT7_P06_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x06
#define    ENABLE_PIT7_P07_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x07
#define    ENABLE_PIT7_P10_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x10
#define    ENABLE_PIT7_P11_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x11
#define    ENABLE_PIT7_P12_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x12
#define    ENABLE_PIT7_P13_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x13
#define    ENABLE_PIT7_P14_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x14
#define    ENABLE_PIT7_P15_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x15
#define    ENABLE_PIT7_P16_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x16
#define    ENABLE_PIT7_P17_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x17
#define    ENABLE_PIT7_P20_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x20
#define    ENABLE_PIT7_P21_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x21
#define    ENABLE_PIT7_P22_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x22
#define    ENABLE_PIT7_P23_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x23
#define    ENABLE_PIT7_P24_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x24
#define    ENABLE_PIT7_P25_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x25
#define    ENABLE_PIT7_P26_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x26
#define    ENABLE_PIT7_P27_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x27
#define    ENABLE_PIT7_P30_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x30
#define    ENABLE_PIT7_P31_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x31
#define    ENABLE_PIT7_P32_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x32
#define    ENABLE_PIT7_P33_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x33
#define    ENABLE_PIT7_P34_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x34
#define    ENABLE_PIT7_P35_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x35
#define    ENABLE_PIT7_P36_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x36
#define    ENABLE_PIT7_P37_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x37
#define    ENABLE_PIT7_P40_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x40
#define    ENABLE_PIT7_P41_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x41
#define    ENABLE_PIT7_P42_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x42
#define    ENABLE_PIT7_P43_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x43
#define    ENABLE_PIT7_P44_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x44
#define    ENABLE_PIT7_P45_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x45
#define    ENABLE_PIT7_P46_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x46
#define    ENABLE_PIT7_P47_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x47
#define    ENABLE_PIT7_P50_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x50
#define    ENABLE_PIT7_P51_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x51
#define    ENABLE_PIT7_P52_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x52
#define    ENABLE_PIT7_P53_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x53
#define    ENABLE_PIT7_P54_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x54
#define    ENABLE_PIT7_P55_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x55
#define    ENABLE_PIT7_P56_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x56
#define    ENABLE_PIT7_P57_HIGHLEVEL     SFRS=1;PICON&=CLR_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x57
           
#define    ENABLE_PIT7_P00_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x00
#define    ENABLE_PIT7_P01_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x01
#define    ENABLE_PIT7_P02_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x02
#define    ENABLE_PIT7_P03_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x03
#define    ENABLE_PIT7_P04_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x04
#define    ENABLE_PIT7_P05_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x05
#define    ENABLE_PIT7_P06_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x06
#define    ENABLE_PIT7_P07_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x07
#define    ENABLE_PIT7_P10_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x10
#define    ENABLE_PIT7_P11_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x11
#define    ENABLE_PIT7_P12_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x12
#define    ENABLE_PIT7_P13_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x13
#define    ENABLE_PIT7_P14_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x14
#define    ENABLE_PIT7_P15_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x15
#define    ENABLE_PIT7_P16_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x16
#define    ENABLE_PIT7_P17_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x17
#define    ENABLE_PIT7_P20_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x20
#define    ENABLE_PIT7_P21_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x21
#define    ENABLE_PIT7_P22_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x22
#define    ENABLE_PIT7_P23_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x23
#define    ENABLE_PIT7_P24_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x24
#define    ENABLE_PIT7_P25_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x25
#define    ENABLE_PIT7_P26_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x26
#define    ENABLE_PIT7_P27_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x27
#define    ENABLE_PIT7_P30_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x30
#define    ENABLE_PIT7_P31_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x31
#define    ENABLE_PIT7_P32_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x32
#define    ENABLE_PIT7_P33_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x33
#define    ENABLE_PIT7_P34_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x34
#define    ENABLE_PIT7_P35_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x35
#define    ENABLE_PIT7_P36_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x36
#define    ENABLE_PIT7_P37_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x37
#define    ENABLE_PIT7_P40_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x40
#define    ENABLE_PIT7_P41_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x41
#define    ENABLE_PIT7_P42_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x42
#define    ENABLE_PIT7_P43_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x43
#define    ENABLE_PIT7_P44_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x44
#define    ENABLE_PIT7_P45_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x45
#define    ENABLE_PIT7_P46_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x46
#define    ENABLE_PIT7_P47_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x47
#define    ENABLE_PIT7_P50_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x50
#define    ENABLE_PIT7_P51_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x51
#define    ENABLE_PIT7_P52_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x52
#define    ENABLE_PIT7_P53_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x53
#define    ENABLE_PIT7_P54_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x54
#define    ENABLE_PIT7_P55_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x55
#define    ENABLE_PIT7_P56_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x56
#define    ENABLE_PIT7_P57_FALLINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN|=SET_BIT7;PIPEN&=CLR_BIT7;PIPS7=0x57
             
#define    ENABLE_PIT7_P00_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x00
#define    ENABLE_PIT7_P01_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x01
#define    ENABLE_PIT7_P02_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x02
#define    ENABLE_PIT7_P03_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x03
#define    ENABLE_PIT7_P04_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x04
#define    ENABLE_PIT7_P05_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x05
#define    ENABLE_PIT7_P06_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x06
#define    ENABLE_PIT7_P07_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x07
#define    ENABLE_PIT7_P10_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x10
#define    ENABLE_PIT7_P11_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x11
#define    ENABLE_PIT7_P12_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x12
#define    ENABLE_PIT7_P13_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x13
#define    ENABLE_PIT7_P14_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x14
#define    ENABLE_PIT7_P15_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x15
#define    ENABLE_PIT7_P16_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x16
#define    ENABLE_PIT7_P17_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x17
#define    ENABLE_PIT7_P20_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x20
#define    ENABLE_PIT7_P21_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x21
#define    ENABLE_PIT7_P22_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x22
#define    ENABLE_PIT7_P23_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x23
#define    ENABLE_PIT7_P24_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x24
#define    ENABLE_PIT7_P25_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x25
#define    ENABLE_PIT7_P26_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x26
#define    ENABLE_PIT7_P27_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x27
#define    ENABLE_PIT7_P30_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x30
#define    ENABLE_PIT7_P31_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x31
#define    ENABLE_PIT7_P32_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x32
#define    ENABLE_PIT7_P33_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x33
#define    ENABLE_PIT7_P34_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x34
#define    ENABLE_PIT7_P35_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x35
#define    ENABLE_PIT7_P36_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x36
#define    ENABLE_PIT7_P37_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x37
#define    ENABLE_PIT7_P40_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x40
#define    ENABLE_PIT7_P41_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x41
#define    ENABLE_PIT7_P42_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x42
#define    ENABLE_PIT7_P43_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x43
#define    ENABLE_PIT7_P44_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x44
#define    ENABLE_PIT7_P45_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x45
#define    ENABLE_PIT7_P46_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x46
#define    ENABLE_PIT7_P47_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x47
#define    ENABLE_PIT7_P50_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x50
#define    ENABLE_PIT7_P51_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x51
#define    ENABLE_PIT7_P52_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x52
#define    ENABLE_PIT7_P53_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x53
#define    ENABLE_PIT7_P54_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x54
#define    ENABLE_PIT7_P55_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x55
#define    ENABLE_PIT7_P56_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x56
#define    ENABLE_PIT7_P57_RISINGEDGE     SFRS=1;PICON|=SET_BIT7;PINEN&=CLR_BIT7;PIPEN|=SET_BIT7;PIPS7=0x57
           
#define    DISABLE_ALL_PIT                clr_EIE0_EPI

/*****************************************************************************************
* INT0 setting
*****************************************************************************************/
#define INT0_FALLING_EDGE_TRIG    set_TCON_IT0
#define INT0_LOW_LEVEL_TRIG       clr_TCON_IT0

/*****************************************************************************************
* INT1 setting
*****************************************************************************************/
#define INT1_FALLING_EDGE_TRIG    set_TCON_IT1
#define INT1_LOW_LEVEL_TRIG       clr_TCON_IT1