
This is a demo of using CMT2300A radio driver with Nuvoton 8-bit 8051 low power microcontroller ML51PC0AE.  Uses evaluation board Nuvoton NuMaker-ML51PC and module HopeRF RFM300W-868MHz. Uses WART in interrupt mode to transmit and receive data between transceivers. The data stream is split into packets with a maximum 30 bytes payload.
Hardware filtering of the address (with the possibility of broadcasting) and CRC16 are used.
