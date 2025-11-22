//Sanitizer-dispenser-with-ultrasonic-sensor-and-arduino-uno-with-pump
//Using a Arduino Nano|ultrasonic-sensor|pump
//This is unlikely to be of much use in a practical applications
//ID OF USER: Rakeshtsg
//INTERFACE: Arduino 
//You need to install the required libraries before uploading the code.
int pump=2;
int trig_Pin=3;
int echo_Pin=4;
long Time;
int distance;
void setup() {
Serial.begin(9600);
pinMode(trig_Pin,OUTPUT);
pinMode(echo_Pin,INPUT);
pinMode(pump,OUTPUT);
}
void loop() {
digitalWrite(trig_Pin,LOW);
delayMicroseconds(2);
digitalWrite(trig_Pin,HIGH);
delayMicroseconds(10);
digitalWrite(trig_Pin,LOW);
Time=pulseIn(echo_Pin,HIGH);
distance=Time*0.034/2;
Serial.print("Distance:");
Serial.println(distance);
if(distance<15)
{
  digitalWrite(pump,HIGH);
}
else
{
  digitalWrite(pump,LOW);
}
}
