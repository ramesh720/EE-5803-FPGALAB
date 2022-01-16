

// Question. State any one absorption law in boolean algebra and verify using truth table

#include<stdio.h>

int main()
{
  
unsigned char  x=0x00,y=0x00,i;
  
unsigned char one = 0x01;
unsigned char z,z2;
  
//law 1 = x ( x + y)

for (i= 0x00; i<0x04; i++)
{ 

x = i>>1;
y = i>>0;

z = x & ( x | y );

//law 2 = x + xy

z2 = x | ( x & y );


printf("inputs x=%x,y=%x   ",one&x,one&y);
printf("x = %x  " ,one&z2);
printf("law1 = %x  " ,one&z);
printf("law2 = %x\n" ,one&z2);

}
return 0;

}
