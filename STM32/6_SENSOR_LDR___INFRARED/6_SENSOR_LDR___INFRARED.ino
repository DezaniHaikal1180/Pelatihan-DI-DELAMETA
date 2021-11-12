//INISIALISASI VARIABLE
int ledR            = PB0;
int ledY            = PB1;
int ledG            = PB10;
int sensorLdr       = PA0;
int sensorInfrared  = PA8;
int kunci           = false;

void setup() {
  Serial.begin(9600);
  pinMode(ledR,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(sensorLdr,INPUT);
  pinMode(sensorInfrared,INPUT);

}

void loop() {
  //BACA DATA / SENSOR
  int bacaInfrared = digitalRead(sensorInfrared);
  int bacaLdr = analogRead(sensorLdr);
      bacaLdr = map(bacaLdr,32,4095,100,0);

  //PRINT TO SERIAL
  Serial.print("NILAI INFRARED : ");
  Serial.print(bacaInfrared);
  Serial.print(" | NILAI LDR : ");
  Serial.print(bacaLdr);  
  Serial.print(" | NILAI KUNCI : ");
  Serial.print(kunci);
  Serial.println();

  //LOGIKA

   if(bacaInfrared==false and kunci==false){
    delay(100);
    kunci=true;
  }else if(bacaInfrared==false && kunci==true){
    delay(100);
    kunci=false;
  }

  if(kunci==false){
    if(bacaLdr >=0 and bacaLdr <=10){
    digitalWrite(ledR,HIGH);
    digitalWrite(ledY,LOW);
    digitalWrite(ledG,LOW);
  }else if(bacaLdr >=10 and bacaLdr<=50){
    digitalWrite(ledY,HIGH);
    digitalWrite(ledR,LOW);
    digitalWrite(ledG,LOW);
  }else{
    digitalWrite(ledR,LOW);
    digitalWrite(ledY,LOW);
    digitalWrite(ledG,HIGH);
    }
  }

  if(kunci==true){
    digitalWrite(ledR,LOW);
    digitalWrite(ledY,LOW);
    digitalWrite(ledG,LOW);
  }

  


  
  //true  = 1
  //false = 0

 

}
