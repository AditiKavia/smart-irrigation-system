void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);  // Moisture sensor input
  pinMode(8, OUTPUT);  // Pump control
}

void loop() {
  int moisture = analogRead(A0);  // Read moisture level
  Serial.print("Moisture Level: ");
  Serial.println(moisture);

  if (moisture > 700) {  // Dry soil -> Pump ON
    digitalWrite(8, 0);
    Serial.println("Soil Dry -> Pump ON");
  } else {  // Moist soil -> Pump OFF
    digitalWrite(8, 1);
    Serial.println("Soil Moist -> Pump OFF");
  }

  delay(500);  // Small delay for stability
}