int led = 11;
int pb = 8;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(pb,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonVal = digitalRead(pb);
if(LOW == buttonVal){
  digitalWrite(led,LOW);
}else{digitalWrite(led,HIGH);}



}
