int LED1 = 2;  // Assign LED1 to pin GPIO2
int LED2 = 16; // Assign LED2 to pin GPIO16

void setup() {
  // Initialize GPIO2 and GPIO16 as outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, LOW);  // Turn LED1 off
  digitalWrite(LED2, HIGH); // Turn LED2 on
  delay(1000);              // Wait for a second

  digitalWrite(LED1, HIGH); // Turn LED1 on
  digitalWrite(LED2, LOW);  // Turn LED2 off
  delay(1000);              // Wait for a second
}
