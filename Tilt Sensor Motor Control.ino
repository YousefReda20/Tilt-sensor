void setup()
{
  pinMode(3,1);
  pinMode(2,0);
}

void loop()
{
  if(digitalRead(2)==1)
    digitalWrite(3,1);
  else
    digitalWrite(3,0);
}