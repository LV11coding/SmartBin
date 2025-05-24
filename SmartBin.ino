#include <Servo.h>
#include "SmartBin.h"
#define trig 10
#define echo 9
int dis = 0;
unsigned long prevtime = millis();
unsigned long prevtime2 = millis();
unsigned long currtime = 0;
bool timing = true;
Servo motor;

void distance() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  int long dur = pulseIn(echo, HIGH);
  dis = dur * 0.034 / 2;
}

bool open() {
  return (dis < distancetoopen || dis > 1000);
}

void setup() {
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  motor.attach(8);
  motor.write(0);
  Serial.begin(9600);
}

void loop() {
  currtime = millis();
  if (currtime - prevtime >= 500) {
    distance();
    Serial.println(dis);
    prevtime = currtime;
  }
  if (open() && timing) {
    prevtime2 = currtime;
    timing = false;
  }
  if (!open() && !timing) {
    prevtime2 = 0;
    timing = true;
  }
  if (!timing && currtime - prevtime2 >= 1000) {
    motor.write(90);
    int invalidCount = 0;
    while (invalidCount < 5) {
      distance();
      Serial.println(dis);
      if (open()) {
        invalidCount = 0;
      } else {
        invalidCount++;
      }
      delay(300);
    }
    motor.write(0);
    prevtime2 = currtime;
    timing = true;
  }
}