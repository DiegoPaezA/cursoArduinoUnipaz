/*
  Blink Leds
  Encender Un Led por un segundo, despues apagarlo por un segundo, repetidamente.
*/


int led1 = 2;
int led2 = 3;
int a = 1, b=2;


// La rutina de configuración se ejecuta cuando se presiona el boton de reset
void setup() {
  // Inicializar los pines Digitales como Salidas
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

// rutina loop se ejecuta de forma continua e infinita.
void loop() {
  digitalWrite(led1, HIGH);   // Encender el Led1 (HIGH es el nivel de voltaje)
  digitalWrite(led2, LOW);    // Apagar el Led2 haciendo que el voltaje sea LOW
  delay(1000);                // Esperar un Segundo
  digitalWrite(led1, LOW);    // Apagar el Led1 haciendo que el voltaje sea LOW
  digitalWrite(led2, HIGH);   // Encender el Led2 (HIGH es el nivel de voltaje)
  delay(1000);                // Esperar un Segundo
}
