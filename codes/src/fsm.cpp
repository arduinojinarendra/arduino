#include<Arduino.h> 
int x[3]={0,0,0} ; 
int y,r;
int p = 0 ,q= 0 ;
int D1,D2;
void setup(){
    pinMode(3,OUTPUT);
}
void loop() {
for(int i=0;i<3;i++){
  r=x[i];
  D1=(q||r);
  D2=(!p&&q&&r)||(p&&!q&&!r);
  y=(p&&!q&&!r);  
   if(y==1){
    digitalWrite(3, HIGH);
    }
  p=D1;
  q=D2;
}
}
