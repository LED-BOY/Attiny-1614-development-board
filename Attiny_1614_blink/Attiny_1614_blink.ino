
#define LED PIN_PA4

bool ledState = true;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  
  digitalWrite(LED, ledState);
  delay(1000);
  ledState = !ledState;
}
