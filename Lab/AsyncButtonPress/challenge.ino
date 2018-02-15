/*
 Dimmer-Button
 Written Aug 2011 by Alex Clarke
 
 Uses button presses to switch an LED between off, dim, medium, and high brightness.
 */

// constants for this sketch
const int buttonPin = 2;       // pushbutton pin
const int led =  9;            // LED  pin
unsigned long previousMillis = 0;
const long interval = 260;
// variables for this sketch
int ledMode = 1;         // variable for recording button presses

void setup() 
{
  // initialize the output pins:
  pinMode(led, OUTPUT);
     
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop()
{ 
  unsigned long currentMillis = millis();
  // check if the pushbutton is pressed.
  if (digitalRead(buttonPin) == LOW) 
  {
    if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
      previousMillis = currentMillis;     
    // if it is, count a press
      ledMode = ledMode + 1;
  
      // if we've counted to an invalid mode 
      if (ledMode == 5)
      {
        // reset to mode 1
        ledMode = 1;
      }
    }
  }

  // Detect the current mode and set the LED appropriately
    if (ledMode == 1)
    {
      //Mode 1 - LED is off
      digitalWrite(led, LOW);
    }
    else if (ledMode == 2)
    {
      //Mode 2 - LED is dim
      analogWrite(led, 64);
    }
    else if (ledMode == 3)
    {
      //Mode 3 - LED is medium
      analogWrite(led, 128);
    }
    else
    {
      //Mode 4 - LED is bright
      digitalWrite(led, HIGH);
    }
  
}
