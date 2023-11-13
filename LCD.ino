#include <LiquidCrystal.h>
int rs = 2, en = 3, d4 = 4,d5 = 5, d6 = 6 , d7= 7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int pot = A1;
void setup(){
  lcd.begin(16,2);
  pinMode(16,2);
}

void loop(){
  
  int adad = analogRead(pot);
  float volt = adad*5/1023;
  lcd.setCursor(0,0);
  lcd.print("Volatge:");
  lcd.print(volt);
  
  delay(500);
  lcd.clear();
  
}
  
