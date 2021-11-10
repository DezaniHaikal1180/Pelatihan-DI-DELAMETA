//INISIALISASI 
int pinFlame=A1;




void setup() {
  Serial.begin(9600);
  
}

void loop() {
  //BACA SENSOR
  int bacaFlame= analogRead(pinFlame);
      bacaFlame=map(bacaFlame,26,1017,100,0);

  //PRINT TO SERIAL
  Serial.print("Nilai : ");
  Serial.print(bacaFlame);
  Serial.println();
  
  

  //LOGIKA
 
 
}
