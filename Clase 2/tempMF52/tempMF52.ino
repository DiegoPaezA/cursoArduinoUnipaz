/*
  Lectura de temperatura Termistor NTC MF52-103
  NTC, tienen una resistencia inferior al aumentar la temperatura.

  Referencia: https://www.luisllamas.es/medir-temperatura-con-arduino-y-termistor-mf52/
*/

#include <math.h>
 
const int Rc = 10000; //valor de la resistencia
const int Vcc = 5;
const int SensorPIN = A4;
 
//Datos Modelo matematico Termistor MF52-103 
float A = 1.11492089e-3;
float B = 2.372075385e-4;
float C = 6.954079529e-8;
 
float K = 2.5; //factor de disipacion en mW/C
 
void setup()
{
  Serial.begin(9600);
}
 
void loop() 
{
  float raw = analogRead(SensorPIN);
  float temp = leerTemperatura(raw);
 
  //Serial.print("T = ");
  Serial.println(temp);
  //Serial.print("C\n");
  delay(1000);
}

float leerTemperatura (float raw){
  float V =  raw / 1024 * Vcc;
  float R = (Rc * V ) / (Vcc - V);
  float logR  = log(R);
  float R_th = 1.0 / (A + B * logR + C * logR * logR * logR );
  float kelvin = R_th - V * V / (K * R) * 1000;
  float celsius = kelvin - 273.15;
  return celsius;
}
