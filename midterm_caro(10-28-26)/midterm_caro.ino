#include "dual_IR_decode.h"

// GPIOS  ssibal
const int IR1 = 34;
const int IR2 = 35;
const int RST = 32;

// Variables  blyat
int COUNT = 0;
int ADD_IN = 0;
int SUB_IN = 0;
int RSTINSSIBAL = 0;

void setup() {
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(RST, INPUT_PULLUP);
  initDisplay();

  Serial.begin(9600);
}

void loop() {
  RSTINSSIBAL = digitalRead(RST);
  
  if (RSTINSSIBAL == LOW) {
    COUNT = 0;
    delay(200);
  } else {
    ADD_IN = digitalRead(IR1);
    if (ADD_IN == 0) {
      if (COUNT < 99) {
        COUNT++;
      }
      delay(300);
    }

    SUB_IN = digitalRead(IR2);
    if (SUB_IN == 0) {
      if (COUNT > 0) {
        COUNT--;
      }
      delay(300);
    }
  }

  displayCounter(COUNT);
  delay(50);
}