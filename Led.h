#ifndef LED_H
#define LED_H

class Led{
   int _greenLED;
   int _yellowLED;


   public: Led(int greenLED, int yellowLED){
    //for fill a variable
    
    _greenLED=greenLED;
    _yellowLED=yellowLED;
    
   //for setup
    pinMode(_greenLED, OUTPUT);
    pinMode(_yellowLED, OUTPUT); 
   }

    void green()  {
      
      digitalWrite( _greenLED,HIGH);
      digitalWrite(_yellowLED,LOW);
      
    }

    void yellow() {
      
      digitalWrite(_greenLED,LOW);
      digitalWrite(_yellowLED,HIGH);
      
      }
  
};
#endif
