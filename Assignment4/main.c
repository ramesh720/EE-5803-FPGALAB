#include <avr/io.h>
#include <util/delay.h>

 
int main (void)
{

 DDRD   |= 0b00000000;
 DDRB   |= ((1 << DDB5));
 
 int i,x,y,output;
  while (1) {

     i = PIND;
 	   
     x= i & 0b00000100;
     y= i & 0b00001000;

     output= (x&&y) || x ;

if(output==1)
PORTB = ((1 <<  PB5));
else
PORTB = ((0 <<  PB5));

  }

  /* . */
  return 0;

}
