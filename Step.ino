void step_size()
{  
   stepState = digitalRead(stepPin);
   if (stepState != laststepState)
   {
    if (stepState == LOW)
    stepPushCounter++;
    Serial.println(freq_step);
    laststepState = stepState;
  }
      if (stepPushCounter == 0)
  {
    freq_step = 1000000;
    lcd.setCursor(15, 0);
    lcd.print("     ");
    lcd.setCursor(17, 0);
    lcd.print("10M");
  } 
       else if (stepPushCounter == 1)
  {
    freq_step = 100000;
    lcd.setCursor(15, 0);
    lcd.print("     ");
    lcd.setCursor(17, 0);
    lcd.print(" 1M");
  } 
      else if (stepPushCounter == 2)
  {
    freq_step = 10000;
    lcd.setCursor(15, 0);
    lcd.print("     ");
    lcd.setCursor(16, 0);
    lcd.print("100k");
  }    
      else  if (stepPushCounter == 3)
  {
    freq_step = 1000;
    lcd.setCursor(15, 0);
    lcd.print("     ");
    lcd.setCursor(17, 0);
    lcd.print("10K");
  }
     else  if (stepPushCounter == 4)
  {
    freq_step = 625;
    lcd.setCursor(15, 0);
    lcd.print("     ");
    lcd.setCursor(15, 0);
    lcd.print("6.25K");
  }
    else if (stepPushCounter == 5)
    stepPushCounter = 0; //reset the counter to 0
}

