/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Display contador impar y convercion de unidades 
   Dev: Manfredo.Guillermo Vasquez Gomez
   Fecha: 14 de Mayo
   
*/

int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int TM = 500;

void setup()
{

  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  Serial.begin(9600);
  funcion_libras(2.3);
  funcion_microamperios(4.4);
}

void loop()
{
//1
  digitalWrite(B, HIGH);  // encender 1 en display
  digitalWrite(C, HIGH);
  delay(TM);
  digitalWrite(B, LOW);  // apagar 1 en display
  digitalWrite(C, LOW);
  delay(TM);
   //3
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(G, HIGH);
  delay(TM);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(G, LOW);
  delay(TM);
  //5
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  delay(TM);
  digitalWrite(A,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  delay(TM);
  //7
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  delay(TM);
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  delay(TM);
  //9
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  delay(TM);
  digitalWrite(A,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  delay(TM);
}
 float funcion_libras(float kilogramos){
  float libras;
  libras = kilogramos*2.2;
  Serial.print(kilogramos);
  Serial.print("kg ");
  Serial.print("son: ");
  Serial.print(libras);
  Serial.println("lb");
  delay(1000);
}
float funcion_microamperios(float amperios){
  float microamperios;
  microamperios = amperios*2.2;
  Serial.print(amperios);
  Serial.print("kg ");
  Serial.print("son: ");
  Serial.print(microamperios);
  Serial.println("lb");
  delay(2000);

}
