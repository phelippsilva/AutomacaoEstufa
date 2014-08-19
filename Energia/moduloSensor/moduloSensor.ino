//
/// @file	DHT22_430_main.pde 
/// @brief	Main sketch
/// @details	DHT22 on LaunchPad
/// @n @a	Developed with [embedXcode](http://embedXcode.weebly.com)
/// 
/// @author	Rei VILO
/// @author	http://embeddedcomputing.weebly.com
/// @date	Jul 02, 2012
/// @version	2.01
/// 
/// @copyright	© Rei VILO, 2012
/// @copyright	CC = BY NC SA
///


// Core library - MCU-based
#if defined(__MSP430G2452__) || defined(__MSP430G2553__) || defined(__MSP430G2231__) // LaunchPad specific
#include "Energia.h"
#else // error
#error Platform not supported
#endif

// Include application, user and local libraries
#include "DHT22_430.h"

///
/// @brief	Pin for DHT22 signal
/// @n 		Connect 
/// *		pin 1 (on the left) of the sensor to +3.3V
/// *		pin 2 of the sensor to DHTPIN 
/// *		pin 4 (on the right) of the sensor to GROUND
/// @n		Place a 10k resistor between pin 2 (data) to pin 1 (power) of the sensor
///
#define DHTPIN P1_4
#define UMIDADEPIN A0

DHT22 mySensor(DHTPIN);
boolean flag;

/**Função para converter os valores de tensão em umidade*/
float converte(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float lerUmidadeDoSolo(){
  int sensorValue = analogRead(UMIDADEPIN);            
  float tensao = converte(sensorValue, 0, 1023, 0, 3.3);  
  /*
  Serial.print("tensao: ");
   Serial.print(tensao);
   Serial.println(" V ");
   */
  //Serial.print("umidade do solo ");
  //Serial.print(umidade);
  //Serial.println(" % \n");
  return (converte(tensao, 0.000, 2.2, 0, 100));
}

void setup() 
{
  Serial.begin(9600);   
  mySensor.begin();
}

void loop() {

  Serial.print("Umidade do solo ");
  Serial.print(lerUmidadeDoSolo());  
  Serial.println(" % \n");

  delay(500);
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  flag = mySensor.get();
  int32_t h = mySensor.humidityX10();
  int32_t t = mySensor.temperatureX10();

  // check if returns are valid, if they are NaN (not a number) then something went wrong!
  if (!flag) {
    Serial.println("Failed to read from DHT");
  } 
  else {
    Serial.print("RH% \t");
    Serial.print(h/10);
    Serial.print(".");
    Serial.print(h%10);
    Serial.println(" %\t");

    Serial.print("oC \t");
    Serial.print(t/10);
    Serial.print(".");
    Serial.print(t%10);
    Serial.println(" *C");    
  }

}






