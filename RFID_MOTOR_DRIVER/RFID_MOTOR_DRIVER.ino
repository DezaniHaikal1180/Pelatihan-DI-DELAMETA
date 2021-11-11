#include<SPI.h>
#include<MFRC522.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

//Inisialisasi pembuatan variable


String uidString;

int incomingByte = 0;
int input = 0;

int buzzer=2;
int infrared=3;
int outServo = 4;
int kunci=false;

#define SS_PIN 10
#define RST_PIN 9

#define A1 5
#define A2 6
MFRC522 mfrc522(SS_PIN, RST_PIN);  //Create MRFC522 Instance
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo myservo;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
  pinMode(outServo,OUTPUT);
  pinMode(infrared,INPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  digitalWrite(A1,LOW);
  digitalWrite(A2,LOW);
  SPI.begin();
  mfrc522.PCD_Init();
  lcd.begin();
//  myservo.attach(outServo);
  lcd.clear();
  lcd.setCursor(0,0); lcd.print("TEMPELKAN KARTU");
  delay(1000);
  }

void loop() {
  int bacaIR=digitalRead(infrared);
  
  if(mfrc522.PICC_IsNewCardPresent() and kunci==false){
  readRFID();
  Serial.print("tag UID; ");
  Serial.println(uidString);
  if(uidString=="CA-0-E7-80"){
  kunci=true;
  bunyiBuzzer();
  lcd.clear(); //Untuk Menghapus karakter pada LCD
  lcd.setCursor(4,0); lcd.print("BERHASIL");
  delay(1000);
  lcd.setCursor(0,0); lcd.print("SILAHKAN MASUK ");
  delay(1000);
  lcd.setCursor(0,0); lcd.print("PLANG DIBUKA   ");
  Forward();

  }else{
  kunci=false;
  bunyiBuzzerGagal();
  lcd.clear();
  lcd.setCursor(0,0); lcd.print("GAGAL");
  delay(1000);
  lcd.setCursor(0,0); lcd.print("TEMPELKAN KARTU");
  Stop();
  
    }
  }

if(bacaIR==false && kunci==true){
  kunci=false;
  bunyiBuzzer();
  lcd.setCursor(0,0); lcd.print("SUDAH MASUK    ");
  delay(1000);
  lcd.setCursor(0,0); lcd.print("PLANG DITUTUP  ");
  Backward();
  delay(1000);
  lcd.setCursor(0,0); lcd.print("TEMPELKAN KARTU  ");
  delay(1000);
  }
  
}
