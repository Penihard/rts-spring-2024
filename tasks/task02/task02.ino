#include <TaskManagerIO.h>

long times[5] = {10000, 1000, 500, 100, 50}; //10мс 1мс 500мкс 100мкс 50мкс
int* lamps = new int[5];
int pins[5] = {3, 5, 6, 9, 10};

void setup() {
  // put your setup code here, to run once:
    for (int i = 0; i < 5; i++) 
  {
    lamps[i] = LOW;
    pinMode(pins[i], OUTPUT);
  }

  taskid_t taskId0 = taskManager.scheduleFixedRate(times[0], [] {
      if (lamps[0] == LOW) 
      {
        lamps[0] = HIGH;
      }
      else {
        lamps[0] = LOW;
      }

      digitalWrite(pins[0], lamps[0]);
    }, TIME_MICROS);

  taskid_t taskId1 = taskManager.scheduleFixedRate(times[1], [] {
      if (lamps[1] == LOW) 
      {
        lamps[1] = HIGH;
      }
      else {
        lamps[1] = LOW;
      }

      digitalWrite(pins[1], lamps[1]);
    }, TIME_MICROS);

  taskid_t taskId2 = taskManager.scheduleFixedRate(times[2], [] {
      if (lamps[2] == LOW) 
      {
        lamps[2] = HIGH;
      }
      else {
        lamps[2] = LOW;
      }

      digitalWrite(pins[2], lamps[2]);
    }, TIME_MICROS);

  taskid_t taskId3 = taskManager.scheduleFixedRate(times[3], [] {
      if (lamps[3] == LOW) 
      {
        lamps[3] = HIGH;
      }
      else {
        lamps[3] = LOW;
      }

      digitalWrite(pins[3], lamps[3]);
    }, TIME_MICROS);

  taskid_t taskId4 = taskManager.scheduleFixedRate(times[4], [] {
      if (lamps[4] == LOW) 
      {
        lamps[4] = HIGH;
      }
      else {
        lamps[4] = LOW;
      }

      digitalWrite(pins[4], lamps[4]);
    }, TIME_MICROS);

  taskid_t taskId5 = taskManager.scheduleFixedRate(times[5], [] {
      if (lamps[5] == LOW) 
      {
        lamps[5] = HIGH;
      }
      else {
        lamps[5] = LOW;
      }

      digitalWrite(pins[5], lamps[5]);
    }, TIME_MICROS);
}

void loop() {
  // put your main code here, to run repeatedly:
  taskManager.runLoop();
}