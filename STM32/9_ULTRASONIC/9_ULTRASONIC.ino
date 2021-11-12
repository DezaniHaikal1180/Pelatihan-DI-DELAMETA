//LIBRARY
#include<NewPing.h>

//INISIALISASI VARIABLE
int ledR        = PB0;
int ledY        = PB1;
int ledG        = PB10;
int triger      = PA2;
int echo        = PA3;
int batas       = 200; //MAKSIMAL 400 CM

NewPing cm(triger,echo,batas);

void setup() {
  Serial.begin(9600);
  pinMode(ledR,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledG,OUTPUT);

}

void loop() {
  //BACA DATA / SENSOR
  int bacaJarak =cm.ping_cm();

  //PRINT TO SERIAL
  Serial.print("DATA JARAK : ");
  Serial.print(bacaJarak);
  Serial.print(" cm");
  Serial.println();
  delay(500);

  //LOGIKA
  if(bacaJarak <=30){
    digitalWrite(ledR,HIGH);
    delay(50);
    digitalWrite(ledR,LOW);
    delay(50);
  }else if(bacaJarak >=31 and bacaJarak <=60){
    digitalWrite(ledR,HIGH);
    delay(500);
    digitalWrite(ledR,LOW);
    delay(500);
  }else{
    digitalWrite(ledR,HIGH);
    delay(1100);
    digitalWrite(ledR,LOW);
    delay(1100);
  }
  

}
