//Constants
#define LED 9
#define TIME 240
//prototypes
void messageTranslated(String);
void dash(int numRepeat=1);
void dot(int numRepeat=1);

String message = "I do not need help because apo";//hardcoded message will probably 
                           //use serial in to get a message from other sources
void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  messageTranslated(message);
  //while(true); //do nothing
}

void messageTranslated(String encodeMessage){
    if(encodeMessage != NULL){
      encodeMessage.toLowerCase(); //convert any upper case to lower case
      //iterates through the string length
      for(int i=0;i<encodeMessage.length();i++){
        switch(encodeMessage.charAt(i)){
        case(' '):
            delay(TIME*4); //delay between supposed words denoted by space
            break;
        case('a'):
            dot();
            dash();
            break;
        case('b'):
            dash();
            dot(3);
            break;
        case('c'):
            dash();
            dot();
            dash();
            dot();
            break;
        case('d'):
            dash();
            dot(2);
            break;
        case('e'):
            dot();
            break;
        case('f'):
           dot(2);
           dash();
           dot();
           break;
        case('g'):
            dash(2);
            dot();
            break;
        case('h'):
            dot(4);
            break;
        case('i'):
            dot(2);
            break;
        case('j'):
            dot();
            dash(4);
            break;
        case('k'):
            dash();
            dot();
            dash();
            break;
        case('l'):
            dot;
            dash();
            dot(2);
            break;
        case('m'):
            dash(2);
            break;
        case('n'):
            dash();
            dot();
            break;
        case('o'):
            dash(3);
            break;
        case('p'):
            dot();
            dash(2);
            dot();
            break;
        case('q'):
            dash(2);
            dot();
            dash();
            break;
        case('r'):
            dot();
            dash();
            dot();
            break;
        case('s'):
            dot(3);
            break;
        case('t'):
            dash();
            break;
        case('u'):
            dot(2);
            dash();
            break;
        case('v'):
            dot(3);
            dash();
            break;
        case('w'):
            dot();
            dash(2);
            break;
        case('x'):
            dash();
            dot(2);
            dash();
            break;
        case('y'):
            dash();
            dot();
            dash(2);
            break;
        case('z'):
            dash(2);
            dot(2);
            break;
        case('1'):
            dot();
            dash(4);
            break;
        case('2'):
            dot(2);
            dash(3);
            break;
        case('3'):
            dot(3);
            dash(2);
            break;
        case('4'):
            dot(4);
            dash(1);
            break;
        case('5'):
            dot(5);
            break;
        case('6'):
            dash();
            dot(4);
            break;
        case('7'):
            dash(2);
            dot(3);
            break;
        case('8'):
            dash(3);
            dot(2);
            break;
        case('9'):
            dash(4);
            dot();
            break;
        case('0'):
            dash(5);
            break;
        default:
            break;
      }
      delay(TIME*2); //delay between each letter
    }
  }
}

void dot(int numRepeats){
  for(int i = 0; i<numRepeats;i++){
    digitalWrite(LED,HIGH);
    delay(TIME);
    digitalWrite(LED,LOW);
    delay(TIME);
  }
}

void dash(int numRepeats){
  for(int i = 0; i<numRepeats;i++){
    digitalWrite(LED,HIGH);
    delay(TIME*3);
    digitalWrite(LED,LOW);
    delay(TIME);
  }
}


