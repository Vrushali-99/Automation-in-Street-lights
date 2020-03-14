 int ir1 = 3;
 int led1 = 11;
 int led2 = 12;
 int led3 = 8;
void setup() {
  pinMode(ir1,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
}

void loop() 
{
 
  int statusSensor = digitalRead(ir1);
        if(digitalRead(ir1)==1)
        {
           digitalWrite(led1,LOW);
           digitalWrite(led2,LOW);
           digitalWrite(led3,LOW);

        }
        else
        {
          digitalWrite(led1,HIGH);
          digitalWrite(led2,HIGH);
          digitalWrite(led3,HIGH);
        }

}
