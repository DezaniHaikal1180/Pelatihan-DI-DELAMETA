int ledR = PB0;
int ledY = PB1;
int ledG = PA8;

void setup() {
  pinMode(PC13,OUTPUT);
  pinMode(ledR,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledG,OUTPUT);
}

void loop() {
  digitalWrite(ledR,HIGH);
  delay(1000);
  digitalWrite(ledR,LOW);
  delay(1000);
  digitalWrite(ledY,HIGH);
  delay(1000);
  digitalWrite(ledY,LOW);
  delay(1000);
  digitalWrite(ledG,HIGH);
  delay(1000);
  digitalWrite(ledG,LOW);
  delay(1000);
  
}
