#line 1 "LED_blink_c.ino"
  
       
                                                                         

                                            
   

                                                      
                  
#include "Arduino.h"
void setup();
void loop();
#line 10
int led = 13;

                                                    
void setup() {
                                             
  pinMode(led, OUTPUT);
}

                                                     
void loop() {
  int i = 4;
  if (i > 0){
    digitalWrite(led, HIGH);                                                 
    delay(1000);                                   
    digitalWrite(led, LOW);                                                 
    delay(1000);                                  
    i--;
  }
  
}

