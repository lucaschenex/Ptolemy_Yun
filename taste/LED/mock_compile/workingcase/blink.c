#include <avr/io.h>

void Delay(int delay);       // function declaration

int main (void) {
  DDRB = 0xFF;                // set up pin direction
  while(1)   {                 // start the loop
    PORTB ^= 0xFF ;          // toggle the pins
    Delay(1000);             // delay a bit
  }
}

void Delay(int delay) {
  int x, y;
  for (x = delay; x != 0; x--)    {
    for (y = 1000; y != 0; y--)        {
      asm volatile ("nop"::); //do nothing for a bit
    }
  }
}
