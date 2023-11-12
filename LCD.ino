#include <LiquidCrystal.h>
int rs = 2, en = 3, d4 = 4, d5 = 5, d7 = 7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void ssetup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Ali Aspnani");
  lcd.setCursor(0,1);
  lcd.print("Welcome");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("AliPaniashvili");
  delay(1000);
  lcd.clear();
}
