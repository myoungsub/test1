 
 
 
 #define F_CPU 16000000UL
 #include <avr/io.h>
 #include <util/delay.h>


 int main(void)
 {
	 DDRD = 0xFF;
	 PORTD = 0xFF;

	 /* Replace with your application code */
	 while (1)
	 {
		 PORTD = 0x00;
		 _delay_ms(500);
		 PORTD = 0XFF;
		 _delay_ms(500);
	 }
 }