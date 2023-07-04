int thumb;
int first_finger;
int second_finger;
int third_finger;
int fourth_finger;
#include<LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
int thumb = analogRead(A0);
int first_finger = analogRead(A1);
int second_finger = analogRead(A2);
int third_finger = analogRead(A3);
int fourth_finger = analogRead(A4);
Serial.print(thumb);
Serial.print("\t");



Serial.print(first_finger);
Serial.print("\t");


Serial.print(second_finger);
Serial.print("\t");


Serial.print(third_finger);
Serial.print("\t");



Serial.println(fourth_finger);
Serial.print("\t");


if(thumb >273 && thumb<312 )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("SORRY I CAN'T");
lcd.setCursor(0,1);
lcd.print("     SPEAK  ");
delay(500);
  
  }

else if(first_finger >236 && first_finger<300 )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("  I LIVE IN ");
lcd.setCursor(0,1);
lcd.print("  Bengaluru  ");
delay(500);
  
  }
else if(second_finger >298 && second_finger<508 )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("NAVIGATE TO");
lcd.setCursor(0,1);
lcd.print("  WASHROOM  ");
delay(500);
}

 else if(third_finger >285 && third_finger<604)
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("HELP TO CROSS");
lcd.setCursor(0,1);
lcd.print("     ROAD  "); 
delay(500);
}

else if(fourth_finger >255 && fourth_finger<540)
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("TAKE ME TO");
lcd.setCursor(0,1);
lcd.print("  HOSPITAL  ");
delay(500);

  
  }

  else{
     lcd.clear();
lcd.setCursor(1,0);
    lcd.print("   I AM FLEX");
    
    }
}
