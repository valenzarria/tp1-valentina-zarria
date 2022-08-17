#include <Arduino.h>

#define bot1 ((PIND >> 4) & 0x01)
#define bot2 ((PIND >> 5) & 0x01)
#define bot3 ((PIND >> 6) & 0x01)
#define bot4 ((PIND >> 7) & 0x01) 

#define prender(PORT, PIN) (PORT |= 1 << PIN)
#define apagar(PORT, PIN) (PORT &= ~(1 << PIN))

int main(){
  DDRD &= 0x0F;
  DDRB |= 0x0F;

  while(1){
    if (bot1==0)
    {
      prender(PORTB,0);
    }

    if (bot2==0)
    {
      prender(PORTB,1);
    }

    if (bot3==0)
    {
      prender(PORTB,2);
    }

    if (bot4==0)
    {
      prender(PORTB,3);
    }
  }
}