#include <StackArray.h>

 StackArray <int> stack;
 int ir1 = 3;
 int led1g2 = 13;
 int led2g1 = 12;
 int led3g1 = 8;
 int ldr1 = 4;
 int ir2 =2;
void setup() {

  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(led1g2,OUTPUT);
  pinMode(led2g1,OUTPUT);
  pinMode(led3g1,OUTPUT);
  pinMode(ldr1,INPUT);
  
}

void loop() 
{
 
  int statusSensor = digitalRead(ir1);
  int statusSensor2 = digitalRead(ir2);
  if(digitalRead(ldr1)==1)
  {
        if (statusSensor==1 and statusSensor2==1)
        {
           digitalWrite(led1g2,LOW);
           digitalWrite(led2g1,LOW);
           digitalWrite(led3g1,LOW);

        }
        else if (statusSensor==0 && statusSensor2==1)
        {
          digitalWrite(led1g2,LOW);
          digitalWrite(led2g1,HIGH);
          digitalWrite(led3g1,HIGH);
          //delay(30000);
        }
         else if (statusSensor2==0 && statusSensor ==1)
          {
            digitalWrite(led2g1,LOW);
            digitalWrite(led3g1,LOW);
            digitalWrite(led1g2,HIGH);
  
          }
          
          else
           {
           digitalWrite(led1g2,HIGH);
           digitalWrite(led2g1,HIGH);
           digitalWrite(led3g1,HIGH);
           //delay(30000);
           }
        
  }
    else
    {
      digitalWrite(led1g2,LOW);
      digitalWrite(led2g1,LOW);
      digitalWrite(led3g1,LOW);
      
    }
}
