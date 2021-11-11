
int tombol1=2;
int tombol2=3;
int tombol3=4;
int R=5;
int Y=6;
int G=7;
int count;


void setup() {
  Serial.begin(9600);
  pinMode(tombol1, INPUT);
  pinMode(tombol2, INPUT);
  pinMode(tombol3, INPUT);
  pinMode(R, OUTPUT);
  pinMode(Y, OUTPUT);
  pinMode(G, OUTPUT);
 
}

void loop() {
 int bacaTombol=digitalRead(tombol1);
 int bacaTombol2=digitalRead(tombol2);
 int bacaTombol3=digitalRead(tombol3);
 Serial.println("Kondisi Tombol : " + String(bacaTombol));
 Serial.println("Kondisi Tombol : " + String(bacaTombol2)); 
 Serial.println("Kondisi Tombol : " + String(bacaTombol3));

  //Button Kunci LED MERAH
  if(bacaTombol==1){
    count++;
    delay(100);
  if(count==1){
    digitalWrite(R,HIGH);
  }if(count==2){
    digitalWrite(R,LOW);
    count=0;
  }
  }
  //Button Kunci LED KUNING
  if(bacaTombol2==1){
    count++;
    delay(100);
  if(count==1){
    digitalWrite(Y,HIGH);
  }if(count==2){
    digitalWrite(Y,LOW);
    count=0;

  }
  }
  //Button Kunci LED HIJAU
  if(bacaTombol3==1){
    count++;
    delay(100);
  if(count==1){
    digitalWrite(G,HIGH);
  }if(count==2){
    digitalWrite(G,LOW);
    count=0;

  }
  }

  
}
