int trigger_pin=2;
int echo_pin=3;
int buzzer_pin=10;
int Time;
int distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigger_pin,OUTPUT);
pinMode(echo_pin,INPUT);
pinMode(buzzer_pin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
 
digitalWrite(trigger_pin,HIGH);
delayMicroseconds(10);
digitalWrite(trigger_pin,LOW);
Time= pulseIn(echo_pin,HIGH);
distance=(Time*0.034)/2;
if(distance<=10&&distance>=0)
{
  Serial.println("door open");
  Serial.print("distance=");
  Serial.println(distance);
  digitalWrite(buzzer_pin,HIGH);
  delay(500);
 
}
else{
  Serial.println("door closed");
  Serial.print("distance=");
  Serial.println(distance);
  digitalWrite(buzzer_pin,LOW);
  delay(500);
  
}
}
