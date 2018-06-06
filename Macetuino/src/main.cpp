#include <Arduino.h>
#include <Macetuino.h>

const int ledverde = 2;
const int ledroja = 3;
int pinsensor = A0;

int val;

Macetuino macetero(pinsensor);

void setup() {
        pinMode(ledroja, OUTPUT);
        pinMode(ledverde, OUTPUT);

        Serial.begin(9600);
}

void loop() {

        val = macetero.read();
        Serial.print("Valor actual del sensor: ");
        Serial.print(val);
        Serial.println("%");

        if(val > 50) {
                digitalWrite(ledroja, LOW);
                digitalWrite(ledverde, HIGH);
        }
        else if(val <= 50 && val > 20) {
                digitalWrite(ledverde, LOW);
                digitalWrite(ledroja, HIGH);
        }
        else if(val <= 20) {
                digitalWrite(ledverde, LOW);
                digitalWrite(ledroja, HIGH);

                delay(2000);

                digitalWrite(ledverde, LOW);
                digitalWrite(ledroja, LOW);

                delay(2000);
        }

        delay(200);
}
