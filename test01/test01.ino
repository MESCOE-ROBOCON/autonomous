#define MP1 8
#define MP2 9
#define MP3 10
#define MP4 11
#define MD1 31
#define MD2 33
#define MD3 35
#define MD4 37
#define Dueint 18
#define Due_nudge 12
void setup()
{
  for(byte i=0;i<=7;i++)
  {
    pinMode(i,INPUT);
  }
 digitalWrite(Due_nudge,LOW);
 pinMode(Due_nudge,OUTPUT); 
 pinMode(MP1, OUTPUT);
 pinMode(MP2, OUTPUT);
 pinMode(MP3, OUTPUT);
 pinMode(MP4, OUTPUT);
 pinMode(MD1, OUTPUT);  
 pinMode(MD2, OUTPUT);  
 pinMode(MD3, OUTPUT);   
 pinMode(MD4, OUTPUT);   
 pinMode(Dueint, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(Dueint),wait,HIGH);
}

void loop()
{
  if(digitalRead(3) && digitalRead(4) && digitalRead(5) &&  digitalRead(6) && digitalRead(7))
  right();

  else if(digitalRead(1) && digitalRead(2) && digitalRead(3) && digitalRead(4) && digitalRead(0))
  left();

  else
  forward();
 
}

void forward()
{
  if(digitalRead(3) && digitalRead(4))
  {
   digitalWrite(MD1,HIGH);
   digitalWrite(MD2,HIGH);
   digitalWrite(MD3,HIGH);
   digitalWrite(MD4,HIGH);
  }
  else if(digitalRead(2) && digitalRead(3))
  {
   analogWrite(MP1,155);
   analogWrite(MP2,100);
   analogWrite(MP3,100);
   analogWrite(MP4,155);
  }
  else if(digitalRead(2) && digitalRead(3))
  {
   analogWrite(MP1,100);
   analogWrite(MP2,155);
   analogWrite(MP3,155);
   analogWrite(MP4,100);
   }
   
}


void reverse()
{
  if(digitalRead(3) && digitalRead(4))
  {
   digitalWrite(MD1,LOW);
   digitalWrite(MD2,LOW);
   digitalWrite(MD3,LOW);
   digitalWrite(MD4,LOW);
  }
  else if(digitalRead(2) && digitalRead(3))
  {
   analogWrite(MP1,155);
   analogWrite(MP2,100);
   analogWrite(MP3,100);
   analogWrite(MP4,155);
  }
  else if(digitalRead(2) && digitalRead(3))
  {
   analogWrite(MP1,100);
   analogWrite(MP2,155);
   analogWrite(MP3,155);
   analogWrite(MP4,100);
   }
   
}


void left()
{
  if(digitalRead(3) && digitalRead(4))
  {
   digitalWrite(MD1,LOW);
   digitalWrite(MD2,HIGH);
   digitalWrite(MD3,HIGH);
   digitalWrite(MD4,LOW);
  }
  else if(digitalRead(2) && digitalRead(3))
  {
   analogWrite(MP1,100);
   analogWrite(MP2,155);
   analogWrite(MP3,155);
   analogWrite(MP4,100);
  }
  else if(digitalRead(2) && digitalRead(3))
  {
   analogWrite(MP1,155);
   analogWrite(MP2,100);
   analogWrite(MP3,100);
   analogWrite(MP4,155);
   }
   
}

void right()
{
  if(digitalRead(3) && digitalRead(4))
  {
   digitalWrite(MD1,HIGH);
   digitalWrite(MD2,LOW);
   digitalWrite(MD3,LOW);
   digitalWrite(MD4,HIGH);
  }
  else if(digitalRead(2) && digitalRead(3))
  {
   analogWrite(MP1,100);
   analogWrite(MP2,155);
   analogWrite(MP3,155);
   analogWrite(MP4,100);
  }
  else if(digitalRead(2) && digitalRead(3))
  {
   analogWrite(MP1,155);
   analogWrite(MP2,100);
   analogWrite(MP3,100);
   analogWrite(MP4,155);
  
   }
   
}

void wait()
{
   analogWrite(MP1,0);
   analogWrite(MP2,0);
   analogWrite(MP3,0);
   analogWrite(MP4,0);
   digitalWrite(Due_nudge,HIGH);
}

  


