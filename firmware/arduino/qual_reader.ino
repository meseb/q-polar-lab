int pin = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int raw = analogRead(pin);
  int qual = raw / 64; // 0–15

  Serial.print("RAW: ");
  Serial.print(raw);
  Serial.print(" | QUAL: ");
  Serial.println(qual);

  delay(100);
}
