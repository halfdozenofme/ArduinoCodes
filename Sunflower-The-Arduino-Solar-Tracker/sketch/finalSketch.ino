/*
 * https://github.com/chauhannaman98/Sunflower-The-Arduino-Solar-Tracker
 *
 * Source_Code.ino
 *
 * Nov 16, 2017 © GPL3+
 * Author : Naman Chauhan
 */

#include<Servo.h>

Servo servoservo;
int servoservo = 0;
int servoslimithigh = 180;
int servoslimitlow = 0;

//Assigning LDRs variables
int ldrtopl = 0;
int ldrtopr = 1;

void setup() {
  Serial.begin(9600);
  servoservo.attach(11);
  servoservo.write(0);
  delay(3000);
}

void loop() {
  /* code */
  servos = servoservo.read();
 
  //capturing analog values of each LDR
int left = analogRead(ldrleft);
int right = analogRead(ldrright);

int leftleft;
  int rightright;
  
if (leftleft > rightright)

{
  servoservo.write(servos +1);
  if (servos > servosLimitHigh)
  {
  servos = servosLimitHigh;
  }
  delay(10);
}
else if (rightright > leftleft)
{
  servoservo.write(servos -1);
  if (servos < servosLimitLow)
   {
   servos = servosLimitLow;
   }
  delay(10);
}
else
{
  servoservo.write(servos);
}
delay(5000);
}
