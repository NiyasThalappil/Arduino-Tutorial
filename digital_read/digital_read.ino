int switchPin = 12;
int ledPin = 13;

void setup()
{
  pinMode(switchPin,INPUT);
  pinMode(ledPin,OUTPUT);
  digitalWrite(switchPin,LOW);
  
}
void loop()
{
  if (digitalRead(switchPin) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}

