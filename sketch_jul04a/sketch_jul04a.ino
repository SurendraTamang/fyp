#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,7,6,5,4);

void setup() {
  lcd.begin(16,2);
  lcd.print("PF MEASURE");
  delay(2000);
  lcd.clear();
  lcd.print("PF = 96.7");

}

void loop() {
  // put your main code here, to run repeatedly:

}
