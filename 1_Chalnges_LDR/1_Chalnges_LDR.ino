int pinR    =3;
int pinLDR  =A0;

void setup() {
  Serial.begin(9600);
  pinMode(pinR,OUTPUT);
}

void loop() {
  int bacaLDR=analogRead(pinLDR);
  bacaLDR=map(bacaLDR,21,904,0,255);

  Serial.print("NILAI :");
  Serial.print(bacaLDR);
  Serial.println();


  //LOGIKA
  analogWrite(pinR, bacaLDR);
  
//  if(bacaLDR >= 500){
//    digitalWrite(pinR,HIGH);
//  }else{
//    digitalWrite(pinR,LOW);
//  }


}
