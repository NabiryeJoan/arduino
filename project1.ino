
int White = 6;
int ledBlue = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(ledBlue,OUTPUT);
pinMode(7,OUTPUT);
pinMode(White,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(11,HIGH);
delay(1000);
digitalWrite(11,LOW);
delay(1000);
digitalWrite(ledBlue,HIGH);
digitalWrite(5,HIGH);
delay(1000);
digitalWrite(ledBlue,LOW);
digitalWrite(5,LOW);
delay(1000);
digitalWrite(7,HIGH);
delay(2000);
digitalWrite(7,LOW);
delay(1000);
digitalWrite(White,HIGH);
digitalWrite(5,HIGH);

delay(1000);
digitalWrite(White,LOW);
digitalWrite(5,LOW);

delay(1000);



  

}
