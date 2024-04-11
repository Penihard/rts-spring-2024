long* micrs = new long[5];
long times[5] = {10000, 1000, 500, 100, 50}; //10мс 1мс 500мкс 100мкс 50мкс
int* lamps = new int[5];
int pins[5] = {3, 5, 6, 9, 10};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 5; i++) 
  {
    micrs[i] = 0;
    lamps[i] = LOW;
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long micr_cur = micros();

  if (micr_cur - micrs[0] >= times[0]) 
  {
    micrs[0] = micr_cur;

    if (lamps[0] == LOW) 
    {
      lamps[0] = HIGH;
    }
    else 
    {
      lamps[0] = LOW;
    }

    digitalWrite(pins[0], lamps[0]);
  }

  if (micr_cur - micrs[1] >= times[1]) 
  {
    micrs[1] = micr_cur;

    if (lamps[1] == LOW) 
    {
      lamps[1] = HIGH;
    }
    else 
    {
      lamps[1] = LOW;
    }

    digitalWrite(pins[1], lamps[1]);
  }
  
  if (micr_cur - micrs[2] >= times[2]) 
  {
    micrs[2] = micr_cur;

    if (lamps[2] == LOW) 
    {
      lamps[2] = HIGH;
    }
    else 
    {
      lamps[2] = LOW;
    }

    digitalWrite(pins[2], lamps[2]);
  }

  if (micr_cur - micrs[3] >= times[3]) 
  {
    micrs[3] = micr_cur;

    if (lamps[3] == LOW)
    {
      lamps[3] = HIGH;
    }
    else 
    {
      lamps[3] = LOW;
    }

    digitalWrite(pins[3], lamps[3]);
  }

  if (micr_cur - micrs[4] >= times[4]) 
  {
    micrs[4] = micr_cur;

    if (lamps[4] == LOW) 
    {
      lamps[4] = HIGH;
    }
    else 
    {
      lamps[4] = LOW;
    }

    digitalWrite(pins[4], lamps[4]);
  }
}