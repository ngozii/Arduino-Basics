void setup() {
  // Configure digital pins as outputs for LED control
  pinMode(2, OUTPUT);    // LED controlled by button on A0
  pinMode(3, OUTPUT);    // LED controlled by button on A1
  pinMode(4, OUTPUT);    // LED controlled by button on A2
  pinMode(5, OUTPUT);    // LED controlled by button on A3
}

void loop() {
  // Check button on A0 and control LED on pin 2
  if (analogRead(A0) < 800) {    // Button pressed (low reading)
    digitalWrite(2, HIGH);       // Turn LED ON
  } else {                       // Button released (high reading)
    digitalWrite(2, LOW);        // Turn LED OFF
  }
  
  // Check button on A1 and control LED on pin 3
  if (analogRead(A1) < 800) {    // Button pressed (low reading)
    digitalWrite(3, HIGH);       // Turn LED ON
  } else {                       // Button released (high reading)
    digitalWrite(3, LOW);        // Turn LED OFF
  }
  
  // Check button on A2 and control LED on pin 4
  if (analogRead(A2) < 800) {    // Button pressed (low reading)
    digitalWrite(4, HIGH);       // Turn LED ON
  } else {                       // Button released (high reading)
    digitalWrite(4, LOW);        // Turn LED OFF
  }
  
  // Check button on A3 and control LED on pin 5
  if (analogRead(A3) < 800) {    // Button pressed (low reading)
    digitalWrite(5, HIGH);       // Turn LED ON
  } else {                       // Button released (high reading)
    digitalWrite(5, LOW);        // Turn LED OFF
  }
  
  // No delay needed - program responds immediately to button presses
}
