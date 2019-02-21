int button=4;
int buttonStatus=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonStatus = digitalRead(button);
  if (buttonStatus == HIGH)
  {
    tone(0, 300);
    delay(1000);
    noTone(0);
  }
}
