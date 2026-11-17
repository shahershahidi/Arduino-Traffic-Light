
#include <Arduino.h>

void setup() {
  pinMode(8, OUTPUT);   // Green
  pinMode(9, OUTPUT);   // Yellow
  pinMode(10, OUTPUT);  // Red
}

void loop() {
  // Red light
  digitalWrite(10, HIGH);
  delay(5000);
  digitalWrite(10, LOW);

  // Green light
  digitalWrite(8, HIGH);
  delay(5000);
  digitalWrite(8, LOW);

  // Yellow light
  digitalWrite(9, HIGH);
  delay(2000);
  digitalWrite(9, LOW);
}
