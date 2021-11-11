//INISIALISASI VARIABLE
int tombol=2;
int sensor=3;
int kunci=false;

int R=5;
int Y=6;
int G=7;




void setup() {
  Serial.begin(9600);
  pinMode(tombol, INPUT);
  pinMode(sensor, INPUT);
  pinMode(R, OUTPUT);
  pinMode(Y, OUTPUT);
  pinMode(G, OUTPUT);
  digitalWrite(R,HIGH);
  Serial.println("System Start");
  
 
}

void loop() {
 //BACA DATA / SENSOR
 int bacaTombol=digitalRead(tombol);
 int bacaSensor=digitalRead(sensor);

 //PRINT KE SERIAL
 Serial.print("Tombol : ");
 Serial.print(bacaTombol);
 Serial.print("| Sensor : ");
 Serial.print(bacaSensor);
 Serial.print("| Flag : ");
 Serial.print(kunci);
 Serial.println();

 //LOGIKA PROGRAM 
 if(bacaTombol==true and kunci==false){
 delay(300);
 kunci=true;
 Serial.println("Selamat Datang Silahkan Ambil Tiket!");
 Serial.println("Plang Dibuka");
 digitalWrite(R,LOW);
 digitalWrite(Y,HIGH);
 delay(1000);
 digitalWrite(Y,LOW);
 delay(100);
 digitalWrite(G,HIGH);
 }

 if(bacaSensor==false and kunci==true){
  delay(300);
  kunci=false;
  Serial.print("Palang Ditutup");
  Serial.println();
  digitalWrite(G,LOW);
  digitalWrite(R,HIGH);
 }

}
    
