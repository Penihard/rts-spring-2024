#include <TaskManagerIO.h>

long times[5] = {10000, 1000, 500, 100, 50}; // 10мс 1мс 500мкс 100мкс 50мкс
int* lamps = new int[5];
int pins[5] = {3, 5, 6, 9, 10};
taskid_t taskIds[5];

void toggleLamp(int index) {
  if (lamps[index] == LOW) {
    lamps[index] = HIGH;
  } else {
    lamps[index] = LOW;
  }
  digitalWrite(pins[index], lamps[index]);
}

void setup() {
  for (int i = 0; i < 5; i++) {
    lamps[i] = LOW;
    pinMode(pins[i], OUTPUT);
    taskIds[i] = taskManager.scheduleFixedRate(times[i], [i] {
      toggleLamp(i);
    }, TIME_MICROS);
  }
}

void loop() {
  taskManager.runLoop();
}