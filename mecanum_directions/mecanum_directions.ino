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


void Reverse()
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


void Left()
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

void Right()
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
 
 }

   

