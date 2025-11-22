//IR sensor with arduino and lcd display 
//Using a Arduino Nano|ir sensor
//This is unlikely to be of much use in a practical applications
//ID OF USER: Rakeshtsg
//INTERFACE: Arduino 
//You need to install the required libraries before uploading the code.

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int Ir=11;
int count_value=0;
    
void setup() {
  pinMode(Ir,INPUT);
   lcd.init();                     
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
}

void loop()
{
  int val=digitalRead(Ir);
  
  if(val==0)
  {
    count_value++;
    
     lcd.setCursor(1,0);
    lcd.println("IR_Counter ");
    lcd.setCursor(1,1);
    lcd.println("IR_Count=");
    lcd.setCursor(11,1);
    lcd.println(count_value);
  }
  delay(1000);
}
