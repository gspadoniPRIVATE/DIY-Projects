
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <string.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
    Serial.begin(9600);
    lcd.init();   // initialize the lcd 
    lcd.init();
    lcd.clear();
    //lcd.autoscroll();
    // Print a message to the LCD.
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print("SensorValue :  ");
}
void loop() {
  int vol = analogRead(A0) * (5.0 / 1023.0*100);   // read temperature value of LM35
  Serial.print("Temp:");
  Serial.print(vol);
  Serial.println("C");
  int sensorValue = vol;
  // print out the value you read:
      lcd.setCursor(0,1);
      lcd.print("Temp: " + String(sensorValue) + "C");
  delay(1000); // delay in between reads for stability
 }
//////////////////////////////////////////////////////////
