
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorcny=analogRead(A0); //almacena valor
  if(sensorcny > 30 && sensorcny < 100){
    Serial.print("Negro ");  
  }else if(sensorcny > 100){
    Serial.print("Blanco ");
  }
  Serial.println(sensorcny); //muestra el valor
  delay(100);
}
