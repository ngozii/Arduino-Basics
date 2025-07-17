// This program blinks three LEDs in sequence: red, yellow, then green

void setup() {
  // Configure digital pins as outputs for LED control
  pinMode(3, OUTPUT);  // Red LED on pin 3
  pinMode(5, OUTPUT);  // Yellow LED on pin 5  
  pinMode(6, OUTPUT);  // Green LED on pin 6
}

void loop() {
  // Turn on red LED for 1 second
  digitalWrite(3, HIGH); 
  delay(1000); 
  digitalWrite(3, LOW); 
  delay(1000); 
  
  // Turn on yellow LED for 1 second
  digitalWrite(5, HIGH); 
  delay(1000); 
  digitalWrite(5, LOW); 
  delay(1000); 
  
  // Turn on green LED for 1 second
  digitalWrite(6, HIGH); 
  delay(1000); 
  digitalWrite(6, LOW); 
  delay(1000);
  
  // Loop repeats automatically, creating continuous sequence
}
