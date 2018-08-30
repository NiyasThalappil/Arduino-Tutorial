//include Servo Library
//Create a Servo Object
#include <Servo.h>
Servo NiyuServo;

//Define the Pins
int servoPin =9;

void setup()
{
  //Attah the Servo Object
  //We don't need to set it as an output manually
  NiyuServo.attach(servoPin);
}

void loop()
{
  for (int i=0; i <=180; i=i+20)
  {
    Niyuservo.write(i);
    delay(1000);
  }
}

