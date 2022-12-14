int greenLED=8;
float pi=3.14;
int dit=200;
int dah=200;
int longW=60;
int blueLED=3;
int redLED=10;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenLED, HIGH);
  delay(dit);
  digitalWrite(greenLED, LOW);
  delay(dit);

  digitalWrite(blueLED, HIGH);
  delay(dit);
  digitalWrite(blueLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(greenLED,HIGH);
delay(dah);
digitalWrite(greenLED, HIGH);
delay(dah);

digitalWrite(blueLED,HIGH);
delay(dah);
digitalWrite(blueLED,LOW);
delay(dah);

digitalWrite(redLED,HIGH);
delay(dah);
digitalWrite(redLED,LOW);
delay(dah);

digitalWrite(greenLED, HIGH);
  delay(dit);
  digitalWrite(greenLED, LOW);
  delay(dit);

  digitalWrite(blueLED, HIGH);
  delay(dit);
  digitalWrite(blueLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  delay(longW);
}
