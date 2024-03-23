long micrs[5] = {0, 0, 0, 0, 0};
long times[5] = {10000, 1000, 500, 100, 50}; //10мс 1мс 500мкс 100мкс 50мкс
int lamps[5] = {LOW, LOW, LOW, LOW, LOW};
int pins[5] = {3, 5, 6, 9, 10};

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  unsigned long micr_cur = micros();

  for (int i = 0; i < 5; i++) {
    if (micr_cur - micrs[i] >= times[i]) {
      micrs[i] = micr_cur;
      lamps[i] = (lamps[i] == LOW) ? HIGH : LOW;
      digitalWrite(pins[i], lamps[i]);
    }
  }
}