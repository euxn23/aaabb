#include <NintendoSwitchControlLibrary.h>

const int delayFrame = 3;
const int delayMs = delayFrame * 16;

void setup() {
  pushButton(Button::L, delayMs);
  pushButton(Button::R, delayMs);
  delay(1000);
}

void loop() {
  pushButton(Button::A, delayMs, 3);
  pushButton(Button::B, delayMs, 2);
}

