SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
bool value = digitalRead(D7);
void setup() {
    Serial.begin(9600);
    pinMode(D7, INPUT);
    pinMode(D5, OUTPUT);
}
void loop() {
    value = digitalRead(D7);
    if (value == true){
        Serial.println(value);
        digitalWrite(D5, HIGH);
    }
    else{
        Serial.println(value);
        digitalWrite(D5,LOW);
    }
}