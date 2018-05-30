#include <Arduino.h>
#include <Macetuino.h>

const int ledverde = 2;
const int ledroja = 3;
int pinsensor = 5;

int val;

Macetuino macetero(pinsensor);

void setup() {
        pinMode(ledroja, OUTPUT);
        pinMode(ledverde, OUTPUT);
}

void loop() {

        val = macetero.read();

        if(val < 50) {
                digitalWrite(ledroja, HIGH);
                digitalWrite(ledverde, LOW);
        }
        else{
                digitalWrite(ledverde, HIGH);
                digitalWrite(ledroja, LOW);
        }
}
