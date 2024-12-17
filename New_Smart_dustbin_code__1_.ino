int trig = 7;
int echo = 6;
int time;
int distance;

void setup {
  pinMode(7,OUTPUT);
  pinMode(6,INPUT);

}

void loop{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  time = pulseIn(echo, HIGH);
  distance = time/29/2;
  Serial.println(distance);
  delay(100);
  


}