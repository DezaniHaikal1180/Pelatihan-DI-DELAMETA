int pinPir    = 6;
int pinLdr    = A0;
int pinFlame  = A1;
int pinBuzzer = 5;
int pinR      = 2;
int pinY      = 3;
int pinG      = 4;

void setup() {
    Serial.begin(9600);
    pinMode(pinR,OUTPUT);
    pinMode(pinY,OUTPUT);
    pinMode(pinG,OUTPUT);
    pinMode(pinBuzzer,OUTPUT);
    pinMode(pinPir,INPUT); 
    pinMode(pinLdr,INPUT);
    pinMode(pinFlame,INPUT);
  

}

void loop() {
   //BACADATA
 int bacaFlame=analogRead(pinFlame);
     bacaFlame=map(bacaFlame,26,1017,100,0);
 int bacaLdr  =analogRead(pinLdr);
        bacaLdr=map(bacaLdr,43,951,0,255);
     
 //PRINT TO SERIAL
 Serial.print("Nilai FLAME : ");
 Serial.print(bacaFlame);
 Serial.println();
 
//lOGIKA
analogWrite(pinR, bacaLdr);
if(bacaFlame<=26){
  Serial.println("AMAN BANGET");
  digitalWrite(pinG,HIGH);
}else if(bacaFlame>=26 and bacaFlame<=80){
  Serial.println("WARNING SILAHKAN PERIKSA");
  digitalWrite(pinBuzzer,HIGH);
  delay(300);
  digitalWrite(pinBuzzer,LOW);
  delay(300);
  digitalWrite(pinY,HIGH);
}else{
  Serial.println("WASPADA HARAP MENGUNGSI");
  digitalWrite(pinBuzzer,HIGH);
  delay(100);
  digitalWrite(pinBuzzer,LOW);
  delay(100);
  digitalWrite(pinY,HIGH);
  digitalWrite(pinG,HIGH); 
}  


  


}
