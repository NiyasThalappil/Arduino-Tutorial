int sensorPin=A0;
int ledPin=9;

void setup()
{
  analogReference(DEFAULT);//isn't important
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(sensorPin);

  val = constrain(val,750,900);
  int ledLevel = map(val,750, 900, 255, 0);

  analogWrite(ledPin, ledLevel);
}

