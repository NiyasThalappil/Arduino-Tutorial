//include Servo Library
//Create a Servo Object
#include <Servo.h>
Servo NiyuServo;

//Define the Pins
int servoPin =9;
int disPin = 0;

void setup()
{
  //Attah the Servo Object
  //We don't need to set it as an output manually
  NiyuServo.attach(servoPin);
}

void loop()
{
  int dist = analogRead(distPin);
  int pos = map(dis,0, 1023, 0, 180);

  NiyuServo.write(pos);
}

