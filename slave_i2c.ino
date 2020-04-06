//Tanvesh Bhattad
#include<I2C_Anything.h>
#include<Wire.h>
const byte MY_address=8;
long x,y;

void setup() {
  // put your setup code here, to run once:
 
  Wire.begin(MY_address);
  Serial.begin(9600);
  Wire.onRequest(event);
  Wire.onReceive(event2);
}

void loop() {
  // put your main code here, to run repeatedly:
  x=10;
}

void event()
{
  I2C_writeAnything(x);
  Serial.print(x);
}
void event2()
{
  I2C_readAnything(y);
  Serial.print("    " );
  Serial.println(y);
}
