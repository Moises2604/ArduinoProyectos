int In1=7;
int In2=8;
int Ena=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);  
  pinMode(Ena,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  delay(1000);
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);  
  delay(3000);
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  delay(1000);
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW); 
  delay(3000);
  //analogWrite(Ena, 200);
  //delay(0);

/*
  for (int vel = 0; vel < 200; vel++) {
       analogWrite(Ena,500);
   
    
  }
  delay(2000);
*/
}
