/*
	Transmision de datos via Cx Serial.
	- Comunicación Serial
  
*/

void setup(){
  Serial.begin(9600); // Configurar el puerto de cx Serial con Baud Rate 9600
}

void loop(){
  Serial.println('1'); // Imprimir el String 1 seguido de un salto de linea al puerto serial
  delay(1000);		   // Esperar 1 seg para imprimir nuevamente el String 1
}
