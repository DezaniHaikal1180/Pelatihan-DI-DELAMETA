#include <Servo.h>

int outServo = 4;
Servo myservo;


void setup() {
  Serial.begin(9600);
  myservo.attach(outServo); //UNTUK MENGAMBIL PIN / UNTUK MENGAKTIFKAN PIN 

}

void loop() {
  myservo.write(0); //0-180
  delay(1000);
  myservo.write(90);
  delay(1000);
}
