int white = 3;
int IRsensor = 8;


void setup() {
  
  
  //project2 is about when a sensor is blocked,the white and orange sensor lights comes on with the sound..and if they are off the blue and green light up.
  // put your setup code here, to run once:
pinMode(white,OUTPUT);
pinMode(2,OUTPUT);
pinMode(IRsensor,INPUT);
pinMode(7,OUTPUT);
pinMode(11,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int value = digitalRead(IRsensor);

  if(value == 0){
    digitalWrite(white,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(7,HIGH);
  }else{
    
    digitalWrite(white,LOW);
     digitalWrite(2,LOW);
  digitalWrite(7,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(9,LOW);
 
  }

}
