int x ; 
int y ;
int p = 0 ,q= 0 ;
int D1,D2;
void setup(){
    pinMode(2,INPUT);
    pinMode(3,OUTPUT);
}
void loop() {
  x= digitalRead(2);
  D1=(q||x);
  D2=(!p&&q&&x)||(p&&!q&&!x);
  y=(p&&!q&&!x);  
   if(y==1){
    digitalWrite(3, HIGH);
  p=D1;
  q=D2;
}
