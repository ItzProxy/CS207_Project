const int photo = 0;
const int ledPin = 11;
int brightness;

void setup() {
  // put your setup code here, to run once:
  pinMode(photo, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  brightness = analogRead(photo);
  Serial.println(brightness);
  if(brightness <= 71){
      digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
}
