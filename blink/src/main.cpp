#include <Arduino.h>

void setup() {
  pinMode(13, 1);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(13, 1);
  Serial.println("Hello World!");
  delay(500);
  digitalWrite(13, 0);
  delay(500);
}