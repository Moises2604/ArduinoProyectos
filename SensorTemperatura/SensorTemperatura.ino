float temp = 0;
int pinTemp = A2;
int Low =2;
int Medium =3;
int High =4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Low,OUTPUT);
  pinMode(Medium,OUTPUT);
  pinMode(High,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(pinTemp);
  temp = temp * 0.48848125;
  Serial.print("Temperatura = ");
  Serial.print(temp);
  Serial.println(" °C");

  if (temp<24){
    Serial.println("Temperatura baja");
    digitalWrite(Low, HIGH);   
    digitalWrite(Medium, LOW); 
    digitalWrite(High, LOW); 
    
  }else if (temp>=24 && temp<30){
    Serial.println("Temperatura Normal");
    digitalWrite(Low, LOW);   
    digitalWrite(Medium, HIGH); 
    digitalWrite(High, LOW);
  }else{
    Serial.println("Temperatura Alta");
    digitalWrite(Low, LOW);   
    digitalWrite(Medium, LOW); 
    digitalWrite(High, HIGH);
  };
  delay(1000);

}
