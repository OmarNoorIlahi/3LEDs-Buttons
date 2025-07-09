int PinButton1 = 2;
int PinButton2 = 3;
int PinButton3 = 4;
int PinLed1 = 5;
int PinLed2 = 6;
int PinLed3 = 7;

void setup() {
  pinMode(PinButton1, INPUT);
  digitalWrite(PinButton1, HIGH);  
  pinMode(PinButton2, INPUT);
  digitalWrite(PinButton2, HIGH);  
  pinMode(PinButton3, INPUT);
  digitalWrite(PinButton3, HIGH);  
  pinMode(PinLed1, OUTPUT);
  pinMode(PinLed2, OUTPUT);
  pinMode(PinLed3, OUTPUT);
}

void loop() {
  if (digitalRead(PinButton1) == LOW) {
    digitalWrite(PinLed1, HIGH);
  } else {
    digitalWrite(PinLed1, LOW);
  }

  if (digitalRead(PinButton2) == LOW) {
    digitalWrite(PinLed2, HIGH);
  } else {
    digitalWrite(PinLed2, LOW);
  }

  if (digitalRead(PinButton3) == LOW) {
    digitalWrite(PinLed3, HIGH);
  } else {
    digitalWrite(PinLed3, LOW);
  }
}
