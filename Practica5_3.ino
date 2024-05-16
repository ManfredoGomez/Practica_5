/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica 4, Tercera parte
   Dev: Manfredo Guillermo Vásquez Gómez 
   carnet: 2023168
   Fecha: 16 de mayo
*/

const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;
const int Pin = 7;
const int Segmentos[] = {A, B, C, D, E, F, G};

// Definiciones de pines para el buzzer y relé
const int BuzzerPin = 9; // Pin para el buzzer
const int RelayPin = 10;  // Pin para el relé

// Definición del arreglo para los números del 0 al 9
const int num[10][7] = {
{1,1,1,1,1,1,0},
{0,1,1,0,0,0,0},
{1,1,0,1,1,0,1},
{1,1,1,1,0,0,1},
{0,1,1,0,0,1,1},
{1,0,1,1,0,1,1},
{0,0,1,1,1,1,1},
{1,1,1,0,0,0,0},
{1,1,1,1,1,1,1},
{1,1,1,0,0,1,1},


};

void setup() {
  pinMode(BuzzerPin, OUTPUT);
  pinMode(RelayPin, OUTPUT);
}

void loop() {
  for (int i = 9; i >= 0; i--) {
    displayNumber(i); 
    delay(1000);      
  }

  tone(BuzzerPin, 250); 
  delay(500);           
  noTone(BuzzerPin);    

  
  digitalWrite(RelayPin, LOW); 
  delay(2000);                   
  digitalWrite(RelayPin, HIGH);  
  delay(2000);                   
}

void displayNumber(int number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(Segmentos[i], num[number][i]);
  }
}
