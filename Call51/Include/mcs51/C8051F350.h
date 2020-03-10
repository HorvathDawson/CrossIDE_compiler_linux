/*-------------------------------------------------------------------------
   Register Declarations for the SiLabs C8051F35x Processor Range

   Copyright (C) 2004 - Maarten Brock, sourceforge.brock@dse.nl

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
-------------------------------------------------------------------------*/

#ifndef C8051F350_H
#define C8051F350_H


/*  BYTE Registers  */

__sfr __at (0x80) P0           ;  /* PORT 0                                        */
__sfr __at (0x81) SP           ;  /* STACK POINTER                                 */
__sfr __at (0x82) DPL          ;  /* DATA POINTER - LOW BYTE                       */
__sfr __at (0x83) DPH          ;  /* DATA POINTER - HIGH BYTE                      */
__sfr __at (0x87) PCON         ;  /* POWER CONTROL                                 */
__sfr __at (0x88) TCON         ;  /* TIMER CONTROL                                 */
__sfr __at (0x89) TMOD         ;  /* TIMER MODE                                    */
__sfr __at (0x8A) TL0          ;  /* TIMER 0 - LOW BYTE                            */
__sfr __at (0x8B) TL1          ;  /* TIMER 1 - LOW BYTE                            */
__sfr __at (0x8C) TH0          ;  /* TIMER 0 - HIGH BYTE                           */
__sfr __at (0x8D) TH1          ;  /* TIMER 1 - HIGH BYTE                           */
__sfr __at (0x8E) CKCON        ;  /* CLOCK CONTROL                                 */
__sfr __at (0x8F) PSCTL        ;  /* PROGRAM STORE R/W CONTROL                     */
__sfr __at (0x90) P1           ;  /* PORT 1                                        */
__sfr __at (0x91) TMR3CN       ;  /* TIMER 3 CONTROL                               */
__sfr __at (0x92) TMR3RLL      ;  /* TIMER 3 CAPTURE REGISTER - LOW BYTE           */
__sfr __at (0x93) TMR3RLH      ;  /* TIMER 3 CAPTURE REGISTER - HIGH BYTE          */
__sfr __at (0x94) TMR3L        ;  /* TIMER 3 - LOW BYTE                            */
__sfr __at (0x95) TMR3H        ;  /* TIMER 3 - HIGH BYTE                           */
__sfr __at (0x96) IDA0         ;  /* CURRENT MODE DAC 0                            */
__sfr __at (0x98) SCON         ;  /* SERIAL PORT CONTROL                           */
__sfr __at (0x98) SCON0        ;  /* SERIAL PORT CONTROL                           */
__sfr __at (0x99) SBUF         ;  /* SERIAL PORT BUFFER                            */
__sfr __at (0x99) SBUF0        ;  /* SERIAL PORT BUFFER                            */
__sfr __at (0x9A) ADC0DECL     ;  /* ADC DECIMATION LOW                            */
__sfr __at (0x9B) ADC0DECH     ;  /* ADC DECIMATION HIGH                           */
__sfr __at (0x9C) CPT0CN       ;  /* COMPARATOR 0 CONTROL                          */
__sfr __at (0x9D) CPT0MD       ;  /* COMPARATOR 0 MODE SELECTION                   */
__sfr __at (0x9F) CPT0MX       ;  /* COMPARATOR 0 MUX SELECTION                    */
__sfr __at (0xA0) P2           ;  /* PORT 2                                        */
__sfr __at (0xA1) SPI0CFG      ;  /* SPI0 CONFIGURATION                            */
__sfr __at (0xA2) SPI0CKR      ;  /* SPI0 CLOCK RATE CONTROL                       */
__sfr __at (0xA3) SPI0DAT      ;  /* SPI0 DATA                                     */
__sfr __at (0xA4) P0MDOUT      ;  /* PORT 0 OUTPUT MODE CONFIGURATION              */
__sfr __at (0xA5) P1MDOUT      ;  /* PORT 1 OUTPUT MODE CONFIGURATION              */
__sfr __at (0xA6) P2MDOUT      ;  /* PORT 2 OUTPUT MODE CONFIGURATION              */
__sfr __at (0xA8) IE           ;  /* INTERRUPT ENABLE                              */
__sfr __at (0xA9) CLKSEL       ;  /* SYSTEM CLOCK SELECT                           */
__sfr __at (0xAA) EMI0CN       ;  /* EXTERNAL MEMORY INTERFACE CONTROL             */
__sfr __at (0xAA) _XPAGE       ;  /* XDATA/PDATA PAGE                              */
__sfr __at (0xAB) ADC0CGL      ;  /* ADC 0 GAIN CALIBRATION LOW                    */
__sfr __at (0xAC) ADC0CGM      ;  /* ADC 0 GAIN CALIBRATION MIDDLE                 */
__sfr __at (0xAD) ADC0CGH      ;  /* ADC 0 GAIN CALIBRATION HIGH                   */
__sfr __at (0xB1) OSCXCN       ;  /* EXTERNAL OSCILLATOR CONTROL                   */
__sfr __at (0xB2) OSCICN       ;  /* INTERNAL OSCILLATOR CONTROL                   */
__sfr __at (0xB3) OSCICL       ;  /* INTERNAL OSCILLATOR CALIBRATION               */
__sfr __at (0xB6) FLSCL        ;  /* FLASH MEMORY TIMING PRESCALER                 */
__sfr __at (0xB7) FLKEY        ;  /* FLASH ACESS LIMIT                             */
__sfr __at (0xB8) IP           ;  /* INTERRUPT PRIORITY                            */
__sfr __at (0xB9) IDA0CN       ;  /* CURRENT MODE DAC 0 - CONTROL                  */
__sfr __at (0xBA) ADC0COL      ;  /* ADC 0 OFFSET CALIBRATION LOW                  */
__sfr __at (0xBB) ADC0COM      ;  /* ADC 0 OFFSET CALIBRATION MIDDLE               */
__sfr __at (0xBC) ADC0COH      ;  /* ADC 0 OFFSET CALIBRATION HIGH                 */
__sfr __at (0xBD) ADC0BUF      ;  /* ADC 0 BUFFER CONTROL                          */
__sfr __at (0xBE) CLKMUL       ;  /* CLOCK MULTIPLIER                              */
__sfr __at (0xBF) ADC0DAC      ;  /* ADC 0 OFFSET DAC                              */
__sfr __at (0xC0) SMB0CN       ;  /* SMBUS CONTROL                                 */
__sfr __at (0xC1) SMB0CF       ;  /* SMBUS CONFIGURATION                           */
__sfr __at (0xC2) SMB0DAT      ;  /* SMBUS DATA                                    */
__sfr __at (0xC3) ADC0L        ;  /* ADC 0 OUTPUT LOW BYTE                         */
__sfr __at (0xC4) ADC0M        ;  /* ADC 0 OUTPUT MIDDLE BYTE                      */
__sfr __at (0xC5) ADC0H        ;  /* ADC 0 OUTPUT HIGH BYTE                        */
__sfr __at (0xC6) ADC0MUX      ;  /* ADC 0 MULTIPLEXER                             */
__sfr __at (0xC8) T2CON        ;  /* TIMER 2 CONTROL                               */
__sfr __at (0xC8) TMR2CN       ;  /* TIMER 2 CONTROL                               */
__sfr __at (0xCA) RCAP2L       ;  /* TIMER 2 CAPTURE REGISTER - LOW BYTE           */
__sfr __at (0xCA) TMR2RLL      ;  /* TIMER 2 CAPTURE REGISTER - LOW BYTE           */
__sfr __at (0xCB) RCAP2H       ;  /* TIMER 2 CAPTURE REGISTER - HIGH BYTE          */
__sfr __at (0xCB) TMR2RLH      ;  /* TIMER 2 CAPTURE REGISTER - HIGH BYTE          */
__sfr __at (0xCC) TL2          ;  /* TIMER 2 - LOW BYTE                            */
__sfr __at (0xCC) TMR2L        ;  /* TIMER 2 - LOW BYTE                            */
__sfr __at (0xCD) TH2          ;  /* TIMER 2 - HIGH BYTE                           */
__sfr __at (0xCD) TMR2H        ;  /* TIMER 2 - HIGH BYTE                           */
__sfr __at (0xD0) PSW          ;  /* PROGRAM STATUS WORD                           */
__sfr __at (0xD1) REF0CN       ;  /* VOLTAGE REFERENCE 0 CONTROL                   */
__sfr __at (0xD4) P0SKIP       ;  /* PORT 0 SKIP                                   */
__sfr __at (0xD5) P1SKIP       ;  /* PORT 1 SKIP                                   */
__sfr __at (0xD7) IDA1CN       ;  /* CURRENT MODE DAC 1 - CONTROL                  */
__sfr __at (0xD8) PCA0CN       ;  /* PCA CONTROL                                   */
__sfr __at (0xD9) PCA0MD       ;  /* PCA MODE                                      */
__sfr __at (0xDA) PCA0CPM0     ;  /* PCA MODULE 0 MODE REGISTER                    */
__sfr __at (0xDB) PCA0CPM1     ;  /* PCA MODULE 1 MODE REGISTER                    */
__sfr __at (0xDC) PCA0CPM2     ;  /* PCA MODULE 2 MODE REGISTER                    */
__sfr __at (0xDD) IDA1         ;  /* CURRENT MODE DAC 1                            */
__sfr __at (0xE0) ACC          ;  /* ACCUMULATOR                                   */
__sfr __at (0xE1) XBR0         ;  /* PORT MUX CONFIGURATION REGISTER 0             */
__sfr __at (0xE2) XBR1         ;  /* PORT MUX CONFIGURATION REGISTER 1             */
__sfr __at (0xE3) PFE0CN       ;  /* PREFETCH ENGINE CONTROL                       */
__sfr __at (0xE4) IT01CF       ;  /* INT0/INT1 CONFIGURATION REGISTER              */
__sfr __at (0xE4) INT01CF      ;  /* INT0/INT1 CONFIGURATION REGISTER              */
__sfr __at (0xE6) EIE1         ;  /* EXTERNAL INTERRUPT ENABLE 1                   */
__sfr __at (0xE8) ADC0STA      ;  /* ADC 0 STATUS                                  */
__sfr __at (0xE9) PCA0CPL0     ;  /* PCA CAPTURE 0 LOW                             */
__sfr __at (0xEA) PCA0CPH0     ;  /* PCA CAPTURE 0 HIGH                            */
__sfr __at (0xEB) PCA0CPL1     ;  /* PCA CAPTURE 1 LOW                             */
__sfr __at (0xEC) PCA0CPH1     ;  /* PCA CAPTURE 1 HIGH                            */
__sfr __at (0xED) PCA0CPL2     ;  /* PCA CAPTURE 2 LOW                             */
__sfr __at (0xEE) PCA0CPH2     ;  /* PCA CAPTURE 2 HIGH                            */
__sfr __at (0xEF) RSTSRC       ;  /* RESET SOURCE                                  */
__sfr __at (0xF0) B            ;  /* B REGISTER                                    */
__sfr __at (0xF1) P0MODE       ;  /* PORT 0 INPUT MODE CONFIGURATION               */
__sfr __at (0xF1) P0MDIN       ;  /* PORT 0 INPUT MODE CONFIGURATION               */
__sfr __at (0xF2) P1MODE       ;  /* PORT 1 INPUT MODE CONFIGURATION               */
__sfr __at (0xF2) P1MDIN       ;  /* PORT 1 INPUT MODE CONFIGURATION               */
__sfr __at (0xF3) ADC0MD       ;  /* ADC 0 MODE                                    */
__sfr __at (0xF4) ADC0CN       ;  /* ADC 0 CONTROL                                 */
__sfr __at (0xF6) EIP1         ;  /* EXTERNAL INTERRUPT PRIORITY REGISTER 1        */
__sfr __at (0xF7) ADC0CLK      ;  /* ADC 0 CLOCK                                   */
__sfr __at (0xF8) SPI0CN       ;  /* SPI0 CONTROL                                  */
__sfr __at (0xF9) PCA0L        ;  /* PCA COUNTER LOW                               */
__sfr __at (0xFA) PCA0H        ;  /* PCA COUNTER HIGH                              */
__sfr __at (0xFB) ADC0CF       ;  /* ADC 0 CONFIGURATION                           */
__sfr __at (0xFC) ADC0FL       ;  /* ADC 0 FAST FILTER OUTPUT LOW                  */
__sfr __at (0xFD) ADC0FM       ;  /* ADC 0 FAST FILTER OUTPUT MIDDLE               */
__sfr __at (0xFE) ADC0FH       ;  /* ADC 0 FAST FILTER OUTPUT HIGH                 */
__sfr __at (0xFF) VDM0CN       ;  /* VDD MONITOR CONTROL                           */


/*  WORD/DWORD Registers  */

__sfr16 __at (0x8C8A) TMR0     ;  /* TIMER 0 COUNTER                               */
__sfr16 __at (0x8D8B) TMR1     ;  /* TIMER 1 COUNTER                               */
__sfr16 __at (0xCDCC) TMR2     ;  /* TIMER 2 COUNTER                               */
__sfr16 __at (0xCBCA) RCAP2    ;  /* TIMER 2 CAPTURE REGISTER WORD                 */
__sfr16 __at (0xCBCA) TMR2RL   ;  /* TIMER 2 CAPTURE REGISTER WORD                 */
__sfr16 __at (0x9594) TMR3     ;  /* TIMER 3 COUNTER                               */
__sfr16 __at (0x9392) TMR3RL   ;  /* TIMER 3 CAPTURE REGISTER WORD                 */

__sfr16 __at (0x9B9A) ADC0DEC  ;  /* ADC 0 DECIMATION RATIO REGISTER  WORD         */
/* Unfortunately the C8051F350 does not have an sfr that always reads 0x00 and     */
/* ignores what is written to it. That could have enabled sfr32 definitions for    */
/* the 24 bit ADC0 sfr combinations.                                               */
__sfr16 __at (0xC5C4) ADC0     ;  /* 16 bit ADC 0 SINC3 FILTER OUTPUT WORD         */
__sfr16 __at (0xFEFD) ADC0F    ;  /* 16 bit ADC 0 FAST FILTER OUTPUT WORD          */

__sfr16 __at (0xFAF9) PCA0     ;  /* PCA COUNTER                                   */
__sfr16 __at (0xEAE9) PCA0CP0  ;  /* PCA CAPTURE 0 WORD                            */
__sfr16 __at (0xECEB) PCA0CP1  ;  /* PCA CAPTURE 1 WORD                            */
__sfr16 __at (0xEEED) PCA0CP2  ;  /* PCA CAPTURE 2 WORD                            */


/*  BIT Registers  */

/*  P0  0x80 */
__sbit __at (0x80) P0_0        ;
__sbit __at (0x81) P0_1        ;
__sbit __at (0x82) P0_2        ;
__sbit __at (0x83) P0_3        ;
__sbit __at (0x84) P0_4        ;
__sbit __at (0x85) P0_5        ;
__sbit __at (0x86) P0_6        ;
__sbit __at (0x87) P0_7        ;

/*  TCON  0x88 */
__sbit __at (0x88) IT0         ;  /* TCON.0 - EXT. INTERRUPT 0 TYPE                */
__sbit __at (0x89) IE0         ;  /* TCON.1 - EXT. INTERRUPT 0 EDGE FLAG           */
__sbit __at (0x8A) IT1         ;  /* TCON.2 - EXT. INTERRUPT 1 TYPE                */
__sbit __at (0x8B) IE1         ;  /* TCON.3 - EXT. INTERRUPT 1 EDGE FLAG           */
__sbit __at (0x8C) TR0         ;  /* TCON.4 - TIMER 0 ON/OFF CONTROL               */
__sbit __at (0x8D) TF0         ;  /* TCON.5 - TIMER 0 OVERFLOW FLAG                */
__sbit __at (0x8E) TR1         ;  /* TCON.6 - TIMER 1 ON/OFF CONTROL               */
__sbit __at (0x8F) TF1         ;  /* TCON.7 - TIMER 1 OVERFLOW FLAG                */

/*  P1  0x90 */
__sbit __at (0x90) P1_0        ;
__sbit __at (0x91) P1_1        ;
__sbit __at (0x92) P1_2        ;
__sbit __at (0x93) P1_3        ;
__sbit __at (0x94) P1_4        ;
__sbit __at (0x95) P1_5        ;
__sbit __at (0x96) P1_6        ;
__sbit __at (0x97) P1_7        ;

/*  SCON  0x98 */
__sbit __at (0x98) RI          ;  /* SCON.0 - RECEIVE INTERRUPT FLAG               */
__sbit __at (0x98) RI0         ;  /* SCON.0 - RECEIVE INTERRUPT FLAG               */
__sbit __at (0x99) TI          ;  /* SCON.1 - TRANSMIT INTERRUPT FLAG              */
__sbit __at (0x99) TI0         ;  /* SCON.1 - TRANSMIT INTERRUPT FLAG              */
__sbit __at (0x9A) RB8         ;  /* SCON.2 - RECEIVE BIT 8                        */
__sbit __at (0x9A) RB80        ;  /* SCON.2 - RECEIVE BIT 8                        */
__sbit __at (0x9B) TB8         ;  /* SCON.3 - TRANSMIT BIT 8                       */
__sbit __at (0x9B) TB80        ;  /* SCON.3 - TRANSMIT BIT 8                       */
__sbit __at (0x9C) REN         ;  /* SCON.4 - RECEIVE ENABLE                       */
__sbit __at (0x9C) REN0        ;  /* SCON.4 - RECEIVE ENABLE                       */
__sbit __at (0x9D) SM2         ;  /* SCON.5 - MULTIPROCESSOR COMMUNICATION ENABLE  */
__sbit __at (0x9D) MCE0        ;  /* SCON.5 - MULTIPROCESSOR COMMUNICATION ENABLE  */
__sbit __at (0x9F) SM0         ;  /* SCON.7 - SERIAL MODE CONTROL BIT 0            */
__sbit __at (0x9F) S0MODE      ;  /* SCON.7 - SERIAL MODE CONTROL BIT 0            */

/*  P2  0xA0 */
__sbit __at (0xA0) P2_0        ;
__sbit __at (0xA1) P2_1        ;
__sbit __at (0xA2) P2_2        ;
__sbit __at (0xA3) P2_3        ;
__sbit __at (0xA4) P2_4        ;
__sbit __at (0xA5) P2_5        ;
__sbit __at (0xA6) P2_6        ;
__sbit __at (0xA7) P2_7        ;

/*  IE  0xA8 */
__sbit __at (0xA8) EX0         ;  /* IE.0 - EXTERNAL INTERRUPT 0 ENABLE            */
__sbit __at (0xA9) ET0         ;  /* IE.1 - TIMER 0 INTERRUPT ENABLE               */
__sbit __at (0xAA) EX1         ;  /* IE.2 - EXTERNAL INTERRUPT 1 ENABLE            */
__sbit __at (0xAB) ET1         ;  /* IE.3 - TIMER 1 INTERRUPT ENABLE               */
__sbit __at (0xAC) ES          ;  /* IE.4 - SERIAL PORT INTERRUPT ENABLE           */
__sbit __at (0xAC) ES0         ;  /* IE.4 - SERIAL PORT INTERRUPT ENABLE           */
__sbit __at (0xAD) ET2         ;  /* IE.5 - TIMER 2 INTERRUPT ENABLE               */
__sbit __at (0xAE) ESPI0       ;  /* IE.6 - SPI0 INTERRUPT ENABLE                  */
__sbit __at (0xAF) EA          ;  /* IE.7 - GLOBAL INTERRUPT ENABLE                */

/*  IP  0xB8 */
__sbit __at (0xB8) PX0         ;  /* IP.0 - EXTERNAL INTERRUPT 0 PRIORITY          */
__sbit __at (0xB9) PT0         ;  /* IP.1 - TIMER 0 PRIORITY                       */
__sbit __at (0xBA) PX1         ;  /* IP.2 - EXTERNAL INTERRUPT 1 PRIORITY          */
__sbit __at (0xBB) PT1         ;  /* IP.3 - TIMER 1 PRIORITY                       */
__sbit __at (0xBC) PS          ;  /* IP.4 - SERIAL PORT PRIORITY                   */
__sbit __at (0xBC) PS0         ;  /* IP.4 - SERIAL PORT PRIORITY                   */
__sbit __at (0xBD) PT2         ;  /* IP.5 - TIMER 2 PRIORITY                       */
__sbit __at (0xBE) PSPI0       ;  /* IP.6 - SPI0 PRIORITY                          */

/*  SMB0CN  0xC0 */
__sbit __at (0xC0) SI          ;  /* SMB0CN.0 - SMBUS 0 INTERRUPT PENDING FLAG     */
__sbit __at (0xC1) ACK         ;  /* SMB0CN.1 - SMBUS 0 ACKNOWLEDGE FLAG           */
__sbit __at (0xC2) ARBLOST     ;  /* SMB0CN.2 - SMBUS 0 ARBITRATION LOST INDICATOR */
__sbit __at (0xC3) ACKRQ       ;  /* SMB0CN.3 - SMBUS 0 ACKNOWLEDGE REQUEST        */
__sbit __at (0xC4) STO         ;  /* SMB0CN.4 - SMBUS 0 STOP FLAG                  */
__sbit __at (0xC5) STA         ;  /* SMB0CN.5 - SMBUS 0 START FLAG                 */
__sbit __at (0xC6) TXMODE      ;  /* SMB0CN.6 - SMBUS 0 TRANSMIT MODE INDICATOR    */
__sbit __at (0xC7) MASTER      ;  /* SMB0CN.7 - SMBUS 0 MASTER/SLAVE INDICATOR     */

/*  TMR2CN  0xC8 */
__sbit __at (0xC8) T2XCLK      ;  /* TMR2CN.0 - TIMER 2 EXTERNAL CLOCK SELECT      */
__sbit __at (0xCA) TR2         ;  /* TMR2CN.2 - TIMER 2 ON/OFF CONTROL             */
__sbit __at (0xCB) T2SPLIT     ;  /* TMR2CN.3 - TIMER 2 SPLIT MODE ENABLE          */
__sbit __at (0xCD) TF2CEN      ;  /* TMR2CN.5 - TIMER 2 LOW-FREQ OSC CAPTURE ENABLE*/
__sbit __at (0xCD) TF2LEN      ;  /* TMR2CN.5 - TIMER 2 LOW BYTE INTERRUPT ENABLE  */
__sbit __at (0xCE) TF2L        ;  /* TMR2CN.6 - TIMER 2 LOW BYTE OVERFLOW FLAG     */
__sbit __at (0xCF) TF2         ;  /* TMR2CN.7 - TIMER 2 OVERFLOW FLAG              */
__sbit __at (0xCF) TF2H        ;  /* TMR2CN.7 - TIMER 2 HIGH BYTE OVERFLOW FLAG    */

/*  PSW  0xD0 */
__sbit __at (0xD0) PARITY      ;  /* PSW.0 - ACCUMULATOR PARITY FLAG               */
__sbit __at (0xD1) F1          ;  /* PSW.1 - FLAG 1                                */
__sbit __at (0xD2) OV          ;  /* PSW.2 - OVERFLOW FLAG                         */
__sbit __at (0xD3) RS0         ;  /* PSW.3 - REGISTER BANK SELECT 0                */
__sbit __at (0xD4) RS1         ;  /* PSW.4 - REGISTER BANK SELECT 1                */
__sbit __at (0xD5) F0          ;  /* PSW.5 - FLAG 0                                */
__sbit __at (0xD6) AC          ;  /* PSW.6 - AUXILIARY CARRY FLAG                  */
__sbit __at (0xD7) CY          ;  /* PSW.7 - CARRY FLAG                            */

/*  PCA0CN  0xD8 */
__sbit __at (0xD8) CCF0        ;  /* PCA0CN.0 - PCA MODULE 0 CAPTURE/COMPARE FLAG  */
__sbit __at (0xD9) CCF1        ;  /* PCA0CN.1 - PCA MODULE 1 CAPTURE/COMPARE FLAG  */
__sbit __at (0xDA) CCF2        ;  /* PCA0CN.2 - PCA MODULE 2 CAPTURE/COMPARE FLAG  */
__sbit __at (0xDE) CR          ;  /* PCA0CN.6 - PCA COUNTER/TIMER RUN CONTROL      */
__sbit __at (0xDF) CF          ;  /* PCA0CN.7 - PCA COUNTER/TIMER OVERFLOW FLAG    */

/*  ADC0STA  0xE8 */
__sbit __at (0xE8) AD0OVR      ;  /* ADC0CN.0 - ADC 0 OVERRUN FLAG                 */
__sbit __at (0xE9) AD0ERR      ;  /* ADC0CN.1 - ADC 0 ERROR FLAG                   */
__sbit __at (0xEA) AD0CALC     ;  /* ADC0CN.2 - ADC 0 CALIBRATION COMPLETE FLAG    */
__sbit __at (0xEB) AD0FFC      ;  /* ADC0CN.3 - ADC 0 FAST FILTER CLIP FLAG        */
__sbit __at (0xEC) AD0S3C      ;  /* ADC0CN.4 - ADC 0 SINC3 FILTER CLIP FLAG       */
__sbit __at (0xED) AD0INT      ;  /* ADC0CN.5 - ADC 0 CONV. COMPLETE INT. FLAG     */
__sbit __at (0xEE) AD0CBSY     ;  /* ADC0CN.6 - ADC 0 CALIBRATION IN PROGRESS FLAG */
__sbit __at (0xEF) AD0BUSY     ;  /* ADC0CN.7 - ADC 0 CONVERSION IN PROGRESS FLAG  */

/*  SPI0CN  0xF8 */
__sbit __at (0xF8) SPIEN       ;  /* SPI0CN.0 - SPI0 ENABLE                        */
__sbit __at (0xF9) TXBMT       ;  /* SPI0CN.1 - TRANSMIT BUFFER EMPTY              */
__sbit __at (0xFA) NSSMD0      ;  /* SPI0CN.2 - SLAVE SELECT MODE BIT 0            */
__sbit __at (0xFB) NSSMD1      ;  /* SPI0CN.3 - SLAVE SELECT MODE BIT 1            */
__sbit __at (0xFC) RXOVRN      ;  /* SPI0CN.4 - RECEIVE OVERRUN FLAG               */
__sbit __at (0xFD) MODF        ;  /* SPI0CN.5 - MODE FAULT FLAG                    */
__sbit __at (0xFE) WCOL        ;  /* SPI0CN.6 - WRITE COLLISION FLAG               */
__sbit __at (0xFF) SPIF        ;  /* SPI0CN.7 - SPI0 INTERRUPT FLAG                */


/* Predefined SFR Bit Masks */

#define PCON_IDLE         0x01    /* PCON                                */
#define PCON_STOP         0x02    /* PCON                                */
#define T1M               0x08    /* CKCON                               */
#define PSWE              0x01    /* PSCTL                               */
#define PSEE              0x02    /* PSCTL                               */
#define ECP0              0x20    /* EIE1                                */
#define PORSF             0x02    /* RSTSRC                              */
#define SWRSF             0x10    /* RSTSRC                              */
#define ECCF              0x01    /* PCA0CPMn                            */
#define PWM               0x02    /* PCA0CPMn                            */
#define TOG               0x04    /* PCA0CPMn                            */
#define MAT               0x08    /* PCA0CPMn                            */
#define CAPN              0x10    /* PCA0CPMn                            */
#define CAPP              0x20    /* PCA0CPMn                            */
#define ECOM              0x40    /* PCA0CPMn                            */
#define PWM16             0x80    /* PCA0CPMn                            */
#define CP0E              0x10    /* XBR0                                */
#define CP0OEN            0x10    /* XBR0                                */
#define CP0AE             0x20    /* XBR0                                */
#define CP0AOEN           0x20    /* XBR0                                */

#endif
