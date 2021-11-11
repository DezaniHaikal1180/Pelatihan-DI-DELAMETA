//INISIALIASI VARIABLE
//MOTOR A PIN
#define A1 5
#define A2 6

int incomingByte = 0;
int input = 0;

void setup() {
  Serial.begin(9600);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  digitalWrite(A1,LOW);
  digitalWrite(A2,LOW);

  Serial.println("SILAHKAN PILIH SALAH SATU");
  Serial.println("1.Forward");
  Serial.println("2.Backward");
  Serial.println("3.Stop"); 
  
}

void loop() {
 //Program yang akan dijalankan berulang-ulang
 if (Serial.available() > 0) {
 // read the incoming byte:
 incomingByte = Serial.read();
 input = incomingByte - 48; //convert ASCII code of numbers to 1,2,3
 switch (input) { 
 case 1: // if input=1 ....... motors turn forward
 Forward();
 break;
 case 2: // if input=2 ....... motors turn backward
 Backward();
 break;
 case 3: // if input=1 ....... motors turn stop
 Stop();
 break;
 }
 delay(200);
 input=0;
}
}
