/*
	Recepcion de datos via Cx Serial.
	- Comunicación Serial
  
*/
int input;

void setup(){
  Serial.begin(9600); // Configurar el puerto de cx Serial con Baud Rate 9600
}
 
void loop(){
  if (Serial.available()>0){ //verificar si hay datos disponibles
 
    input=Serial.read(); //leer dato enviado desde el pc
 
    Serial.println(input); // enviar dato leido al pc
 
  }
}