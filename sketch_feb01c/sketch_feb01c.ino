const int buttonPin1 = 2;       // pushbutton pin
const int buttonPin2 = 3;       //other pushbutton pin
const int led1 =  9;            // LED  pin
const int led2 = 10;
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
     
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin1) == LOW){ //checks if button 1 is pressed
    digitalWrite(led1, HIGH); //turn on led
    //digitalWrite(led2, LOW); //turn on led
  }
  if(digitalRead(buttonPin2) == LOW){ //check if button 2 is pressed 
    digitalWrite(led1, LOW); //turn off led
    //digitalWrite(led2, HIGH); //turn on led
  }
}
