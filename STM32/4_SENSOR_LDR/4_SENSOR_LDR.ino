int ledR      = PB0;
int ledY      = PB1;
int ledG      = PB10;
int sensorLdr = PA0;
void setup() {
  Serial.begin(9600);
  pinMode(ledR,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(sensorLdr,INPUT);

}

void loop() {
  // BACA DATA / SENSOR
  int bacaLdr = analogRead(sensorLdr);
      bacaLdr = map(bacaLdr, 32,4095,0,255);

  //PRINT TO SERIAL
  Serial.print("Nilai Sensor LDR : ");
  Serial.print(bacaLdr);
  Serial.println(); //UNTUK ENTER

  //LOGIKA
  analogWrite(ledR, bacaLdr);


}
