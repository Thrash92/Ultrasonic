#include "Ultrasonic.h"

Ultrasonic us(A5, A4);

void setup() {
  Serial.begin(9600);   
}

void loop() {  
  Serial.println( us.distance() );
}
