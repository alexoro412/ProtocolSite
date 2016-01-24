/*\
  This sketch is example code for the Push Button module\
\
  By Samuel Cohen for Protocol Electronics LLC\
\
  Plug a push button module into the aproprate port to make this code work.\
 */\

int buttonPin = 3; // this will save 3 to the value of buttonPin so that when we reference button pin, the arduino will know which pin to use\
int LEDPin = 13; // this will save pin 13 as LEDPin so that the arduino will know to activate pin 13 when we say "LEDPin"\
int delayTime = 1000; // this variable will store the amount of time between blinks in milliseconds (1000ms = 1s)\
\
void setup() {\
  pinMode(buttonPin, INPUT); // this tells the arduino to use our buttonPin as an input\
  pinMode(LEDPin, OUTPUT); // this tells the arduino to use our LEDPin as an output\
\
}\
\
void loop() {\
  digitalWrite(LEDPin, HIGH); // tells the arduino to power LEDPin ON\
  delay(delayTime); // stops program for amount of time in millis\
  digitalWrite(LEDPin, LOW); // tells the arduino to power LEDPin OFF\
  delay(delayTime);\
}\
\
/*\
suggestions:\
  1. try changing the value in delay time to something like 500. What happens?\
  2. try changing the value in the second delay but not the first by writing a physical value eg. delay(500);. What happens?\
*/\
