/* 
 * Arduino Experimentation Kit Example Code 
 * CIRC-03 .: Spin Motor Spin :. (Transistor and Motor) 
 *
 * Modified Oct 11 2011 by Alex Clarke.
 */

// constants
const int motorPin = 9;

// prototypes for user defined functions
void motorOnThenOff();
void motorTwoSpeed();

void setup()
{
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  //motorOnThenOff();
  motorTwoSpeed();
}

/*
 * motorOnThenOff() - turns motor on then off
 * Notice we use digital writes, 
 * just like with LEDs.
 */
void motorOnThenOff()
{
  const int onTime = 2500; //the number of milliseconds for the motor to turn on for
  const int offTime = 1000; //the number of milliseconds for the motor to turn off for

  digitalWrite(motorPin, HIGH); // turns the motor On
  delay(onTime); // waits for onTime milliseconds
  digitalWrite(motorPin, LOW); // turns the motor Off
  delay(offTime); // waits for offTime milliseconds
}

/*
 * motorTwoSpeed() - turns motor on then off but uses speed values as well
 * Notice we use analog writes to set motor speeds,
 * just like with LED brightness.
 */
void motorTwoSpeed()
{
  const int onSpeed = 200; // a number between 0 (stopped) and 255 (full speed)
  const int onTime = 1000; //the number of milliseconds for the motor to turn on for

  const int offSpeed = 27; // a number between 0 (stopped) and 255 (full speed)
  const int offTime = 2500; //the number of milliseconds for the motor to turn off for

  analogWrite(motorPin, onSpeed); // turns the motor 
  delay(onTime); // waits for onTime milliseconds
  analogWrite(motorPin, offSpeed); // turns the motor Off
  delay(offTime); // waits for offTime milliseconds
}

