//INISIALISASI VARIABLE
int ledR           = PB0;
int ledY           = PB1;
int ledG           = PB10;
int sensorInfrared = PA8;
//int buzzer       = PB15;
int kunci          = false;

void setup() {
  Serial.begin(9600);
  pinMode(ledR,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledG,OUTPUT);
//  pinMode(buzzer,OUTPUT);
  pinMode(sensorInfrared,INPUT);

}

void loop() {
  // BACA DATA / SENSOR
  int bacaInfrared = digitalRead(sensorInfrared);

  //PRINT TO SERIAL
  Serial.print("NILAI SENSOR INFRARED : ");
  Serial.print(bacaInfrared);
  Serial.print("kunci: ");
  Serial.print(kunci);
  Serial.println(); //UNTUK ENTER

  //LOGIKA
  //true  = 1
  //false = 0
  if(bacaInfrared==false and kunci==false){
    delay(300);
    kunci=true;
    digitalWrite(ledR,LOW);
  }else if (bacaInfrared==false && kunci==true){
    delay(300);
    digitalWrite(ledR,HIGH);
    kunci=false;
  }

}
