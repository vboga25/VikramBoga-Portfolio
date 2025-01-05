/*
 * rosserial Servo Control
 */
 
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include <WProgram.h>
#endif
 
#include <Servo.h> 
#include <ros.h>
#include <std_msgs/UInt16.h>
 
ros::NodeHandle  nh;
 
Servo servo_1;
Servo servo_2;
 
void servo_cb_1( const std_msgs::UInt16& cmd_msg){
  servo_1.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(13, HIGH-digitalRead(13));  //toggle led  
}
 
void servo_cb_2( const std_msgs::UInt16& cmd_msg){
  servo_2.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(14, HIGH-digitalRead(14));  //toggle led  
}
 

ros::Subscriber<std_msgs::UInt16> sub_1("servo_1", servo_cb_1);
ros::Subscriber<std_msgs::UInt16> sub_2("servo_2", servo_cb_2);
 
void setup(){
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
 
 
  nh.initNode();
  nh.subscribe(sub_1);
  nh.subscribe(sub_2);
 
  servo_1.attach(9); //attach it to pin 9
  servo_2.attach(10); //attach it to pin 9
}
 
void loop(){
  nh.spinOnce();
  delay(1);
}