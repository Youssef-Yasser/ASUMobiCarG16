int LED1=4;
int LED2=5;
int LED3=6;
int LED4=7;

void setup() {
  // put your setup code here, to run once:
  pinMode (LED1,OUTPUT);
  pinMode (LED2,OUTPUT);
  pinMode (LED3,OUTPUT);
  pinMode (LED4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1,HIGH);
  delay(1000);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(1000);
  digitalWrite(LED2,LOW);  
  digitalWrite(LED3,HIGH);
  delay(1000);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,HIGH);
  delay(1000);
  digitalWrite(LED4,LOW);
}
