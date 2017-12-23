#include <Servo.h>
#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8
#define stp 9
#define Dueint 10
#define Jpulse 11
#define right_servo 12
#define left_servo 13

 
int frequency = 0; 
int Jcount = 0;
Servo sensorPos; 
void setup() {
  digitalWrite(Dueint,LOW);
  sensorPos.attach(3); 
  pinMode(right_servo,INPUT);
  pinMode(left_servo, INPUT);
  pinMode(Jpulse,INPUT);
  pinMode(stp, OUTPUT);
  pinMode(Dueint, OUTPUT);
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
  attachInterrupt(Jpulse,count,HIGH);
  Serial.begin(9600);
}

void loop() 
  {
    if(right_servo==1)
    {
   sensorPos.write(0);
   delay(20);
   Serial.println(Jcount);
    }
    else if(left_servo==1)
    {
   sensorPos.write(180);
   delay(20);
    Serial.println(Jcount);
    }
    else
    {
   sensorPos.write(90);
   delay(20);
   Serial.println(Jcount);
      }
      
    }
  void color_sense()
  {
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  frequency = pulseIn(sensorOut, LOW);
  Serial.print("Red= ");
  Serial.print(frequency);
  Serial.print("  ");
  delay(100);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  frequency = pulseIn(sensorOut, LOW);
  Serial.print("Green= ");
  Serial.print(frequency);
  Serial.print("  ");
  delay(100);
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  frequency = pulseIn(sensorOut, LOW);
  Serial.print("Blue= ");
  Serial.print(frequency);
  Serial.println("  ");
  delay(100);
  }
    
  void count()
  {
    Jcount++;
    while(Jpulse==1)
    {
      if(Jcount==1)
      {
       digitalWrite(Dueint,HIGH);     
      }
    }
  }
  

