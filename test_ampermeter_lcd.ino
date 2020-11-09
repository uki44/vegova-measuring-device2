#code made by Uroš Tomažič

#include <LiquidCrystal.h>
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);

  
}

void loop() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);

if(digitalRead(7)==1){
  digitalWrite(5,LOW);
  lcd.clear();
  lcd.print("RELE AKTIVIRAN");
 }
if(digitalRead(6)==1){
  digitalWrite(5,HIGH);
  lcd.clear();
  lcd.print("RELE DEAKTIVIRAN");
}

  
}
