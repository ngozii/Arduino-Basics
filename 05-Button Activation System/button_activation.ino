// LED mirrors the state of a push button - pressed = LED on, released = LED off

void setup() {
  // Configure pin 2 as input for button (with internal pull-up resistor recommended)
  pinMode(2, INPUT); 
  
  // Configure pin 3 as output for LED control
  pinMode(3, OUTPUT);
}

void loop() {
  // Read button state and control LED accordingly
  if (digitalRead(2) == HIGH) {    // If button is pressed (HIGH)
    digitalWrite(3, HIGH);         // Turn LED on
  } 
  else {                           // If button is not pressed (LOW)
    digitalWrite(3, LOW);          // Turn LED off
  }
  
}
