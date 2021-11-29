#include "Led.h"
#include "Lm35.h"


int LEDmerah = 7;
int LEDkuning = 2;
int input_pin=A0;

//for calling object
Led led(LEDmerah,LEDkuning);
Lm35 lm35(input_pin);


void setup() {
  
Serial.begin(9600);

}

void loop() {
  //counter is a temperature and call object
  double temperatur=lm35.counterTemperatur();
  //counter is a conter voltage and call object
  double voltage=lm35.counterVoltage();
  
  if(temperatur>=20){
        led.green();
  }
  else{
        led.yellow();
   }

   
 Serial.print("temperatur=");
 Serial.println(temperatur);
 Serial.print("volatase=");
 Serial.println(voltage);
 delay(1000);
}
