#include <Arduino.h>

const int red_led = 9;
const int green_led = 10;
const int blue_led = 11;

void setup() {
    pinMode(red_led, OUTPUT);
    pinMode(green_led, OUTPUT);
    pinMode(blue_led, OUTPUT);
}

void loop() {
    // Red
    analogWrite(red_led, 255);
    analogWrite(green_led, 0);
    analogWrite(blue_led, 0);
    delay(1000);

    // Green
    analogWrite(red_led, 0);
    analogWrite(green_led, 255);
    analogWrite(blue_led, 0);
    delay(1000);

    // Blue
    analogWrite(red_led, 0);
    analogWrite(green_led, 0);
    analogWrite(blue_led, 255);
    delay(1000);

    // White (PWM mix)
    analogWrite(red_led, 255);
    analogWrite(green_led, 255);
    analogWrite(blue_led, 255);
    delay(1000);
}