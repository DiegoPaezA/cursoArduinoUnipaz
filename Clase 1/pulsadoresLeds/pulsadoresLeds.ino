// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;

int pulsador1 = 2;
int pulsador2 = 3;
int interruptor = 4;

int estado1, estado2, estado3;
int tiempo = 500;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  pinMode(pulsador1, INPUT);
  pinMode(pulsador2, INPUT);
  pinMode(interruptor, INPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  estado1 = digitalRead(pulsador1);   // lee valor en pulsador1 de entrada
  estado2 = digitalRead(pulsador2);   // lee valor en pulsador2 de entrada
  estado3 = digitalRead(interruptor);  // lee valor en interruptor de entrada

  if (estado3 == HIGH) {
    tiempo = 1000;
    digitalWrite(led1, HIGH);   // Encender el Led1 (HIGH es el nivel de voltaje)
    digitalWrite(led2, HIGH);    // Apagar el Led2 haciendo que el voltaje sea LOW
    digitalWrite(led3, HIGH);    // Apagar el Led2 haciendo que el voltaje sea LOW
    digitalWrite(led4, HIGH);    // Apagar el Led2 haciendo que el voltaje sea LOW
    delay(tiempo);                // Esperar un Segundo
    digitalWrite(led1, LOW);    // Apagar el Led1 haciendo que el voltaje sea LOW
    digitalWrite(led2, LOW);   // Encender el Led2 (HIGH es el nivel de voltaje)
    digitalWrite(led3, LOW);    // Apagar el Led2 haciendo que el voltaje sea LOW
    digitalWrite(led4, LOW);    // Apagar el Led2 haciendo que el voltaje sea LOW
    delay(tiempo);

  }
  else if (estado3 == LOW) {

    if (estado1 == HIGH) {
      tiempo = 1000;
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

    } else if (estado1 == LOW) {
      tiempo = 500;
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
   
  }

}
