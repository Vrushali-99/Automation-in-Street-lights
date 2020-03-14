#include <StackArray.h>

 StackArray <int> stack;
 int ir1 = 3;
 int led1g2 = 11;
 int led2g1 = 10;
 int led3g1 = 9;
 int ldr1 = 4;
 int ir2 =2;
 int i=1;
void setup() {
  Serial.begin(9600);
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
        
       if(statusSensor==0)
           {
           digitalWrite(led1g2,HIGH);
           digitalWrite(led2g1,HIGH);
           digitalWrite(led3g1,HIGH);
           stack.push(1);
           Serial.println(stack.count());
           delay(1000);
           }
           else if(statusSensor2==0)
           {
              stack.pop();
              Serial.println(stack.count());
              delay(1000);
               analogWrite(led1g2,5); 
               analogWrite(led2g1,5);
               analogWrite(led3g1,5);
               delay(100);
            }
            else if(!stack.isEmpty()and statusSensor==1){
           digitalWrite(led1g2,HIGH);
           digitalWrite(led2g1,HIGH);
           digitalWrite(led3g1,HIGH);}
           else if(stack.isEmpty() and statusSensor2==1){
           analogWrite(led1g2,5); 
               analogWrite(led2g1,5);
               analogWrite(led3g1,5);
               delay(100); }
               else
            {
               analogWrite(led1g2,5); 
               analogWrite(led2g1,5);
               analogWrite(led3g1,5);
               delay(100);
    
            }         
  }
    else
    {
      digitalWrite(led1g2,LOW);
      digitalWrite(led2g1,LOW);
      digitalWrite(led3g1,LOW);
      
    }
}
