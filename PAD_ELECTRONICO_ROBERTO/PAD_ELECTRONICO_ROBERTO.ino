/*
------------------------------------------------------------------------------------------
   ________  ___       __   _____ ______                                                 
  |\   __  \|\  \     |\  \|\   _ \  _   \                                               
  \ \  \|\  \ \  \    \ \  \ \  \\\__\ \  \                                              
   \ \   ____\ \  \  __\ \  \ \  \\|__| \  \                                             
    \ \  \___|\ \  \|\__\_\  \ \  \    \ \  \                                            
     \ \__\    \ \____________\ \__\    \ \__\                                           
      \|__|     \|____________|\|__|     \|__|                                           
                                                                                         
                                                                                         
                                                                                         
   ________  ________  ___  ___  _____ ______           ________  ________  ________     
  |\   ___ \|\   __  \|\  \|\  \|\   _ \  _   \        |\   __  \|\   __  \|\   ___ \    
  \ \  \_|\ \ \  \|\  \ \  \\\  \ \  \\\__\ \  \       \ \  \|\  \ \  \|\  \ \  \_|\ \   
   \ \  \ \\ \ \   _  _\ \  \\\  \ \  \\|__| \  \       \ \   ____\ \   __  \ \  \ \\ \  
    \ \  \_\\ \ \  \\  \\ \  \\\  \ \  \    \ \  \       \ \  \___|\ \  \ \  \ \  \_\\ \ 
     \ \_______\ \__\\ _\\ \_______\ \__\    \ \__\       \ \__\    \ \__\ \__\ \_______\
      \|_______|\|__|\|__|\|_______|\|__|     \|__|        \|__|     \|__|\|__|\|_______|

------------------------------------------------------------------------------------------
Roberto González Monteverde TFG 2022-2023
                                                                                     
 */


//añadir todos los samples
#include "LA.h"
#include "sax62500.h"
#include "Woodbox16.h"
#include "Woodbox161.h"
#include "conga.h"
#include "whu.h"


//variables para el correcto funcionamiento
int i = 0;
int cont = 0;
bool accionado = false;
bool accionado2 = false;
int margen = 100;
float valor_min = 1023;
int valormaximo = 0;
float porcentaje = 0;
int nota1 = 41;
int nota2 = 43;
int velocidad = 0;
int valor = 0;

int numvalores[]={LA_NUM_CELLS, SAX62500_NUM_CELLS, WOODBOX_NUM_CELLS, WOODBOX1_NUM_CELLS}; //cantidad de valores por sample
int outPin[] = {A5,A4,A3}; 
int outPin2[] = {A2,2,3}; 
const int arrLen = sizeof(numvalores) / sizeof(numvalores[0]); //tamaño del array de valores

int s=2, o=1, k=0;

//valores para el correcto setup de timer1
const int PWM_FREQ = 0x00FF; // frecuencia PWM
const int PWM_MODE = 1; // Fast (1) o Phase Correct (0)
const int PWM_QTY = 2; // numero de PWMs, 1 o 2

void setup() {
  //Setup leds
  for ( i = 0; i < 3; i++){
    pinMode(outPin[i], OUTPUT);
    pinMode(outPin2[i], OUTPUT);
    }
  //setup botones  
  pinMode (5,INPUT_PULLUP);
  pinMode (4,INPUT_PULLUP);
  digitalWrite(A2, HIGH);
  digitalWrite(A4, HIGH);
  //Iniciado de timer1
  TCCR1A = (((PWM_QTY-1) << 5) | 0x80 | (PWM_MODE)<<1); //activacion control ambos pines
  TCCR1B = ((PWM_MODE << 3) | 0x10); //no inicia el timer, modo fast
  TIMSK1 = 0x20; //interrupción en captura
  ICR1H = (PWM_FREQ >> 8); //no se usa la parte alta
  ICR1L = (PWM_FREQ & 0xff); //solo se utilizan 8 bits
  DDRB = 0b00000110; // activación pines 9 y 10

  Serial.begin(31250);
}

void loop() {

   if (digitalRead(5)==LOW)//acción botón uno
    {    
         s++;
         if (s>=arrLen + 1){s=1;}
         boton_cambio(5, s);
         delay(200);
    }
    if (digitalRead(4)==LOW)//acción botón 2
    {    
       
         o++;
         if (o>=arrLen + 1){o=1;}
         boton_cambio(4, o);
         delay(200);
    }
  
  if (analogRead(A0)> margen && accionado == false){
    valormaximo = encuentraMax(margen, A0);
    porcentaje = percentatge(valormaximo, &valor_min);
    velocidad = map(valormaximo, valor_min, 1023, 0, 127);
    notaMidi(0x90,nota1, velocidad);
    delay(5);
    notaMidi(0x90,nota1, 0x00);
    delay(5);
    accionado = true;
    TCCR1B |=  0x01; //activación timer
    }
   
   if (analogRead(A1)> margen && accionado2 == false){
    valormaximo = encuentraMax(margen, A1);
    porcentaje = percentatge(valormaximo, &valor_min);
    velocidad = map(valormaximo, 0, 1023, 0, 127);
    notaMidi(0x90,nota2, velocidad);
    delay(5);
    notaMidi(0x90,nota2, 0x00);
    delay(5);
    
    accionado2 = true;
    TCCR1B |=  0x01;
    }
 
    
}

void boton_cambio(int numero, int l){
  for ( int j = 0; j < 3; j++)
     {if (numero == 5){ //pin 5
         if ( ( (l >> j) & 1 )  == 1 ){
             digitalWrite(outPin[j], HIGH);}
         else digitalWrite(outPin[j], LOW);}
      else {//pin 4
        if ( ( (l >> j) & 1 )  == 1 ){
             digitalWrite(outPin2[j], HIGH);}
         else digitalWrite(outPin2[j], LOW);}
        }
     }

float percentatge(int valormax, float* valormin){//encontrar el porcentaje de multiplicación
  float percentage;
  int valorminimo = *valormin;
  if (valormax<=*valormin){ //regla de margen
    *valormin = valormax-100;
    valorminimo = *valormin;
    }
  //regla de 3
  percentage = ((float)valormax-valorminimo)/((float)1023-valorminimo); 
  if (percentage<0){percentage=0;}
  return percentage;
  }
  
int encuentraMax(int margen, int puerto){//encontrar el pico max del golpe
  int valormax = 0;
  int valor = 0;
  do{ //se ha de realizar la acción al menos una vez
     valor = analogRead(puerto);
     if (valormax<valor){
      valormax=valor;
      }
  }while(valor>margen);
      
  return valormax;
  }



void notaMidi(int cmd, int tono, int velocidad){
  Serial.write(cmd);
  Serial.write(tono);
  Serial.write(velocidad);
  }
  
ISR(TIMER1_CAPT_vect) {
  
  unsigned int temp4;
  if((i < numvalores[o-1] && accionado == true) || (i < numvalores[s-1] && accionado2 == true)){
    if ( (o == 1 && accionado == true) || (s == 1 && accionado2 == true)){
    temp4 = (unsigned int)((float)pgm_read_word_near(LA + i)*porcentaje);}
    else if ( (o == 2 && accionado == true) || (s == 2 && accionado2 == true)){
    temp4 = (unsigned int)((float)pgm_read_word_near(SAX62500 + i)*porcentaje);}
    else if ( (o == 3 && accionado == true) || (s == 3 && accionado2 == true)){
    temp4 = (unsigned int)((float)pgm_read_word_near(WOODBOX + i)*porcentaje);}
    else if ((o == 4 && accionado == true) || (s == 4 && accionado2 == true)){
    temp4 = (unsigned int)((float)pgm_read_word_near(WOODBOX1 + i)*porcentaje);}
    
  
  OCR1AH = 0;
  OCR1AL = (temp4 >> 8)& 0xFF;  //coge los 8 bytes high

  OCR1BH = 0; //coge los 8 bytes high
  OCR1BL = temp4 & 0xff; //coge los 8 bytes low

  i=(i+1);

  
 
  
  }
  
  else {accionado = false;
  accionado2 = false;
  i=0;
  temp4 = 0;
  TCCR1B &= 0xFE; //desactiva el reloj}

  

}}
