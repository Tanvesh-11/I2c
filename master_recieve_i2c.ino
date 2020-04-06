//Tanvesh Bhattad
#include<I2C_Anything.h>
#include<Wire.h>
const byte slave_address_one = 8;
long pa,f;
long dataLen;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  pa=30;
  dataLen=sizeof(f);
}

void loop() {
  // put your main code here, to run repeatedly:

Wire.requestFrom(slave_address_one,dataLen);
while(Wire.available()==dataLen)
{
I2C_readAnything(f);
Serial.print(f);
}
//Serial.println(f);
delay(100);

Wire.beginTransmission(slave_address_one);
I2C_writeAnything(pa);
Wire.endTransmission(slave_address_one);
Serial.print("    " );
Serial.println(pa);
}
