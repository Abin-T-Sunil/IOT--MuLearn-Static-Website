const int ldr = 7;
const int led = 13;
const int led1 = 12;
const int led2 = 11;

void setup() {
  pinMode(ldr,INPUT);//define pin as input sensor
  pinMode(led,OUTPUT);//define pin as output sensor
  pinMode(led1,OUTPUT);
  pinMode(led2 ,OUTPUT);

}

void loop() {
int y =digitalRead(ldr);//read the sensor
if (y==1){
  digitalWrite(led,HIGH);//turn on led
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  
}else{digitalWrite(led,LOW);//turn off led
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
}
delay(500);

}
