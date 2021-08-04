int greenled=12;
int yellowled=9;
int redled=6;
void setup() {
   pinMode(greenled,OUTPUT);
   pinMode(yellowled,OUTPUT);
   pinMode(redled,OUTPUT);
}

void loop() {
  digitalWrite(greenled,HIGH);
  delay(5000);
  digitalWrite(greenled,LOW);
  for(int i=0;i<3;i++)
  {
    delay(500);
    digitalWrite(yellowled,HIGH);
    delay(500);
    digitalWrite(yellowled,LOW);
  }
  delay(500);
  digitalWrite(redled, HIGH);
  delay(5000);
digitalWrite(redled, LOW);

}
