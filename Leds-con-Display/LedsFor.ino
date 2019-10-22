/*Secuencias de luces uno*/
int led;
int i;
const int pins[7] = { 7, 8, 9, 10, 11, 12, 13 };
const byte numbersDisplayAnode[10] = {0b1000000, //0
0b1111010, //1
0b0100100, //2
0b0101000, //3
0b0011010, //4
0b0001001, //5
0b0000001, //6
0b1111000, //7
0b0000000, //8
0b0011000}; //9

void setup() {
  Serial.begin(9600);
  for(led=2;led<6;led++){         //Reconoce los pines desde 0 hasta el 3
    pinMode(led,OUTPUT);
    pinMode(pins[i], OUTPUT); 
}
 lightSegments(0);
}
void loop() {
    for(led=2;led<6;led++){         //Reconoce los pines desde 0 hasta el 3
    digitalWrite(led,LOW);
  }
  for(i=1;i<6;i++){
    Serial.print(i);
    for(led=2;led<6;led=led+1){             //Reconoce los pimes desde 0 hasta el 
      Serial.print("PIN = ");
      Serial.println(led);
      lightSegments(led);
      digitalWrite(led,1);
      delay(500);
      digitalWrite(led,0);
      delay(500);
    }
  }
for(i=1;i<6;i++){
  Serial.print(i);
  for(led=5;led>1;led=led-1){
    Serial.print("PIN= ");
    Serial.println(led);
    digitalWrite(led,1);
    delay(500);
    digitalWrite(led,0);
    delay(500);
  }
}
}
void lightSegments(int number) {
byte numberBit = numbersDisplayAnode[number];
for (int i = 0; i < 7; i++) {
int bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit);
}
}
