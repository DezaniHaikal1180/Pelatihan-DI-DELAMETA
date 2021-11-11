//INISIALISASI 
int pinLDR   =A0;



void setup() {
  Serial.begin(9600);
}

void loop() {
  //BACA SENSOR
    int bacaLDR= analogRead(pinLDR);
  
    //PRINT TO SERIAL
    Serial.print("Nilai : ");
    Serial.print(bacaLDR);
    Serial.println();

  //LOGIKA

 
  
}
