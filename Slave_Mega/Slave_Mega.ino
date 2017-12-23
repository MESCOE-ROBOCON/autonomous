#define MP1 38
#define MP2 39
#define MP3 10
#define MP4 11
#define MD1 31
#define MD2 33
#define MD3 34
#define MD4 35
#define Dueint 30
#define stp 40 
#define right_servo 28
#define left_servo 29 
void setup()
{
  for(byte i=2;i<=9;i++)
  {
    pinMode(i,INPUT);
  }
 pinMode(right_servo,OUTPUT); 
 pinMode(left_servo, OUTPUT);
 pinMode(stp,INPUT); 
 pinMode(MP1, OUTPUT);
 pinMode(MP2, OUTPUT);
 pinMode(MP3, OUTPUT);
 pinMode(MP4, OUTPUT);
 pinMode(MD1, OUTPUT);  
 pinMode(MD2, OUTPUT);  
 pinMode(MD3, OUTPUT);   
 pinMode(MD4, OUTPUT);   
 pinMode(Dueint, INPUT);
 digitalWrite(right_servo,LOW);
 digitalWrite(left_servo,LOW);
attachInterrupt(digitalPinToInterrupt(Dueint),wait,HIGH);
Serial.begin(9600);
}

void loop()
{
 if(digitalRead(2) && digitalRead(3) && digitalRead(4) && digitalRead(5) && digitalRead(6)&&(!digitalRead(7)) && (!digitalRead(8)) &&( !digitalRead(9)))
  {
   digitalWrite(left_servo,HIGH);
   digitalWrite(right_servo,LOW);
   do
   {
   left();
   }
   while(digitalRead(stp) != 1);
  } 
  
 else if(digitalRead(5) && digitalRead(6) && digitalRead(7) &&  digitalRead(8) && digitalRead(9)&&(!digitalRead(2)) && (!digitalRead(3)) && (!digitalRead(4)))
  {
    digitalWrite(right_servo,HIGH);
    digitalWrite(left_servo,LOW); 
    do
    {
      right();
    }
    while(digitalRead(stp) != 1);
  }
  
  else
   digitalWrite(right_servo,LOW);
   digitalWrite(left_servo,LOW); 
  forward();
  
}

void forward()
{
  if(digitalRead(5) && digitalRead(6))
  {
   digitalWrite(MD1,HIGH);
   digitalWrite(MD2,HIGH);
   digitalWrite(MD3,HIGH);
   digitalWrite(MD4,HIGH);
   Serial.println("forward");
  }
  else if(digitalRead(4) && digitalRead(5))
  {
   analogWrite(MP1,155);
   analogWrite(MP2,100);
   analogWrite(MP3,100);
   analogWrite(MP4,155);
   Serial.println("adjust left");
  }
  else if(digitalRead(6) && digitalRead(7))
  {
   analogWrite(MP1,100);
   analogWrite(MP2,155);
   analogWrite(MP3,155);
   analogWrite(MP4,100);
    Serial.println("adjust right");
   }
   
}


void reverse()
{
  if(digitalRead(5) && digitalRead(6))
  {
   digitalWrite(MD1,LOW);
   digitalWrite(MD2,LOW);
   digitalWrite(MD3,LOW);
   digitalWrite(MD4,LOW);
   Serial.println("reverse");
  }
  else if(digitalRead(4) && digitalRead(5))
  {
   analogWrite(MP1,155);
   analogWrite(MP2,100);
   analogWrite(MP3,100);
   analogWrite(MP4,155);
   Serial.println("adjust left");
  }
  else if(digitalRead(6) && digitalRead(7))
  {
   analogWrite(MP1,100);
   analogWrite(MP2,155);
   analogWrite(MP3,155);
   analogWrite(MP4,100);
   Serial.println("adjust right");
   }
   
}


void left()
{
  if(digitalRead(5) && digitalRead(6))
  {
   digitalWrite(MD1,LOW);
   digitalWrite(MD2,HIGH);
   digitalWrite(MD3,HIGH);
   digitalWrite(MD4,LOW);
   Serial.println("left");
  }
  else if(digitalRead(4) && digitalRead(5))
  {
   analogWrite(MP1,100);
   analogWrite(MP2,155);
   analogWrite(MP3,155);
   analogWrite(MP4,100);
   Serial.println("adjust left");
  }
  else if(digitalRead(6) && digitalRead(7))
  {
   analogWrite(MP1,155);
   analogWrite(MP2,100);
   analogWrite(MP3,100);
   analogWrite(MP4,155);
   Serial.println("adjust right");
   }
   
}

void right()
{
  if(digitalRead(5) && digitalRead(6))
  {
   digitalWrite(MD1,HIGH);
   digitalWrite(MD2,LOW);
   digitalWrite(MD3,LOW);
   digitalWrite(MD4,HIGH);
   Serial.println("right");
  }
  else if(digitalRead(4) && digitalRead(5))
  {
   analogWrite(MP1,100);
   analogWrite(MP2,155);
   analogWrite(MP3,155);
   analogWrite(MP4,100);
   Serial.println("adjust left");
  }
  else if(digitalRead(6) && digitalRead(7))
  {
   analogWrite(MP1,155);
   analogWrite(MP2,100);
   analogWrite(MP3,100);
   analogWrite(MP4,155);
   Serial.println("adjust right");
  
   }
}

void wait()
{
  do{
   analogWrite(MP1,0);
   analogWrite(MP2,0);
   analogWrite(MP3,0);
   analogWrite(MP4,0);
   Serial.println("wait");
  }while(digitalRead(Dueint)==1);
}


