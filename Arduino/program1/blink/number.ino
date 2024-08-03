int greenlight=13;
int whitelightd=12;
int whitelightc=11;
int whitelightb=10;
int whitelighta=9;
int buzzer=8;
int delay_time_g=1200;
int delayt=1000;

void setup()
{
  pinMode(greenlight, OUTPUT);
  pinMode(whitelightd, OUTPUT);
  pinMode(whitelightc , OUTPUT);
  pinMode(whitelightb , OUTPUT);
  pinMode(whitelighta , OUTPUT);
  pinMode(buzzer,OUTPUT);
}
void loop()
{
  digitalWrite(greenlight , HIGH);
  delay(delay_time_g);
  digitalWrite(greenlight , LOW);
  delay(delay_time_g);
  //
  digitalWrite(whitelighta,HIGH);
  digitalWrite(whitelightb,HIGH);
  digitalWrite(whitelightc,HIGH);
  digitalWrite(whitelightd,HIGH);
  delay(2000);
  //for 0
  digitalWrite(whitelighta,LOW);
  digitalWrite(whitelightb,LOW);
  digitalWrite(whitelightc,LOW);
  digitalWrite(whitelightd,LOW);
  delay(delayt);
  //for 1
  digitalWrite(whitelighta,HIGH);
  digitalWrite(whitelightb,LOW);
  digitalWrite(whitelightc,LOW);
  digitalWrite(whitelightd,LOW);
  delay(delayt);
  //for 8
  digitalWrite(whitelighta,LOW);
  digitalWrite(whitelightb,LOW);
  digitalWrite(whitelightc,LOW);
  digitalWrite(whitelightd,HIGH);
  delay(delayt);
  //FOR 5
  digitalWrite(whitelighta,HIGH);
  digitalWrite(whitelightb,LOW);
  digitalWrite(whitelightc,HIGH);
  digitalWrite(whitelightd,LOW);
  delay(delayt);
  //FOR 0
  digitalWrite(whitelighta,LOW);
  digitalWrite(whitelightb,LOW);
  digitalWrite(whitelightc,LOW);
  digitalWrite(whitelightd,LOW);
  delay(delayt);
  //FOR 6
  digitalWrite(whitelighta,LOW);
  digitalWrite(whitelightb,HIGH);
  digitalWrite(whitelightc,HIGH);
  digitalWrite(whitelightd,LOW);
  delay(delayt);
  //FOR 7
  digitalWrite(whitelighta,HIGH);
  digitalWrite(whitelightb,HIGH);
  digitalWrite(whitelightc,HIGH);
  digitalWrite(whitelightd,LOW);
  delay(delayt);
  //FOR 5
  digitalWrite(whitelighta,HIGH);
  digitalWrite(whitelightb,LOW);
  digitalWrite(whitelightc,HIGH);
  digitalWrite(whitelightd,LOW);
  delay(delayt);
  //FOR 9
  digitalWrite(whitelighta,HIGH);
  digitalWrite(whitelightb,LOW);
  digitalWrite(whitelightc,LOW);
  digitalWrite(whitelightd,HIGH);
  delay(delayt);
  //for 1
  digitalWrite(whitelighta,HIGH);
  digitalWrite(whitelightb,LOW);
  digitalWrite(whitelightc,LOW);
  digitalWrite(whitelightd,LOW);
  delay(delayt);
  //for 0
  digitalWrite(whitelighta,LOW);
  digitalWrite(whitelightb,LOW);
  digitalWrite(whitelightc,LOW);
  digitalWrite(whitelightd,LOW);
  delay(delayt);
  
  digitalWrite(whitelighta,HIGH);
  digitalWrite(whitelightb,HIGH);
  digitalWrite(whitelightc,HIGH);
  digitalWrite(whitelightd,HIGH);
  delay(2000);

  //FOR BUZZER
  digitalWrite(buzzer,HIGH);
  delay(delayt);
  digitalWrite(buzzer,LOW);
  delay(delayt);
}