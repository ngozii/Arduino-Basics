void setup() {
  // Configure pin 2 as output to control BC548 transistor base
  pinMode(2, OUTPUT);
}

void loop() {
  // Turn buzzer ON by sending HIGH signal to transistor base
  digitalWrite(2, HIGH);
  delay(1000);              // Buzzer sounds for 1 second
  
  // Turn buzzer OFF by sending LOW signal to transistor base  
  digitalWrite(2, LOW);
  delay(1000);              // Buzzer silent for 1 second
  
  // Pattern repeats: 1 second ON, 1 second OFF
}
