// This is a really simple implementation of the Virtual Wall for iRobot Roomba and Scooba machines
// You need an IR LED, and a 220R resistor.
// The LED connects to pin 3 of the Arduino Nano, and the resistor between the LED and ground (0V)
//
#include <IRremote.h>

IRsend ir;

void setup() {
  ir.enableIROut(38);
}

void loop() {
  ir.mark(1000);
  ir.space(1000);
}
