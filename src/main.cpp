#include <Arduino.h>
#include "shift-register-driver.h"

#define CLOCK_PIN 11
#define DIN_PIN 10
#define RESET_PIN 9

#define LINE_SIZE 3

// struct shift_register_pin_config pin_config = {din_pin : DIN_PIN, clk_pin : CLOCK_PIN, reset_pin : RESET_PIN};

// static uint8_t shift_pattern[2][LINE_SIZE] = {{HIGH, HIGH, HIGH},
//                                               {HIGH, HIGH, LOW}};

int main(void) {
  // put your main code here, to run repeatedly:
  // shift_register_init(pin_config, (uint8_t)LINE_SIZE);
  // while(true) {
  //   shift_register_shift_in(shift_pattern[0], LINE_SIZE);
  //   delay(300000);
  // }
  pinMode(11, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  uint8_t button_value;
  Serial.begin(9600);
  
  while(true) {
    Serial.write("L");
    button_value = digitalRead(11);
    if (button_value == HIGH) {
      Serial.println("On");
    } else {
      Serial.println("Off");
    }
    // delay(1);
  }
  // Serial.println("Done");
}