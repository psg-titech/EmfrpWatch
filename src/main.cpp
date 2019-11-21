#include <M5Stack.h>
#include <stdio.h>

#include "WatchMain.h"

// from Free_Fonts.h
#define GFXFF 1
#define FF19 &FreeSans18pt7b
#define FF24 &FreeSansBold24pt7b

TFT_eSprite img = TFT_eSprite(&M5.lcd);

void setup() {
  M5.begin();
img.setColorDepth(8);
  img.createSprite(M5.Lcd.width(), M5.Lcd.height());
  img.fillSprite(TFT_BLACK);
}

void loop() {
  ActivateWatchMain();
}

void Input(int* buttonA, int* buttonB, int* buttonC, int* elapsed) {
  M5.update();
  *buttonA = M5.BtnA.wasPressed();
  *buttonB = M5.BtnB.wasPressed();
  *buttonC = M5.BtnC.wasPressed();
  *elapsed = millis();
}

void draw_time(int hour, int min, int sec) {
  char buf[9];
  snprintf(buf, 9, "%02d:%02d:%02d", hour, min, sec);
  img.setFreeFont(FF24);
  img.drawString(buf,60,80,GFXFF);
}

void Output(int* hour, int* min, int* sec) {
  img.fillSprite(TFT_BLACK);
  draw_time(*hour, *min, *sec);
  img.pushSprite(0,0);
  delay(10);
}
