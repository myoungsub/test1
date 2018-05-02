 
 
 
 #define F_CPU 16000000UL
 #include <avr/io.h>
 #include <util/delay.h>


 int main(void)
 {
	 DDRD = 0xFF;
	 PORTD = 0xFF;

	 /* Replace with your application code */

	 int i;
	 /* Replace with your application code */
	 while (1)
	 {
		 for(i = 0; i > 7; i++)
		 {
			 PORTD = ~(1<< i);
			 _delay_ms(500);
			 
		 }
		 for(i = 0; i > 7; i++)
		 {
			 PORTD = ~(0x80 >> i);
			 _delay_ms(500);
		 }
	 }
 }