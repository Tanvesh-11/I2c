# I2c
This Repo include basic master and slave communication between two or MCUs (Arduino in our case).

We have showcased the basic transfer protocol between Master and Slave Arduino. The master and slave code both have receive and request protocols.

The MASTER code includes Transmission protocol (beginTransmission) to send data to slave and request protocol to receive data from slave. The SLAVE code includes Receive protocol to receive data from master and Onrequest protocol to send data to Master. We have used I2C_Anything.h library which can help U receive/send any data type including long, float, char, etc. The normal Wire.h library has no such function available and U can send data only up to int value 255.

An additional Broadcasting code is also included wherin the master can send same data to all its slave simultaneously.
