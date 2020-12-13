//主程序
 
#include <IRremote.h>            //自己配置IRredmote库
int RECV_PIN = 11;               //红外接收端口
IRrecv irrecv(RECV_PIN);
decode_results results;          //结构声明
int Left_motor_back=5;     //左电机后退(IN1)
int Left_motor_go=6;       //左电机前进(IN2)
int Right_motor_go=9;     // 右电机前进(IN3)
int Right_motor_back=10;  // 右电机后退(IN4)
 
void setup()             //初始化电机驱动IO为输出方式
{
  pinMode(L_motor_go,OUTPUT);      // PIN 5 (PWM引脚)
  pinMode(L_motor_back,OUTPUT);    // PIN 6 (PWM引脚)
  pinMode(R_motor_go,OUTPUT);      // PIN 9 (PWM引脚)
  pinMode(R_motor_back,OUTPUT);    // PIN 10 (PWM引脚)
  pinMode(13, OUTPUT);             //端口模式，输出
  Serial.begin(9600);              //设置波特率为9600
  irrecv.enableIRIn();            // Start the receiver
}
 
void run()     // 前进
{
  digitalWrite(R_motor_go,HIGH);  // 右电机前进
  digitalWrite(R_motor_back,LOW);    
  digitalWrite(L_motor_go,HIGH);  // 左电机前进
  digitalWrite(L_motor_back,LOW);
}
 
void brake()         //刹车，停车
{
  digitalWrite(R_motor_go,LOW);
  digitalWrite(R_motor_back,LOW);
  digitalWrite(L_motor_go,LOW);
  digitalWrite(L_motor_back,LOW);
}
 
void left()         //左转(左轮不动，右轮前进)
{
  digitalWrite(R_motor_go,HIGH);    // 右电机前进
  digitalWrite(R_motor_back,LOW);
  digitalWrite(L_motor_go,LOW);     //左轮不动
  digitalWrite(L_motor_back,LOW);
}
 
void spin_left()         //左转(左轮后退，右轮前进)
{
  digitalWrite(R_motor_go,HIGH);    // 右电机前进
  digitalWrite(R_motor_back,LOW);
  digitalWrite(L_motor_go,LOW);     //左轮后退
  digitalWrite(L_motor_back,HIGH);
}
 
void right()        //右转(右轮不动，左轮前进)
{
  digitalWrite(R_motor_go,LOW);   //右电机不动
  digitalWrite(R_motor_back,LOW);
  digitalWrite(L_motor_go,HIGH); //左电机前进
  digitalWrite(L_motor_back,LOW);
}
 
void spin_right()        //右转(右轮后退，左轮前进)
{
  digitalWrite(R_motor_go,LOW);    //右电机后退
  digitalWrite(R_motor_back,HIGH);
  digitalWrite(L_motor_go,HIGH);   //左电机前进
  digitalWrite(L_motor_back,LOW);
}
 
void back()          //后退
{
  digitalWrite(R_motor_go,LOW);   //右轮后退
  digitalWrite(R_motor_back,HIGH);
  digitalWrite(L_motor_go,LOW);   //左轮后退
  digitalWrite(L_motor_back,HIGH);
