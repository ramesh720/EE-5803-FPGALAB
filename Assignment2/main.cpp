#include <Arduino.h>

# define X 2
# define Y 3
int x,y,c,d,out;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(X,INPUT);
  pinMode(Y,INPUT);
 }

int nand(int a, int b){
  return !(a && b);}

 void loop() {

x=digitalRead(X);
y=digitalRead(Y);
      			
c = nand(x,x);
d = nand(x,y);       					
out = nand(c, d);
if(out==1)
  digitalWrite(LED_BUILTIN,HIGH);
else
  digitalWrite(LED_BUILTIN,LOW);
}
