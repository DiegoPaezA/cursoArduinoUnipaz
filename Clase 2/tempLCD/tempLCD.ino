
// include the library code:
#include <LiquidCrystal.h>
#include <math.h>

const int Rc = 10000; //valor de la resistencia
const int Vcc = 5;
const int SensorPIN = A4;

//Datos Modelo matematico Termistor MF52-103
float A = 1.11492089e-3;
float B = 2.372075385e-4;
float C = 6.954079529e-8;

float K = 2.5; //factor de disipacion en mW/C

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("   Temperatura   ");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  float raw = analogRead(SensorPIN);
  float temp = leerTemperatura(raw);
  lcd.print(temp);
  lcd.setCursor(7, 1);
  lcd.print("*C");
}

float leerTemperatura (float raw) {
  float V =  raw / 1024 * Vcc;
  float R = (Rc * V ) / (Vcc - V);
  float logR  = log(R);
  float R_th = 1.0 / (A + B * logR + C * logR * logR * logR );
  float kelvin = R_th - V * V / (K * R) * 1000;
  float celsius = kelvin - 273.15;
  return celsius;
}


