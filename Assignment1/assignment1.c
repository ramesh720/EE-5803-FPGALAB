
#include<stdio.h>

int main()
{
  
unsigned char  x=0x00,y=0x01;
  
unsigned char one = 0x01;
unsigned char z,z2;
  
z = x & ( x | y );
z2 = x | ( x & y );
printf("x=%x,y=%x\n",one&x,one&y);
printf("output for law1 = %x\n" ,one&z);
printf("output for law2 = %x\n" ,one&z2);

return 0;

}
