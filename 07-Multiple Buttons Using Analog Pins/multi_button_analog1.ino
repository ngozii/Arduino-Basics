// Uses analog pin A0 to read button state and control LED on pin 2
// Button pressed (low reading) = LED ON, Button released (high reading) = LED OFF

int buttonReading;    // Variable to store analog reading from button (0-1023)

void setup() {
  // Initialize serial communication for monitoring button values
  Serial.begin(9600);
  
  // Configure pin 2 as output for LED control
  pinMode(2, OUTPUT);
}

void loop() {
  // Read analog value from button connected to pin A0

  buttonReading = analogRead(A0);
  
  // Display button reading in serial monitor for debugging
  Serial.println(buttonReading);
  
  // Small delay to prevent overwhelming serial output
  delay(100);
  
  // Control LED based on button state (threshold = 800)
  if (buttonReading < 800) {     // Button is pressed (low analog reading)
    digitalWrite(2, HIGH);       // Turn LED ON
  } else {                       // Button is released (high analog reading)
    digitalWrite(2, LOW);        // Turn LED OFF
  }
}
