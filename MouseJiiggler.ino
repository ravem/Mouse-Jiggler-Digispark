#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();  
}

// Muove il puntatore di 10 px e fa lampeggiare il LED ogni 5 secondi
void loop() {
  ledOn();
  DigiMouse.moveX(10);
  DigiMouse.delay(5000);
  ledOff();
  DigiMouse.moveX(-10);
  DigiMouse.delay(5000);
}

void ledOff() {
  // turn the LED off by setting the voltage to LOW
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
}

void ledOn() {
  // turn the LED on by setting the voltage to HIGH
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
}
