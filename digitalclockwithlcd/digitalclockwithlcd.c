#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
#include<lcdavr.h>
#include<stdio.h>

int main()
{  unsigned char hr,min,sec;
   DDRB=0xff;
   lcd_init();
   lcd_command(0x81);
   lcd_string("digital clock");

   while(1)

   { 
       
      for(hr=0;hr<=24;hr++)
        for(min=0;min<60;min++)
                 for(sec=0;sec<60;sec++)
                     {
                        lcd_command(0xc4);
						lcd_number(hr);
						lcd_command(0xc5);
						lcd_data(":");
						lcd_command(0xc7);
						lcd_number(min);
						lcd_command(0xc8);
						lcd_data(":");
						lcd_command(0xca);
						lcd_number(sec);
						_delay_ms(10);
						}

						}
						return 0;








         

	   
	   }
