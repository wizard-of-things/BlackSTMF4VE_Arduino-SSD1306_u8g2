#include <Arduino.h>
#include <U8g2lib.h>

#include <Wire.h>

U8G2_SSD1306_128X32_UNIVISION_1_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);   // Adafruit ESP8266/32u4/ARM Boards + FeatherWing OLED

void setup(void)
{
  u8g2.begin();
}

void loop(void)
{
  u8g2.firstPage();
  do
  {
    u8g2.setFont(u8g2_font_9x18_mf);
    u8g2.drawStr(10,16,"STM32 Test 2");
    u8g2.drawRFrame(0,0,128,32,10);
  } while ( u8g2.nextPage() );
  delay(1000);
}
