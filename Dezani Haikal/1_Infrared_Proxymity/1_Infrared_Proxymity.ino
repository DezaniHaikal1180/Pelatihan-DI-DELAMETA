
int tombol1=2;
int R=5;
int Y=6;
int G=7;
int sensorIR=3;


void setup() {
  Serial.begin(9600);
  pinMode(tombol1, INPUT);
  pinMode(sensorIR, INPUT);
  pinMode(R, OUTPUT);
  pinMode(Y, OUTPUT);
  pinMode(G, OUTPUT);
 
}

void loop() {
 //Baca Data
 int bacaTombol=digitalRead(tombol1);
 int bacaIR=digitalRead(sensorIR);
 
 //Print Serial
  Serial.print("Tombol: ");
  Serial.print(bacaTombol);
  Serial.print(" | Sensor IR : ");
  Serial.print(bacaIR);
  Serial.println();

  //Logika
  if(bacaIR==false){
    digitalWrite(R,HIGH);
  }else{
    digitalWrite(R,LOW);
  }

}


//
// 
// Serial.println("Kondisi Tombol1 : " + String(bacaTombol) + String(count));
// Serial.println("Kondisi Tombol2 : " + String(bacaTombol2)  + String(count)); 
// Serial.println("Kondisi Tombol3 : " + String(bacaTombol3)  + String(count));
//
//  //Button Kunci LED1 MERAH
//  if(bacaTombol==1){
//    count++;
//    delay(100);
//  if(count==1){
//    digitalWrite(R,HIGH);
//  }if(count==2){
//    digitalWrite(R,LOW);
//    count=0;
//  }
//  }
//}
//  }
//  //Button Kunci LED2 KUNING
//  if(bacaTombol2==1){
//    count++;
//    delay(100);
//  if(count==1){
//    digitalWrite(Y,HIGH);
//  }if(count==2){
//    digitalWrite(Y,LOW);
//    count=0;
//
//  }
//  }
//  //Button Kunci LED3 HIJAU
//  if(bacaTombol3==1){
//    count++;
//    delay(100);
//  if(count==1){
//    digitalWrite(G,HIGH);
//  }if(count==2){
//    digitalWrite(G,LOW);
//    count=0;
//
//  }
//  }
