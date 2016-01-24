/*
  This sketch is example code for the Potentiometer module

  By Samuel Cohen for Protocol Electronics LLC
  
  Simply plug a rotary or slide potentiometer into the appropriate port to make this code work.
 */
int POTpin = A0;
int POTvalue = 0;
int LEDpin = 13;
int delayTime = 0;
void setup() {
  pinMode(POTpin, INPUT);
  pinMode(LEDpin, OUTPUT);

}

void loop() {
  POTValue = analogRead(POTpin);
  delayTime = map(POTValue, 0, 1023, 100, 1000);
  
  digitalWrite(LEDpin, HIGH);
  delay(delayTime);
  digitalWrite(LEDpin, LOW);
  delay(delayTime);

}
