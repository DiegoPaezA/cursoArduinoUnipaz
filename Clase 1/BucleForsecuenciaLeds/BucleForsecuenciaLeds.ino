/*
  Blink secuencia de Leds Utilizando un Bucle For
  Controlar el encendido y apagado de una secuencia de 4 leds.

  Simulación:

  
*/


int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int myPins[] = {led1, led2, led3, led4};

int tiempo = 500;
// La rutina de configuración se ejecuta cuando se presiona el boton de reset
void setup() {
  // Inicializar los pines Digitales como Salidas
  for(int i= 0; i<4; i++){
    pinMode(i, OUTPUT);
  }

}

// rutina loop se ejecuta de forma continua e infinita.
void loop() {

  for(int i= 0; i<4; i++){
    digitalWrite(myPins[i], HIGH);
    delay(tiempo);
    digitalWrite(myPins[i], LOW);
  }
  
}