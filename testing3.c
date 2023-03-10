/*
 * Name: testing3.c
 * Author: Mahmoud Adel
 * Description: This file contains main information of testing struct cast using int - 4 - bits
 * Version: v1.0
 * */
 
#include <16F88.h>
#use delay(clock=8000000)
#fuses NOWDT,NOPROTECT,NOLVP,INTRC_IO,NOMCLR
/////////////////////////////////////
struct pins {
//first one to be declared is LSB
int1 b0;
BOOLEAN b1;
int mid:4;
BOOLEAN b6;
BOOLEAN b7;
}mypins;
/////////////////////////////////////

void main()
{
   setup_oscillator(OSC_8MHZ | OSC_INTRC);
   output_b(0x00);
   while(1)
   {
      mypins.b7=1;
      mypins.b6=1;
      mypins.mid=8;
      mypins.b1=0;
      mypins.b0=0;
      output_b((int8)mypins);
      delay_ms(1000);
      
      mypins.b7=0;
      mypins.b6=0;
      mypins.mid=4;
      mypins.b1=1;
      mypins.b0=1;
      output_b((int8)mypins);
      delay_ms(1000);
      
      mypins.b7=1;
      mypins.b6=0;
      mypins.mid=2;
      mypins.b1=0;
      mypins.b0=1;
      output_b((int8)mypins);
      delay_ms(1000);
      
      mypins.b7=0;
      mypins.b6=1;
      mypins.mid=1;
      mypins.b1=1;
      mypins.b0=0;
      output_b((int8)mypins);
      delay_ms(1000);
   }
}