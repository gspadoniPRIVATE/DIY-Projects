/*
keyestudio Maker learning kit
Project 30
I2C 1602 LCD
http//www.keyestudio.com
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display
void setup()
{
lcd.init(); // initialize the lcd
lcd.init();
lcd.clear();
lcd.backlight();
// Print a message to the LCD.
lcd.setCursor(2,0);
lcd.print("Eu te amo,");
lcd.setCursor(0,1);
lcd.print("Bruninha :) !");
}
void loop()
{
}
////////////////////////////////////////////////////////////