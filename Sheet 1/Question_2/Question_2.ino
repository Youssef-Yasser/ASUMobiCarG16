void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(4,HIGH);
delay(500);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(500);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(500);
digitalWrite(7,LOW);
delay(500);
digitalWrite(7,HIGH);
delay(500);
digitalWrite(7,LOW);

delay(1000);

digitalWrite(7,HIGH);
delay(500);
digitalWrite(7,LOW);
digitalWrite(6,HIGH);
delay(500);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
delay(500);
digitalWrite(5,LOW);
delay(500);
digitalWrite(4,HIGH);
delay(500);
digitalWrite(4,LOW);

delay(1000);

}