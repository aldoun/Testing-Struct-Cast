/*
 * Name: testing1.c
 * Author: Mahmoud Adel
 * Description: This file contains main information of testing struct cast
 * Version: v1.0
 * */
 

#include <16F88.h>
#use delay(clock=8000000)
#fuses NOWDT,NOPROTECT,NOLVP,INTRC_IO,NOMCLR
/////////////////////////////////////
struct pins {
//first one to be declared is LSB
BOOLEAN b0;    //1bit : 0 or 1
BOOLEAN b1;    //1bit : 0 or 1
BOOLEAN b2;    //1bit : 0 or 1
BOOLEAN b3;    //1bit : 0 or 1
BOOLEAN b4;    //1bit : 0 or 1
BOOLEAN b5;    //1bit : 0 or 1
BOOLEAN b6;    //1bit : 0 or 1
BOOLEAN b7;    //1bit : 0 or 1
};
/////////////////////////////////////

void main()
{
   setup_oscillator(OSC_8MHZ | OSC_INTRC);
   output_b(0x00);
   struct pins mypins;
   while(1)
   {
      mypins.b7=1;
      mypins.b6=1;
      mypins.b5=0;
      mypins.b4=0;
      mypins.b3=0;
      mypins.b2=0;
      mypins.b1=0;
      mypins.b0=0;
      output_b((int8)mypins);
      delay_ms(1000);
      
      mypins.b7=0;
      mypins.b6=0;
      mypins.b5=1;
      mypins.b4=1;
      mypins.b3=0;
      mypins.b2=0;
      mypins.b1=0;
      mypins.b0=0;
      output_b((int8)mypins);
      delay_ms(1000);
      
      mypins.b7=0;
      mypins.b6=0;
      mypins.b5=0;
      mypins.b4=0;
      mypins.b3=1;
      mypins.b2=1;
      mypins.b1=0;
      mypins.b0=0;
      output_b((int8)mypins);
      delay_ms(1000);
      
      mypins.b7=0;
      mypins.b6=0;
      mypins.b5=0;
      mypins.b4=0;
      mypins.b3=0;
      mypins.b2=0;
      mypins.b1=1;
      mypins.b0=1;
      output_b((int8)mypins);
      delay_ms(1000);
   }
}
