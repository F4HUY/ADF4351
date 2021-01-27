void encoder()
{
  if (enc == 1)
  {
    {
      Freq += freq_step;
          Serial.println(Freq);
      {
        if (Freq > 440000000)
        {
          Freq = 440000000;
        }
      } 
      SetFreq(Freq);
    }
    enc = 0;
  }
  if (enc == 2)
  {
    {
      Freq -= freq_step;
                Serial.println(Freq);
      {
        if (Freq < 3500000)
        {
          Freq = 3500000;
        }
      } 
      SetFreq(Freq);
    }
    enc = 0;
  }
}
