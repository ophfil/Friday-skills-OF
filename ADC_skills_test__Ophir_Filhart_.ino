void setup() {
  Serial.begin(9600);
}

void loop() {
  int originalVoltage = analogRead(A1);
  Serial.print(originalVoltage);
  Serial.print(", ");
  float Voltage = originalVoltage * (3.3 / 1023.0);
  Serial.print(Voltage);
  Serial.println("V");
  delay(1000);
}
