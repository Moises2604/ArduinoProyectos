/*Secuencias de luces uno*/
const int l2=2;
const int l3=3;
const int l4=4;
const int l5=5;


void setup() {
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(l5,OUTPUT);
}

void loop() {
  digitalWrite(l2,HIGH);
  digitalWrite(l3,LOW);
  digitalWrite(l4,HIGH);
  digitalWrite(l5,LOW);
  delay(1000);
  digitalWrite(l2,LOW);
  digitalWrite(l3,HIGH);
  digitalWrite(l4,LOW);
  digitalWrite(l5,HIGH);
  delay(1000);
}
