
void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);//green LED
pinMode(3,OUTPUT);//red LED
pinMode(2,OUTPUT);//yellow LED
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(4,HIGH);
delay(2000);
digitalWrite(4,LOW);
digitalWrite(3,HIGH);
delay(2000);
digitalWrite(3,LOW);
digitalWrite(2,HIGH);
delay(2000);
digitalWrite(2,LOW);


}
