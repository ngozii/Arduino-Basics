// This program reads an analog sensor and controls LED brightness accordingly

void setup() {
  // Pin 3 is configured as PWM output for LED brightness control
  pinMode(3, OUTPUT);
}

void loop() {
  // Declare variables for sensor reading and PWM output
  int sensorReading = 0;    // Raw analog value (0-1023)
  int ledBrightness = 0;    // PWM value for LED (0-255)
  
  // Read analog sensor value from pin A0 (potentiometer, light sensor, etc.)
  sensorReading = analogRead(A0);  
  
  // Convert 10-bit analog reading (0-1023) to 8-bit PWM value (0-255)
  ledBrightness = map(sensorReading, 0, 1023, 0, 255); 
  
  // Set LED brightness using PWM - higher sensor value = brighter LED
  analogWrite(3, ledBrightness);
  
  // No delay needed - program continuously adjusts LED brightness
}
