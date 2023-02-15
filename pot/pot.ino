int pot = A2;
int led = 8;
void setup() {
  // put your setup code here, to run once:
 pinMode(led,OUTPUT); 
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
int potval = analogRead(pot);
int bright = potval/3;
Serial.println(potval);
analogWrite(led,bright);
}
