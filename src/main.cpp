#include <Arduino.h>

#include "buttonControl.h"
#include "pinDefs_V3.h"

void setup() {
    Serial.begin(115200);

    pinMode(BUT_1, INPUT);
}

void loop() {
    // This is the functionality that I am trying to replicate, this function
    // came from a one of my old projects.
    int presses = countConsecutivePresses(BUT_1);

    if (presses) {
        Serial.print("Pin ");
        Serial.print(BUT_1);
        Serial.print(" was pressed ");
        Serial.println(presses);
        Serial.println(" times.");
    }

    // Sleep for 8 milliseconds to allow appropriate time between each read
    // of the button.
    delay(8);
}