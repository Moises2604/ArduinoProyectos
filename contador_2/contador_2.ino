int Pulsador=7;
int ContadorDePulsaciones=0;
int EstadoDelPulsador=0;
int AnteriorEstadoDelPulsador=0;
void setup()
{

        pinMode(Pulsador,INPUT);
        Serial.begin(9600);

}

void loop(){

EstadoDelPulsador=digitalRead(Pulsador);

if(EstadoDelPulsador != AnteriorEstadoDelPulsador){

      if(EstadoDelPulsador==1){

      ContadorDePulsaciones++;
      delay(50);
      Serial.println(ContadorDePulsaciones);
      }

}
AnteriorEstadoDelPulsador=EstadoDelPulsador;
}

 
