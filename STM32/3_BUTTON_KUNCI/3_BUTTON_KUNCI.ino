//INISIALISASI VARIABLE
int dezan_ledR = PB0;
int dezan_ledY = PB1;
int dezan_ledG = PB10;
int dezan_Button1 = PB13;
int dezan_Button2 = PB14;
int dezan_Button3 = PB15;
int dezan_Kunci = false;

void setup() {
  Serial.begin(9600);
  pinMode(dezan_ledR,OUTPUT);
  pinMode(dezan_ledY,OUTPUT);
  pinMode(dezan_ledG,OUTPUT);
  pinMode(dezan_Button1,INPUT);
  pinMode(dezan_Button2,INPUT);
  pinMode(dezan_Button3,INPUT);
  
}

void loop() {
  // BACA DATA / SENSOR
  int bacaButton1 = digitalRead(dezan_Button1);
  int bacaButton2 = digitalRead(dezan_Button2);
  int bacaButton3 = digitalRead(dezan_Button3);

  //PRINT TO SERIAL
  Serial.print("Button 1 : ");
  Serial.print(bacaButton1);
  Serial.print(" | ");
  Serial.print("Button 2 : ");
  Serial.print(bacaButton2);
  Serial.print(" | ");
  Serial.print("Button 2 : ");
  Serial.print(bacaButton3);
  Serial.println(); //UNTUK ENTER

  //LOGIKA

  //BUTTON KUNCI 1


  if(bacaButton1==true and dezan_Kunci==false){
    delay(300);
    dezan_Kunci=true;
    Serial.println("LAMPU MERAH MENYALA");
    digitalWrite(dezan_ledR,HIGH);
  }else if (bacaButton1==true && dezan_Kunci==true){
    delay(300);
    Serial.println("LAMPU MERAH MATI");
    digitalWrite(dezan_ledR,LOW);
    dezan_Kunci=false;
  }

  //BUTTON KUNCI 2
  if(bacaButton2==true and dezan_Kunci==false){
    delay(300);
    dezan_Kunci=true;
    Serial.println("LAMPU KUNING MENYALA");
    digitalWrite(dezan_ledY,HIGH);
  }else if (bacaButton2==true && dezan_Kunci==true){
    delay(300);
    Serial.println("LAMPU KUNING MATI");
    digitalWrite(dezan_ledY,LOW);
    dezan_Kunci=false;
  }

  //BUTTON KUNCI 3
  if(bacaButton3==true and dezan_Kunci==false){
    delay(300);
    dezan_Kunci=true;
    Serial.println("LAMPU HIJAU MENYALA");
    digitalWrite(dezan_ledG,HIGH);
  }else  if (bacaButton3==true && dezan_Kunci==true){
    delay(300);
    Serial.println("LAMPU HIJAU MATI");
    digitalWrite(dezan_ledG,LOW);
    dezan_Kunci=false;
  }
  
}
