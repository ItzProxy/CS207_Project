int button[] = {
    1,2,3,4,5,6,7,8
};
int val = 0;
void setup(){
    for(int i=0;i < button.size(); i++){
        pinMode(button[i],INPUT);
    }
    Serial.begin(9600);
}

void loop(){
    //poll until something happens
    for(int i=0;i<button.size();i++){
        if(digitalRead(i) >= HIGH){
            Serial.println(button[i]);
        }
    }
}