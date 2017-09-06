/*
  Blink secuencia de Leds Utilizando un Bucle For
  Controlar el encendido y apagado de una secuencia de 4 leds.

  Simulación:

  
*/

int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;
int myPins[] = {led1, led2, led3, led4};

int pulsador1 = 2;
int pulsador2 = 3;
int interruptor = 4;

int estado1, estado2, estado3;
int tiempo = 500;

// the setup routine runs once when you press reset:
void setup() {
  // Inicializar los pines Digitales como Salidas
  for(int i= 0; i<4; i++){
    pinMode(myPins[i], OUTPUT);
  }


  pinMode(pulsador1, INPUT);
  pinMode(pulsador2, INPUT);
  pinMode(interruptor, INPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  estado1 = digitalRead(pulsador1);   // lee valor en pulsador1 de entrada
  
  while(estado1 != 0){

    for(int i= 0; i<4; i++){
      digitalWrite(myPins[i], HIGH);
      delay(tiempo);
      digitalWrite(myPins[i], LOW);
    }
    estado1 = digitalRead(pulsador1);   // lee valor en pulsador1 de entrada

  }

  

}