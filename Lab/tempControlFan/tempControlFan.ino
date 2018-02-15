const int motorPin = 9;

void motorOnOff(int cel);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading;
  float volts;
  reading =analogRead(A1);
  volts=AnalogToVolts(reading);
  //Serial.println("volts);

  float cel = (volts * 100.0) - 50.0;
  float freedom = freedomUnits(cel);
  Serial.print("Tempurature: ");
  Serial.print(cel);
  Serial.print(" C\n");
  Serial.print("Tempurature: ");
  Serial.print(freedom);
  Serial.print(" F\n");
  delay(300);
  motorOnOff(freedom);  
}

float AnalogToVolts(int reading)
{
  float volts;
  volts = reading/1023.0 * 5.0;  //Perform conversion
  return volts; //Return result
}

float freedomUnits(float cel){
  return (cel * (9.0f/5.0f)) + 32.0f;
}

void motorOnOff(int temp){
  if(temp >= 27.0){
    digitalWrite(motorPin, HIGH);
  }
  else{
    digitalWrite(motorPin, LOW);
  }
}

