#include<Arduino.h>
int a,b,c,d;
int w, x, y,z;
void setup() {
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    
    pinMode(21,INPUT);
    pinMode(22,INPUT);
    pinMode(,INPUT);
    pinMode(,INPUT);
    
}
void loop() {
  w=digitalRead(9);
  x=digitalRead(10);
  y=digitalRead(11);
  z=digitalRead(12);
digitalWrite(2,w);
digitalWrite(3,x);
digitalWrite(4,y);
digitalWrite(5,z);
}

