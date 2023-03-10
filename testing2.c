/*
 * Name: testing2.c
 * Author: Mahmoud Adel
 * Description: This file contains main information of testing struct cast using int - 4 - bits
 * Version: v1.0
 * */
 
#include <16F88.h>
#use delay(clock=8000000)
#fuses NOWDT,NOPROTECT,NOLVP,INTRC_IO,NOMCLR
/////////////////////////////////////
struct pins {
//first one to be declared contains LSB as its own LSB (reversed) 
int Lower:4; //4bits : from 0 to 15    
int Upper:4; //4bits : from 0 to 15
}mypins;
/////////////////////////////////////

void main()
{
   setup_oscillator(OSC_8MHZ | OSC_INTRC);
   output_b(0x00);
   while(1)
   {
      mypins.Lower=1;
      mypins.Upper=0;
      output_b((int8)mypins);
      delay_ms(1000);
      
      mypins.Lower=2;
      mypins.Upper=4;
      output_b((int8)mypins);
      delay_ms(1000);
      
      mypins.Lower=4;
      mypins.Upper=8;
      output_b((int8)mypins);
      delay_ms(1000);
      
      mypins.Lower=8;
      mypins.Upper=13;
      output_b((int8)mypins);
      delay_ms(1000);
   }
}