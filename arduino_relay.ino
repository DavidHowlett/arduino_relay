void setup() {                
    Serial.begin(57600);
    for(int pin=0;pin<14;pin++){
        pinMode(pin,OUTPUT);
    } 
}
char pin;
void loop() {
    pin = -1;
    switch(Serial.read()){
        case'?':{
            Serial.write("I am arduinoRelay\n");
            break;
        }
        case'H':{ 
            while(pin==-1){
                pin = Serial.read();
            }
            digitalWrite(pin,HIGH);
            Serial.write('H');
            Serial.write(pin);
            break;
        }
        case'L':{
            while(pin==-1){
                pin = Serial.read();
            }
            digitalWrite(pin,LOW);
            Serial.write('L');
            Serial.write(pin);
            break;
        }
    }
}



