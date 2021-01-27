void band()
{  
    SetFreq(Freq);
    if (bandPushCounter == 0)
  {
    Freq = 43500000;
    SetFreq(Freq);
    lcd.setCursor(0, 1);
    lcd.print("Band 70Cm");
  }
    else if (bandPushCounter == 1)
  {
    Freq = 14500000; 
    SetFreq(Freq);
    lcd.setCursor(0, 1);
    lcd.print("Band 2M  ");
  } 
    else if (bandPushCounter == 2)
  {
    Freq = 5000000; 
    SetFreq(Freq);
    lcd.setCursor(0, 1);
    lcd.print("Band 6M  ");
  } 
    else if (bandPushCounter == 3)
  {
    Freq = 3500000; 
    SetFreq(Freq);
    lcd.setCursor(0, 1);
    lcd.print("Band 9M  ");
  } 
    else if (bandPushCounter == 4)
  {
    Freq = 124000000; 
    SetFreq(Freq);
    lcd.setCursor(0, 1);
    lcd.print("Band 23Cm");
  } 
    else if (bandPushCounter == 5)
  {
    Freq = 234500000; 
    SetFreq(Freq);
    lcd.setCursor(0, 1);
    lcd.print("Band 12Cm");
  } 
    else if (bandPushCounter == 6)
  {
    Freq = 300000000; 
    SetFreq(Freq);
    lcd.setCursor(0, 1);
    lcd.print("Band 10Cm");
  } 
    else if (bandPushCounter == 7)
  {
    Freq = 440000000; 
    SetFreq(Freq);
    lcd.setCursor(0, 1);
    lcd.print("Band 7Cm ");
  } 
    else if (bandPushCounter == 8)
    {
     bandPushCounter = 0; //reset the counter to 0
     Freq = 43500000;
     SetFreq(Freq);
}
}
