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

  if(val<800) digitalWrite(ledPin,HIGH);
  else digitalWrite(ledPin,LOW);

  
  Serial.print(analogRead(sensorPin));
  delay(500);int 
}

