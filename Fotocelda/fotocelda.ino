const int sensor_luz = A1;  //Pin análogo en donde va conectada la fotocelda
const int led_rojo = 4;  //Pin PWM donde va conectado el LED
const int led_amarillo = 3;  //Pin PWM donde va conectado el LED
const int led_verde = 2;  //Pin PWM donde va conectado el LED
const int threshold = 100;

void setup() {  
  Serial.begin(9600);
  pinMode(sensor_luz,INPUT); 
  pinMode(led_rojo,OUTPUT); 
  pinMode(led_amarillo,OUTPUT); 
  pinMode(led_verde,OUTPUT); 
}

void loop() {
    int input = analogRead(sensor_luz);
    Serial.println(input);
    if(input < 200){
      digitalWrite(led_rojo,LOW);
      digitalWrite(led_amarillo,LOW);
      digitalWrite(led_verde,HIGH);
    }if(input >= 200 && input <=350){
      digitalWrite(led_rojo,LOW);
      digitalWrite(led_amarillo,HIGH);
      digitalWrite(led_verde,LOW);
    }
    if(input > 350){
      digitalWrite(led_rojo,HIGH);
      digitalWrite(led_amarillo,LOW);
      digitalWrite(led_verde,LOW);
    }
    
}
