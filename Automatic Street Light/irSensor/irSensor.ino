int LED = 13;
int obstaclepin = 7;
int hasObstacle=HIGH;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(obstaclepin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  hasObstacle=digitalRead(obstaclepin);
  if(hasObstacle==LOW)
  {
    Serial.println("Obstacle Found");
    digitalWrite(LED,HIGH); 
  }
  else
  {
     Serial.println("No obstacle");
     digitalWrite(LED,LOW);
  }
  delay(100);
  
}
