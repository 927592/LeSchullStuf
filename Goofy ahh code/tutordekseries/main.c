#define F_CPU 8000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	DDRC=0b11111111;
    
    while (1) 
    {
		
		PORTC=0b0110000;
		_delay_ms(100);
		PORTC=0b1011011;
		_delay_ms(100);
		
    }
}


