
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int potpin=0;// initialize analog pin 0, connected with photovaristor
int val=0;// initialize variable va
void setup()
{
    Serial.begin(9600);// set baud rate at “9600”
    lcd.init();   // initialize the lcd 
    lcd.init();
    lcd.clear();
    // Print a message to the LCD.
    lcd.backlight();
    lcd.setCursor(1,0);
    lcd.print("SensorValue :  ");
}

void loop()
{
   val= map(analogRead(potpin),0,1023,0,255);
   Serial.println(val);// display the value of val
   // read the input on analog pin 0:
   int sensorValue = val;
   // print out the value you read:
      lcd.setCursor(3,1);
      lcd.print(sensorValue);
    delay(10); // delay in between reads for stability 
}
//////////////////////////////////////////////////////////