const int analogInPin = A0, analogOutPin = 9;
int sensorValue = 0, outputValue = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(analogOutPin, outputValue);
  Serial.print(sensorValue);
  Serial.println(outputValue);
  delay(2);
}
