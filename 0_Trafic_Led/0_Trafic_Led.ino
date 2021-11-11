int R=5;
int Y=6;
int G=7;

void setup() {
  pinMode(R,OUTPUT);
  pinMode(Y,OUTPUT);
  pinMode(G,OUTPUT);
  
}

void loop() {
  digitalWrite(R,HIGH);
  delay(2000);
  digitalWrite(R,LOW);
  digitalWrite(Y,HIGH);
  delay(500);
  digitalWrite(Y,LOW);
  digitalWrite(G,HIGH);
  delay(2000);
  digitalWrite(G,LOW);
  digitalWrite(Y,HIGH);
  delay(500);
  digitalWrite(Y,LOW);

}
