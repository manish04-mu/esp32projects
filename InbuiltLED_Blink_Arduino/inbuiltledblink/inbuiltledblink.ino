// Select the pinmode (either input or output)
// Set the value to be written to the pin

void setup() {
  pinMode(2, OUTPUT);   // Set GPIO 2 as output
}

void loop() {
  digitalWrite(2, HIGH);  // Turn LED ON
  delay(100);             // Wait 1 second
  digitalWrite(2, LOW);   // Turn LED OFF
  delay(500);            // Wait 1 second
}