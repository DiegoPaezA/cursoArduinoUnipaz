/*
  Blink secuencia de Leds
  Controlar el encendido y apagado de una secuencia de 4 leds.

  Simulación:

  
*/


int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;

int tiempo = 500;
// La rutina de configuración se ejecuta cuando se presiona el boton de reset
void setup() {
  // Inicializar los pines Digitales como Salidas
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

}

// rutina loop se ejecuta de forma continua e infinita.
void loop() {
  digitalWrite(led1, HIGH);   // Encender el Led1 (HIGH es el nivel de voltaje)
  digitalWrite(led2, LOW);    // Apagar el Led2 haciendo que el voltaje sea LOW
  digitalWrite(led3, LOW);    // Apagar el Led2 haciendo que el voltaje sea LOW
  digitalWrite(led4, LOW);    // Apagar el Led2 haciendo que el voltaje sea LOW
  delay(tiempo);                // Esperar un Segundo
  digitalWrite(led1, LOW);    // Apagar el Led1 haciendo que el voltaje sea LOW
  digitalWrite(led2, HIGH);   // Encender el Led2 (HIGH es el nivel de voltaje)
  digitalWrite(led3, LOW);    // Apagar el Led2 haciendo que el voltaje sea LOW
  digitalWrite(led4, LOW);    // Apagar el Led2 haciendo que el voltaje sea LOW
  delay(tiempo);                // Esperar un Segundo
  digitalWrite(led1, LOW);    // Apagar el Led1 haciendo que el voltaje sea LOW
  digitalWrite(led2, LOW);   // Encender el Led2 (HIGH es el nivel de voltaje)
  digitalWrite(led3, HIGH);    // Apagar el Led2 haciendo que el voltaje sea LOW
  digitalWrite(led4, LOW);    // Apagar el Led2 haciendo que el voltaje sea LOW
  delay(tiempo);   
  digitalWrite(led1, LOW);    // Apagar el Led1 haciendo que el voltaje sea LOW
  digitalWrite(led2, LOW);   // Encender el Led2 (HIGH es el nivel de voltaje)
  digitalWrite(led3, LOW);    // Apagar el Led2 haciendo que el voltaje sea LOW
  digitalWrite(led4, HIGH);    // Apagar el Led2 haciendo que el voltaje sea LOW
  delay(tiempo);   
}
