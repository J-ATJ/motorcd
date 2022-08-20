  #include<Servo.h>
  
  Servo servo;
  
  const int enA=3;
  const int dercd=2;
  const int izqcd=4;
  const int dostazas= 5;
  const int cuatrotazas=6;
  const int bserv=1;
  const int servpwm=9;

  const int caMotor=8;
  
  int led=13;
  
void setup() {
  // put your setup code here, to run once:
  servo.attach(servpwm);
  servo.write(0);
  delay(1000);
  pinMode(enA,OUTPUT);
  pinMode(dercd,OUTPUT);
  pinMode(izqcd,OUTPUT);
  pinMode(dostazas,INPUT);
  pinMode(cuatrotazas,INPUT);
  pinMode(bserv,INPUT);
  pinMode(led,OUTPUT);
  pinMode(caMotor,OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(dostazas)==HIGH){
  digitalWrite(led,HIGH);
  digitalWrite(enA,HIGH);
  digitalWrite(izqcd,HIGH);
  digitalWrite(dercd,LOW);
  delay(1400);
  digitalWrite(enA,LOW);
  delay(800);
  digitalWrite(enA,HIGH);  
  digitalWrite(izqcd,LOW);
  digitalWrite(dercd,HIGH);
  delay(1400);
  digitalWrite(enA,LOW);
  digitalWrite(izqcd,LOW);
  digitalWrite(dercd,LOW);
  
  while(digitalRead(bserv)==LOW);
  
  // codigo para motor CA
  digitalWrite(caMotor,HIGH);
  delay(6000);
  digitalWrite(caMotor,LOW);
  
 while(digitalRead(bserv)==LOW);
 
  servo.write(0);
  delay(3500);
  servo.write(100);
  delay(3500);
  digitalWrite(led,LOW);
 }
 
 if(digitalRead(cuatrotazas)==HIGH){
  digitalWrite(led,HIGH);
  digitalWrite(enA,HIGH);
  digitalWrite(izqcd,HIGH);
  digitalWrite(dercd,LOW);
  delay(1500);
  digitalWrite(enA,LOW);
  delay(800);
  digitalWrite(enA,HIGH);  
  digitalWrite(izqcd,LOW);
  digitalWrite(dercd,HIGH);
  delay(1500);
  digitalWrite(enA,LOW);
  digitalWrite(izqcd,LOW);
  digitalWrite(dercd,LOW);

  while(digitalRead(bserv)==LOW);
  
  // codigo para motor CA
  digitalWrite(caMotor,HIGH);
  delay(6000);
  digitalWrite(caMotor,LOW);
  
  while(digitalRead(bserv)==LOW);
  servo.write(0);
  delay(3500);
  servo.write(100);
  delay(3500);
  digitalWrite(led,LOW);
  }
}
