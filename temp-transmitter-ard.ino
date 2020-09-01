//Código Wiring - Projeto EB206
//Divana e Michele

#include <LiquidCrystal.h>

const int circuito=0;
float temp,x, fonte;
LiquidCrystal lcd(3,4,5,6,7,8,9,10,11,12,13);

void setup(){
    lcd.begin(16,2);
    lcd.setCursor(1,0);
    lcd.print("Projeto EB206");
    lcd.setCursor(1,1);
    lcd.print("Fonte 0 a 10 V");
    delay(3000);
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("Nomes:");
    lcd.setCursor(1,1);
    lcd.print("Divana/Michele");
    delay(3000);
    lcd.clear();    
}

void loop(){

    x = analogRead(0)*0.00488; //converte para tensao
    fonte = analogRead(0)*0.00488*2; //converte para tensão da fonte

    temp = (x-0.455)/0.0454545; //função de transferência da reta

    lcd.setCursor(1,0);
    lcd.print("Temp.: ");
    lcd.print(temp);
    lcd.print("C");
    lcd.setCursor(1,1);
    lcd.print("Tensao: ");
    lcd.print(fonte);
    lcd.print(" V");
    delay(1000);
}
