int ama=2;
int negro=3;
int naran=4;
int azul=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(ama, OUTPUT);
  pinMode(negro, OUTPUT);
  pinMode(naran, OUTPUT);
  pinMode(azul, OUTPUT);
  digitalWrite(ama, LOW);
  digitalWrite(negro, LOW);
  digitalWrite(naran, LOW);
  digitalWrite(azul, LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  //Paso 1
  digitalWrite(ama, HIGH);
  digitalWrite(negro, HIGH);
  digitalWrite(azul, LOW);
  digitalWrite(naran, LOW);
  delay(50);
  //PASO 2
  digitalWrite(ama, HIGH);
  digitalWrite(negro, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(naran, HIGH);
  delay(50);
  //PASO 3
  digitalWrite(ama, LOW);
  digitalWrite(negro, LOW);
  digitalWrite(azul, HIGH);
  digitalWrite(naran, HIGH);
  delay(50);
  //PASO 4
  digitalWrite(ama, LOW);
  digitalWrite(negro, HIGH);
  digitalWrite(azul, HIGH);
  digitalWrite(naran, LOW);
  delay(50);
    //Paso 1
  digitalWrite(ama, HIGH);
  digitalWrite(negro, HIGH);
  digitalWrite(azul, LOW);
  digitalWrite(naran, LOW);
  delay(50);
  //PASO 2
  digitalWrite(ama, HIGH);
  digitalWrite(negro, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(naran, HIGH);
  delay(50);
  delay(1000);
  //PASO 3
  digitalWrite(ama, LOW);
  digitalWrite(negro, LOW);
  digitalWrite(azul, HIGH);
  digitalWrite(naran, HIGH);
  delay(50);
  //PASO 4
  digitalWrite(ama, LOW);
  digitalWrite(negro, HIGH);
  digitalWrite(azul, HIGH);
  digitalWrite(naran, LOW);
  delay(50);
   //Paso 1
  digitalWrite(ama, HIGH);
  digitalWrite(negro, HIGH);
  digitalWrite(azul, LOW);
  digitalWrite(naran, LOW);
  delay(50);
  //PASO 2
  digitalWrite(ama, HIGH);
  digitalWrite(negro, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(naran, HIGH);
  delay(50);
  //PASO 3
  digitalWrite(ama, LOW);
  digitalWrite(negro, LOW);
  digitalWrite(azul, HIGH);
  digitalWrite(naran, HIGH);
  delay(50);
  //PASO 4
  digitalWrite(ama, LOW);
  digitalWrite(negro, HIGH);
  digitalWrite(azul, HIGH);
  digitalWrite(naran, LOW);
  delay(50);
  
  delay(1000);
}
