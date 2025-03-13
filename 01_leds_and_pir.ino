// https://wokwi.com/projects/425318241491241985

int led_pin = 10;
int yellow_led_pin = 5;
int button_pin = 7;
int motion_sensor = 4;

void setup(void) {
  // put your setup code here, to run once:
  pinMode(led_pin, OUTPUT);
  pinMode(button_pin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  // IF-STATEMENT

  // DEBUGGING
  // bug

  if (digitalRead(button_pin) == LOW)
  {
    digitalWrite(led_pin, HIGH);
    delay(1000);
  }
  else if (digitalRead(button_pin) == HIGH)
  {
    digitalWrite(led_pin, LOW);

  }

  if (digitalRead(motion_sensor) == HIGH) {
    // Motion detected
      digitalWrite(yellow_led_pin, HIGH);
  }
}