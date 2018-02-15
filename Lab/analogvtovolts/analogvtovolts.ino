float AnalogToVolts(int reading);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading;
  float volts;
  reading =analogRead(A0);
  volts=AnalogToVolts(reading);
  Serial.println(volts);  
}

float AnalogToVolts(int reading)
{
  float volts;
  volts = reading/1023.0 * 5.0;  //Perform conversion
  return volts; //Return result
}
