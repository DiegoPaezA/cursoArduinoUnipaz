/*
   Activar el LED con el valor leído en el pulsador e interruptor

*/
int led1 = 2;
int led2 = 3;
int led3 = 7;
int pulsador1 = 4;
int pulsador2 = 5;
int interruptor = 6;
int estado1, estado2, estado3;

// La rutina de configuración se ejecuta cuando se presiona el boton de reset
void setup() {
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(pulsador1, INPUT);
  pinMode(pulsador2, INPUT);
  pinMode(interruptor, INPUT);
}
// rutina loop se ejecuta de forma continua e infinita.
void loop() {
  estado1 = digitalRead(pulsador1);   // lee valor en pulsador1 de entrada
  estado2 = digitalRead(pulsador2);   // lee valor en pulsador2 de entrada
  estado3 = digitalRead(interruptor); // lee valor en interruptor de entrada
  digitalWrite(led1, estado1);    // active el LED con el valor leído en el pulsador
  digitalWrite(led2, estado2);    // active el LED con el valor leído en el pulsador
  digitalWrite(led3, estado3);    // active el LED con el valor leído en el interruptor
}
