//INISIALISASI VARIABLE
int ledR        = PB0;
int ledY        = PB1;
int ledG        = PB10;
int sensorPir   = PA8;
void setup() {
  Serial.begin(9600);
  pinMode(ledR,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(sensorPir,INPUT);

}

void loop() {
  //BACA DATA/ SENSOR
  int bacaPir = digitalRead(sensorPir);


  //PRINT TO SERIAL
  Serial.print("NILAI SENSOR PIR : ");
  Serial.print(bacaPir);
  Serial.println();

  //LOGIKA
  if(bacaPir==false){
    digitalWrite(ledG,HIGH);
  }else if (bacaPir==true) {
    digitalWrite(ledG,LOW);
    delay(500);
    digitalWrite(ledY,HIGH);
    delay(500);
    digitalWrite(ledR,HIGH);
  }

}
