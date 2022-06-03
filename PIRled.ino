const int PIR= 12;
const int Pinled = 13;
const int batasdelay = 2000;
int waktuawal = 0;

void setup() {
Serial.begin (9600);

pinMode (Pinled,OUTPUT);
pinMode (PIR,INPUT);
}

void loop() {
  
 int dataPIR = digitalRead(PIR);
 if(dataPIR==HIGH)
 {
  digitalWrite(Pinled,HIGH);
  waktuawal = millis();
  
 }
 if (millis() - waktuawal > batasdelay);
 {digitalWrite(Pinled,LOW);
  
 }
 
  
 }

