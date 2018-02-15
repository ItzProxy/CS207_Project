#include <CapSense.h> 
#define LIGHT  3
#define LED1 5
#define LED2 6

int val;

CapSense   cs_9_2 = CapSense(9,2);   //Initializes CapSense pins
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    cs_9_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT); 
    pinMode(LIGHT, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    val = analogRead(LIGHT);
    Serial.print("Light: ");
    Serial.println(val);
    if(val <= 650  ){
      digitalWrite(LED1,HIGH);
    }
    else{
      digitalWrite(LED1,LOW);
    }
}
