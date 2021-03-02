//Explanations (in Portuguese) here: https://www.youtube.com/watch?v=k_0-5wyY-Xk

unsigned long previousMillis = 0;
const unsigned long interval = 30 * 60000;
int ligar = 0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(4, INPUT);
}

void loop() {

  ligar = 0;

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    ligar = 1;
  }

  int x = digitalRead(4);
  //Serial.println(x);

  if (x == 1) {
    ligar = 1;
  }

  if (ligar == 1) {
    digitalWrite(13, HIGH);
    delay(120000);
  } else {
    digitalWrite(13, LOW);
    delay(10);
  }
}
