// This is a really simple implementation of the Virtual Wall for iRobot Roomba and Scooba machines
// You need an IR LED, and a 220R resistor.
// The LED connects to pin 3 of the Arduino Nano, and the resistor between the LED and ground (0V)
//
#include <IRremote.h>

IRsend ir;
int led = 0;
int ctr = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  ir.enableIROut(38);
}

void loop() {
  digitalWrite(LED_BUILTIN, led);
  ir.mark(1000);
  ir.space(1000);
  if(ctr > 249) {
    if(led == 0)
      led = 1;
    else
      led = 0;
  }
  else
    ctr++;
}
