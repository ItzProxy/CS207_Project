// Sweep
// by BARRAGAN  
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 90;    // variable to store the servo position 
int sweepAng = 0;
unsigned long pm = 0; //previous millis
int goBack = 1;
unsigned long interval = 30;
int counter = 0;
int counterLarge = 0;
int pot = 0;
void setup() 
{ 
  myservo.attach(9,544,2460);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
} 
 
 
void loop() 
{ 
  unsigned long cm = millis(); //current millis
    pot = analogRead(A0);
  //Serial.println(pos);
    if(pos > 90+sweepAng || pos <= 90-sweepAng){
      goBack = 0-goBack;
      if(++counter >= 2){
        sweepAng+=10;
        counter = 0;
      }
      pos+=goBack;
    } 
  if(cm - pm >= map(pot,0,1023,5,100)){
    Serial.println(pos);
    myservo.write(pos);
    pm = cm;
   pos+= goBack;
  }
} 

/*
 *   for(sweepAng = 0; sweepAng <= 90; sweepAng+=10){
    for(; pos < 90+sweepAng; pos += 1)  // goes from 0 degrees to 180 degrees 
    {                                  // in steps of 1 degree 
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      if(cm - pm >= interval)
      delay(25);                       // waits 15ms for the servo to reach the position 
    } 
    for(; pos>= 90-sweepAng; pos-=1)     // goes from 180 degrees to 0 degrees 
    {                                
      myservo.write(pos);              // tell servo to go to position in variable 'pos' 
      delay(25);                       // waits 15ms for the servo to reach the position 
    }
  }  
 */
