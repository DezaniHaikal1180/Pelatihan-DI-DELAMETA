//INISIALISASI VARIABLE
int ledR    = PB0;
int ledY    = PB1;
int ledG    = PA8;
int Button1 = PB15;
int Button2 = PB14;
int Button3 = PB13;

void setup() {
  Serial.begin(9600);
  pinMode(ledR,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(Button1,INPUT);
  pinMode(Button2,INPUT);
  pinMode(Button3,INPUT);
  
}

void loop() {
  //BACA DATA / SENSOR
  int bacaButton1 = digitalRead(Button1);
  int bacaButton2 = digitalRead(Button2);
  int bacaButton3 = digitalRead(Button3);

  //PRINT TO SERIAL
  Serial.print("Button 1 : ");
  Serial.print(bacaButton1);
  Serial.print(" | ");
  Serial.print("Button 2 : ");
  Serial.print(bacaButton2);
  Serial.print(" | ");
  Serial.print("Button 3 : ");
  Serial.print(bacaButton3);
  Serial.println(); //UNTUK ENTER
  

  //LOGIKA

  //BUTTON 1
  if(bacaButton1==true) {
    digitalWrite(ledR,HIGH);
  }else{
    digitalWrite(ledR,LOW);
  }

  //BUTTON 2
  if(bacaButton2==true) {
    digitalWrite(ledY,HIGH);
  }else{
    digitalWrite(ledY,LOW);
  }

  //BUTTON 3
  if(bacaButton3==true) {
    digitalWrite(ledG,HIGH);
  }else{
    digitalWrite(ledG,LOW);
  }
  
}
