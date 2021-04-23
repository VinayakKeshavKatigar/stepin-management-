
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{

DDRB|=(1<<PB0); // set B0=1 for lead

DDRD&=~(1<<PD0); // clear bit

PORTD|=(1<<PD0);

    while(1)
    {
        if(!(PIND&(1<<PD0))) //switch press
        {
        PORTB|=(1<<PB0);
        _delay_ms(20);
        }

        else
        {
        PORTB&=~(1<<PB0);
        _delay_ms(20);

        }
       /* PORTB|=(1<<PB0);
        _delay_ms(10000);
        PORTB&=~(1<<PB0);
        _delay_ms(2000);*/
    }


    return 0;
}
