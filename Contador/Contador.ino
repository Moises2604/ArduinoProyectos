const int CONT = 4;
int contador =0;
int carrera;
void setup(){  
 Serial.begin(9600);
 pinMode(CONT,INPUT); 
}
void loop() { 
carrera= digitalRead(CONT);



if (carrera == 1  ){

contador++;

}

Serial.println(contador);
delay (50);

}
