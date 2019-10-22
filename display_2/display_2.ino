void setup()
{
DDRD=255; //Se declara todo el puerto como salida
}
void loop()
{
  //Al puerto "D" le asignamos los valores obtenidos haciendo una pausa de 1segundo entre cada numero
PORTD=0x7E;         //0
delay(1000);       

PORTD=0x30;         //1
delay(1000);

PORTD=0x6D;         //2
delay(1000);

PORTD=0x79;         //3
delay(1000);

PORTD=0x33;         //4
delay(1000);

PORTD=0x5B;         //5
delay(1000);

PORTD=0x5F;         //6
delay(1000);

PORTD=0x70;         //7
delay(1000);

PORTD=0x7F;         //8
delay(1000);

PORTD=0x7B;         //9
delay(1000);
}
