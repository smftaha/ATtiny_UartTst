/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 02/09/2021
Author  : 
Company : 
Comments: 


Chip type               : ATtiny24A
AVR Core Clock frequency: 8/000000 MHz
Memory model            : Tiny
External RAM size       : 0
Data Stack size         : 32
*******************************************************/

#include <tiny24.h>
#include <delay.h>

// Declare your global variables here
//eeprom unsigned char    eep;

void    F_Snd   ( unsigned  char    Data)   
{ 
    unsigned char   b;
    PORTA.0=0;
    TCNT0 =0;
    while ( TCNT0<103);
    for   ( b=1;  b;  b<<=1)
        {
        if    ( Data  &b)
        PORTA.0=1;
        else
        PORTA.0=0;
        TCNT0 =0;
        while ( TCNT0<103);
        }
    PORTA.0=1;
    TCNT0 =0;
    while ( TCNT0<200);  
}
void main(void)
{
// Declare your local variables here 
unsigned char    eep=0;
unsigned    char    Data,   b,  i; 
unsigned    int     j; 
static	unsigned    char		LAry1[]=" 1 100 15 33 ";
static	unsigned    char		LAry2[]=" 1 1024 9/2/21 11:01 ";
static	unsigned    char		LAry3[6];
// Crystal Oscillator division factor: 1
#pragma optsize-
CLKPR=(1<<CLKPCE);
CLKPR=(0<<CLKPCE) | (0<<CLKPS3) | (0<<CLKPS2) | (0<<CLKPS1) | (0<<CLKPS0);
#ifdef _OPTIMIZE_SIZE_
#pragma optsize+
#endif

// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=In Bit6=Out Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRA=(0<<DDA7) | (0<<DDA6) | (0<<DDA5) | (0<<DDA4) | (0<<DDA3) | (0<<DDA2) | (0<<DDA1) | (1<<DDA0);
// State: Bit7=T Bit6=0 Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (1<<PORTA1) | (1<<PORTA0);

// Port B initialization
// Function: Bit3=In Bit2=In Bit1=In Bit0=In 
DDRB=(0<<DDB3) | (0<<DDB2) | (0<<DDB1) | (0<<DDB0);
// State: Bit3=T Bit2=T Bit1=T Bit0=T 
PORTB=(0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: 1000/000 kHz
// Mode: Normal top=0xFF
// OC0A output: Disconnected
// OC0B output: Disconnected
// Timer Period: 0/256 ms
TCCR0A=(0<<COM0A1) | (0<<COM0A0) | (0<<COM0B1) | (0<<COM0B0) | (0<<WGM01) | (0<<WGM00);
TCCR0B=(0<<WGM02) | (0<<CS02) | (1<<CS01) | (0<<CS00);
TCNT0=0x00;
OCR0A=0x00;
OCR0B=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: Timer1 Stopped
// Mode: Normal top=0xFFFF
// OC1A output: Disconnected
// OC1B output: Disconnected
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: Off
// Compare B Match Interrupt: Off
TCCR1A=(0<<COM1A1) | (0<<COM1A0) | (0<<COM1B1) | (0<<COM1B0) | (0<<WGM11) | (0<<WGM10);
TCCR1B=(0<<ICNC1) | (0<<ICES1) | (0<<WGM13) | (0<<WGM12) | (0<<CS12) | (0<<CS11) | (0<<CS10);
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;

// Timer/Counter 0 Interrupt(s) initialization
TIMSK0=(0<<OCIE0B) | (0<<OCIE0A) | (0<<TOIE0);

// Timer/Counter 1 Interrupt(s) initialization
TIMSK1=(0<<ICIE1) | (0<<OCIE1B) | (0<<OCIE1A) | (0<<TOIE1);

// External Interrupt(s) initialization
// INT0: Off
// Interrupt on any change on pins PCINT0-7: Off
// Interrupt on any change on pins PCINT8-11: Off
MCUCR=(0<<ISC01) | (0<<ISC00);
GIMSK=(0<<INT0) | (0<<PCIE1) | (0<<PCIE0);

// USI initialization
// Mode: Disabled
// Clock source: Register & Counter=no clk.
// USI Counter Overflow Interrupt: Off
USICR=(0<<USISIE) | (0<<USIOIE) | (0<<USIWM1) | (0<<USIWM0) | (0<<USICS1) | (0<<USICS0) | (0<<USICLK) | (0<<USITC);

// Analog Comparator initialization
// Analog Comparator: Off
// The Analog Comparator's positive input is
// connected to the AIN0 pin
// The Analog Comparator's negative input is
// connected to the AIN1 pin
ACSR=(1<<ACD) | (0<<ACBG) | (0<<ACO) | (0<<ACI) | (0<<ACIE) | (0<<ACIC) | (0<<ACIS1) | (0<<ACIS0);
ADCSRB=(0<<ACME);
// Digital input buffer on AIN0: On
// Digital input buffer on AIN1: On
DIDR0=(0<<ADC1D) | (0<<ADC2D);

// ADC initialization
// ADC disabled
ADCSRA=(0<<ADEN) | (0<<ADSC) | (0<<ADATE) | (0<<ADIF) | (0<<ADIE) | (0<<ADPS2) | (0<<ADPS1) | (0<<ADPS0);

   
Data='0';
while (0)
      {
      delay_ms(100);  
      ///////////////////////
      PORTA.0=0;
      TCNT0 =0;
      while ( TCNT0<103);
      for   ( b=1;  b;  b<<=1)
          {
          if    ( Data  &b)
            PORTA.0=1;
          else
            PORTA.0=0;
          TCNT0 =0;
          while ( TCNT0<103);
          }
      PORTA.0=1;
      TCNT0 =0;
      //while ( TCNT0<100);  
      /////////////////////// 
      Data++;
      } 
        
LINSTA:   
delay_ms(1000);     
if	( eep	==0)
    {
    //eep=1;
    for ( i=0;  i<(sizeof	( LAry1)-1);    i++)
        F_Snd   ( LAry1[i]);
    }
else
{
    //eep=0;  
    for ( i=0;  i<(sizeof	( LAry2)-1);    i++)
        F_Snd   ( LAry2[i]);
    for	( j=0;	j<2048;	j+=2)
    {
        i=	j%100;
        if	( (i/10)	==0)
        {
            LAry3[0]	=i+'0';
            LAry3[1]	=' ';
            LAry3[2]	=i+'1';
            LAry3[3]	=' ';  
            for ( i=0;  i<4;    i++)
                F_Snd   ( LAry3[i]);
        }
        else
        {
            LAry3[0]	=(i/10)+'0';
            LAry3[1]	=(i%10)+'0';
            LAry3[2]	=' ';
            LAry3[3]	=(i/10)+'0';
            LAry3[4]	=(i%10)+'1';
            LAry3[5]	=' ';
            for ( i=0;  i<6;    i++)
                F_Snd   ( LAry3[i]);
        }
    }
}
while   (2)
{
    if  ( PINA.1    ==0)
    {
    delay_ms(50); 
    if  ( PINA.1    ==0)
        {      
        delay_ms(50); 
        if  ( PINA.1    ==0)
            {
            delay_ms(50); 
            if  ( PINA.1    ==0)
                {
                if  (eep)
                    eep=0;
                else
                    eep=1;
                goto    LINSTA;
                }
            }
        }
    }
}
}
