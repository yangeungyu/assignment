#define PIN_LED 7

void setup() {
    pinMode(PIN_LED, OUTPUT); 
}

void loop() {
    digitalWrite(PIN_LED, 0); 
    delay(1000); 

    for (int i = 0; i < 5; i++) {
        digitalWrite(PIN_LED, 1);  
        delay(100);                 
        digitalWrite(PIN_LED, 0); 
        delay(100);                 
    }

    // LED 끄고 무한 루프
    digitalWrite(PIN_LED, 1); 
    while (true) {

    }
}
