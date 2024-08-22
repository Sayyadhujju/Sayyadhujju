int number;
int squared;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("please enter a number:");

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){

  number=Serial.parseint();
  squared=number*number;
  Serial.print("The square of ");
  Serial.print(number);
  Serial.print("is");
  Serial.println(squared);
  Serial.println("please enter another number:");
}
}
