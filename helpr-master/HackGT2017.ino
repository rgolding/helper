#define ledPin 13
#define JoyX A0
#define JoyY A1
#define JButton 12
#define YES 3
#define NO 2

 int buttonState = 0;
 int yesState = 0;
 int noState = 0;
 int value1 = 0;                  // variable to read the value from the analog pin 0
 int value2 = 0;                  // variable to read the value from the analog pin 1
 int buttonOut = 1;
 int yesOut = 1;
 int noOut = 1;

 void setup() {
  pinMode(ledPin, OUTPUT);
  //enable pullup resistors to eliminate floating voltages
  pinMode(JButton, INPUT_PULLUP);
  pinMode(YES, INPUT_PULLUP);
  pinMode(NO, INPUT_PULLUP);
  Serial.begin(115200);
 }

 void loop() {
  buttonState = digitalRead(JButton);

  if (buttonState == LOW) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, HIGH);
  }

  yesState = digitalRead(YES);
  noState = digitalRead(NO);

  //buttonOut = !buttonState;
  //yesOut = !yesState;
  //noOut = !noState;

  // reads the value of the variable resistor
  value1 = analogRead(JoyX);
  // this small pause is needed between reading
  // analog pins, otherwise we get the same value twice
  delay(100);
  // reads the value of the variable resistor
  value2 = analogRead(JoyY);

  Serial.print(value1);
  Serial.print(",");
  Serial.print(value2);
  Serial.print(",");
  Serial.print(!buttonState);
  Serial.print(",");
  Serial.print(!yesState);
  Serial.print(",");
  Serial.println(!noState);

  delay(100);
 }
