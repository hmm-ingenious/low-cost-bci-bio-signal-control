const int SIGNAL_PIN = 34;

const int WINDOW_SIZE = 10;
int readings[WINDOW_SIZE] = {0};
int idx = 0;
long sum = 0;

const int thresholdBlink = 250;
const int thresholdMuscle = 450;

unsigned long lastTrigger = 0;
const int cooldown = 500;

int movingAverage(int newValue) {
  sum -= readings[idx];
  readings[idx] = newValue;
  sum += newValue;
  idx = (idx + 1) % WINDOW_SIZE;
  return sum / WINDOW_SIZE;
}

void setup() {
  Serial.begin(115200);
}

void loop() {
  int raw = analogRead(SIGNAL_PIN);
  int smooth = movingAverage(raw);

  unsigned long now = millis();

  if (now - lastTrigger > cooldown) {
    if (smooth > thresholdBlink && smooth < thresholdMuscle) {
      Serial.println("BLINK");
      lastTrigger = now;
    }
    else if (smooth > thresholdMuscle) {
      Serial.println("MUSCLE");
      lastTrigger = now;
    }
  }

  delay(5);
}
