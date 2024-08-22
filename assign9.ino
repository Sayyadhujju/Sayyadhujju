const int tmp36pin=A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue=analogRead(tmp36pin);
float voltage = sensorValue*(5.0/1023.0);
float tempC=(voltage-0.5)*100;
Serial.print("Temperature:");
Serial.print(tempC);
Serial.println("C");
delay(1000);

}
