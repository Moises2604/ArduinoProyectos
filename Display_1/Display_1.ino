/*
 * TECNOOGICO DE COLIMA
MOISES PRECIADO
Contador digital
*/
int a =2;
int b =3;
int c =4;
int d =5;
int e =6;
int f =7;
int g =8;
int t =500;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //CERO
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, LOW);
  delay(1000); 

  //UNO
  digitalWrite(a, LOW);   
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, LOW);
  delay(1000); 
   
  //DOS
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH); 
  digitalWrite(c, LOW); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, LOW); 
  digitalWrite(g, HIGH);
  delay(1000); 
   
  //TRES
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, HIGH); 
  delay(1000); 
  
    //CUATRO
  digitalWrite(a, LOW);   
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH); 
  delay(1000); 
  
  //CINCO
  digitalWrite(a, HIGH);   
  digitalWrite(b, LOW); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH); 
  delay(1000); 
  
  //SEIS
  digitalWrite(a, HIGH);   
  digitalWrite(b, LOW); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH); 
  delay(1000); 
  
  //SIETE
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, LOW); 
  delay(1000); 
  
  //OCHO
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH); 
  delay(1000); 
  
  //NUEVE
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, HIGH); 
  delay(1000);  

}
