#ifndef LM35_H
#define LM35_H



class Lm35{
  double counter_temperatur=0;
  double voltage=0;
  int _lm35_pin;
 

  public:Lm35(int pin_lm35){
    
    _lm35_pin=pin_lm35;
    pinMode(_lm35_pin,INPUT);
    
    }


    double counterTemperatur(){
      
      counter_temperatur=analogRead(_lm35_pin);
      return counter_temperatur;
      
      }

    double counterVoltage(){
      
      voltage=counter_temperatur*0.048;
      return voltage;
      
      }

  
  
  };

  #endif
