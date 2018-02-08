#include "pitches.h"
int line1[] = {
  NOTE_D4, 0, NOTE_F4, NOTE_D4, 0, NOTE_D4, NOTE_G4, NOTE_D4, NOTE_C4,
  NOTE_D4, 0, NOTE_A4, NOTE_D4, 0, NOTE_D4, NOTE_AS4, NOTE_A4, NOTE_F4,
  NOTE_D4, NOTE_A4, NOTE_D5, NOTE_D4, NOTE_C4, 0, NOTE_C4, NOTE_A3, NOTE_E4, NOTE_D4,
  0};

int line1_durations[] = {
  8, 8, 6, 16, 16, 16, 8, 8, 8, 
  8, 8, 6, 16, 16, 16, 8, 8, 8,
  8, 8, 8, 16, 16, 16, 16, 8, 8, 2,
  2};
float playSpeed = 2;
 byte audioPin = 10; //This is the audio. tone() doesn't care which pin.
void setup() {
  // put your setup code here, to run once:
  pinMode(audioPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  doIt();
}

void doIt(){
  for(int note = 0; note < 29; note++){
    long startTime = millis();
    int noteDuration = 1000/line1_durations[note];
    tone(audioPin, line1[note], noteDuration * playSpeed);

    int pauseBetweenNotes = noteDuration * playSpeed;
    delay(pauseBetweenNotes);
    noTone(audioPin);
  }
}


