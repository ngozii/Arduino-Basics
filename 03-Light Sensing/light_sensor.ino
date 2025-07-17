// Reads analog sensor and turns LED on when reading exceeds threshold value

int sensorValue;    // Variable to store the analog sensor reading (0-1023)

void setup() { 
  // Initialize serial communication for debugging at 9600 baud
  Serial.begin(9600);
  
  // Configure pin 2 as digital output for LED control
  pinMode(2, OUTPUT);
}

void loop() { 
  // Read analog sensor value from pin A0 (potentiometer, light sensor, etc.)
  sensorValue = analogRead(A0);
  
  // Send sensor reading to serial monitor for debugging
  Serial.println(sensorValue);   
  
  // Small delay to prevent overwhelming serial monitor
  delay(100);            
  
  // Check if sensor reading exceeds threshold value
  if (sensorValue > 600) {       // Threshold set to 600 (adjust as needed)
    digitalWrite(2, HIGH);       // Turn LED on when threshold exceeded
  }
  else {  
    digitalWrite(2, LOW);        // Turn LED off when below threshold
  }
}
