/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Marcha Imperial star wars
   Dev: Manfredo.Guillermo Vasquez Gomez
   Fecha: 14 de Mayo
   
*/

const int buZZ = 10;
float sol = 391.995;
float mib = 311.127;
float sib = 466.164;
float Re = 293.665;
float solb = 369.994;
float FA = 739.989;
float Fa = 349.228;
float Mi = 329.628;
float RE = 622.254;
float SOL = 415.305;
float DO = 277.183;
float Do = 261.626;
float SI = 493.883;
float LA = 440.000;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    tone(buZZ,sol, 500);
    delay(500+50);
    tone(buZZ, sol, 500);
    delay(500+50);     
    tone(buZZ, sol, 500); 
    delay(500+50);
    
    tone(buZZ, mib, 350);  
    delay(350+50);
    tone(buZZ, sib, 150);
    delay(150+50); 
    tone(buZZ, sol, 500);
    delay(500+50);
    
    tone(buZZ, mib, 350);
    delay(350+50);
    tone(buZZ, sib, 150);
    delay(150+50);
    tone(buZZ, sol, 1000);   
    delay(1000+50);
   
    tone(buZZ, Re, 500);
    delay(500+50);
    tone(buZZ, Re, 500);
    delay(500+50);
    tone(buZZ, Re, 500); 
    delay(500+50); 
      
    tone(buZZ, mib, 350);
    delay(350+50); 
    tone(buZZ, sib, 150);
    delay(150+50);
    tone(buZZ, solb, 500);
    delay(500+50);
    
    tone(buZZ, mib, 350);
    delay(350+50);
    tone(buZZ, sib, 150);
    delay(150+50);
    tone(buZZ, sol, 1000);
    delay(1000+50);
    
    
    tone(buZZ, sol, 500);
    delay(500+50);
    
    tone(buZZ, sol, 350);
    delay(350+50); 
    tone(buZZ, sol, 150);
    delay(150+50);
    tone(buZZ, sol, 500);
    delay(500+50);
    
      tone(buZZ, FA, 250); 
    delay(250+50);
    tone(buZZ, Fa, 250);
    delay(250+50);
    tone(buZZ, Mi, 125);
    delay(125+50);
    tone(buZZ, RE, 125);
    delay(125+50);    
    tone(buZZ, Mi, 250);
    delay(250+50);
    delay(250);
    
    tone(buZZ, SOL, 250);
    delay(250+50);    
    tone(buZZ, DO, 500); 
    delay(500+50); 
    
    tone(buZZ, Do, 250); 
    delay(250+50); 
    tone(buZZ, SI, 250);
    delay(250+50); 
    tone(buZZ, sib, 125);
    delay(125+50);  
    tone(buZZ, LA, 125); 
    delay(125+50); 
    tone(buZZ, sib, 250); 
    delay(250+50);  
    delay(250);
    
    tone(buZZ, mib, 125); 
    delay(125+50); 
    tone(buZZ, solb, 500); 
    delay(500+50); 
    tone(buZZ, mib, 375); 
    delay(375+50); 
    tone(buZZ, solb, 125);
    delay(125+50); 
    
    tone(buZZ, sib, 500); 
    delay(500+50);
    tone(buZZ, sol, 375);  
    delay(375+50);
    tone(buZZ, sib, 125); 
    delay(125+50);
    tone(buZZ, Re, 500); 
    delay(500+50);
 
    
    tone(buZZ, sol, 500);
    delay(500+50);
    
    tone(buZZ, sol, 350); 
    delay(350+50);
    tone(buZZ, sol, 150);
    delay(150+50);
    tone(buZZ, sol, 500);
    delay(500+50);
    
    tone(buZZ, FA, 250);
    delay(250+50); 
    tone(buZZ, Fa, 250);
    delay(250+50);
    tone(buZZ, Mi, 125);
    delay(125+50);
    tone(buZZ, RE, 125);  
    delay(125+50);  
    tone(buZZ, Mi, 250);
    delay(250+50);
    delay(250);
    
    tone(buZZ, SOL, 250);  
    delay(250+50);  
    tone(buZZ, DO, 500);  
    delay(500+50);
    
    tone(buZZ, Do, 250);  
    delay(250+50);
    tone(buZZ, SI, 250);
    delay(250+50); 
    tone(buZZ, sib, 125);  
    delay(125+50);
    tone(buZZ, LA, 125);  
    delay(125+50);
    tone(buZZ, sib, 250);
    delay(250+50);      
    delay(250);
    
    tone(buZZ, mib, 250); 
    delay(250+50); 
    tone(buZZ, solb, 500); 
    delay(500+50); 
    
    tone(buZZ, mib, 375);  
    delay(375+50);
    tone(buZZ, sol, 125); 
    delay(125+50);     
    tone(buZZ, sol, 500); 
    delay(500+50); 
              
    tone(buZZ, mib, 375);  
    delay(375+50);          
    tone(buZZ, sib, 125); 
    delay(125+50);  
    tone(buZZ, sol, 1000);
    delay(1000+50); 
  //

  noTone (buZZ);
  delay (1500);
  
}
