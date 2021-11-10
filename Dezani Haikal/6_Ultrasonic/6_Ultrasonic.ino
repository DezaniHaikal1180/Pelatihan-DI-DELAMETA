//MASUKAN LIBRARY NewPing
#include<NewPing.h>

//INISIALISASI VARIABLE
int echo    =2;
int triger  =3;
int batas   =200; //MAKSIMAL 400 cm
//int pinBuzzer =4;
//int pinM    =5;
//int pinK    =6;
//int pinH    =7;


NewPing cm(triger,echo,batas);

void setup() {
  // FUNGSIONALITAS DARI PIN PADA MICROCONTROLLER
  Serial.begin(9600);
//  pinMode(pinBuzzer, OUTPUT);
//  pinMode(pinM, OUTPUT);
//  pinMode(pinK, OUTPUT);
//  pinMode(pinH, OUTPUT);

}

void loop() {
  // BACA DATA / SENSOR
  int bacaJarak =cm.ping_cm();
  

  //PRINT TO SERIAL
  Serial.print("Data Jarak : ");
  Serial.print(bacaJarak);
  Serial.print(" cm ");
  Serial.println();
  delay(500); 

  //LOGIKA
//  if(bacaJarak <=20 and bacaJarak!=0) {
//    Serial.println("BERHENTI");
//    digitalWrite(pinM, HIGH);
//    digitalWrite(pinBuzzer, HIGH);
//    delay(100);
//    digitalWrite(pinBuzzer, LOW);
//    digitalWrite(pinK, LOW);
//    digitalWrite(pinH, LOW);
//  }else if (bacaJarak >=21 and bacaJarak <=70 ) {
//    Serial.println("BAHAYA");
//    digitalWrite(pinM, LOW);
//    digitalWrite(pinH, LOW);
//    digitalWrite(pinK, HIGH);
//    digitalWrite(pinBuzzer, HIGH);
//    delay(500);
//    digitalWrite(pinBuzzer, LOW);
//  }else {
//    Serial.println("AMAN");
//    digitalWrite(pinH, HIGH);
//    digitalWrite(pinK, LOW);
//    digitalWrite(pinM, LOW);
//  }
  

}
