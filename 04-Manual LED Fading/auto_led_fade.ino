// Creates a smooth breathing effect by gradually increasing and decreasing LED brightness

void setup() {
  // Configure pin 3 as PWM output for LED brightness control
  pinMode(3, OUTPUT);
}

void loop() {
  // Fade LED from off to full brightness
  for (int brightness = 0; brightness < 255; brightness++) { 
    analogWrite(3, brightness);  // Set LED brightness (0-255)
    delay(20);                   // Small delay for smooth transition
  }  
  
  // Fade LED from full brightness back to off
  for (int brightness = 255; brightness > 0; brightness--) { 
    analogWrite(3, brightness);  // Gradually decrease brightness
    delay(20);                   // Small delay for smooth transition
  } 
  
  // Cycle repeats automatically 
}
