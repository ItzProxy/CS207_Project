#include <avr/pgmspace.h>
/* DAC Program Storage Exercise
 * Written Nov 15 2011 by Alex Clarke
 *
 *Completed program will play a short sound sample over and over again.
 *Pins 0 through 7 should be connected to an R/2R ladder.
 *Listen to the sound with headphones or speakers by using
 *two paperclips to connect plug to circuit and to ground.
 */
void setup()
{
  // Quick way to set pins 0 to 7 to OUTPUT
  DDRD = B11111111;
}  



void loop()
{
  //record an initial time
  long sampleStop = micros();

  //storage for sound samples
  unsigned char sample;
  
  //play sound
  for (long i = 0; i < 10975l; i++)
  {
    //Load a sample. If pin 7 isn't in the R/2R ladder, divide by 2.
    sample = 
    //Quick way to write 8 bits to pins 0 to 7
    PORTD = sample;
    
    //wait for the right amount of time for 8000Hz
    sampleStop += 125;
    while(micros() < sampleStop);
  }
}



