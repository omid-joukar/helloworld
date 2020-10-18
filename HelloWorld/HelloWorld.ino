#include <Arduino.h>
#include <U8x8lib.h>
 
U8X8_SSD1306_128X64_ALT0_HW_I2C u8x8(/* reset=*/ U8X8_PIN_NONE);
 
void setup(void) {
  u8x8.begin();
  u8x8.setFlipMode(1);
  Serial.begin(9600);
  Serial.print("Display message on screen Programm");
}
 
void loop(void) {
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  Serial.print("message is : ");
  u8x8.setCursor(0, 0);
  u8x8.print("Hello World!");
  Serial.print("Hello World\n");
}
