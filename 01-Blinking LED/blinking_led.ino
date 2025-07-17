void setup() {
  // Initialize pin 3 as an output pin for LED control
  pinMode(3, OUTPUT);
}

void loop() {
  // Turn LED on by sending HIGH voltage (5V) to pin 3
  digitalWrite(3, HIGH);
  
  // Wait for 1 second (1000 milliseconds) with LED on
  delay(1000);
  
  // Turn LED off by sending LOW voltage (0V) to pin 3
  digitalWrite(3, LOW);
  
  // Wait for 1 second with LED off before repeating
  delay(1000);
}
