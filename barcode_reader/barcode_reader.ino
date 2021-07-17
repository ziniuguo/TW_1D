#include <Servo.h>

Servo servo_test;
int count = 0; 
int angle = 0;
#define led 10
#define ledd 5
void setup()
{
  Serial.begin(9600); 
  pinMode(led, OUTPUT);
  pinMode(ledd, OUTPUT);
  servo_test.attach(3);
}
void loop()
{

  if(Serial.available()) // Check if there is Incoming Data in the Serial Buffer.
  {
    count = 0; // Reset count to zero
    char input[] = "9999999";
    while(Serial.available()) // Keep reading Byte by Byte from the Buffer till the Buffer is empty
    {
      char rd = Serial.read(); // Read 1 Byte of data and store it in a character variable
      input[count] = rd;
      count++; // Increment the Byte count after every Byte Read
      delay(10); // A small delay 
      
    }
    Serial.println(input);
    if (strncmp (input,"T0123456A",9) == 0)
    {
      Serial.println("No!");
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
    }
    if (strncmp (input,"T0212345B",9) == 0)
    {
      Serial.println("No!");
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
    }
    if (strncmp (input,"T0312345C",9) == 0)
    {
      Serial.println("No!");
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
    }
    if (strncmp (input,"T1812345D",9) == 0)
    {
      Serial.println("No!");
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
    }
    if (strncmp (input,"T1712345D",9) == 0)
    {
      Serial.println("No!");
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
    }
    if (strncmp (input,"T0012345D",9) == 0)
    {
      Serial.println("Yes!");
      digitalWrite(ledd, HIGH);
      delay(1000);
      digitalWrite(ledd, LOW);
    }
    if (strncmp (input,"S9912345E",9) == 0)
    {
      Serial.println("Yes!");
      digitalWrite(ledd, HIGH);
      delay(1000);
      digitalWrite(ledd, LOW);
    }
    if (strncmp (input,"S9812345F",9) == 0)
    {
      Serial.println("Yes!");
      digitalWrite(ledd, HIGH);
      delay(1000);
      digitalWrite(ledd, LOW);
    }
    if (strncmp (input,"T0023456L",9) == 0)
    {
      Serial.println("Yes!");
      digitalWrite(ledd, HIGH);
      delay(1000);
      digitalWrite(ledd, LOW);
    }
    if (strncmp (input,"S9712345F",9) == 0)
    {
      Serial.println("Yes!");
      digitalWrite(ledd, HIGH);
      delay(1000);
      digitalWrite(ledd, LOW);
    }
    if (strncmp (input,"S6512345L",9) == 0)
    {
      Serial.println("Yes!");
      digitalWrite(ledd, HIGH);
      delay(1000);
      digitalWrite(ledd, LOW);
    }
    if (strncmp (input,"S8612345G",9) == 0)
    {
      Serial.println("Yes!");
      digitalWrite(ledd, HIGH);
      delay(1000);
      digitalWrite(ledd, LOW);
    }
  }
}
