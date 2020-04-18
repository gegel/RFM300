#include "hw_layer.h"

void Radio_Init(void);
unsigned char Radio_On(unsigned char on);
unsigned char Radio_Send_FixedLen(unsigned char* pBuf, unsigned char len);
unsigned char Radio_Recv_FixedLen(unsigned char* pBuf,unsigned char len);

unsigned char Radio_Send_VarLen(unsigned char* pBuf, unsigned char len);
unsigned char Radio_Recv_VarLen(unsigned char* pBuf);

unsigned char Radio_Get_RX_ID(void);
void Radio_Set_TX_ID(unsigned char d);
