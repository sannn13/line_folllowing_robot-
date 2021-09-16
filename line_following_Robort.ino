const int LM1=3;
const int LM2=5;
const int RM1=6;
const int RM2=9;
const int LIR=A0;
const int RIR=A1;

void setup(){
  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);
  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(analogRead(LIR)<1020 && analogRead(RIR)<1020)
  {
    digitalWrite(LM1,HIGH);
    digitalWrite(RM1,HIGH);
    digitalWrite(LM2,HIGH);
    digitalWrite(RM2,HIGH);
  }
  else if(analogRead(LIR)<1020 && analogRead(RIR)>=1020)
  {
    digitalWrite(LM1,HIGH);
    digitalWrite(RM1,LOW);
    digitalWrite(LM2,HIGH);
    digitalWrite(RM2,LOW);
  }
   else if(analogRead(LIR)>=1020 && analogRead(RIR)<1020)
  {
    digitalWrite(LM1,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM2,HIGH);
  }
   else if(analogRead(LIR)>=1020 && analogRead(RIR)>=1020)
  {
    digitalWrite(LM1,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(LM2,LOW);
    digitalWrite(RM2,LOW);
  }
}
