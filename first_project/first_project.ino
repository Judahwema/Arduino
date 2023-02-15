int green = 2;
int yellow = 8;
int red = 12;
void setup() {
  // put your setup code here, to r
pinMode(green,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green,HIGH);green high for 5 seconds
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  delay(5000);
  digitalWrite(yellow,HIGH);//yellow high for 5 seconds
  digitalWrite(green,LOW);
  digitalWrite(red,LOW);
  delay(5000);
  digitalWrite(red,HIGH);//red high for five seconds 
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay(2000);
}
